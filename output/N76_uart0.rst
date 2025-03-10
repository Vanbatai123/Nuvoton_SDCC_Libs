                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ISO C Compiler 
                                      3 ; Version 4.4.0 #14620 (Linux)
                                      4 ;--------------------------------------------------------
                                      5 	.module N76_uart0
                                      6 	.optsdcc -mmcs51 --model-small
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _eiph1
                                     12 	.globl _eip1
                                     13 	.globl _pmd
                                     14 	.globl _pmen
                                     15 	.globl _pdtcnt
                                     16 	.globl _pdten
                                     17 	.globl _scon_1
                                     18 	.globl _eiph
                                     19 	.globl _aindids
                                     20 	.globl _spdr
                                     21 	.globl _spsr
                                     22 	.globl _spcr2
                                     23 	.globl _spcr
                                     24 	.globl _capcon4
                                     25 	.globl _capcon3
                                     26 	.globl _b
                                     27 	.globl _eip
                                     28 	.globl _c2h
                                     29 	.globl _c2l
                                     30 	.globl _pif
                                     31 	.globl _pipen
                                     32 	.globl _pinen
                                     33 	.globl _picon
                                     34 	.globl _adccon0
                                     35 	.globl _c1h
                                     36 	.globl _c1l
                                     37 	.globl _c0h
                                     38 	.globl _c0l
                                     39 	.globl _adcdly
                                     40 	.globl _adccon2
                                     41 	.globl _adccon1
                                     42 	.globl _acc
                                     43 	.globl _pwmcon1
                                     44 	.globl _piocon0
                                     45 	.globl _pwm3l
                                     46 	.globl _pwm2l
                                     47 	.globl _pwm1l
                                     48 	.globl _pwm0l
                                     49 	.globl _pwmpl
                                     50 	.globl _pwmcon0
                                     51 	.globl _fbd
                                     52 	.globl _pnp
                                     53 	.globl _pwm3h
                                     54 	.globl _pwm2h
                                     55 	.globl _pwm1h
                                     56 	.globl _pwm0h
                                     57 	.globl _pwmph
                                     58 	.globl _psw
                                     59 	.globl _adcmph
                                     60 	.globl _adcmpl
                                     61 	.globl _pwm5l
                                     62 	.globl _th2
                                     63 	.globl _pwm4l
                                     64 	.globl _tl2
                                     65 	.globl _rcmp2h
                                     66 	.globl _rcmp2l
                                     67 	.globl _t2mod
                                     68 	.globl _t2con
                                     69 	.globl _ta
                                     70 	.globl _piocon1
                                     71 	.globl _rh3
                                     72 	.globl _pwm5h
                                     73 	.globl _rl3
                                     74 	.globl _pwm4h
                                     75 	.globl _t3con
                                     76 	.globl _adcrh
                                     77 	.globl _adcrl
                                     78 	.globl _i2addr
                                     79 	.globl _i2con
                                     80 	.globl _i2toc
                                     81 	.globl _i2clk
                                     82 	.globl _i2stat
                                     83 	.globl _i2dat
                                     84 	.globl _saddr_1
                                     85 	.globl _saden_1
                                     86 	.globl _saden
                                     87 	.globl _ip
                                     88 	.globl _pwmintc
                                     89 	.globl _iph
                                     90 	.globl _p2s
                                     91 	.globl _p1sr
                                     92 	.globl _p1m2
                                     93 	.globl _p1s
                                     94 	.globl _p1m1
                                     95 	.globl _p0sr
                                     96 	.globl _p0m2
                                     97 	.globl _p0s
                                     98 	.globl _p0m1
                                     99 	.globl _p3
                                    100 	.globl _iapcn
                                    101 	.globl _iapfd
                                    102 	.globl _p3sr
                                    103 	.globl _p3m2
                                    104 	.globl _p3s
                                    105 	.globl _p3m1
                                    106 	.globl _bodcon1
                                    107 	.globl _wdcon
                                    108 	.globl _saddr
                                    109 	.globl _ie
                                    110 	.globl _iapah
                                    111 	.globl _iapal
                                    112 	.globl _iapuen
                                    113 	.globl _iaptrg
                                    114 	.globl _bodcon0
                                    115 	.globl _auxr1
                                    116 	.globl _p2
                                    117 	.globl _chpcon
                                    118 	.globl _eie1
                                    119 	.globl _eie
                                    120 	.globl _sbuf_1
                                    121 	.globl _sbuf
                                    122 	.globl _scon
                                    123 	.globl _cken
                                    124 	.globl _ckswt
                                    125 	.globl _ckdiv
                                    126 	.globl _capcon2
                                    127 	.globl _capcon1
                                    128 	.globl _capcon0
                                    129 	.globl _sfrs
                                    130 	.globl _p1
                                    131 	.globl _wkcon
                                    132 	.globl _ckcon
                                    133 	.globl _th1
                                    134 	.globl _th0
                                    135 	.globl _tl1
                                    136 	.globl _tl0
                                    137 	.globl _tmod
                                    138 	.globl _tcon
                                    139 	.globl _pcon
                                    140 	.globl _rwk
                                    141 	.globl _rctrim1
                                    142 	.globl _rctrim0
                                    143 	.globl _dph
                                    144 	.globl _dpl
                                    145 	.globl _sp
                                    146 	.globl _p0
                                    147 	.globl __rx_buffer
                                    148 	.globl __rx_buffer_tail
                                    149 	.globl __rx_buffer_head
                                    150 	.globl _UART0_printNumln_PARM_2
                                    151 	.globl _UART0_printNum_PARM_2
                                    152 	.globl _UART0_begin
                                    153 	.globl _UART0_putChar
                                    154 	.globl _UART0_print
                                    155 	.globl _UART0_println
                                    156 	.globl _UART0_printNum
                                    157 	.globl _UART0_printNumln
                                    158 	.globl _UART0_available
                                    159 	.globl _UART0_read
                                    160 	.globl _UART0_attachInterrupt
                                    161 	.globl _UART0_detachInterrupt
                                    162 	.globl _UART0_INT_FUCTION
                                    163 ;--------------------------------------------------------
                                    164 ; special function registers
                                    165 ;--------------------------------------------------------
                                    166 	.area RSEG    (ABS,DATA)
      000000                        167 	.org 0x0000
                           000080   168 _p0	=	0x0080
                           000081   169 _sp	=	0x0081
                           000082   170 _dpl	=	0x0082
                           000083   171 _dph	=	0x0083
                           000084   172 _rctrim0	=	0x0084
                           000085   173 _rctrim1	=	0x0085
                           000086   174 _rwk	=	0x0086
                           000087   175 _pcon	=	0x0087
                           000088   176 _tcon	=	0x0088
                           000089   177 _tmod	=	0x0089
                           00008A   178 _tl0	=	0x008a
                           00008B   179 _tl1	=	0x008b
                           00008C   180 _th0	=	0x008c
                           00008D   181 _th1	=	0x008d
                           00008E   182 _ckcon	=	0x008e
                           00008F   183 _wkcon	=	0x008f
                           000090   184 _p1	=	0x0090
                           000091   185 _sfrs	=	0x0091
                           000092   186 _capcon0	=	0x0092
                           000093   187 _capcon1	=	0x0093
                           000094   188 _capcon2	=	0x0094
                           000095   189 _ckdiv	=	0x0095
                           000096   190 _ckswt	=	0x0096
                           000097   191 _cken	=	0x0097
                           000098   192 _scon	=	0x0098
                           000099   193 _sbuf	=	0x0099
                           00009A   194 _sbuf_1	=	0x009a
                           00009B   195 _eie	=	0x009b
                           00009C   196 _eie1	=	0x009c
                           00009F   197 _chpcon	=	0x009f
                           0000A0   198 _p2	=	0x00a0
                           0000A2   199 _auxr1	=	0x00a2
                           0000A3   200 _bodcon0	=	0x00a3
                           0000A4   201 _iaptrg	=	0x00a4
                           0000A5   202 _iapuen	=	0x00a5
                           0000A6   203 _iapal	=	0x00a6
                           0000A7   204 _iapah	=	0x00a7
                           0000A8   205 _ie	=	0x00a8
                           0000A9   206 _saddr	=	0x00a9
                           0000AA   207 _wdcon	=	0x00aa
                           0000AB   208 _bodcon1	=	0x00ab
                           0000AC   209 _p3m1	=	0x00ac
                           0000AC   210 _p3s	=	0x00ac
                           0000AD   211 _p3m2	=	0x00ad
                           0000AD   212 _p3sr	=	0x00ad
                           0000AE   213 _iapfd	=	0x00ae
                           0000AF   214 _iapcn	=	0x00af
                           0000B0   215 _p3	=	0x00b0
                           0000B1   216 _p0m1	=	0x00b1
                           0000B1   217 _p0s	=	0x00b1
                           0000B2   218 _p0m2	=	0x00b2
                           0000B2   219 _p0sr	=	0x00b2
                           0000B3   220 _p1m1	=	0x00b3
                           0000B3   221 _p1s	=	0x00b3
                           0000B4   222 _p1m2	=	0x00b4
                           0000B4   223 _p1sr	=	0x00b4
                           0000B5   224 _p2s	=	0x00b5
                           0000B7   225 _iph	=	0x00b7
                           0000B7   226 _pwmintc	=	0x00b7
                           0000B8   227 _ip	=	0x00b8
                           0000B9   228 _saden	=	0x00b9
                           0000BA   229 _saden_1	=	0x00ba
                           0000BB   230 _saddr_1	=	0x00bb
                           0000BC   231 _i2dat	=	0x00bc
                           0000BD   232 _i2stat	=	0x00bd
                           0000BE   233 _i2clk	=	0x00be
                           0000BF   234 _i2toc	=	0x00bf
                           0000C0   235 _i2con	=	0x00c0
                           0000C1   236 _i2addr	=	0x00c1
                           0000C2   237 _adcrl	=	0x00c2
                           0000C3   238 _adcrh	=	0x00c3
                           0000C4   239 _t3con	=	0x00c4
                           0000C4   240 _pwm4h	=	0x00c4
                           0000C5   241 _rl3	=	0x00c5
                           0000C5   242 _pwm5h	=	0x00c5
                           0000C6   243 _rh3	=	0x00c6
                           0000C6   244 _piocon1	=	0x00c6
                           0000C7   245 _ta	=	0x00c7
                           0000C8   246 _t2con	=	0x00c8
                           0000C9   247 _t2mod	=	0x00c9
                           0000CA   248 _rcmp2l	=	0x00ca
                           0000CB   249 _rcmp2h	=	0x00cb
                           0000CC   250 _tl2	=	0x00cc
                           0000CC   251 _pwm4l	=	0x00cc
                           0000CD   252 _th2	=	0x00cd
                           0000CD   253 _pwm5l	=	0x00cd
                           0000CE   254 _adcmpl	=	0x00ce
                           0000CF   255 _adcmph	=	0x00cf
                           0000D0   256 _psw	=	0x00d0
                           0000D1   257 _pwmph	=	0x00d1
                           0000D2   258 _pwm0h	=	0x00d2
                           0000D3   259 _pwm1h	=	0x00d3
                           0000D4   260 _pwm2h	=	0x00d4
                           0000D5   261 _pwm3h	=	0x00d5
                           0000D6   262 _pnp	=	0x00d6
                           0000D7   263 _fbd	=	0x00d7
                           0000D8   264 _pwmcon0	=	0x00d8
                           0000D9   265 _pwmpl	=	0x00d9
                           0000DA   266 _pwm0l	=	0x00da
                           0000DB   267 _pwm1l	=	0x00db
                           0000DC   268 _pwm2l	=	0x00dc
                           0000DD   269 _pwm3l	=	0x00dd
                           0000DE   270 _piocon0	=	0x00de
                           0000DF   271 _pwmcon1	=	0x00df
                           0000E0   272 _acc	=	0x00e0
                           0000E1   273 _adccon1	=	0x00e1
                           0000E2   274 _adccon2	=	0x00e2
                           0000E3   275 _adcdly	=	0x00e3
                           0000E4   276 _c0l	=	0x00e4
                           0000E5   277 _c0h	=	0x00e5
                           0000E6   278 _c1l	=	0x00e6
                           0000E7   279 _c1h	=	0x00e7
                           0000E8   280 _adccon0	=	0x00e8
                           0000E9   281 _picon	=	0x00e9
                           0000EA   282 _pinen	=	0x00ea
                           0000EB   283 _pipen	=	0x00eb
                           0000EC   284 _pif	=	0x00ec
                           0000ED   285 _c2l	=	0x00ed
                           0000EE   286 _c2h	=	0x00ee
                           0000EF   287 _eip	=	0x00ef
                           0000F0   288 _b	=	0x00f0
                           0000F1   289 _capcon3	=	0x00f1
                           0000F2   290 _capcon4	=	0x00f2
                           0000F3   291 _spcr	=	0x00f3
                           0000F3   292 _spcr2	=	0x00f3
                           0000F4   293 _spsr	=	0x00f4
                           0000F5   294 _spdr	=	0x00f5
                           0000F6   295 _aindids	=	0x00f6
                           0000F7   296 _eiph	=	0x00f7
                           0000F8   297 _scon_1	=	0x00f8
                           0000F9   298 _pdten	=	0x00f9
                           0000FA   299 _pdtcnt	=	0x00fa
                           0000FB   300 _pmen	=	0x00fb
                           0000FC   301 _pmd	=	0x00fc
                           0000FE   302 _eip1	=	0x00fe
                           0000FF   303 _eiph1	=	0x00ff
                                    304 ;--------------------------------------------------------
                                    305 ; special function bits
                                    306 ;--------------------------------------------------------
                                    307 	.area RSEG    (ABS,DATA)
      000000                        308 	.org 0x0000
                                    309 ;--------------------------------------------------------
                                    310 ; overlayable register banks
                                    311 ;--------------------------------------------------------
                                    312 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        313 	.ds 8
                                    314 ;--------------------------------------------------------
                                    315 ; internal ram data
                                    316 ;--------------------------------------------------------
                                    317 	.area DSEG    (DATA)
      000024                        318 _UART0_printNum_PARM_2:
      000024                        319 	.ds 1
      000025                        320 _UART0_printNum_i_20000_42:
      000025                        321 	.ds 1
      000026                        322 _UART0_printNum_sloc0_1_0:
      000026                        323 	.ds 4
      00002A                        324 _UART0_printNum_sloc1_1_0:
      00002A                        325 	.ds 4
      00002E                        326 _UART0_printNumln_PARM_2:
      00002E                        327 	.ds 1
                                    328 ;--------------------------------------------------------
                                    329 ; overlayable items in internal ram
                                    330 ;--------------------------------------------------------
                                    331 	.area	OSEG    (OVR,DATA)
                                    332 	.area	OSEG    (OVR,DATA)
                                    333 	.area	OSEG    (OVR,DATA)
                                    334 ;--------------------------------------------------------
                                    335 ; indirectly addressable internal ram data
                                    336 ;--------------------------------------------------------
                                    337 	.area ISEG    (DATA)
                                    338 ;--------------------------------------------------------
                                    339 ; absolute internal ram data
                                    340 ;--------------------------------------------------------
                                    341 	.area IABS    (ABS,DATA)
                                    342 	.area IABS    (ABS,DATA)
                                    343 ;--------------------------------------------------------
                                    344 ; bit data
                                    345 ;--------------------------------------------------------
                                    346 	.area BSEG    (BIT)
                                    347 ;--------------------------------------------------------
                                    348 ; paged external ram data
                                    349 ;--------------------------------------------------------
                                    350 	.area PSEG    (PAG,XDATA)
                                    351 ;--------------------------------------------------------
                                    352 ; uninitialized external ram data
                                    353 ;--------------------------------------------------------
                                    354 	.area XSEG    (XDATA)
      000045                        355 __rx_buffer_head::
      000045                        356 	.ds 1
      000046                        357 __rx_buffer_tail::
      000046                        358 	.ds 1
      000047                        359 __rx_buffer::
      000047                        360 	.ds 16
      000057                        361 _UART0_printNum_dis_10000_36:
      000057                        362 	.ds 20
                                    363 ;--------------------------------------------------------
                                    364 ; absolute external ram data
                                    365 ;--------------------------------------------------------
                                    366 	.area XABS    (ABS,XDATA)
                                    367 ;--------------------------------------------------------
                                    368 ; initialized external ram data
                                    369 ;--------------------------------------------------------
                                    370 	.area XISEG   (XDATA)
                                    371 	.area HOME    (CODE)
                                    372 	.area GSINIT0 (CODE)
                                    373 	.area GSINIT1 (CODE)
                                    374 	.area GSINIT2 (CODE)
                                    375 	.area GSINIT3 (CODE)
                                    376 	.area GSINIT4 (CODE)
                                    377 	.area GSINIT5 (CODE)
                                    378 	.area GSINIT  (CODE)
                                    379 	.area GSFINAL (CODE)
                                    380 	.area CSEG    (CODE)
                                    381 ;--------------------------------------------------------
                                    382 ; global & static initialisations
                                    383 ;--------------------------------------------------------
                                    384 	.area HOME    (CODE)
                                    385 	.area GSINIT  (CODE)
                                    386 	.area GSFINAL (CODE)
                                    387 	.area GSINIT  (CODE)
                                    388 ;--------------------------------------------------------
                                    389 ; Home
                                    390 ;--------------------------------------------------------
                                    391 	.area HOME    (CODE)
                                    392 	.area HOME    (CODE)
                                    393 ;--------------------------------------------------------
                                    394 ; code
                                    395 ;--------------------------------------------------------
                                    396 	.area CSEG    (CODE)
                                    397 ;------------------------------------------------------------
                                    398 ;Allocation info for local variables in function 'UART0_begin'
                                    399 ;------------------------------------------------------------
                                    400 ;baud                      Allocated to registers r7 
                                    401 ;------------------------------------------------------------
                                    402 ;	./src/N76_uart0.c:15: void UART0_begin(uint8_t baud)
                                    403 ;	-----------------------------------------
                                    404 ;	 function UART0_begin
                                    405 ;	-----------------------------------------
      0007D0                        406 _UART0_begin:
                           000007   407 	ar7 = 0x07
                           000006   408 	ar6 = 0x06
                           000005   409 	ar5 = 0x05
                           000004   410 	ar4 = 0x04
                           000003   411 	ar3 = 0x03
                           000002   412 	ar2 = 0x02
                           000001   413 	ar1 = 0x01
                           000000   414 	ar0 = 0x00
      0007D0 AF 82            [24]  415 	mov	r7, dpl
                                    416 ;	./src/N76_uart0.c:17: P06_Quasi_Mode; // Setting UART pin as Quasi mode for transmit
      0007D2 53 B1 BF         [24]  417 	anl	_p0m1,#0xbf
      0007D5 53 B2 BF         [24]  418 	anl	_p0m2,#0xbf
                                    419 ;	./src/N76_uart0.c:18: P07_Quasi_Mode; // Setting UART pin as Quasi mode for transmit
      0007D8 53 B1 7F         [24]  420 	anl	_p0m1,#0x7f
      0007DB 53 B2 7F         [24]  421 	anl	_p0m2,#0x7f
                                    422 ;	./src/N76_uart0.c:20: TH1 = baud;   // set baudrate
      0007DE 8F 8D            [24]  423 	mov	_th1,r7
                                    424 ;	./src/N76_uart0.c:21: SCON = 0x50;  // UART0 Mode1,REN=1,TI=1
      0007E0 75 98 50         [24]  425 	mov	_scon,#0x50
                                    426 ;	./src/N76_uart0.c:22: TMOD |= 0x20; // Timer1 Mode1
      0007E3 43 89 20         [24]  427 	orl	_tmod,#0x20
                                    428 ;	./src/N76_uart0.c:23: set_SMOD;     // UART0 Double Rate Enable
      0007E6 43 87 80         [24]  429 	orl	_pcon,#0x80
                                    430 ;	./src/N76_uart0.c:24: set_T1M;
      0007E9 43 8E 10         [24]  431 	orl	_ckcon,#0x10
                                    432 ;	./src/N76_uart0.c:25: clr_BRCK; // Serial port 0 baud rate clock source = Timer1
      0007EC 53 C4 DF         [24]  433 	anl	_t3con,#0xdf
                                    434 ;	./src/N76_uart0.c:26: set_TR1;
      0007EF 43 88 40         [24]  435 	orl	_tcon,#0x40
                                    436 ;	./src/N76_uart0.c:27: set_TI; // For printf function must setting TI = 1
      0007F2 43 98 02         [24]  437 	orl	_scon,#0x02
                                    438 ;	./src/N76_uart0.c:28: }
      0007F5 22               [24]  439 	ret
                                    440 ;------------------------------------------------------------
                                    441 ;Allocation info for local variables in function 'UART0_putChar'
                                    442 ;------------------------------------------------------------
                                    443 ;val                       Allocated to registers r7 
                                    444 ;------------------------------------------------------------
                                    445 ;	./src/N76_uart0.c:30: void UART0_putChar(uint8_t val)
                                    446 ;	-----------------------------------------
                                    447 ;	 function UART0_putChar
                                    448 ;	-----------------------------------------
      0007F6                        449 _UART0_putChar:
      0007F6 AF 82            [24]  450 	mov	r7, dpl
                                    451 ;	./src/N76_uart0.c:32: clr_TI;
      0007F8 53 98 FD         [24]  452 	anl	_scon,#0xfd
                                    453 ;	./src/N76_uart0.c:33: SBUF = val;
      0007FB 8F 99            [24]  454 	mov	_sbuf,r7
                                    455 ;	./src/N76_uart0.c:34: while (inbit(SCON, TI) == 0)
      0007FD                        456 00101$:
      0007FD 74 02            [12]  457 	mov	a,#0x02
      0007FF 55 98            [12]  458 	anl	a,_scon
      000801 C3               [12]  459 	clr	c
      000802 13               [12]  460 	rrc	a
      000803 60 F8            [24]  461 	jz	00101$
                                    462 ;	./src/N76_uart0.c:36: }
      000805 22               [24]  463 	ret
                                    464 ;------------------------------------------------------------
                                    465 ;Allocation info for local variables in function 'UART0_print'
                                    466 ;------------------------------------------------------------
                                    467 ;str                       Allocated to registers r5 r6 r7 
                                    468 ;i                         Allocated to registers r4 
                                    469 ;------------------------------------------------------------
                                    470 ;	./src/N76_uart0.c:38: void UART0_print(char *str)
                                    471 ;	-----------------------------------------
                                    472 ;	 function UART0_print
                                    473 ;	-----------------------------------------
      000806                        474 _UART0_print:
      000806 AD 82            [24]  475 	mov	r5, dpl
      000808 AE 83            [24]  476 	mov	r6, dph
      00080A AF F0            [24]  477 	mov	r7, b
                                    478 ;	./src/N76_uart0.c:41: while (str[i] != '\0')
      00080C 7C 00            [12]  479 	mov	r4,#0x00
      00080E                        480 00101$:
      00080E EC               [12]  481 	mov	a,r4
      00080F 2D               [12]  482 	add	a, r5
      000810 F9               [12]  483 	mov	r1,a
      000811 E4               [12]  484 	clr	a
      000812 3E               [12]  485 	addc	a, r6
      000813 FA               [12]  486 	mov	r2,a
      000814 8F 03            [24]  487 	mov	ar3,r7
      000816 89 82            [24]  488 	mov	dpl,r1
      000818 8A 83            [24]  489 	mov	dph,r2
      00081A 8B F0            [24]  490 	mov	b,r3
      00081C 12 12 5A         [24]  491 	lcall	__gptrget
      00081F 60 29            [24]  492 	jz	00104$
                                    493 ;	./src/N76_uart0.c:42: UART0_putChar(str[i++]);
      000821 EC               [12]  494 	mov	a,r4
      000822 2D               [12]  495 	add	a, r5
      000823 F9               [12]  496 	mov	r1,a
      000824 E4               [12]  497 	clr	a
      000825 3E               [12]  498 	addc	a, r6
      000826 FA               [12]  499 	mov	r2,a
      000827 8F 03            [24]  500 	mov	ar3,r7
      000829 0C               [12]  501 	inc	r4
      00082A 89 82            [24]  502 	mov	dpl,r1
      00082C 8A 83            [24]  503 	mov	dph,r2
      00082E 8B F0            [24]  504 	mov	b,r3
      000830 12 12 5A         [24]  505 	lcall	__gptrget
      000833 F5 82            [12]  506 	mov	dpl,a
      000835 C0 07            [24]  507 	push	ar7
      000837 C0 06            [24]  508 	push	ar6
      000839 C0 05            [24]  509 	push	ar5
      00083B C0 04            [24]  510 	push	ar4
      00083D 12 07 F6         [24]  511 	lcall	_UART0_putChar
      000840 D0 04            [24]  512 	pop	ar4
      000842 D0 05            [24]  513 	pop	ar5
      000844 D0 06            [24]  514 	pop	ar6
      000846 D0 07            [24]  515 	pop	ar7
      000848 80 C4            [24]  516 	sjmp	00101$
      00084A                        517 00104$:
                                    518 ;	./src/N76_uart0.c:43: }
      00084A 22               [24]  519 	ret
                                    520 ;------------------------------------------------------------
                                    521 ;Allocation info for local variables in function 'UART0_println'
                                    522 ;------------------------------------------------------------
                                    523 ;str                       Allocated to registers r5 r6 r7 
                                    524 ;------------------------------------------------------------
                                    525 ;	./src/N76_uart0.c:45: void UART0_println(char *str)
                                    526 ;	-----------------------------------------
                                    527 ;	 function UART0_println
                                    528 ;	-----------------------------------------
      00084B                        529 _UART0_println:
                                    530 ;	./src/N76_uart0.c:47: UART0_print(str);
      00084B 12 08 06         [24]  531 	lcall	_UART0_print
                                    532 ;	./src/N76_uart0.c:48: UART0_print("\r\n");
      00084E 90 12 EB         [24]  533 	mov	dptr,#___str_0
      000851 75 F0 80         [24]  534 	mov	b, #0x80
                                    535 ;	./src/N76_uart0.c:49: }
      000854 02 08 06         [24]  536 	ljmp	_UART0_print
                                    537 ;------------------------------------------------------------
                                    538 ;Allocation info for local variables in function 'UART0_printNum'
                                    539 ;------------------------------------------------------------
                                    540 ;base                      Allocated with name '_UART0_printNum_PARM_2'
                                    541 ;num                       Allocated to registers r4 r5 r6 r7 
                                    542 ;max                       Allocated to registers r5 
                                    543 ;flag                      Allocated to registers r2 
                                    544 ;i                         Allocated with name '_UART0_printNum_i_20000_42'
                                    545 ;sloc0                     Allocated with name '_UART0_printNum_sloc0_1_0'
                                    546 ;sloc1                     Allocated with name '_UART0_printNum_sloc1_1_0'
                                    547 ;dis                       Allocated with name '_UART0_printNum_dis_10000_36'
                                    548 ;------------------------------------------------------------
                                    549 ;	./src/N76_uart0.c:51: void UART0_printNum(int32_t num, uint8_t base)
                                    550 ;	-----------------------------------------
                                    551 ;	 function UART0_printNum
                                    552 ;	-----------------------------------------
      000857                        553 _UART0_printNum:
      000857 AC 82            [24]  554 	mov	r4,dpl
      000859 AD 83            [24]  555 	mov	r5,dph
      00085B AE F0            [24]  556 	mov	r6,b
      00085D FF               [12]  557 	mov	r7,a
                                    558 ;	./src/N76_uart0.c:54: int8_t max = 0, flag = 0; // max: index of dis array, flag: = 1 if negative
                                    559 ;	./src/N76_uart0.c:56: if (num == 0) // input 0
      00085E E4               [12]  560 	clr	a
      00085F FB               [12]  561 	mov	r3,a
      000860 FA               [12]  562 	mov	r2,a
      000861 EC               [12]  563 	mov	a,r4
      000862 4D               [12]  564 	orl	a,r5
      000863 4E               [12]  565 	orl	a,r6
      000864 4F               [12]  566 	orl	a,r7
      000865 70 0A            [24]  567 	jnz	00104$
                                    568 ;	./src/N76_uart0.c:58: dis[max++] = '0';
      000867 7B 01            [12]  569 	mov	r3,#0x01
      000869 90 00 57         [24]  570 	mov	dptr,#_UART0_printNum_dis_10000_36
      00086C 74 30            [12]  571 	mov	a,#0x30
      00086E F0               [24]  572 	movx	@dptr,a
      00086F 80 13            [24]  573 	sjmp	00131$
      000871                        574 00104$:
                                    575 ;	./src/N76_uart0.c:60: else if (num < 0) // negative number
      000871 EF               [12]  576 	mov	a,r7
      000872 30 E7 0F         [24]  577 	jnb	acc.7,00131$
                                    578 ;	./src/N76_uart0.c:62: num = 0 - num;
      000875 C3               [12]  579 	clr	c
      000876 E4               [12]  580 	clr	a
      000877 9C               [12]  581 	subb	a,r4
      000878 FC               [12]  582 	mov	r4,a
      000879 E4               [12]  583 	clr	a
      00087A 9D               [12]  584 	subb	a,r5
      00087B FD               [12]  585 	mov	r5,a
      00087C E4               [12]  586 	clr	a
      00087D 9E               [12]  587 	subb	a,r6
      00087E FE               [12]  588 	mov	r6,a
      00087F E4               [12]  589 	clr	a
      000880 9F               [12]  590 	subb	a,r7
      000881 FF               [12]  591 	mov	r7,a
                                    592 ;	./src/N76_uart0.c:63: flag = 1;
      000882 7A 01            [12]  593 	mov	r2,#0x01
                                    594 ;	./src/N76_uart0.c:65: while (num > 0) // convert to base number and add to dis array
      000884                        595 00131$:
      000884                        596 00109$:
      000884 C3               [12]  597 	clr	c
      000885 E4               [12]  598 	clr	a
      000886 9C               [12]  599 	subb	a,r4
      000887 E4               [12]  600 	clr	a
      000888 9D               [12]  601 	subb	a,r5
      000889 E4               [12]  602 	clr	a
      00088A 9E               [12]  603 	subb	a,r6
      00088B 74 80            [12]  604 	mov	a,#(0x00 ^ 0x80)
      00088D 8F F0            [24]  605 	mov	b,r7
      00088F 63 F0 80         [24]  606 	xrl	b,#0x80
      000892 95 F0            [12]  607 	subb	a,b
      000894 40 03            [24]  608 	jc	00208$
      000896 02 09 4A         [24]  609 	ljmp	00138$
      000899                        610 00208$:
                                    611 ;	./src/N76_uart0.c:67: if (num % base >= 10)
      000899 85 24 26         [24]  612 	mov	_UART0_printNum_sloc0_1_0,_UART0_printNum_PARM_2
      00089C 75 27 00         [24]  613 	mov	(_UART0_printNum_sloc0_1_0 + 1),#0x00
      00089F 75 28 00         [24]  614 	mov	(_UART0_printNum_sloc0_1_0 + 2),#0x00
      0008A2 75 29 00         [24]  615 	mov	(_UART0_printNum_sloc0_1_0 + 3),#0x00
      0008A5 85 26 47         [24]  616 	mov	__modslong_PARM_2,_UART0_printNum_sloc0_1_0
      0008A8 85 27 48         [24]  617 	mov	(__modslong_PARM_2 + 1),(_UART0_printNum_sloc0_1_0 + 1)
      0008AB 85 28 49         [24]  618 	mov	(__modslong_PARM_2 + 2),(_UART0_printNum_sloc0_1_0 + 2)
      0008AE 85 29 4A         [24]  619 	mov	(__modslong_PARM_2 + 3),(_UART0_printNum_sloc0_1_0 + 3)
      0008B1 8C 82            [24]  620 	mov	dpl, r4
      0008B3 8D 83            [24]  621 	mov	dph, r5
      0008B5 8E F0            [24]  622 	mov	b, r6
      0008B7 EF               [12]  623 	mov	a, r7
      0008B8 C0 07            [24]  624 	push	ar7
      0008BA C0 06            [24]  625 	push	ar6
      0008BC C0 05            [24]  626 	push	ar5
      0008BE C0 04            [24]  627 	push	ar4
      0008C0 C0 03            [24]  628 	push	ar3
      0008C2 C0 02            [24]  629 	push	ar2
      0008C4 12 11 B9         [24]  630 	lcall	__modslong
      0008C7 85 82 2A         [24]  631 	mov	_UART0_printNum_sloc1_1_0,dpl
      0008CA 85 83 2B         [24]  632 	mov	(_UART0_printNum_sloc1_1_0 + 1),dph
      0008CD 85 F0 2C         [24]  633 	mov	(_UART0_printNum_sloc1_1_0 + 2),b
      0008D0 F5 2D            [12]  634 	mov	(_UART0_printNum_sloc1_1_0 + 3),a
      0008D2 D0 02            [24]  635 	pop	ar2
      0008D4 D0 03            [24]  636 	pop	ar3
      0008D6 D0 04            [24]  637 	pop	ar4
      0008D8 D0 05            [24]  638 	pop	ar5
      0008DA D0 06            [24]  639 	pop	ar6
      0008DC D0 07            [24]  640 	pop	ar7
      0008DE C3               [12]  641 	clr	c
      0008DF E5 2A            [12]  642 	mov	a,_UART0_printNum_sloc1_1_0
      0008E1 94 0A            [12]  643 	subb	a,#0x0a
      0008E3 E5 2B            [12]  644 	mov	a,(_UART0_printNum_sloc1_1_0 + 1)
      0008E5 94 00            [12]  645 	subb	a,#0x00
      0008E7 E5 2C            [12]  646 	mov	a,(_UART0_printNum_sloc1_1_0 + 2)
      0008E9 94 00            [12]  647 	subb	a,#0x00
      0008EB E5 2D            [12]  648 	mov	a,(_UART0_printNum_sloc1_1_0 + 3)
      0008ED 64 80            [12]  649 	xrl	a,#0x80
      0008EF 94 80            [12]  650 	subb	a,#0x80
      0008F1 40 18            [24]  651 	jc	00107$
                                    652 ;	./src/N76_uart0.c:68: dis[max] = num % base + 55;
      0008F3 EB               [12]  653 	mov	a,r3
      0008F4 F8               [12]  654 	mov	r0,a
      0008F5 33               [12]  655 	rlc	a
      0008F6 95 E0            [12]  656 	subb	a,acc
      0008F8 F9               [12]  657 	mov	r1,a
      0008F9 E8               [12]  658 	mov	a,r0
      0008FA 24 57            [12]  659 	add	a, #_UART0_printNum_dis_10000_36
      0008FC F5 82            [12]  660 	mov	dpl,a
      0008FE E9               [12]  661 	mov	a,r1
      0008FF 34 00            [12]  662 	addc	a, #(_UART0_printNum_dis_10000_36 >> 8)
      000901 F5 83            [12]  663 	mov	dph,a
      000903 A9 2A            [24]  664 	mov	r1,_UART0_printNum_sloc1_1_0
      000905 74 37            [12]  665 	mov	a,#0x37
      000907 29               [12]  666 	add	a, r1
      000908 F0               [24]  667 	movx	@dptr,a
      000909 80 16            [24]  668 	sjmp	00108$
      00090B                        669 00107$:
                                    670 ;	./src/N76_uart0.c:70: dis[max] = num % base + 48;
      00090B EB               [12]  671 	mov	a,r3
      00090C F8               [12]  672 	mov	r0,a
      00090D 33               [12]  673 	rlc	a
      00090E 95 E0            [12]  674 	subb	a,acc
      000910 F9               [12]  675 	mov	r1,a
      000911 E8               [12]  676 	mov	a,r0
      000912 24 57            [12]  677 	add	a, #_UART0_printNum_dis_10000_36
      000914 F5 82            [12]  678 	mov	dpl,a
      000916 E9               [12]  679 	mov	a,r1
      000917 34 00            [12]  680 	addc	a, #(_UART0_printNum_dis_10000_36 >> 8)
      000919 F5 83            [12]  681 	mov	dph,a
      00091B A9 2A            [24]  682 	mov	r1,_UART0_printNum_sloc1_1_0
      00091D 74 30            [12]  683 	mov	a,#0x30
      00091F 29               [12]  684 	add	a, r1
      000920 F0               [24]  685 	movx	@dptr,a
      000921                        686 00108$:
                                    687 ;	./src/N76_uart0.c:72: num = num / base;
      000921 85 26 47         [24]  688 	mov	__divslong_PARM_2,_UART0_printNum_sloc0_1_0
      000924 85 27 48         [24]  689 	mov	(__divslong_PARM_2 + 1),(_UART0_printNum_sloc0_1_0 + 1)
      000927 85 28 49         [24]  690 	mov	(__divslong_PARM_2 + 2),(_UART0_printNum_sloc0_1_0 + 2)
      00092A 85 29 4A         [24]  691 	mov	(__divslong_PARM_2 + 3),(_UART0_printNum_sloc0_1_0 + 3)
                                    692 ;	./src/N76_uart0.c:73: max++;
      00092D 8C 82            [24]  693 	mov	dpl, r4
      00092F 8D 83            [24]  694 	mov	dph, r5
      000931 8E F0            [24]  695 	mov	b, r6
      000933 EF               [12]  696 	mov	a, r7
      000934 C0 03            [24]  697 	push	ar3
      000936 C0 02            [24]  698 	push	ar2
      000938 12 12 08         [24]  699 	lcall	__divslong
      00093B AC 82            [24]  700 	mov	r4, dpl
      00093D AD 83            [24]  701 	mov	r5, dph
      00093F AE F0            [24]  702 	mov	r6, b
      000941 FF               [12]  703 	mov	r7, a
      000942 D0 02            [24]  704 	pop	ar2
      000944 D0 03            [24]  705 	pop	ar3
      000946 0B               [12]  706 	inc	r3
      000947 02 08 84         [24]  707 	ljmp	00109$
      00094A                        708 00138$:
      00094A 8B 07            [24]  709 	mov	ar7,r3
                                    710 ;	./src/N76_uart0.c:76: if (base == HEX) // add 0x for HEX and 0B for BIN
      00094C 74 10            [12]  711 	mov	a,#0x10
      00094E B5 24 6F         [24]  712 	cjne	a,_UART0_printNum_PARM_2,00117$
                                    713 ;	./src/N76_uart0.c:78: if (max % 2 == 1)
      000951 EB               [12]  714 	mov	a,r3
      000952 FD               [12]  715 	mov	r5,a
      000953 33               [12]  716 	rlc	a
      000954 95 E0            [12]  717 	subb	a,acc
      000956 FE               [12]  718 	mov	r6,a
      000957 75 47 02         [24]  719 	mov	__modsint_PARM_2,#0x02
      00095A 75 48 00         [24]  720 	mov	(__modsint_PARM_2 + 1),#0x00
      00095D 8D 82            [24]  721 	mov	dpl, r5
      00095F 8E 83            [24]  722 	mov	dph, r6
      000961 C0 07            [24]  723 	push	ar7
      000963 C0 06            [24]  724 	push	ar6
      000965 C0 05            [24]  725 	push	ar5
      000967 C0 03            [24]  726 	push	ar3
      000969 C0 02            [24]  727 	push	ar2
      00096B 12 12 76         [24]  728 	lcall	__modsint
      00096E A9 82            [24]  729 	mov	r1, dpl
      000970 AC 83            [24]  730 	mov	r4, dph
      000972 D0 02            [24]  731 	pop	ar2
      000974 D0 03            [24]  732 	pop	ar3
      000976 D0 05            [24]  733 	pop	ar5
      000978 D0 06            [24]  734 	pop	ar6
      00097A D0 07            [24]  735 	pop	ar7
      00097C B9 01 13         [24]  736 	cjne	r1,#0x01,00113$
      00097F BC 00 10         [24]  737 	cjne	r4,#0x00,00113$
                                    738 ;	./src/N76_uart0.c:79: dis[max++] = '0';
      000982 EB               [12]  739 	mov	a,r3
      000983 04               [12]  740 	inc	a
      000984 FF               [12]  741 	mov	r7,a
      000985 ED               [12]  742 	mov	a,r5
      000986 24 57            [12]  743 	add	a, #_UART0_printNum_dis_10000_36
      000988 F5 82            [12]  744 	mov	dpl,a
      00098A EE               [12]  745 	mov	a,r6
      00098B 34 00            [12]  746 	addc	a, #(_UART0_printNum_dis_10000_36 >> 8)
      00098D F5 83            [12]  747 	mov	dph,a
      00098F 74 30            [12]  748 	mov	a,#0x30
      000991 F0               [24]  749 	movx	@dptr,a
      000992                        750 00113$:
                                    751 ;	./src/N76_uart0.c:81: dis[max++] = 'x';
      000992 EF               [12]  752 	mov	a,r7
      000993 FE               [12]  753 	mov	r6,a
      000994 04               [12]  754 	inc	a
      000995 FD               [12]  755 	mov	r5,a
      000996 EE               [12]  756 	mov	a,r6
      000997 33               [12]  757 	rlc	a
      000998 95 E0            [12]  758 	subb	a,acc
      00099A FC               [12]  759 	mov	r4,a
      00099B EE               [12]  760 	mov	a,r6
      00099C 24 57            [12]  761 	add	a, #_UART0_printNum_dis_10000_36
      00099E F5 82            [12]  762 	mov	dpl,a
      0009A0 EC               [12]  763 	mov	a,r4
      0009A1 34 00            [12]  764 	addc	a, #(_UART0_printNum_dis_10000_36 >> 8)
      0009A3 F5 83            [12]  765 	mov	dph,a
      0009A5 74 78            [12]  766 	mov	a,#0x78
      0009A7 F0               [24]  767 	movx	@dptr,a
                                    768 ;	./src/N76_uart0.c:82: dis[max++] = '0';
      0009A8 ED               [12]  769 	mov	a,r5
      0009A9 FE               [12]  770 	mov	r6,a
      0009AA 04               [12]  771 	inc	a
      0009AB FF               [12]  772 	mov	r7,a
      0009AC EE               [12]  773 	mov	a,r6
      0009AD 33               [12]  774 	rlc	a
      0009AE 95 E0            [12]  775 	subb	a,acc
      0009B0 FD               [12]  776 	mov	r5,a
      0009B1 EE               [12]  777 	mov	a,r6
      0009B2 24 57            [12]  778 	add	a, #_UART0_printNum_dis_10000_36
      0009B4 F5 82            [12]  779 	mov	dpl,a
      0009B6 ED               [12]  780 	mov	a,r5
      0009B7 34 00            [12]  781 	addc	a, #(_UART0_printNum_dis_10000_36 >> 8)
      0009B9 F5 83            [12]  782 	mov	dph,a
      0009BB 74 30            [12]  783 	mov	a,#0x30
      0009BD F0               [24]  784 	movx	@dptr,a
      0009BE 80 2F            [24]  785 	sjmp	00118$
      0009C0                        786 00117$:
                                    787 ;	./src/N76_uart0.c:84: else if (base == BIN)
      0009C0 74 02            [12]  788 	mov	a,#0x02
      0009C2 B5 24 2A         [24]  789 	cjne	a,_UART0_printNum_PARM_2,00118$
                                    790 ;	./src/N76_uart0.c:86: dis[max++] = 'B';
      0009C5 EB               [12]  791 	mov	a,r3
      0009C6 04               [12]  792 	inc	a
      0009C7 FF               [12]  793 	mov	r7,a
      0009C8 EB               [12]  794 	mov	a,r3
      0009C9 33               [12]  795 	rlc	a
      0009CA 95 E0            [12]  796 	subb	a,acc
      0009CC FE               [12]  797 	mov	r6,a
      0009CD EB               [12]  798 	mov	a,r3
      0009CE 24 57            [12]  799 	add	a, #_UART0_printNum_dis_10000_36
      0009D0 F5 82            [12]  800 	mov	dpl,a
      0009D2 EE               [12]  801 	mov	a,r6
      0009D3 34 00            [12]  802 	addc	a, #(_UART0_printNum_dis_10000_36 >> 8)
      0009D5 F5 83            [12]  803 	mov	dph,a
      0009D7 74 42            [12]  804 	mov	a,#0x42
      0009D9 F0               [24]  805 	movx	@dptr,a
                                    806 ;	./src/N76_uart0.c:87: dis[max++] = '0';
      0009DA 8F 06            [24]  807 	mov	ar6,r7
      0009DC 0F               [12]  808 	inc	r7
      0009DD EE               [12]  809 	mov	a,r6
      0009DE 33               [12]  810 	rlc	a
      0009DF 95 E0            [12]  811 	subb	a,acc
      0009E1 FD               [12]  812 	mov	r5,a
      0009E2 EE               [12]  813 	mov	a,r6
      0009E3 24 57            [12]  814 	add	a, #_UART0_printNum_dis_10000_36
      0009E5 F5 82            [12]  815 	mov	dpl,a
      0009E7 ED               [12]  816 	mov	a,r5
      0009E8 34 00            [12]  817 	addc	a, #(_UART0_printNum_dis_10000_36 >> 8)
      0009EA F5 83            [12]  818 	mov	dph,a
      0009EC 74 30            [12]  819 	mov	a,#0x30
      0009EE F0               [24]  820 	movx	@dptr,a
      0009EF                        821 00118$:
                                    822 ;	./src/N76_uart0.c:90: if (flag == 1) // add minus to negative number
      0009EF BA 01 15         [24]  823 	cjne	r2,#0x01,00137$
                                    824 ;	./src/N76_uart0.c:91: dis[max++] = '-';
      0009F2 8F 06            [24]  825 	mov	ar6,r7
      0009F4 0F               [12]  826 	inc	r7
      0009F5 EE               [12]  827 	mov	a,r6
      0009F6 33               [12]  828 	rlc	a
      0009F7 95 E0            [12]  829 	subb	a,acc
      0009F9 FD               [12]  830 	mov	r5,a
      0009FA EE               [12]  831 	mov	a,r6
      0009FB 24 57            [12]  832 	add	a, #_UART0_printNum_dis_10000_36
      0009FD F5 82            [12]  833 	mov	dpl,a
      0009FF ED               [12]  834 	mov	a,r5
      000A00 34 00            [12]  835 	addc	a, #(_UART0_printNum_dis_10000_36 >> 8)
      000A02 F5 83            [12]  836 	mov	dph,a
      000A04 74 2D            [12]  837 	mov	a,#0x2d
      000A06 F0               [24]  838 	movx	@dptr,a
                                    839 ;	./src/N76_uart0.c:93: for (uint8_t i = 0; i < max / 2; i++) // revert dis array
      000A07                        840 00137$:
      000A07 EF               [12]  841 	mov	a,r7
      000A08 14               [12]  842 	dec	a
      000A09 F5 2A            [12]  843 	mov	_UART0_printNum_sloc1_1_0,a
      000A0B 75 25 00         [24]  844 	mov	_UART0_printNum_i_20000_42,#0x00
      000A0E                        845 00123$:
      000A0E EF               [12]  846 	mov	a,r7
      000A0F FB               [12]  847 	mov	r3,a
      000A10 33               [12]  848 	rlc	a
      000A11 95 E0            [12]  849 	subb	a,acc
      000A13 FC               [12]  850 	mov	r4,a
      000A14 75 47 02         [24]  851 	mov	__divsint_PARM_2,#0x02
      000A17 75 48 00         [24]  852 	mov	(__divsint_PARM_2 + 1),#0x00
      000A1A 8B 82            [24]  853 	mov	dpl, r3
      000A1C 8C 83            [24]  854 	mov	dph, r4
      000A1E C0 07            [24]  855 	push	ar7
      000A20 C0 04            [24]  856 	push	ar4
      000A22 C0 03            [24]  857 	push	ar3
      000A24 12 12 AC         [24]  858 	lcall	__divsint
      000A27 A9 82            [24]  859 	mov	r1, dpl
      000A29 AA 83            [24]  860 	mov	r2, dph
      000A2B D0 03            [24]  861 	pop	ar3
      000A2D D0 04            [24]  862 	pop	ar4
      000A2F D0 07            [24]  863 	pop	ar7
      000A31 A8 25            [24]  864 	mov	r0,_UART0_printNum_i_20000_42
      000A33 7D 00            [12]  865 	mov	r5,#0x00
      000A35 C3               [12]  866 	clr	c
      000A36 E8               [12]  867 	mov	a,r0
      000A37 99               [12]  868 	subb	a,r1
      000A38 ED               [12]  869 	mov	a,r5
      000A39 64 80            [12]  870 	xrl	a,#0x80
      000A3B 8A F0            [24]  871 	mov	b,r2
      000A3D 63 F0 80         [24]  872 	xrl	b,#0x80
      000A40 95 F0            [12]  873 	subb	a,b
      000A42 50 51            [24]  874 	jnc	00121$
                                    875 ;	./src/N76_uart0.c:95: dis[max] = dis[i];
      000A44 C0 07            [24]  876 	push	ar7
      000A46 EB               [12]  877 	mov	a,r3
      000A47 24 57            [12]  878 	add	a, #_UART0_printNum_dis_10000_36
      000A49 FA               [12]  879 	mov	r2,a
      000A4A EC               [12]  880 	mov	a,r4
      000A4B 34 00            [12]  881 	addc	a, #(_UART0_printNum_dis_10000_36 >> 8)
      000A4D FD               [12]  882 	mov	r5,a
      000A4E E5 25            [12]  883 	mov	a,_UART0_printNum_i_20000_42
      000A50 24 57            [12]  884 	add	a, #_UART0_printNum_dis_10000_36
      000A52 F8               [12]  885 	mov	r0,a
      000A53 E4               [12]  886 	clr	a
      000A54 34 00            [12]  887 	addc	a, #(_UART0_printNum_dis_10000_36 >> 8)
      000A56 F9               [12]  888 	mov	r1,a
      000A57 88 82            [24]  889 	mov	dpl,r0
      000A59 89 83            [24]  890 	mov	dph,r1
      000A5B E0               [24]  891 	movx	a,@dptr
      000A5C 8A 82            [24]  892 	mov	dpl,r2
      000A5E 8D 83            [24]  893 	mov	dph,r5
      000A60 F0               [24]  894 	movx	@dptr,a
                                    895 ;	./src/N76_uart0.c:96: dis[i] = dis[max - 1 - i];
      000A61 AF 25            [24]  896 	mov	r7,_UART0_printNum_i_20000_42
      000A63 E5 2A            [12]  897 	mov	a,_UART0_printNum_sloc1_1_0
      000A65 C3               [12]  898 	clr	c
      000A66 9F               [12]  899 	subb	a,r7
      000A67 FE               [12]  900 	mov	r6,a
      000A68 33               [12]  901 	rlc	a
      000A69 95 E0            [12]  902 	subb	a,acc
      000A6B FF               [12]  903 	mov	r7,a
      000A6C EE               [12]  904 	mov	a,r6
      000A6D 24 57            [12]  905 	add	a, #_UART0_printNum_dis_10000_36
      000A6F F5 26            [12]  906 	mov	_UART0_printNum_sloc0_1_0,a
      000A71 EF               [12]  907 	mov	a,r7
      000A72 34 00            [12]  908 	addc	a, #(_UART0_printNum_dis_10000_36 >> 8)
      000A74 F5 27            [12]  909 	mov	(_UART0_printNum_sloc0_1_0 + 1),a
      000A76 85 26 82         [24]  910 	mov	dpl,_UART0_printNum_sloc0_1_0
      000A79 85 27 83         [24]  911 	mov	dph,(_UART0_printNum_sloc0_1_0 + 1)
      000A7C E0               [24]  912 	movx	a,@dptr
      000A7D 88 82            [24]  913 	mov	dpl,r0
      000A7F 89 83            [24]  914 	mov	dph,r1
      000A81 F0               [24]  915 	movx	@dptr,a
                                    916 ;	./src/N76_uart0.c:97: dis[max - 1 - i] = dis[max];
      000A82 8A 82            [24]  917 	mov	dpl,r2
      000A84 8D 83            [24]  918 	mov	dph,r5
      000A86 E0               [24]  919 	movx	a,@dptr
      000A87 85 26 82         [24]  920 	mov	dpl,_UART0_printNum_sloc0_1_0
      000A8A 85 27 83         [24]  921 	mov	dph,(_UART0_printNum_sloc0_1_0 + 1)
      000A8D F0               [24]  922 	movx	@dptr,a
                                    923 ;	./src/N76_uart0.c:93: for (uint8_t i = 0; i < max / 2; i++) // revert dis array
      000A8E 05 25            [12]  924 	inc	_UART0_printNum_i_20000_42
      000A90 D0 07            [24]  925 	pop	ar7
      000A92 02 0A 0E         [24]  926 	ljmp	00123$
      000A95                        927 00121$:
                                    928 ;	./src/N76_uart0.c:99: dis[max] = '\0';  // end string character
      000A95 EB               [12]  929 	mov	a,r3
      000A96 24 57            [12]  930 	add	a, #_UART0_printNum_dis_10000_36
      000A98 F5 82            [12]  931 	mov	dpl,a
      000A9A EC               [12]  932 	mov	a,r4
      000A9B 34 00            [12]  933 	addc	a, #(_UART0_printNum_dis_10000_36 >> 8)
      000A9D F5 83            [12]  934 	mov	dph,a
      000A9F E4               [12]  935 	clr	a
      000AA0 F0               [24]  936 	movx	@dptr,a
                                    937 ;	./src/N76_uart0.c:100: UART0_print(dis); // print dis
      000AA1 90 00 57         [24]  938 	mov	dptr,#_UART0_printNum_dis_10000_36
      000AA4 F5 F0            [12]  939 	mov	b,a
                                    940 ;	./src/N76_uart0.c:101: }
      000AA6 02 08 06         [24]  941 	ljmp	_UART0_print
                                    942 ;------------------------------------------------------------
                                    943 ;Allocation info for local variables in function 'UART0_printNumln'
                                    944 ;------------------------------------------------------------
                                    945 ;base                      Allocated with name '_UART0_printNumln_PARM_2'
                                    946 ;num                       Allocated to registers r4 r5 r6 r7 
                                    947 ;------------------------------------------------------------
                                    948 ;	./src/N76_uart0.c:103: void UART0_printNumln(long num, uint8_t base)
                                    949 ;	-----------------------------------------
                                    950 ;	 function UART0_printNumln
                                    951 ;	-----------------------------------------
      000AA9                        952 _UART0_printNumln:
      000AA9 AC 82            [24]  953 	mov	r4,dpl
      000AAB AD 83            [24]  954 	mov	r5,dph
      000AAD AE F0            [24]  955 	mov	r6,b
      000AAF FF               [12]  956 	mov	r7,a
                                    957 ;	./src/N76_uart0.c:105: UART0_printNum(num, base);
      000AB0 85 2E 24         [24]  958 	mov	_UART0_printNum_PARM_2,_UART0_printNumln_PARM_2
      000AB3 8C 82            [24]  959 	mov	dpl, r4
      000AB5 8D 83            [24]  960 	mov	dph, r5
      000AB7 8E F0            [24]  961 	mov	b, r6
      000AB9 EF               [12]  962 	mov	a, r7
      000ABA 12 08 57         [24]  963 	lcall	_UART0_printNum
                                    964 ;	./src/N76_uart0.c:106: UART0_println("");
      000ABD 90 12 EE         [24]  965 	mov	dptr,#___str_1
      000AC0 75 F0 80         [24]  966 	mov	b, #0x80
                                    967 ;	./src/N76_uart0.c:107: }
      000AC3 02 08 4B         [24]  968 	ljmp	_UART0_println
                                    969 ;------------------------------------------------------------
                                    970 ;Allocation info for local variables in function 'UART0_available'
                                    971 ;------------------------------------------------------------
                                    972 ;	./src/N76_uart0.c:109: int UART0_available(void)
                                    973 ;	-----------------------------------------
                                    974 ;	 function UART0_available
                                    975 ;	-----------------------------------------
      000AC6                        976 _UART0_available:
                                    977 ;	./src/N76_uart0.c:111: return ((unsigned int)(SERIAL_RX_BUFFER_SIZE + _rx_buffer_head - _rx_buffer_tail)) % SERIAL_RX_BUFFER_SIZE;
      000AC6 90 00 45         [24]  978 	mov	dptr,#__rx_buffer_head
      000AC9 E0               [24]  979 	movx	a,@dptr
      000ACA FF               [12]  980 	mov	r7,a
      000ACB 7E 00            [12]  981 	mov	r6,#0x00
      000ACD 74 10            [12]  982 	mov	a,#0x10
      000ACF 2F               [12]  983 	add	a, r7
      000AD0 FF               [12]  984 	mov	r7,a
      000AD1 E4               [12]  985 	clr	a
      000AD2 3E               [12]  986 	addc	a, r6
      000AD3 FE               [12]  987 	mov	r6,a
      000AD4 90 00 46         [24]  988 	mov	dptr,#__rx_buffer_tail
      000AD7 E0               [24]  989 	movx	a,@dptr
      000AD8 FD               [12]  990 	mov	r5,a
      000AD9 7C 00            [12]  991 	mov	r4,#0x00
      000ADB EF               [12]  992 	mov	a,r7
      000ADC C3               [12]  993 	clr	c
      000ADD 9D               [12]  994 	subb	a,r5
      000ADE FF               [12]  995 	mov	r7,a
      000ADF EE               [12]  996 	mov	a,r6
      000AE0 9C               [12]  997 	subb	a,r4
      000AE1 74 0F            [12]  998 	mov	a,#0x0f
      000AE3 5F               [12]  999 	anl	a,r7
      000AE4 F5 82            [12] 1000 	mov	dpl,a
      000AE6 75 83 00         [24] 1001 	mov	dph,#0x00
                                   1002 ;	./src/N76_uart0.c:112: }
      000AE9 22               [24] 1003 	ret
                                   1004 ;------------------------------------------------------------
                                   1005 ;Allocation info for local variables in function 'UART0_read'
                                   1006 ;------------------------------------------------------------
                                   1007 ;c                         Allocated to registers r7 
                                   1008 ;------------------------------------------------------------
                                   1009 ;	./src/N76_uart0.c:114: int UART0_read(void)
                                   1010 ;	-----------------------------------------
                                   1011 ;	 function UART0_read
                                   1012 ;	-----------------------------------------
      000AEA                       1013 _UART0_read:
                                   1014 ;	./src/N76_uart0.c:117: if (_rx_buffer_head == _rx_buffer_tail)
      000AEA 90 00 45         [24] 1015 	mov	dptr,#__rx_buffer_head
      000AED E0               [24] 1016 	movx	a,@dptr
      000AEE FF               [12] 1017 	mov	r7,a
      000AEF 90 00 46         [24] 1018 	mov	dptr,#__rx_buffer_tail
      000AF2 E0               [24] 1019 	movx	a,@dptr
      000AF3 FE               [12] 1020 	mov	r6,a
      000AF4 EF               [12] 1021 	mov	a,r7
      000AF5 B5 06 04         [24] 1022 	cjne	a,ar6,00102$
                                   1023 ;	./src/N76_uart0.c:119: return -1;
      000AF8 90 FF FF         [24] 1024 	mov	dptr,#0xffff
      000AFB 22               [24] 1025 	ret
      000AFC                       1026 00102$:
                                   1027 ;	./src/N76_uart0.c:123: uint8_t c = _rx_buffer[_rx_buffer_tail];
      000AFC EE               [12] 1028 	mov	a,r6
      000AFD 24 47            [12] 1029 	add	a, #__rx_buffer
      000AFF F5 82            [12] 1030 	mov	dpl,a
      000B01 E4               [12] 1031 	clr	a
      000B02 34 00            [12] 1032 	addc	a, #(__rx_buffer >> 8)
      000B04 F5 83            [12] 1033 	mov	dph,a
      000B06 E0               [24] 1034 	movx	a,@dptr
      000B07 FF               [12] 1035 	mov	r7,a
                                   1036 ;	./src/N76_uart0.c:124: _rx_buffer_tail = (uint8_t)(_rx_buffer_tail + 1) % SERIAL_RX_BUFFER_SIZE;
      000B08 0E               [12] 1037 	inc	r6
      000B09 53 06 0F         [24] 1038 	anl	ar6,#0x0f
      000B0C 90 00 46         [24] 1039 	mov	dptr,#__rx_buffer_tail
      000B0F EE               [12] 1040 	mov	a,r6
      000B10 F0               [24] 1041 	movx	@dptr,a
                                   1042 ;	./src/N76_uart0.c:125: return c;
      000B11 7E 00            [12] 1043 	mov	r6,#0x00
      000B13 8F 82            [24] 1044 	mov	dpl, r7
      000B15 8E 83            [24] 1045 	mov	dph, r6
                                   1046 ;	./src/N76_uart0.c:127: }
      000B17 22               [24] 1047 	ret
                                   1048 ;------------------------------------------------------------
                                   1049 ;Allocation info for local variables in function 'UART0_attachInterrupt'
                                   1050 ;------------------------------------------------------------
                                   1051 ;	./src/N76_uart0.c:129: void UART0_attachInterrupt(void)
                                   1052 ;	-----------------------------------------
                                   1053 ;	 function UART0_attachInterrupt
                                   1054 ;	-----------------------------------------
      000B18                       1055 _UART0_attachInterrupt:
                                   1056 ;	./src/N76_uart0.c:131: set_REN;
      000B18 43 98 10         [24] 1057 	orl	_scon,#0x10
                                   1058 ;	./src/N76_uart0.c:132: set_ES; // enable UART0 interrupt
      000B1B 43 A8 10         [24] 1059 	orl	_ie,#0x10
                                   1060 ;	./src/N76_uart0.c:133: }
      000B1E 22               [24] 1061 	ret
                                   1062 ;------------------------------------------------------------
                                   1063 ;Allocation info for local variables in function 'UART0_detachInterrupt'
                                   1064 ;------------------------------------------------------------
                                   1065 ;	./src/N76_uart0.c:135: void UART0_detachInterrupt(void)
                                   1066 ;	-----------------------------------------
                                   1067 ;	 function UART0_detachInterrupt
                                   1068 ;	-----------------------------------------
      000B1F                       1069 _UART0_detachInterrupt:
                                   1070 ;	./src/N76_uart0.c:137: clr_REN;
      000B1F 53 98 EF         [24] 1071 	anl	_scon,#0xef
                                   1072 ;	./src/N76_uart0.c:138: clr_ES; // disable UART0 interrupt
      000B22 53 A8 EF         [24] 1073 	anl	_ie,#0xef
                                   1074 ;	./src/N76_uart0.c:139: }
      000B25 22               [24] 1075 	ret
                                   1076 ;------------------------------------------------------------
                                   1077 ;Allocation info for local variables in function 'UART0_INT_FUCTION'
                                   1078 ;------------------------------------------------------------
                                   1079 ;c                         Allocated to registers r7 
                                   1080 ;i                         Allocated to registers r4 
                                   1081 ;------------------------------------------------------------
                                   1082 ;	./src/N76_uart0.c:141: ISR(UART0_INT_FUCTION, INTERRUPT_UART0)
                                   1083 ;	-----------------------------------------
                                   1084 ;	 function UART0_INT_FUCTION
                                   1085 ;	-----------------------------------------
      000B26                       1086 _UART0_INT_FUCTION:
      000B26 C0 E0            [24] 1087 	push	acc
      000B28 C0 82            [24] 1088 	push	dpl
      000B2A C0 83            [24] 1089 	push	dph
      000B2C C0 07            [24] 1090 	push	ar7
      000B2E C0 06            [24] 1091 	push	ar6
      000B30 C0 05            [24] 1092 	push	ar5
      000B32 C0 04            [24] 1093 	push	ar4
      000B34 C0 D0            [24] 1094 	push	psw
      000B36 75 D0 00         [24] 1095 	mov	psw,#0x00
                                   1096 ;	./src/N76_uart0.c:143: if (SCON & 0x01 != 0x00) // check if SCON, RI == 1
      000B39 E5 98            [12] 1097 	mov	a,_scon
      000B3B 30 E0 31         [24] 1098 	jnb	acc.0,00105$
                                   1099 ;	./src/N76_uart0.c:145: clr_RI;              /* clear reception flag for next reception */
      000B3E 53 98 FE         [24] 1100 	anl	_scon,#0xfe
                                   1101 ;	./src/N76_uart0.c:147: uint8_t c = SBUF;
      000B41 AF 99            [24] 1102 	mov	r7,_sbuf
                                   1103 ;	./src/N76_uart0.c:148: uint8_t i = (unsigned int)(_rx_buffer_head + 1) % SERIAL_RX_BUFFER_SIZE;
      000B43 90 00 45         [24] 1104 	mov	dptr,#__rx_buffer_head
      000B46 E0               [24] 1105 	movx	a,@dptr
      000B47 FE               [12] 1106 	mov	r6,a
      000B48 FC               [12] 1107 	mov	r4,a
      000B49 7D 00            [12] 1108 	mov	r5,#0x00
      000B4B 0C               [12] 1109 	inc	r4
      000B4C BC 00 01         [24] 1110 	cjne	r4,#0x00,00120$
      000B4F 0D               [12] 1111 	inc	r5
      000B50                       1112 00120$:
      000B50 53 04 0F         [24] 1113 	anl	ar4,#0x0f
                                   1114 ;	./src/N76_uart0.c:154: if (i != _rx_buffer_tail)
      000B53 90 00 46         [24] 1115 	mov	dptr,#__rx_buffer_tail
      000B56 E0               [24] 1116 	movx	a,@dptr
      000B57 FD               [12] 1117 	mov	r5,a
      000B58 EC               [12] 1118 	mov	a,r4
      000B59 B5 05 02         [24] 1119 	cjne	a,ar5,00121$
      000B5C 80 11            [24] 1120 	sjmp	00105$
      000B5E                       1121 00121$:
                                   1122 ;	./src/N76_uart0.c:156: _rx_buffer[_rx_buffer_head] = c;
      000B5E EE               [12] 1123 	mov	a,r6
      000B5F 24 47            [12] 1124 	add	a, #__rx_buffer
      000B61 F5 82            [12] 1125 	mov	dpl,a
      000B63 E4               [12] 1126 	clr	a
      000B64 34 00            [12] 1127 	addc	a, #(__rx_buffer >> 8)
      000B66 F5 83            [12] 1128 	mov	dph,a
      000B68 EF               [12] 1129 	mov	a,r7
      000B69 F0               [24] 1130 	movx	@dptr,a
                                   1131 ;	./src/N76_uart0.c:157: _rx_buffer_head = i;
      000B6A 90 00 45         [24] 1132 	mov	dptr,#__rx_buffer_head
      000B6D EC               [12] 1133 	mov	a,r4
      000B6E F0               [24] 1134 	movx	@dptr,a
      000B6F                       1135 00105$:
                                   1136 ;	./src/N76_uart0.c:160: }
      000B6F D0 D0            [24] 1137 	pop	psw
      000B71 D0 04            [24] 1138 	pop	ar4
      000B73 D0 05            [24] 1139 	pop	ar5
      000B75 D0 06            [24] 1140 	pop	ar6
      000B77 D0 07            [24] 1141 	pop	ar7
      000B79 D0 83            [24] 1142 	pop	dph
      000B7B D0 82            [24] 1143 	pop	dpl
      000B7D D0 E0            [24] 1144 	pop	acc
      000B7F 32               [24] 1145 	reti
                                   1146 ;	eliminated unneeded push/pop b
                                   1147 	.area CSEG    (CODE)
                                   1148 	.area CONST   (CODE)
                                   1149 	.area CONST   (CODE)
      0012EB                       1150 ___str_0:
      0012EB 0D                    1151 	.db 0x0d
      0012EC 0A                    1152 	.db 0x0a
      0012ED 00                    1153 	.db 0x00
                                   1154 	.area CSEG    (CODE)
                                   1155 	.area CONST   (CODE)
      0012EE                       1156 ___str_1:
      0012EE 00                    1157 	.db 0x00
                                   1158 	.area CSEG    (CODE)
                                   1159 	.area XINIT   (CODE)
                                   1160 	.area CABS    (ABS,CODE)
