/*
 * N76_RS485.c
 * Created: 2023/08/23
 * Author: Van_BasTai
 */

#include <include.h>
#include <N76_RS485.h>
/*
 RS485 protocol library.

 Devised and written by Nick Gammon.
 Date: 14 November 2011
 Version: 1.1

 Version 1.1 reset the timeout period after getting STX.

 Licence: Released for public use.


 Can send from 1 to 255 bytes from one node to another with:

 * Packet start indicator (STX)
 * Each data byte is doubled and inverted to check validity
 * Packet end indicator (ETX)
 * Packet CRC (checksum)


 To allow flexibility with hardware (eg. Serial, SoftwareSerial, I2C)
 you provide three "callback" functions which send or receive data. Examples are:

 void fWrite (const byte what)
 {
 Serial.write (what);
 }

 int fAvailable ()
 {
 return Serial.available ();
 }

 int fRead ()
 {
 return Serial.read ();
 }

 */

#define STX '\2'
#define ETX '\3'

// calculate 8-bit CRC
static byte crc8(const byte *addr, byte len)
{
    byte crc = 0;
    while (len--)
    {
        byte inbyte = *addr++;
        for (byte i = 8; i; i--)
        {
            byte mix = (crc ^ inbyte) & 0x01;
            crc >>= 1;
            if (mix)
                crc ^= 0x8C;
            inbyte >>= 1;
        } // end of for
    } // end of while
    return crc;
} // end of crc8

// send a byte complemented, repeated
// only values sent would be (in hex):
//   0F, 1E, 2D, 3C, 4B, 5A, 69, 78, 87, 96, A5, B4, C3, D2, E1, F0
void sendComplemented(WriteCallback fSend, const byte what)
{
    byte c;

    // first nibble
    c = what >> 4;
    fSend((c << 4) | (c ^ 0x0F));

    // second nibble
    c = what & 0x0F;
    fSend((c << 4) | (c ^ 0x0F));

} // end of sendComplemented

// send a message of "length" bytes (max 255) to other end
// put STX at start, ETX at end, and add CRC
void sendMsg(WriteCallback fSend, const byte *data, const byte length)
{
    fSend(STX); // STX
    for (byte i = 0; i < length; i++)
        sendComplemented(fSend, data[i]);
    fSend(ETX); // ETX
    sendComplemented(fSend, crc8(data, length));
} // end of sendMsg

// receive a message, maximum "length" bytes, timeout after "timeout" milliseconds
// if nothing received, or an error (eg. bad CRC, bad data) return 0
// otherwise, returns length of received data
byte recvMsg(AvailableCallback fAvailable, // return available count
             ReadCallback fRead,           // read one byte
             byte *data,                   // buffer to receive into
             const byte length,            // maximum buffer size
             uint32_t timeout)             // milliseconds before timing out
{

    uint32_t start_time = 0;

    bool have_stx = false;

    // variables below are set when we get an STX
    bool have_etx = false;
    byte input_pos = 0;
    bool first_nibble = false;
    byte current_byte = 0;

    while (start_time++ < timeout)
    {
        if (fAvailable() > 0)
        {
            byte inByte = fRead();

            switch (inByte)
            {

            case STX: // start of text
                have_stx = true;
                have_etx = false;
                input_pos = 0;
                first_nibble = true;
                start_time = 0; // reset timeout period
                break;

            case ETX: // end of text
                have_etx = true;
                break;

            default:
                // wait until packet officially starts
                if (!have_stx)
                    break;

                // check byte is in valid form (4 bits followed by 4 bits complemented)
                if ((inByte >> 4) != ((inByte & 0x0F) ^ 0x0F))
                    return 0; // bad character

                // convert back
                inByte >>= 4;

                // high-order nibble?
                if (first_nibble)
                {
                    current_byte = inByte;
                    first_nibble = false;
                    break;
                } // end of first nibble

                // low-order nibble
                current_byte <<= 4;
                current_byte |= inByte;
                first_nibble = true;

                // if we have the ETX this must be the CRC
                if (have_etx)
                {
                    if (crc8(data, input_pos) != current_byte)
                        return 0;     // bad crc
                    return input_pos; // return received length
                } // end if have ETX already

                // keep adding if not full
                if (input_pos < length)
                    data[input_pos++] = current_byte;
                else
                    return 0; // overflow
                break;

            } // end of switch
        } // end of incoming data
    } // end of while not timed out

    return 0; // timeout
} // end of recvMsg
