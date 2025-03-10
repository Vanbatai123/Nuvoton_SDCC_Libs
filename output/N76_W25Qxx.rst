                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ISO C Compiler 
                                      3 ; Version 4.4.0 #14620 (Linux)
                                      4 ;--------------------------------------------------------
                                      5 	.module N76_W25Qxx
                                      6 	.optsdcc -mmcs51 --model-small
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _UART0_println
                                     12 	.globl _SPI_setClockDivider
                                     13 	.globl _SPI_setDataMode
                                     14 	.globl _SPI_setBitOrder
                                     15 	.globl _SPI_transfer
                                     16 	.globl _SPI_begin
                                     17 	.globl _eiph1
                                     18 	.globl _eip1
                                     19 	.globl _pmd
                                     20 	.globl _pmen
                                     21 	.globl _pdtcnt
                                     22 	.globl _pdten
                                     23 	.globl _scon_1
                                     24 	.globl _eiph
                                     25 	.globl _aindids
                                     26 	.globl _spdr
                                     27 	.globl _spsr
                                     28 	.globl _spcr2
                                     29 	.globl _spcr
                                     30 	.globl _capcon4
                                     31 	.globl _capcon3
                                     32 	.globl _b
                                     33 	.globl _eip
                                     34 	.globl _c2h
                                     35 	.globl _c2l
                                     36 	.globl _pif
                                     37 	.globl _pipen
                                     38 	.globl _pinen
                                     39 	.globl _picon
                                     40 	.globl _adccon0
                                     41 	.globl _c1h
                                     42 	.globl _c1l
                                     43 	.globl _c0h
                                     44 	.globl _c0l
                                     45 	.globl _adcdly
                                     46 	.globl _adccon2
                                     47 	.globl _adccon1
                                     48 	.globl _acc
                                     49 	.globl _pwmcon1
                                     50 	.globl _piocon0
                                     51 	.globl _pwm3l
                                     52 	.globl _pwm2l
                                     53 	.globl _pwm1l
                                     54 	.globl _pwm0l
                                     55 	.globl _pwmpl
                                     56 	.globl _pwmcon0
                                     57 	.globl _fbd
                                     58 	.globl _pnp
                                     59 	.globl _pwm3h
                                     60 	.globl _pwm2h
                                     61 	.globl _pwm1h
                                     62 	.globl _pwm0h
                                     63 	.globl _pwmph
                                     64 	.globl _psw
                                     65 	.globl _adcmph
                                     66 	.globl _adcmpl
                                     67 	.globl _pwm5l
                                     68 	.globl _th2
                                     69 	.globl _pwm4l
                                     70 	.globl _tl2
                                     71 	.globl _rcmp2h
                                     72 	.globl _rcmp2l
                                     73 	.globl _t2mod
                                     74 	.globl _t2con
                                     75 	.globl _ta
                                     76 	.globl _piocon1
                                     77 	.globl _rh3
                                     78 	.globl _pwm5h
                                     79 	.globl _rl3
                                     80 	.globl _pwm4h
                                     81 	.globl _t3con
                                     82 	.globl _adcrh
                                     83 	.globl _adcrl
                                     84 	.globl _i2addr
                                     85 	.globl _i2con
                                     86 	.globl _i2toc
                                     87 	.globl _i2clk
                                     88 	.globl _i2stat
                                     89 	.globl _i2dat
                                     90 	.globl _saddr_1
                                     91 	.globl _saden_1
                                     92 	.globl _saden
                                     93 	.globl _ip
                                     94 	.globl _pwmintc
                                     95 	.globl _iph
                                     96 	.globl _p2s
                                     97 	.globl _p1sr
                                     98 	.globl _p1m2
                                     99 	.globl _p1s
                                    100 	.globl _p1m1
                                    101 	.globl _p0sr
                                    102 	.globl _p0m2
                                    103 	.globl _p0s
                                    104 	.globl _p0m1
                                    105 	.globl _p3
                                    106 	.globl _iapcn
                                    107 	.globl _iapfd
                                    108 	.globl _p3sr
                                    109 	.globl _p3m2
                                    110 	.globl _p3s
                                    111 	.globl _p3m1
                                    112 	.globl _bodcon1
                                    113 	.globl _wdcon
                                    114 	.globl _saddr
                                    115 	.globl _ie
                                    116 	.globl _iapah
                                    117 	.globl _iapal
                                    118 	.globl _iapuen
                                    119 	.globl _iaptrg
                                    120 	.globl _bodcon0
                                    121 	.globl _auxr1
                                    122 	.globl _p2
                                    123 	.globl _chpcon
                                    124 	.globl _eie1
                                    125 	.globl _eie
                                    126 	.globl _sbuf_1
                                    127 	.globl _sbuf
                                    128 	.globl _scon
                                    129 	.globl _cken
                                    130 	.globl _ckswt
                                    131 	.globl _ckdiv
                                    132 	.globl _capcon2
                                    133 	.globl _capcon1
                                    134 	.globl _capcon0
                                    135 	.globl _sfrs
                                    136 	.globl _p1
                                    137 	.globl _wkcon
                                    138 	.globl _ckcon
                                    139 	.globl _th1
                                    140 	.globl _th0
                                    141 	.globl _tl1
                                    142 	.globl _tl0
                                    143 	.globl _tmod
                                    144 	.globl _tcon
                                    145 	.globl _pcon
                                    146 	.globl _rwk
                                    147 	.globl _rctrim1
                                    148 	.globl _rctrim0
                                    149 	.globl _dph
                                    150 	.globl _dpl
                                    151 	.globl _sp
                                    152 	.globl _p0
                                    153 	.globl _W25Qxx_readBuff_PARM_3
                                    154 	.globl _W25Qxx_readBuff_PARM_2
                                    155 	.globl _W25Qxx_readPage_PARM_2
                                    156 	.globl _W25Qxx_writeBuff_PARM_3
                                    157 	.globl _W25Qxx_writeBuff_PARM_2
                                    158 	.globl _W25Qxx_writePage_PARM_2
                                    159 	.globl _W25Qxx_eraseSectorBlock_PARM_2
                                    160 	.globl _W25Qxx_readMidDid_PARM_2
                                    161 	.globl _SPI_Error
                                    162 	.globl _W25Qxx_begin
                                    163 	.globl _W25Qxx_writeCmd
                                    164 	.globl _W25Qxx_writeAddr
                                    165 	.globl _W25Qxx_readMidDid
                                    166 	.globl _W25Qxx_writeEnable
                                    167 	.globl _W25Qxx_writeDisable
                                    168 	.globl _W25Qxx_eraseChip
                                    169 	.globl _W25Qxx_eraseSectorBlock
                                    170 	.globl _W25Qxx_waitIdle
                                    171 	.globl _W25Qxx_eraseVerify
                                    172 	.globl _W25Qxx_writePage
                                    173 	.globl _W25Qxx_writeBuff
                                    174 	.globl _W25Qxx_readPage
                                    175 	.globl _W25Qxx_readBuff
                                    176 	.globl _W25Qxx_writeVerify
                                    177 ;--------------------------------------------------------
                                    178 ; special function registers
                                    179 ;--------------------------------------------------------
                                    180 	.area RSEG    (ABS,DATA)
      000000                        181 	.org 0x0000
                           000080   182 _p0	=	0x0080
                           000081   183 _sp	=	0x0081
                           000082   184 _dpl	=	0x0082
                           000083   185 _dph	=	0x0083
                           000084   186 _rctrim0	=	0x0084
                           000085   187 _rctrim1	=	0x0085
                           000086   188 _rwk	=	0x0086
                           000087   189 _pcon	=	0x0087
                           000088   190 _tcon	=	0x0088
                           000089   191 _tmod	=	0x0089
                           00008A   192 _tl0	=	0x008a
                           00008B   193 _tl1	=	0x008b
                           00008C   194 _th0	=	0x008c
                           00008D   195 _th1	=	0x008d
                           00008E   196 _ckcon	=	0x008e
                           00008F   197 _wkcon	=	0x008f
                           000090   198 _p1	=	0x0090
                           000091   199 _sfrs	=	0x0091
                           000092   200 _capcon0	=	0x0092
                           000093   201 _capcon1	=	0x0093
                           000094   202 _capcon2	=	0x0094
                           000095   203 _ckdiv	=	0x0095
                           000096   204 _ckswt	=	0x0096
                           000097   205 _cken	=	0x0097
                           000098   206 _scon	=	0x0098
                           000099   207 _sbuf	=	0x0099
                           00009A   208 _sbuf_1	=	0x009a
                           00009B   209 _eie	=	0x009b
                           00009C   210 _eie1	=	0x009c
                           00009F   211 _chpcon	=	0x009f
                           0000A0   212 _p2	=	0x00a0
                           0000A2   213 _auxr1	=	0x00a2
                           0000A3   214 _bodcon0	=	0x00a3
                           0000A4   215 _iaptrg	=	0x00a4
                           0000A5   216 _iapuen	=	0x00a5
                           0000A6   217 _iapal	=	0x00a6
                           0000A7   218 _iapah	=	0x00a7
                           0000A8   219 _ie	=	0x00a8
                           0000A9   220 _saddr	=	0x00a9
                           0000AA   221 _wdcon	=	0x00aa
                           0000AB   222 _bodcon1	=	0x00ab
                           0000AC   223 _p3m1	=	0x00ac
                           0000AC   224 _p3s	=	0x00ac
                           0000AD   225 _p3m2	=	0x00ad
                           0000AD   226 _p3sr	=	0x00ad
                           0000AE   227 _iapfd	=	0x00ae
                           0000AF   228 _iapcn	=	0x00af
                           0000B0   229 _p3	=	0x00b0
                           0000B1   230 _p0m1	=	0x00b1
                           0000B1   231 _p0s	=	0x00b1
                           0000B2   232 _p0m2	=	0x00b2
                           0000B2   233 _p0sr	=	0x00b2
                           0000B3   234 _p1m1	=	0x00b3
                           0000B3   235 _p1s	=	0x00b3
                           0000B4   236 _p1m2	=	0x00b4
                           0000B4   237 _p1sr	=	0x00b4
                           0000B5   238 _p2s	=	0x00b5
                           0000B7   239 _iph	=	0x00b7
                           0000B7   240 _pwmintc	=	0x00b7
                           0000B8   241 _ip	=	0x00b8
                           0000B9   242 _saden	=	0x00b9
                           0000BA   243 _saden_1	=	0x00ba
                           0000BB   244 _saddr_1	=	0x00bb
                           0000BC   245 _i2dat	=	0x00bc
                           0000BD   246 _i2stat	=	0x00bd
                           0000BE   247 _i2clk	=	0x00be
                           0000BF   248 _i2toc	=	0x00bf
                           0000C0   249 _i2con	=	0x00c0
                           0000C1   250 _i2addr	=	0x00c1
                           0000C2   251 _adcrl	=	0x00c2
                           0000C3   252 _adcrh	=	0x00c3
                           0000C4   253 _t3con	=	0x00c4
                           0000C4   254 _pwm4h	=	0x00c4
                           0000C5   255 _rl3	=	0x00c5
                           0000C5   256 _pwm5h	=	0x00c5
                           0000C6   257 _rh3	=	0x00c6
                           0000C6   258 _piocon1	=	0x00c6
                           0000C7   259 _ta	=	0x00c7
                           0000C8   260 _t2con	=	0x00c8
                           0000C9   261 _t2mod	=	0x00c9
                           0000CA   262 _rcmp2l	=	0x00ca
                           0000CB   263 _rcmp2h	=	0x00cb
                           0000CC   264 _tl2	=	0x00cc
                           0000CC   265 _pwm4l	=	0x00cc
                           0000CD   266 _th2	=	0x00cd
                           0000CD   267 _pwm5l	=	0x00cd
                           0000CE   268 _adcmpl	=	0x00ce
                           0000CF   269 _adcmph	=	0x00cf
                           0000D0   270 _psw	=	0x00d0
                           0000D1   271 _pwmph	=	0x00d1
                           0000D2   272 _pwm0h	=	0x00d2
                           0000D3   273 _pwm1h	=	0x00d3
                           0000D4   274 _pwm2h	=	0x00d4
                           0000D5   275 _pwm3h	=	0x00d5
                           0000D6   276 _pnp	=	0x00d6
                           0000D7   277 _fbd	=	0x00d7
                           0000D8   278 _pwmcon0	=	0x00d8
                           0000D9   279 _pwmpl	=	0x00d9
                           0000DA   280 _pwm0l	=	0x00da
                           0000DB   281 _pwm1l	=	0x00db
                           0000DC   282 _pwm2l	=	0x00dc
                           0000DD   283 _pwm3l	=	0x00dd
                           0000DE   284 _piocon0	=	0x00de
                           0000DF   285 _pwmcon1	=	0x00df
                           0000E0   286 _acc	=	0x00e0
                           0000E1   287 _adccon1	=	0x00e1
                           0000E2   288 _adccon2	=	0x00e2
                           0000E3   289 _adcdly	=	0x00e3
                           0000E4   290 _c0l	=	0x00e4
                           0000E5   291 _c0h	=	0x00e5
                           0000E6   292 _c1l	=	0x00e6
                           0000E7   293 _c1h	=	0x00e7
                           0000E8   294 _adccon0	=	0x00e8
                           0000E9   295 _picon	=	0x00e9
                           0000EA   296 _pinen	=	0x00ea
                           0000EB   297 _pipen	=	0x00eb
                           0000EC   298 _pif	=	0x00ec
                           0000ED   299 _c2l	=	0x00ed
                           0000EE   300 _c2h	=	0x00ee
                           0000EF   301 _eip	=	0x00ef
                           0000F0   302 _b	=	0x00f0
                           0000F1   303 _capcon3	=	0x00f1
                           0000F2   304 _capcon4	=	0x00f2
                           0000F3   305 _spcr	=	0x00f3
                           0000F3   306 _spcr2	=	0x00f3
                           0000F4   307 _spsr	=	0x00f4
                           0000F5   308 _spdr	=	0x00f5
                           0000F6   309 _aindids	=	0x00f6
                           0000F7   310 _eiph	=	0x00f7
                           0000F8   311 _scon_1	=	0x00f8
                           0000F9   312 _pdten	=	0x00f9
                           0000FA   313 _pdtcnt	=	0x00fa
                           0000FB   314 _pmen	=	0x00fb
                           0000FC   315 _pmd	=	0x00fc
                           0000FE   316 _eip1	=	0x00fe
                           0000FF   317 _eiph1	=	0x00ff
                                    318 ;--------------------------------------------------------
                                    319 ; special function bits
                                    320 ;--------------------------------------------------------
                                    321 	.area RSEG    (ABS,DATA)
      000000                        322 	.org 0x0000
                                    323 ;--------------------------------------------------------
                                    324 ; overlayable register banks
                                    325 ;--------------------------------------------------------
                                    326 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        327 	.ds 8
                                    328 ;--------------------------------------------------------
                                    329 ; internal ram data
                                    330 ;--------------------------------------------------------
                                    331 	.area DSEG    (DATA)
      00002F                        332 _W25Qxx_readMidDid_PARM_2:
      00002F                        333 	.ds 3
      000032                        334 _W25Qxx_eraseSectorBlock_PARM_2:
      000032                        335 	.ds 2
      000034                        336 _W25Qxx_eraseSectorBlock_cmd_10000_56:
      000034                        337 	.ds 1
      000035                        338 _W25Qxx_writePage_PARM_2:
      000035                        339 	.ds 3
      000038                        340 _W25Qxx_writeBuff_PARM_2:
      000038                        341 	.ds 3
      00003B                        342 _W25Qxx_writeBuff_PARM_3:
      00003B                        343 	.ds 2
      00003D                        344 _W25Qxx_readPage_PARM_2:
      00003D                        345 	.ds 3
      000040                        346 _W25Qxx_readBuff_PARM_2:
      000040                        347 	.ds 3
      000043                        348 _W25Qxx_readBuff_PARM_3:
      000043                        349 	.ds 4
                                    350 ;--------------------------------------------------------
                                    351 ; overlayable items in internal ram
                                    352 ;--------------------------------------------------------
                                    353 ;--------------------------------------------------------
                                    354 ; indirectly addressable internal ram data
                                    355 ;--------------------------------------------------------
                                    356 	.area ISEG    (DATA)
                                    357 ;--------------------------------------------------------
                                    358 ; absolute internal ram data
                                    359 ;--------------------------------------------------------
                                    360 	.area IABS    (ABS,DATA)
                                    361 	.area IABS    (ABS,DATA)
                                    362 ;--------------------------------------------------------
                                    363 ; bit data
                                    364 ;--------------------------------------------------------
                                    365 	.area BSEG    (BIT)
                                    366 ;--------------------------------------------------------
                                    367 ; paged external ram data
                                    368 ;--------------------------------------------------------
                                    369 	.area PSEG    (PAG,XDATA)
                                    370 ;--------------------------------------------------------
                                    371 ; uninitialized external ram data
                                    372 ;--------------------------------------------------------
                                    373 	.area XSEG    (XDATA)
                                    374 ;--------------------------------------------------------
                                    375 ; absolute external ram data
                                    376 ;--------------------------------------------------------
                                    377 	.area XABS    (ABS,XDATA)
                                    378 ;--------------------------------------------------------
                                    379 ; initialized external ram data
                                    380 ;--------------------------------------------------------
                                    381 	.area XISEG   (XDATA)
                                    382 	.area HOME    (CODE)
                                    383 	.area GSINIT0 (CODE)
                                    384 	.area GSINIT1 (CODE)
                                    385 	.area GSINIT2 (CODE)
                                    386 	.area GSINIT3 (CODE)
                                    387 	.area GSINIT4 (CODE)
                                    388 	.area GSINIT5 (CODE)
                                    389 	.area GSINIT  (CODE)
                                    390 	.area GSFINAL (CODE)
                                    391 	.area CSEG    (CODE)
                                    392 ;--------------------------------------------------------
                                    393 ; global & static initialisations
                                    394 ;--------------------------------------------------------
                                    395 	.area HOME    (CODE)
                                    396 	.area GSINIT  (CODE)
                                    397 	.area GSFINAL (CODE)
                                    398 	.area GSINIT  (CODE)
                                    399 ;--------------------------------------------------------
                                    400 ; Home
                                    401 ;--------------------------------------------------------
                                    402 	.area HOME    (CODE)
                                    403 	.area HOME    (CODE)
                                    404 ;--------------------------------------------------------
                                    405 ; code
                                    406 ;--------------------------------------------------------
                                    407 	.area CSEG    (CODE)
                                    408 ;------------------------------------------------------------
                                    409 ;Allocation info for local variables in function 'SPI_Error'
                                    410 ;------------------------------------------------------------
                                    411 ;	./src/N76_W25Qxx.c:13: void SPI_Error(void)
                                    412 ;	-----------------------------------------
                                    413 ;	 function SPI_Error
                                    414 ;	-----------------------------------------
      000B80                        415 _SPI_Error:
                           000007   416 	ar7 = 0x07
                           000006   417 	ar6 = 0x06
                           000005   418 	ar5 = 0x05
                           000004   419 	ar4 = 0x04
                           000003   420 	ar3 = 0x03
                           000002   421 	ar2 = 0x02
                           000001   422 	ar1 = 0x01
                           000000   423 	ar0 = 0x00
                                    424 ;	./src/N76_W25Qxx.c:15: UART0_println("\n*  SPI Error, please check the connection between MCU and SPI Flash");
      000B80 90 12 EF         [24]  425 	mov	dptr,#___str_0
      000B83 75 F0 80         [24]  426 	mov	b, #0x80
      000B86 12 08 4B         [24]  427 	lcall	_UART0_println
                                    428 ;	./src/N76_W25Qxx.c:16: while (1)
      000B89                        429 00102$:
                                    430 ;	./src/N76_W25Qxx.c:18: }
      000B89 80 FE            [24]  431 	sjmp	00102$
                                    432 ;------------------------------------------------------------
                                    433 ;Allocation info for local variables in function 'W25Qxx_begin'
                                    434 ;------------------------------------------------------------
                                    435 ;	./src/N76_W25Qxx.c:20: void W25Qxx_begin(void)
                                    436 ;	-----------------------------------------
                                    437 ;	 function W25Qxx_begin
                                    438 ;	-----------------------------------------
      000B8B                        439 _W25Qxx_begin:
                                    440 ;	./src/N76_W25Qxx.c:22: SPI_begin(SPI_MODE_MASTER);
      000B8B 75 82 00         [24]  441 	mov	dpl, #0x00
      000B8E 12 07 6D         [24]  442 	lcall	_SPI_begin
                                    443 ;	./src/N76_W25Qxx.c:23: SPI_setBitOrder(MSBFIRST);
      000B91 75 82 01         [24]  444 	mov	dpl, #0x01
      000B94 12 07 AA         [24]  445 	lcall	_SPI_setBitOrder
                                    446 ;	./src/N76_W25Qxx.c:24: SPI_setDataMode(SPI_MODE0);
      000B97 75 82 00         [24]  447 	mov	dpl, #0x00
      000B9A 12 07 B6         [24]  448 	lcall	_SPI_setDataMode
                                    449 ;	./src/N76_W25Qxx.c:25: SPI_setClockDivider(SPI_CLOCK_DIV2);
      000B9D 75 82 00         [24]  450 	mov	dpl, #0x00
                                    451 ;	./src/N76_W25Qxx.c:27: }
      000BA0 02 07 C0         [24]  452 	ljmp	_SPI_setClockDivider
                                    453 ;------------------------------------------------------------
                                    454 ;Allocation info for local variables in function 'W25Qxx_writeCmd'
                                    455 ;------------------------------------------------------------
                                    456 ;cmd                       Allocated to registers 
                                    457 ;status                    Allocated to registers r7 
                                    458 ;------------------------------------------------------------
                                    459 ;	./src/N76_W25Qxx.c:29: uint8_t W25Qxx_writeCmd(uint8_t cmd)
                                    460 ;	-----------------------------------------
                                    461 ;	 function W25Qxx_writeCmd
                                    462 ;	-----------------------------------------
      000BA3                        463 _W25Qxx_writeCmd:
                                    464 ;	./src/N76_W25Qxx.c:33: clrb(SPI_Px_SS, SPI_PIN_SS);
      000BA3 53 90 FD         [24]  465 	anl	_p1,#0xfd
                                    466 ;	./src/N76_W25Qxx.c:34: status = SPI_transfer(cmd); // RESUME komutunu gönder
      000BA6 12 07 97         [24]  467 	lcall	_SPI_transfer
      000BA9 AF 82            [24]  468 	mov	r7, dpl
                                    469 ;	./src/N76_W25Qxx.c:35: setb(SPI_Px_SS, SPI_PIN_SS);
      000BAB 43 90 02         [24]  470 	orl	_p1,#0x02
                                    471 ;	./src/N76_W25Qxx.c:37: if (status == W25Qxx_OK)
      000BAE EF               [12]  472 	mov	a,r7
      000BAF 70 04            [24]  473 	jnz	00102$
                                    474 ;	./src/N76_W25Qxx.c:38: return 1;
      000BB1 75 82 01         [24]  475 	mov	dpl, #0x01
      000BB4 22               [24]  476 	ret
      000BB5                        477 00102$:
                                    478 ;	./src/N76_W25Qxx.c:40: return 0;
      000BB5 75 82 00         [24]  479 	mov	dpl, #0x00
                                    480 ;	./src/N76_W25Qxx.c:41: }
      000BB8 22               [24]  481 	ret
                                    482 ;------------------------------------------------------------
                                    483 ;Allocation info for local variables in function 'W25Qxx_writeAddr'
                                    484 ;------------------------------------------------------------
                                    485 ;addr                      Allocated to registers r4 r5 r6 r7 
                                    486 ;------------------------------------------------------------
                                    487 ;	./src/N76_W25Qxx.c:43: void W25Qxx_writeAddr(uint32_t addr)
                                    488 ;	-----------------------------------------
                                    489 ;	 function W25Qxx_writeAddr
                                    490 ;	-----------------------------------------
      000BB9                        491 _W25Qxx_writeAddr:
      000BB9 AC 82            [24]  492 	mov	r4,dpl
      000BBB AD 83            [24]  493 	mov	r5,dph
      000BBD AE F0            [24]  494 	mov	r6,b
      000BBF FF               [12]  495 	mov	r7,a
                                    496 ;	./src/N76_W25Qxx.c:45: SPI_transfer((uint8_t)((addr >> 16) & 0xFF));
      000BC0 8E 82            [24]  497 	mov	dpl,r6
      000BC2 C0 07            [24]  498 	push	ar7
      000BC4 C0 06            [24]  499 	push	ar6
      000BC6 C0 05            [24]  500 	push	ar5
      000BC8 C0 04            [24]  501 	push	ar4
      000BCA 12 07 97         [24]  502 	lcall	_SPI_transfer
      000BCD D0 04            [24]  503 	pop	ar4
      000BCF D0 05            [24]  504 	pop	ar5
                                    505 ;	./src/N76_W25Qxx.c:46: SPI_transfer((uint8_t)((addr >> 8) & 0xFF));
      000BD1 8D 82            [24]  506 	mov	dpl,r5
      000BD3 C0 05            [24]  507 	push	ar5
      000BD5 C0 04            [24]  508 	push	ar4
      000BD7 12 07 97         [24]  509 	lcall	_SPI_transfer
      000BDA D0 04            [24]  510 	pop	ar4
      000BDC D0 05            [24]  511 	pop	ar5
      000BDE D0 06            [24]  512 	pop	ar6
      000BE0 D0 07            [24]  513 	pop	ar7
                                    514 ;	./src/N76_W25Qxx.c:47: SPI_transfer((uint8_t)(addr & 0xFF));
      000BE2 8C 82            [24]  515 	mov	dpl,r4
                                    516 ;	./src/N76_W25Qxx.c:48: }
      000BE4 02 07 97         [24]  517 	ljmp	_SPI_transfer
                                    518 ;------------------------------------------------------------
                                    519 ;Allocation info for local variables in function 'W25Qxx_readMidDid'
                                    520 ;------------------------------------------------------------
                                    521 ;DID                       Allocated with name '_W25Qxx_readMidDid_PARM_2'
                                    522 ;MFID                      Allocated to registers r5 r6 r7 
                                    523 ;------------------------------------------------------------
                                    524 ;	./src/N76_W25Qxx.c:50: void W25Qxx_readMidDid(uint8_t *MFID, uint8_t *DID)
                                    525 ;	-----------------------------------------
                                    526 ;	 function W25Qxx_readMidDid
                                    527 ;	-----------------------------------------
      000BE7                        528 _W25Qxx_readMidDid:
      000BE7 AD 82            [24]  529 	mov	r5, dpl
      000BE9 AE 83            [24]  530 	mov	r6, dph
      000BEB AF F0            [24]  531 	mov	r7, b
                                    532 ;	./src/N76_W25Qxx.c:52: clrb(SPI_Px_SS, SPI_PIN_SS);
      000BED 53 90 FD         [24]  533 	anl	_p1,#0xfd
                                    534 ;	./src/N76_W25Qxx.c:53: SPI_transfer(W25Q_CMD_READ_MANUFACTURER);
      000BF0 75 82 90         [24]  535 	mov	dpl, #0x90
      000BF3 C0 07            [24]  536 	push	ar7
      000BF5 C0 06            [24]  537 	push	ar6
      000BF7 C0 05            [24]  538 	push	ar5
      000BF9 12 07 97         [24]  539 	lcall	_SPI_transfer
                                    540 ;	./src/N76_W25Qxx.c:54: SPI_transfer(0x00);
      000BFC 75 82 00         [24]  541 	mov	dpl, #0x00
      000BFF 12 07 97         [24]  542 	lcall	_SPI_transfer
                                    543 ;	./src/N76_W25Qxx.c:55: SPI_transfer(0x00);
      000C02 75 82 00         [24]  544 	mov	dpl, #0x00
      000C05 12 07 97         [24]  545 	lcall	_SPI_transfer
                                    546 ;	./src/N76_W25Qxx.c:56: SPI_transfer(0x00);
      000C08 75 82 00         [24]  547 	mov	dpl, #0x00
      000C0B 12 07 97         [24]  548 	lcall	_SPI_transfer
                                    549 ;	./src/N76_W25Qxx.c:57: *MFID = SPI_transfer(0xFF);
      000C0E 75 82 FF         [24]  550 	mov	dpl, #0xff
      000C11 12 07 97         [24]  551 	lcall	_SPI_transfer
      000C14 AC 82            [24]  552 	mov	r4, dpl
      000C16 D0 05            [24]  553 	pop	ar5
      000C18 D0 06            [24]  554 	pop	ar6
      000C1A D0 07            [24]  555 	pop	ar7
      000C1C 8D 82            [24]  556 	mov	dpl,r5
      000C1E 8E 83            [24]  557 	mov	dph,r6
      000C20 8F F0            [24]  558 	mov	b,r7
      000C22 EC               [12]  559 	mov	a,r4
      000C23 12 10 BA         [24]  560 	lcall	__gptrput
                                    561 ;	./src/N76_W25Qxx.c:58: *DID = SPI_transfer(0xFF);
      000C26 AD 2F            [24]  562 	mov	r5,_W25Qxx_readMidDid_PARM_2
      000C28 AE 30            [24]  563 	mov	r6,(_W25Qxx_readMidDid_PARM_2 + 1)
      000C2A AF 31            [24]  564 	mov	r7,(_W25Qxx_readMidDid_PARM_2 + 2)
      000C2C 75 82 FF         [24]  565 	mov	dpl, #0xff
      000C2F C0 07            [24]  566 	push	ar7
      000C31 C0 06            [24]  567 	push	ar6
      000C33 C0 05            [24]  568 	push	ar5
      000C35 12 07 97         [24]  569 	lcall	_SPI_transfer
      000C38 AC 82            [24]  570 	mov	r4, dpl
      000C3A D0 05            [24]  571 	pop	ar5
      000C3C D0 06            [24]  572 	pop	ar6
      000C3E D0 07            [24]  573 	pop	ar7
      000C40 8D 82            [24]  574 	mov	dpl,r5
      000C42 8E 83            [24]  575 	mov	dph,r6
      000C44 8F F0            [24]  576 	mov	b,r7
      000C46 EC               [12]  577 	mov	a,r4
      000C47 12 10 BA         [24]  578 	lcall	__gptrput
                                    579 ;	./src/N76_W25Qxx.c:59: setb(SPI_Px_SS, SPI_PIN_SS);
      000C4A 43 90 02         [24]  580 	orl	_p1,#0x02
                                    581 ;	./src/N76_W25Qxx.c:60: }
      000C4D 22               [24]  582 	ret
                                    583 ;------------------------------------------------------------
                                    584 ;Allocation info for local variables in function 'W25Qxx_writeEnable'
                                    585 ;------------------------------------------------------------
                                    586 ;	./src/N76_W25Qxx.c:62: void W25Qxx_writeEnable(void)
                                    587 ;	-----------------------------------------
                                    588 ;	 function W25Qxx_writeEnable
                                    589 ;	-----------------------------------------
      000C4E                        590 _W25Qxx_writeEnable:
                                    591 ;	./src/N76_W25Qxx.c:64: W25Qxx_writeCmd(W25Q_CMD_WRITE_ENABLE);
      000C4E 75 82 06         [24]  592 	mov	dpl, #0x06
                                    593 ;	./src/N76_W25Qxx.c:65: }
      000C51 02 0B A3         [24]  594 	ljmp	_W25Qxx_writeCmd
                                    595 ;------------------------------------------------------------
                                    596 ;Allocation info for local variables in function 'W25Qxx_writeDisable'
                                    597 ;------------------------------------------------------------
                                    598 ;	./src/N76_W25Qxx.c:67: void W25Qxx_writeDisable(void)
                                    599 ;	-----------------------------------------
                                    600 ;	 function W25Qxx_writeDisable
                                    601 ;	-----------------------------------------
      000C54                        602 _W25Qxx_writeDisable:
                                    603 ;	./src/N76_W25Qxx.c:69: W25Qxx_writeCmd(W25Q_CMD_WRITE_DISABLE);
      000C54 75 82 04         [24]  604 	mov	dpl, #0x04
                                    605 ;	./src/N76_W25Qxx.c:70: }
      000C57 02 0B A3         [24]  606 	ljmp	_W25Qxx_writeCmd
                                    607 ;------------------------------------------------------------
                                    608 ;Allocation info for local variables in function 'W25Qxx_eraseChip'
                                    609 ;------------------------------------------------------------
                                    610 ;	./src/N76_W25Qxx.c:72: void W25Qxx_eraseChip(void)
                                    611 ;	-----------------------------------------
                                    612 ;	 function W25Qxx_eraseChip
                                    613 ;	-----------------------------------------
      000C5A                        614 _W25Qxx_eraseChip:
                                    615 ;	./src/N76_W25Qxx.c:74: W25Qxx_writeEnable();
      000C5A 12 0C 4E         [24]  616 	lcall	_W25Qxx_writeEnable
                                    617 ;	./src/N76_W25Qxx.c:75: W25Qxx_writeCmd(W25Q_CMD_CHIP_ERASE);
      000C5D 75 82 C7         [24]  618 	mov	dpl, #0xc7
      000C60 12 0B A3         [24]  619 	lcall	_W25Qxx_writeCmd
                                    620 ;	./src/N76_W25Qxx.c:76: W25Qxx_waitIdle();
      000C63 12 0D 1A         [24]  621 	lcall	_W25Qxx_waitIdle
                                    622 ;	./src/N76_W25Qxx.c:77: W25Qxx_writeDisable();
                                    623 ;	./src/N76_W25Qxx.c:78: }
      000C66 02 0C 54         [24]  624 	ljmp	_W25Qxx_writeDisable
                                    625 ;------------------------------------------------------------
                                    626 ;Allocation info for local variables in function 'W25Qxx_eraseSectorBlock'
                                    627 ;------------------------------------------------------------
                                    628 ;num                       Allocated with name '_W25Qxx_eraseSectorBlock_PARM_2'
                                    629 ;cmd                       Allocated with name '_W25Qxx_eraseSectorBlock_cmd_10000_56'
                                    630 ;addr                      Allocated to registers r3 r4 r5 r6 
                                    631 ;------------------------------------------------------------
                                    632 ;	./src/N76_W25Qxx.c:80: uint8_t W25Qxx_eraseSectorBlock(uint8_t cmd, uint16_t num)
                                    633 ;	-----------------------------------------
                                    634 ;	 function W25Qxx_eraseSectorBlock
                                    635 ;	-----------------------------------------
      000C69                        636 _W25Qxx_eraseSectorBlock:
      000C69 85 82 34         [24]  637 	mov	_W25Qxx_eraseSectorBlock_cmd_10000_56,dpl
                                    638 ;	./src/N76_W25Qxx.c:82: uint32_t addr = 0;
                                    639 ;	./src/N76_W25Qxx.c:83: if (cmd == W25Q_CMD_SECTOR_ERASE_4K)
      000C6C E4               [12]  640 	clr	a
      000C6D FB               [12]  641 	mov	r3,a
      000C6E FC               [12]  642 	mov	r4,a
      000C6F FD               [12]  643 	mov	r5,a
      000C70 FE               [12]  644 	mov	r6,a
      000C71 74 20            [12]  645 	mov	a,#0x20
      000C73 B5 34 1C         [24]  646 	cjne	a,_W25Qxx_eraseSectorBlock_cmd_10000_56,00113$
                                    647 ;	./src/N76_W25Qxx.c:85: if (num >= SECTOR_SIZE_4K)
      000C76 74 FC            [12]  648 	mov	a,#0x100 - 0x04
      000C78 25 33            [12]  649 	add	a,(_W25Qxx_eraseSectorBlock_PARM_2 + 1)
      000C7A 50 04            [24]  650 	jnc	00102$
                                    651 ;	./src/N76_W25Qxx.c:86: return W25Qxx_ERR_PARAM;
      000C7C 75 82 02         [24]  652 	mov	dpl, #0x02
      000C7F 22               [24]  653 	ret
      000C80                        654 00102$:
                                    655 ;	./src/N76_W25Qxx.c:87: addr = SECTOR_BYTE_4K * num;
      000C80 E5 32            [12]  656 	mov	a,_W25Qxx_eraseSectorBlock_PARM_2
      000C82 C4               [12]  657 	swap	a
      000C83 54 F0            [12]  658 	anl	a,#0xf0
      000C85 FA               [12]  659 	mov	r2,a
      000C86 79 00            [12]  660 	mov	r1,#0x00
      000C88 89 03            [24]  661 	mov	ar3,r1
      000C8A 8A 04            [24]  662 	mov	ar4,r2
      000C8C 7D 00            [12]  663 	mov	r5,#0x00
      000C8E 7E 00            [12]  664 	mov	r6,#0x00
      000C90 80 55            [24]  665 	sjmp	00114$
      000C92                        666 00113$:
                                    667 ;	./src/N76_W25Qxx.c:89: else if (cmd == W25Q_CMD_BLOCK_ERASE_32K)
      000C92 74 52            [12]  668 	mov	a,#0x52
      000C94 B5 34 30         [24]  669 	cjne	a,_W25Qxx_eraseSectorBlock_cmd_10000_56,00110$
                                    670 ;	./src/N76_W25Qxx.c:91: if (num >= BLOCK_SIZE_32K)
      000C97 C3               [12]  671 	clr	c
      000C98 E5 32            [12]  672 	mov	a,_W25Qxx_eraseSectorBlock_PARM_2
      000C9A 94 80            [12]  673 	subb	a,#0x80
      000C9C E5 33            [12]  674 	mov	a,(_W25Qxx_eraseSectorBlock_PARM_2 + 1)
      000C9E 94 00            [12]  675 	subb	a,#0x00
      000CA0 40 04            [24]  676 	jc	00104$
                                    677 ;	./src/N76_W25Qxx.c:92: return W25Qxx_ERR_PARAM;
      000CA2 75 82 02         [24]  678 	mov	dpl, #0x02
      000CA5 22               [24]  679 	ret
      000CA6                        680 00104$:
                                    681 ;	./src/N76_W25Qxx.c:93: addr = BLOCK_BYTE_32K * num;
      000CA6 A8 32            [24]  682 	mov	r0,_W25Qxx_eraseSectorBlock_PARM_2
      000CA8 A9 33            [24]  683 	mov	r1,(_W25Qxx_eraseSectorBlock_PARM_2 + 1)
      000CAA 7A 00            [12]  684 	mov	r2,#0x00
      000CAC 89 05            [24]  685 	mov	ar5,r1
      000CAE EA               [12]  686 	mov	a,r2
      000CAF 54 01            [12]  687 	anl	a,#0x01
      000CB1 A2 E0            [12]  688 	mov	c,acc.0
      000CB3 CD               [12]  689 	xch	a,r5
      000CB4 13               [12]  690 	rrc	a
      000CB5 CD               [12]  691 	xch	a,r5
      000CB6 13               [12]  692 	rrc	a
      000CB7 CD               [12]  693 	xch	a,r5
      000CB8 FE               [12]  694 	mov	r6,a
      000CB9 E8               [12]  695 	mov	a,r0
      000CBA C3               [12]  696 	clr	c
      000CBB 13               [12]  697 	rrc	a
      000CBC 4D               [12]  698 	orl	a,r5
      000CBD FD               [12]  699 	mov	r5,a
      000CBE E8               [12]  700 	mov	a,r0
      000CBF 03               [12]  701 	rr	a
      000CC0 54 80            [12]  702 	anl	a,#0x80
      000CC2 FC               [12]  703 	mov	r4,a
      000CC3 7B 00            [12]  704 	mov	r3,#0x00
      000CC5 80 20            [24]  705 	sjmp	00114$
      000CC7                        706 00110$:
                                    707 ;	./src/N76_W25Qxx.c:95: else if (cmd == W25Q_CMD_BLOCK_ERASE_64K)
      000CC7 74 D8            [12]  708 	mov	a,#0xd8
      000CC9 B5 34 1B         [24]  709 	cjne	a,_W25Qxx_eraseSectorBlock_cmd_10000_56,00114$
                                    710 ;	./src/N76_W25Qxx.c:97: if (num >= BLOCK_SIZE_64K)
      000CCC C3               [12]  711 	clr	c
      000CCD E5 32            [12]  712 	mov	a,_W25Qxx_eraseSectorBlock_PARM_2
      000CCF 94 40            [12]  713 	subb	a,#0x40
      000CD1 E5 33            [12]  714 	mov	a,(_W25Qxx_eraseSectorBlock_PARM_2 + 1)
      000CD3 94 00            [12]  715 	subb	a,#0x00
      000CD5 40 04            [24]  716 	jc	00106$
                                    717 ;	./src/N76_W25Qxx.c:98: return W25Qxx_ERR_PARAM;
      000CD7 75 82 02         [24]  718 	mov	dpl, #0x02
      000CDA 22               [24]  719 	ret
      000CDB                        720 00106$:
                                    721 ;	./src/N76_W25Qxx.c:99: addr = BLOCK_BYTE_64K * num;
      000CDB A8 32            [24]  722 	mov	r0,_W25Qxx_eraseSectorBlock_PARM_2
      000CDD A9 33            [24]  723 	mov	r1,(_W25Qxx_eraseSectorBlock_PARM_2 + 1)
      000CDF 89 06            [24]  724 	mov	ar6,r1
      000CE1 88 05            [24]  725 	mov	ar5,r0
      000CE3 7B 00            [12]  726 	mov	r3,#0x00
      000CE5 7C 00            [12]  727 	mov	r4,#0x00
      000CE7                        728 00114$:
                                    729 ;	./src/N76_W25Qxx.c:102: W25Qxx_writeEnable();
      000CE7 C0 06            [24]  730 	push	ar6
      000CE9 C0 05            [24]  731 	push	ar5
      000CEB C0 04            [24]  732 	push	ar4
      000CED C0 03            [24]  733 	push	ar3
      000CEF 12 0C 4E         [24]  734 	lcall	_W25Qxx_writeEnable
                                    735 ;	./src/N76_W25Qxx.c:104: clrb(SPI_Px_SS, SPI_PIN_SS);
      000CF2 53 90 FD         [24]  736 	anl	_p1,#0xfd
                                    737 ;	./src/N76_W25Qxx.c:106: SPI_transfer(cmd);
      000CF5 85 34 82         [24]  738 	mov	dpl, _W25Qxx_eraseSectorBlock_cmd_10000_56
      000CF8 12 07 97         [24]  739 	lcall	_SPI_transfer
      000CFB D0 03            [24]  740 	pop	ar3
      000CFD D0 04            [24]  741 	pop	ar4
      000CFF D0 05            [24]  742 	pop	ar5
      000D01 D0 06            [24]  743 	pop	ar6
                                    744 ;	./src/N76_W25Qxx.c:107: W25Qxx_writeAddr(addr);
      000D03 8B 82            [24]  745 	mov	dpl, r3
      000D05 8C 83            [24]  746 	mov	dph, r4
      000D07 8D F0            [24]  747 	mov	b, r5
      000D09 EE               [12]  748 	mov	a, r6
      000D0A 12 0B B9         [24]  749 	lcall	_W25Qxx_writeAddr
                                    750 ;	./src/N76_W25Qxx.c:109: setb(SPI_Px_SS, SPI_PIN_SS);
      000D0D 43 90 02         [24]  751 	orl	_p1,#0x02
                                    752 ;	./src/N76_W25Qxx.c:110: W25Qxx_waitIdle();
      000D10 12 0D 1A         [24]  753 	lcall	_W25Qxx_waitIdle
                                    754 ;	./src/N76_W25Qxx.c:111: W25Qxx_writeDisable();
      000D13 12 0C 54         [24]  755 	lcall	_W25Qxx_writeDisable
                                    756 ;	./src/N76_W25Qxx.c:113: return W25Qxx_OK;
      000D16 75 82 00         [24]  757 	mov	dpl, #0x00
                                    758 ;	./src/N76_W25Qxx.c:114: }
      000D19 22               [24]  759 	ret
                                    760 ;------------------------------------------------------------
                                    761 ;Allocation info for local variables in function 'W25Qxx_waitIdle'
                                    762 ;------------------------------------------------------------
                                    763 ;u8Status                  Allocated to registers 
                                    764 ;------------------------------------------------------------
                                    765 ;	./src/N76_W25Qxx.c:116: void W25Qxx_waitIdle(void)
                                    766 ;	-----------------------------------------
                                    767 ;	 function W25Qxx_waitIdle
                                    768 ;	-----------------------------------------
      000D1A                        769 _W25Qxx_waitIdle:
                                    770 ;	./src/N76_W25Qxx.c:120: clrb(SPI_Px_SS, SPI_PIN_SS);
      000D1A 53 90 FD         [24]  771 	anl	_p1,#0xfd
                                    772 ;	./src/N76_W25Qxx.c:121: do
      000D1D                        773 00101$:
                                    774 ;	./src/N76_W25Qxx.c:123: SPI_transfer(W25Q_CMD_READ_STATUS_REG1);
      000D1D 75 82 05         [24]  775 	mov	dpl, #0x05
      000D20 12 07 97         [24]  776 	lcall	_SPI_transfer
                                    777 ;	./src/N76_W25Qxx.c:124: u8Status = SPI_transfer(0xFF);
      000D23 75 82 FF         [24]  778 	mov	dpl, #0xff
      000D26 12 07 97         [24]  779 	lcall	_SPI_transfer
      000D29 E5 82            [12]  780 	mov	a, dpl
                                    781 ;	./src/N76_W25Qxx.c:125: } while (inbit(u8Status, REG1_BUSY) == 1);
      000D2B 54 01            [12]  782 	anl	a,#0x01
      000D2D FF               [12]  783 	mov	r7,a
      000D2E BF 01 02         [24]  784 	cjne	r7,#0x01,00118$
      000D31 80 EA            [24]  785 	sjmp	00101$
      000D33                        786 00118$:
                                    787 ;	./src/N76_W25Qxx.c:127: setb(SPI_Px_SS, SPI_PIN_SS);
      000D33 43 90 02         [24]  788 	orl	_p1,#0x02
                                    789 ;	./src/N76_W25Qxx.c:128: }
      000D36 22               [24]  790 	ret
                                    791 ;------------------------------------------------------------
                                    792 ;Allocation info for local variables in function 'W25Qxx_eraseVerify'
                                    793 ;------------------------------------------------------------
                                    794 ;i                         Allocated to registers r6 r7 
                                    795 ;u8Data                    Allocated to registers r5 
                                    796 ;------------------------------------------------------------
                                    797 ;	./src/N76_W25Qxx.c:130: uint8_t W25Qxx_eraseVerify(void)
                                    798 ;	-----------------------------------------
                                    799 ;	 function W25Qxx_eraseVerify
                                    800 ;	-----------------------------------------
      000D37                        801 _W25Qxx_eraseVerify:
                                    802 ;	./src/N76_W25Qxx.c:135: clrb(SPI_Px_SS, SPI_PIN_SS);
      000D37 53 90 FD         [24]  803 	anl	_p1,#0xfd
                                    804 ;	./src/N76_W25Qxx.c:137: SPI_transfer(W25Q_CMD_READ_DATA);
      000D3A 75 82 03         [24]  805 	mov	dpl, #0x03
      000D3D 12 07 97         [24]  806 	lcall	_SPI_transfer
                                    807 ;	./src/N76_W25Qxx.c:138: SPI_transfer(0x00);
      000D40 75 82 00         [24]  808 	mov	dpl, #0x00
      000D43 12 07 97         [24]  809 	lcall	_SPI_transfer
                                    810 ;	./src/N76_W25Qxx.c:139: SPI_transfer(0x00);
      000D46 75 82 00         [24]  811 	mov	dpl, #0x00
      000D49 12 07 97         [24]  812 	lcall	_SPI_transfer
                                    813 ;	./src/N76_W25Qxx.c:140: SPI_transfer(0x00);
      000D4C 75 82 00         [24]  814 	mov	dpl, #0x00
      000D4F 12 07 97         [24]  815 	lcall	_SPI_transfer
                                    816 ;	./src/N76_W25Qxx.c:142: for (i = 0; i < 256; i++)
      000D52 7E 00            [12]  817 	mov	r6,#0x00
      000D54 7F 00            [12]  818 	mov	r7,#0x00
      000D56                        819 00104$:
                                    820 ;	./src/N76_W25Qxx.c:144: u8Data = SPI_transfer(0x00);
      000D56 75 82 00         [24]  821 	mov	dpl, #0x00
      000D59 C0 07            [24]  822 	push	ar7
      000D5B C0 06            [24]  823 	push	ar6
      000D5D 12 07 97         [24]  824 	lcall	_SPI_transfer
      000D60 AD 82            [24]  825 	mov	r5, dpl
      000D62 D0 06            [24]  826 	pop	ar6
      000D64 D0 07            [24]  827 	pop	ar7
                                    828 ;	./src/N76_W25Qxx.c:145: if (u8Data != 0xFF)
      000D66 BD FF 02         [24]  829 	cjne	r5,#0xff,00126$
      000D69 80 04            [24]  830 	sjmp	00105$
      000D6B                        831 00126$:
                                    832 ;	./src/N76_W25Qxx.c:147: return W25Qxx_ERR;
      000D6B 75 82 01         [24]  833 	mov	dpl, #0x01
      000D6E 22               [24]  834 	ret
      000D6F                        835 00105$:
                                    836 ;	./src/N76_W25Qxx.c:142: for (i = 0; i < 256; i++)
      000D6F 0E               [12]  837 	inc	r6
      000D70 BE 00 01         [24]  838 	cjne	r6,#0x00,00127$
      000D73 0F               [12]  839 	inc	r7
      000D74                        840 00127$:
      000D74 8E 04            [24]  841 	mov	ar4,r6
      000D76 8F 05            [24]  842 	mov	ar5,r7
      000D78 74 FF            [12]  843 	mov	a,#0x100 - 0x01
      000D7A 2D               [12]  844 	add	a,r5
      000D7B 50 D9            [24]  845 	jnc	00104$
                                    846 ;	./src/N76_W25Qxx.c:151: setb(SPI_Px_SS, SPI_PIN_SS);
      000D7D 43 90 02         [24]  847 	orl	_p1,#0x02
                                    848 ;	./src/N76_W25Qxx.c:152: return W25Qxx_OK;
      000D80 75 82 00         [24]  849 	mov	dpl, #0x00
                                    850 ;	./src/N76_W25Qxx.c:153: }
      000D83 22               [24]  851 	ret
                                    852 ;------------------------------------------------------------
                                    853 ;Allocation info for local variables in function 'W25Qxx_writePage'
                                    854 ;------------------------------------------------------------
                                    855 ;data                      Allocated with name '_W25Qxx_writePage_PARM_2'
                                    856 ;pageNum                   Allocated to registers r4 r5 r6 r7 
                                    857 ;i                         Allocated to registers r4 r5 r6 r7 
                                    858 ;------------------------------------------------------------
                                    859 ;	./src/N76_W25Qxx.c:155: void W25Qxx_writePage(uint32_t pageNum, uint8_t *data)
                                    860 ;	-----------------------------------------
                                    861 ;	 function W25Qxx_writePage
                                    862 ;	-----------------------------------------
      000D84                        863 _W25Qxx_writePage:
      000D84 AC 82            [24]  864 	mov	r4,dpl
      000D86 AD 83            [24]  865 	mov	r5,dph
      000D88 AE F0            [24]  866 	mov	r6,b
                                    867 ;	./src/N76_W25Qxx.c:158: i = (uint32_t)pageNum * (uint32_t)PAGE_BYTE;
      000D8A 8E 07            [24]  868 	mov	ar7,r6
      000D8C 8D 06            [24]  869 	mov	ar6,r5
      000D8E 8C 05            [24]  870 	mov	ar5,r4
      000D90 7C 00            [12]  871 	mov	r4,#0x00
                                    872 ;	./src/N76_W25Qxx.c:160: W25Qxx_writeEnable();
      000D92 C0 07            [24]  873 	push	ar7
      000D94 C0 06            [24]  874 	push	ar6
      000D96 C0 05            [24]  875 	push	ar5
      000D98 C0 04            [24]  876 	push	ar4
      000D9A 12 0C 4E         [24]  877 	lcall	_W25Qxx_writeEnable
                                    878 ;	./src/N76_W25Qxx.c:162: clrb(SPI_Px_SS, SPI_PIN_SS);
      000D9D 53 90 FD         [24]  879 	anl	_p1,#0xfd
                                    880 ;	./src/N76_W25Qxx.c:163: SPI_transfer(W25Q_CMD_PAGE_PROGRAM);
      000DA0 75 82 02         [24]  881 	mov	dpl, #0x02
      000DA3 12 07 97         [24]  882 	lcall	_SPI_transfer
      000DA6 D0 04            [24]  883 	pop	ar4
      000DA8 D0 05            [24]  884 	pop	ar5
      000DAA D0 06            [24]  885 	pop	ar6
      000DAC D0 07            [24]  886 	pop	ar7
                                    887 ;	./src/N76_W25Qxx.c:164: W25Qxx_writeAddr(i);
      000DAE 8C 82            [24]  888 	mov	dpl, r4
      000DB0 8D 83            [24]  889 	mov	dph, r5
      000DB2 8E F0            [24]  890 	mov	b, r6
      000DB4 EF               [12]  891 	mov	a, r7
      000DB5 12 0B B9         [24]  892 	lcall	_W25Qxx_writeAddr
                                    893 ;	./src/N76_W25Qxx.c:167: for (i = 0; i < PAGE_BYTE; i++)
      000DB8 7C 00            [12]  894 	mov	r4,#0x00
      000DBA 7D 00            [12]  895 	mov	r5,#0x00
      000DBC 7E 00            [12]  896 	mov	r6,#0x00
      000DBE 7F 00            [12]  897 	mov	r7,#0x00
      000DC0                        898 00102$:
                                    899 ;	./src/N76_W25Qxx.c:169: SPI_transfer((uint8_t)data[i]);
      000DC0 EC               [12]  900 	mov	a,r4
      000DC1 25 35            [12]  901 	add	a, _W25Qxx_writePage_PARM_2
      000DC3 F9               [12]  902 	mov	r1,a
      000DC4 ED               [12]  903 	mov	a,r5
      000DC5 35 36            [12]  904 	addc	a, (_W25Qxx_writePage_PARM_2 + 1)
      000DC7 FA               [12]  905 	mov	r2,a
      000DC8 AB 37            [24]  906 	mov	r3,(_W25Qxx_writePage_PARM_2 + 2)
      000DCA 89 82            [24]  907 	mov	dpl,r1
      000DCC 8A 83            [24]  908 	mov	dph,r2
      000DCE 8B F0            [24]  909 	mov	b,r3
      000DD0 12 12 5A         [24]  910 	lcall	__gptrget
      000DD3 F5 82            [12]  911 	mov	dpl,a
      000DD5 C0 07            [24]  912 	push	ar7
      000DD7 C0 06            [24]  913 	push	ar6
      000DD9 C0 05            [24]  914 	push	ar5
      000DDB C0 04            [24]  915 	push	ar4
      000DDD 12 07 97         [24]  916 	lcall	_SPI_transfer
      000DE0 D0 04            [24]  917 	pop	ar4
      000DE2 D0 05            [24]  918 	pop	ar5
      000DE4 D0 06            [24]  919 	pop	ar6
      000DE6 D0 07            [24]  920 	pop	ar7
                                    921 ;	./src/N76_W25Qxx.c:167: for (i = 0; i < PAGE_BYTE; i++)
      000DE8 0C               [12]  922 	inc	r4
      000DE9 BC 00 09         [24]  923 	cjne	r4,#0x00,00119$
      000DEC 0D               [12]  924 	inc	r5
      000DED BD 00 05         [24]  925 	cjne	r5,#0x00,00119$
      000DF0 0E               [12]  926 	inc	r6
      000DF1 BE 00 01         [24]  927 	cjne	r6,#0x00,00119$
      000DF4 0F               [12]  928 	inc	r7
      000DF5                        929 00119$:
      000DF5 C3               [12]  930 	clr	c
      000DF6 ED               [12]  931 	mov	a,r5
      000DF7 94 01            [12]  932 	subb	a,#0x01
      000DF9 EE               [12]  933 	mov	a,r6
      000DFA 94 00            [12]  934 	subb	a,#0x00
      000DFC EF               [12]  935 	mov	a,r7
      000DFD 94 00            [12]  936 	subb	a,#0x00
      000DFF 40 BF            [24]  937 	jc	00102$
                                    938 ;	./src/N76_W25Qxx.c:171: setb(SPI_Px_SS, SPI_PIN_SS);
      000E01 43 90 02         [24]  939 	orl	_p1,#0x02
                                    940 ;	./src/N76_W25Qxx.c:173: W25Qxx_waitIdle(); // wait ultil done
      000E04 12 0D 1A         [24]  941 	lcall	_W25Qxx_waitIdle
                                    942 ;	./src/N76_W25Qxx.c:174: W25Qxx_writeDisable();
                                    943 ;	./src/N76_W25Qxx.c:175: }
      000E07 02 0C 54         [24]  944 	ljmp	_W25Qxx_writeDisable
                                    945 ;------------------------------------------------------------
                                    946 ;Allocation info for local variables in function 'W25Qxx_writeBuff'
                                    947 ;------------------------------------------------------------
                                    948 ;data                      Allocated with name '_W25Qxx_writeBuff_PARM_2'
                                    949 ;len                       Allocated with name '_W25Qxx_writeBuff_PARM_3'
                                    950 ;addr                      Allocated to registers r4 r5 r6 r7 
                                    951 ;i                         Allocated to registers r6 r7 
                                    952 ;------------------------------------------------------------
                                    953 ;	./src/N76_W25Qxx.c:177: void W25Qxx_writeBuff(uint32_t addr, uint8_t *data, uint16_t len)
                                    954 ;	-----------------------------------------
                                    955 ;	 function W25Qxx_writeBuff
                                    956 ;	-----------------------------------------
      000E0A                        957 _W25Qxx_writeBuff:
      000E0A AC 82            [24]  958 	mov	r4,dpl
      000E0C AD 83            [24]  959 	mov	r5,dph
      000E0E AE F0            [24]  960 	mov	r6,b
      000E10 FF               [12]  961 	mov	r7,a
                                    962 ;	./src/N76_W25Qxx.c:181: W25Qxx_writeEnable();
      000E11 C0 07            [24]  963 	push	ar7
      000E13 C0 06            [24]  964 	push	ar6
      000E15 C0 05            [24]  965 	push	ar5
      000E17 C0 04            [24]  966 	push	ar4
      000E19 12 0C 4E         [24]  967 	lcall	_W25Qxx_writeEnable
                                    968 ;	./src/N76_W25Qxx.c:182: clrb(SPI_Px_SS, SPI_PIN_SS);
      000E1C 53 90 FD         [24]  969 	anl	_p1,#0xfd
                                    970 ;	./src/N76_W25Qxx.c:184: SPI_transfer(W25Q_CMD_PAGE_PROGRAM);
      000E1F 75 82 02         [24]  971 	mov	dpl, #0x02
      000E22 12 07 97         [24]  972 	lcall	_SPI_transfer
      000E25 D0 04            [24]  973 	pop	ar4
      000E27 D0 05            [24]  974 	pop	ar5
      000E29 D0 06            [24]  975 	pop	ar6
      000E2B D0 07            [24]  976 	pop	ar7
                                    977 ;	./src/N76_W25Qxx.c:185: W25Qxx_writeAddr(addr);
      000E2D 8C 82            [24]  978 	mov	dpl, r4
      000E2F 8D 83            [24]  979 	mov	dph, r5
      000E31 8E F0            [24]  980 	mov	b, r6
      000E33 EF               [12]  981 	mov	a, r7
      000E34 12 0B B9         [24]  982 	lcall	_W25Qxx_writeAddr
                                    983 ;	./src/N76_W25Qxx.c:188: for (i = 0; i < len; i++)
      000E37 7E 00            [12]  984 	mov	r6,#0x00
      000E39 7F 00            [12]  985 	mov	r7,#0x00
      000E3B                        986 00103$:
      000E3B C3               [12]  987 	clr	c
      000E3C EE               [12]  988 	mov	a,r6
      000E3D 95 3B            [12]  989 	subb	a,_W25Qxx_writeBuff_PARM_3
      000E3F EF               [12]  990 	mov	a,r7
      000E40 95 3C            [12]  991 	subb	a,(_W25Qxx_writeBuff_PARM_3 + 1)
      000E42 50 27            [24]  992 	jnc	00101$
                                    993 ;	./src/N76_W25Qxx.c:190: SPI_transfer((uint8_t)data[i]);
      000E44 EE               [12]  994 	mov	a,r6
      000E45 25 38            [12]  995 	add	a, _W25Qxx_writeBuff_PARM_2
      000E47 FB               [12]  996 	mov	r3,a
      000E48 EF               [12]  997 	mov	a,r7
      000E49 35 39            [12]  998 	addc	a, (_W25Qxx_writeBuff_PARM_2 + 1)
      000E4B FC               [12]  999 	mov	r4,a
      000E4C AD 3A            [24] 1000 	mov	r5,(_W25Qxx_writeBuff_PARM_2 + 2)
      000E4E 8B 82            [24] 1001 	mov	dpl,r3
      000E50 8C 83            [24] 1002 	mov	dph,r4
      000E52 8D F0            [24] 1003 	mov	b,r5
      000E54 12 12 5A         [24] 1004 	lcall	__gptrget
      000E57 F5 82            [12] 1005 	mov	dpl,a
      000E59 C0 07            [24] 1006 	push	ar7
      000E5B C0 06            [24] 1007 	push	ar6
      000E5D 12 07 97         [24] 1008 	lcall	_SPI_transfer
      000E60 D0 06            [24] 1009 	pop	ar6
      000E62 D0 07            [24] 1010 	pop	ar7
                                   1011 ;	./src/N76_W25Qxx.c:188: for (i = 0; i < len; i++)
      000E64 0E               [12] 1012 	inc	r6
      000E65 BE 00 D3         [24] 1013 	cjne	r6,#0x00,00103$
      000E68 0F               [12] 1014 	inc	r7
      000E69 80 D0            [24] 1015 	sjmp	00103$
      000E6B                       1016 00101$:
                                   1017 ;	./src/N76_W25Qxx.c:193: setb(SPI_Px_SS, SPI_PIN_SS);
      000E6B 43 90 02         [24] 1018 	orl	_p1,#0x02
                                   1019 ;	./src/N76_W25Qxx.c:194: W25Qxx_waitIdle(); // wait ultil done
      000E6E 12 0D 1A         [24] 1020 	lcall	_W25Qxx_waitIdle
                                   1021 ;	./src/N76_W25Qxx.c:195: W25Qxx_writeDisable();
                                   1022 ;	./src/N76_W25Qxx.c:196: }
      000E71 02 0C 54         [24] 1023 	ljmp	_W25Qxx_writeDisable
                                   1024 ;------------------------------------------------------------
                                   1025 ;Allocation info for local variables in function 'W25Qxx_readPage'
                                   1026 ;------------------------------------------------------------
                                   1027 ;data                      Allocated with name '_W25Qxx_readPage_PARM_2'
                                   1028 ;pageNum                   Allocated to registers r4 r5 r6 r7 
                                   1029 ;i                         Allocated to registers r4 r5 r6 r7 
                                   1030 ;------------------------------------------------------------
                                   1031 ;	./src/N76_W25Qxx.c:198: void W25Qxx_readPage(uint32_t pageNum, uint8_t *data)
                                   1032 ;	-----------------------------------------
                                   1033 ;	 function W25Qxx_readPage
                                   1034 ;	-----------------------------------------
      000E74                       1035 _W25Qxx_readPage:
      000E74 AC 82            [24] 1036 	mov	r4,dpl
      000E76 AD 83            [24] 1037 	mov	r5,dph
      000E78 AE F0            [24] 1038 	mov	r6,b
                                   1039 ;	./src/N76_W25Qxx.c:201: i = pageNum * PAGE_BYTE;
      000E7A 8E 07            [24] 1040 	mov	ar7,r6
      000E7C 8D 06            [24] 1041 	mov	ar6,r5
      000E7E 8C 05            [24] 1042 	mov	ar5,r4
      000E80 7C 00            [12] 1043 	mov	r4,#0x00
                                   1044 ;	./src/N76_W25Qxx.c:203: clrb(SPI_Px_SS, SPI_PIN_SS);
      000E82 53 90 FD         [24] 1045 	anl	_p1,#0xfd
                                   1046 ;	./src/N76_W25Qxx.c:204: SPI_transfer(W25Q_CMD_READ_DATA);
      000E85 75 82 03         [24] 1047 	mov	dpl, #0x03
      000E88 C0 07            [24] 1048 	push	ar7
      000E8A C0 06            [24] 1049 	push	ar6
      000E8C C0 05            [24] 1050 	push	ar5
      000E8E C0 04            [24] 1051 	push	ar4
      000E90 12 07 97         [24] 1052 	lcall	_SPI_transfer
      000E93 D0 04            [24] 1053 	pop	ar4
      000E95 D0 05            [24] 1054 	pop	ar5
      000E97 D0 06            [24] 1055 	pop	ar6
      000E99 D0 07            [24] 1056 	pop	ar7
                                   1057 ;	./src/N76_W25Qxx.c:205: W25Qxx_writeAddr(i);
      000E9B 8C 82            [24] 1058 	mov	dpl, r4
      000E9D 8D 83            [24] 1059 	mov	dph, r5
      000E9F 8E F0            [24] 1060 	mov	b, r6
      000EA1 EF               [12] 1061 	mov	a, r7
      000EA2 12 0B B9         [24] 1062 	lcall	_W25Qxx_writeAddr
                                   1063 ;	./src/N76_W25Qxx.c:207: for (i = 0; i < PAGE_BYTE; i++)
      000EA5 7C 00            [12] 1064 	mov	r4,#0x00
      000EA7 7D 00            [12] 1065 	mov	r5,#0x00
      000EA9 7E 00            [12] 1066 	mov	r6,#0x00
      000EAB 7F 00            [12] 1067 	mov	r7,#0x00
      000EAD                       1068 00102$:
                                   1069 ;	./src/N76_W25Qxx.c:209: data[i] = SPI_transfer(0x00);
      000EAD EC               [12] 1070 	mov	a,r4
      000EAE 25 3D            [12] 1071 	add	a, _W25Qxx_readPage_PARM_2
      000EB0 F9               [12] 1072 	mov	r1,a
      000EB1 ED               [12] 1073 	mov	a,r5
      000EB2 35 3E            [12] 1074 	addc	a, (_W25Qxx_readPage_PARM_2 + 1)
      000EB4 FA               [12] 1075 	mov	r2,a
      000EB5 AB 3F            [24] 1076 	mov	r3,(_W25Qxx_readPage_PARM_2 + 2)
      000EB7 75 82 00         [24] 1077 	mov	dpl, #0x00
      000EBA C0 07            [24] 1078 	push	ar7
      000EBC C0 06            [24] 1079 	push	ar6
      000EBE C0 05            [24] 1080 	push	ar5
      000EC0 C0 04            [24] 1081 	push	ar4
      000EC2 C0 03            [24] 1082 	push	ar3
      000EC4 C0 02            [24] 1083 	push	ar2
      000EC6 C0 01            [24] 1084 	push	ar1
      000EC8 12 07 97         [24] 1085 	lcall	_SPI_transfer
      000ECB A8 82            [24] 1086 	mov	r0, dpl
      000ECD D0 01            [24] 1087 	pop	ar1
      000ECF D0 02            [24] 1088 	pop	ar2
      000ED1 D0 03            [24] 1089 	pop	ar3
      000ED3 D0 04            [24] 1090 	pop	ar4
      000ED5 D0 05            [24] 1091 	pop	ar5
      000ED7 D0 06            [24] 1092 	pop	ar6
      000ED9 D0 07            [24] 1093 	pop	ar7
      000EDB 89 82            [24] 1094 	mov	dpl,r1
      000EDD 8A 83            [24] 1095 	mov	dph,r2
      000EDF 8B F0            [24] 1096 	mov	b,r3
      000EE1 E8               [12] 1097 	mov	a,r0
      000EE2 12 10 BA         [24] 1098 	lcall	__gptrput
                                   1099 ;	./src/N76_W25Qxx.c:207: for (i = 0; i < PAGE_BYTE; i++)
      000EE5 0C               [12] 1100 	inc	r4
      000EE6 BC 00 09         [24] 1101 	cjne	r4,#0x00,00119$
      000EE9 0D               [12] 1102 	inc	r5
      000EEA BD 00 05         [24] 1103 	cjne	r5,#0x00,00119$
      000EED 0E               [12] 1104 	inc	r6
      000EEE BE 00 01         [24] 1105 	cjne	r6,#0x00,00119$
      000EF1 0F               [12] 1106 	inc	r7
      000EF2                       1107 00119$:
      000EF2 C3               [12] 1108 	clr	c
      000EF3 ED               [12] 1109 	mov	a,r5
      000EF4 94 01            [12] 1110 	subb	a,#0x01
      000EF6 EE               [12] 1111 	mov	a,r6
      000EF7 94 00            [12] 1112 	subb	a,#0x00
      000EF9 EF               [12] 1113 	mov	a,r7
      000EFA 94 00            [12] 1114 	subb	a,#0x00
      000EFC 40 AF            [24] 1115 	jc	00102$
                                   1116 ;	./src/N76_W25Qxx.c:211: setb(SPI_Px_SS, SPI_PIN_SS);
      000EFE 43 90 02         [24] 1117 	orl	_p1,#0x02
                                   1118 ;	./src/N76_W25Qxx.c:212: } //-----------------------------------------------------------------------------------------------------------
      000F01 22               [24] 1119 	ret
                                   1120 ;------------------------------------------------------------
                                   1121 ;Allocation info for local variables in function 'W25Qxx_readBuff'
                                   1122 ;------------------------------------------------------------
                                   1123 ;data                      Allocated with name '_W25Qxx_readBuff_PARM_2'
                                   1124 ;len                       Allocated with name '_W25Qxx_readBuff_PARM_3'
                                   1125 ;addr                      Allocated to registers r4 r5 r6 r7 
                                   1126 ;i                         Allocated to registers r6 r7 
                                   1127 ;------------------------------------------------------------
                                   1128 ;	./src/N76_W25Qxx.c:213: void W25Qxx_readBuff(uint32_t addr, uint8_t *data, uint32_t len)
                                   1129 ;	-----------------------------------------
                                   1130 ;	 function W25Qxx_readBuff
                                   1131 ;	-----------------------------------------
      000F02                       1132 _W25Qxx_readBuff:
      000F02 AC 82            [24] 1133 	mov	r4,dpl
      000F04 AD 83            [24] 1134 	mov	r5,dph
      000F06 AE F0            [24] 1135 	mov	r6,b
      000F08 FF               [12] 1136 	mov	r7,a
                                   1137 ;	./src/N76_W25Qxx.c:217: clrb(SPI_Px_SS, SPI_PIN_SS);
      000F09 53 90 FD         [24] 1138 	anl	_p1,#0xfd
                                   1139 ;	./src/N76_W25Qxx.c:218: SPI_transfer(W25Q_CMD_READ_DATA);
      000F0C 75 82 03         [24] 1140 	mov	dpl, #0x03
      000F0F C0 07            [24] 1141 	push	ar7
      000F11 C0 06            [24] 1142 	push	ar6
      000F13 C0 05            [24] 1143 	push	ar5
      000F15 C0 04            [24] 1144 	push	ar4
      000F17 12 07 97         [24] 1145 	lcall	_SPI_transfer
      000F1A D0 04            [24] 1146 	pop	ar4
      000F1C D0 05            [24] 1147 	pop	ar5
      000F1E D0 06            [24] 1148 	pop	ar6
      000F20 D0 07            [24] 1149 	pop	ar7
                                   1150 ;	./src/N76_W25Qxx.c:219: W25Qxx_writeAddr(addr);
      000F22 8C 82            [24] 1151 	mov	dpl, r4
      000F24 8D 83            [24] 1152 	mov	dph, r5
      000F26 8E F0            [24] 1153 	mov	b, r6
      000F28 EF               [12] 1154 	mov	a, r7
      000F29 12 0B B9         [24] 1155 	lcall	_W25Qxx_writeAddr
                                   1156 ;	./src/N76_W25Qxx.c:221: for (i = 0; i < len; i++)
      000F2C 7E 00            [12] 1157 	mov	r6,#0x00
      000F2E 7F 00            [12] 1158 	mov	r7,#0x00
      000F30                       1159 00103$:
      000F30 8E 02            [24] 1160 	mov	ar2,r6
      000F32 8F 03            [24] 1161 	mov	ar3,r7
      000F34 7C 00            [12] 1162 	mov	r4,#0x00
      000F36 7D 00            [12] 1163 	mov	r5,#0x00
      000F38 C3               [12] 1164 	clr	c
      000F39 EA               [12] 1165 	mov	a,r2
      000F3A 95 43            [12] 1166 	subb	a,_W25Qxx_readBuff_PARM_3
      000F3C EB               [12] 1167 	mov	a,r3
      000F3D 95 44            [12] 1168 	subb	a,(_W25Qxx_readBuff_PARM_3 + 1)
      000F3F EC               [12] 1169 	mov	a,r4
      000F40 95 45            [12] 1170 	subb	a,(_W25Qxx_readBuff_PARM_3 + 2)
      000F42 ED               [12] 1171 	mov	a,r5
      000F43 95 46            [12] 1172 	subb	a,(_W25Qxx_readBuff_PARM_3 + 3)
      000F45 50 37            [24] 1173 	jnc	00101$
                                   1174 ;	./src/N76_W25Qxx.c:223: data[i] = SPI_transfer(0x00);
      000F47 EE               [12] 1175 	mov	a,r6
      000F48 25 40            [12] 1176 	add	a, _W25Qxx_readBuff_PARM_2
      000F4A FB               [12] 1177 	mov	r3,a
      000F4B EF               [12] 1178 	mov	a,r7
      000F4C 35 41            [12] 1179 	addc	a, (_W25Qxx_readBuff_PARM_2 + 1)
      000F4E FC               [12] 1180 	mov	r4,a
      000F4F AD 42            [24] 1181 	mov	r5,(_W25Qxx_readBuff_PARM_2 + 2)
      000F51 75 82 00         [24] 1182 	mov	dpl, #0x00
      000F54 C0 07            [24] 1183 	push	ar7
      000F56 C0 06            [24] 1184 	push	ar6
      000F58 C0 05            [24] 1185 	push	ar5
      000F5A C0 04            [24] 1186 	push	ar4
      000F5C C0 03            [24] 1187 	push	ar3
      000F5E 12 07 97         [24] 1188 	lcall	_SPI_transfer
      000F61 AA 82            [24] 1189 	mov	r2, dpl
      000F63 D0 03            [24] 1190 	pop	ar3
      000F65 D0 04            [24] 1191 	pop	ar4
      000F67 D0 05            [24] 1192 	pop	ar5
      000F69 D0 06            [24] 1193 	pop	ar6
      000F6B D0 07            [24] 1194 	pop	ar7
      000F6D 8B 82            [24] 1195 	mov	dpl,r3
      000F6F 8C 83            [24] 1196 	mov	dph,r4
      000F71 8D F0            [24] 1197 	mov	b,r5
      000F73 EA               [12] 1198 	mov	a,r2
      000F74 12 10 BA         [24] 1199 	lcall	__gptrput
                                   1200 ;	./src/N76_W25Qxx.c:221: for (i = 0; i < len; i++)
      000F77 0E               [12] 1201 	inc	r6
      000F78 BE 00 B5         [24] 1202 	cjne	r6,#0x00,00103$
      000F7B 0F               [12] 1203 	inc	r7
      000F7C 80 B2            [24] 1204 	sjmp	00103$
      000F7E                       1205 00101$:
                                   1206 ;	./src/N76_W25Qxx.c:225: setb(SPI_Px_SS, SPI_PIN_SS);
      000F7E 43 90 02         [24] 1207 	orl	_p1,#0x02
                                   1208 ;	./src/N76_W25Qxx.c:226: }
      000F81 22               [24] 1209 	ret
                                   1210 ;------------------------------------------------------------
                                   1211 ;Allocation info for local variables in function 'W25Qxx_writeVerify'
                                   1212 ;------------------------------------------------------------
                                   1213 ;i                         Allocated to registers r6 r7 
                                   1214 ;u8Data                    Allocated to registers r5 
                                   1215 ;------------------------------------------------------------
                                   1216 ;	./src/N76_W25Qxx.c:228: uint8_t W25Qxx_writeVerify(void)
                                   1217 ;	-----------------------------------------
                                   1218 ;	 function W25Qxx_writeVerify
                                   1219 ;	-----------------------------------------
      000F82                       1220 _W25Qxx_writeVerify:
                                   1221 ;	./src/N76_W25Qxx.c:233: clrb(SPI_Px_SS, SPI_PIN_SS);
      000F82 53 90 FD         [24] 1222 	anl	_p1,#0xfd
                                   1223 ;	./src/N76_W25Qxx.c:235: SPI_transfer(W25Q_CMD_READ_DATA);
      000F85 75 82 03         [24] 1224 	mov	dpl, #0x03
      000F88 12 07 97         [24] 1225 	lcall	_SPI_transfer
                                   1226 ;	./src/N76_W25Qxx.c:236: SPI_transfer(0x00);
      000F8B 75 82 00         [24] 1227 	mov	dpl, #0x00
      000F8E 12 07 97         [24] 1228 	lcall	_SPI_transfer
                                   1229 ;	./src/N76_W25Qxx.c:237: SPI_transfer(0x00);
      000F91 75 82 00         [24] 1230 	mov	dpl, #0x00
      000F94 12 07 97         [24] 1231 	lcall	_SPI_transfer
                                   1232 ;	./src/N76_W25Qxx.c:238: SPI_transfer(0x00);
      000F97 75 82 00         [24] 1233 	mov	dpl, #0x00
      000F9A 12 07 97         [24] 1234 	lcall	_SPI_transfer
                                   1235 ;	./src/N76_W25Qxx.c:240: for (i = 0; i < 256; i++)
      000F9D 7E 00            [12] 1236 	mov	r6,#0x00
      000F9F 7F 00            [12] 1237 	mov	r7,#0x00
      000FA1                       1238 00104$:
                                   1239 ;	./src/N76_W25Qxx.c:242: u8Data = SPI_transfer(0x00);
      000FA1 75 82 00         [24] 1240 	mov	dpl, #0x00
      000FA4 C0 07            [24] 1241 	push	ar7
      000FA6 C0 06            [24] 1242 	push	ar6
      000FA8 12 07 97         [24] 1243 	lcall	_SPI_transfer
      000FAB AD 82            [24] 1244 	mov	r5, dpl
      000FAD D0 06            [24] 1245 	pop	ar6
      000FAF D0 07            [24] 1246 	pop	ar7
                                   1247 ;	./src/N76_W25Qxx.c:244: if (u8Data != (uint8_t)i)
      000FB1 8E 04            [24] 1248 	mov	ar4,r6
      000FB3 ED               [12] 1249 	mov	a,r5
      000FB4 B5 04 02         [24] 1250 	cjne	a,ar4,00126$
      000FB7 80 04            [24] 1251 	sjmp	00105$
      000FB9                       1252 00126$:
                                   1253 ;	./src/N76_W25Qxx.c:246: return W25Qxx_ERR;
      000FB9 75 82 01         [24] 1254 	mov	dpl, #0x01
      000FBC 22               [24] 1255 	ret
      000FBD                       1256 00105$:
                                   1257 ;	./src/N76_W25Qxx.c:240: for (i = 0; i < 256; i++)
      000FBD 0E               [12] 1258 	inc	r6
      000FBE BE 00 01         [24] 1259 	cjne	r6,#0x00,00127$
      000FC1 0F               [12] 1260 	inc	r7
      000FC2                       1261 00127$:
      000FC2 8E 04            [24] 1262 	mov	ar4,r6
      000FC4 8F 05            [24] 1263 	mov	ar5,r7
      000FC6 74 FF            [12] 1264 	mov	a,#0x100 - 0x01
      000FC8 2D               [12] 1265 	add	a,r5
      000FC9 50 D6            [24] 1266 	jnc	00104$
                                   1267 ;	./src/N76_W25Qxx.c:249: setb(SPI_Px_SS, SPI_PIN_SS);
      000FCB 43 90 02         [24] 1268 	orl	_p1,#0x02
                                   1269 ;	./src/N76_W25Qxx.c:251: return W25Qxx_OK;
      000FCE 75 82 00         [24] 1270 	mov	dpl, #0x00
                                   1271 ;	./src/N76_W25Qxx.c:252: }
      000FD1 22               [24] 1272 	ret
                                   1273 	.area CSEG    (CODE)
                                   1274 	.area CONST   (CODE)
                                   1275 	.area CONST   (CODE)
      0012EF                       1276 ___str_0:
      0012EF 0A                    1277 	.db 0x0a
      0012F0 2A 20 20 53 50 49 20  1278 	.ascii "*  SPI Error, please check the connection between MCU and SP"
             45 72 72 6F 72 2C 20
             70 6C 65 61 73 65 20
             63 68 65 63 6B 20 74
             68 65 20 63 6F 6E 6E
             65 63 74 69 6F 6E 20
             62 65 74 77 65 65 6E
             20 4D 43 55 20 61 6E
             64 20 53 50
      00132C 49 20 46 6C 61 73 68  1279 	.ascii "I Flash"
      001333 00                    1280 	.db 0x00
                                   1281 	.area CSEG    (CODE)
                                   1282 	.area XINIT   (CODE)
                                   1283 	.area CABS    (ABS,CODE)
