                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 4.2.0 #13081 (Linux)
                                      4 ;--------------------------------------------------------
                                      5 	.module include
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
                                    147 	.globl __delay_ms
                                    148 	.globl __delay_us
                                    149 ;--------------------------------------------------------
                                    150 ; special function registers
                                    151 ;--------------------------------------------------------
                                    152 	.area RSEG    (ABS,DATA)
      000000                        153 	.org 0x0000
                           000080   154 _p0	=	0x0080
                           000081   155 _sp	=	0x0081
                           000082   156 _dpl	=	0x0082
                           000083   157 _dph	=	0x0083
                           000084   158 _rctrim0	=	0x0084
                           000085   159 _rctrim1	=	0x0085
                           000086   160 _rwk	=	0x0086
                           000087   161 _pcon	=	0x0087
                           000088   162 _tcon	=	0x0088
                           000089   163 _tmod	=	0x0089
                           00008A   164 _tl0	=	0x008a
                           00008B   165 _tl1	=	0x008b
                           00008C   166 _th0	=	0x008c
                           00008D   167 _th1	=	0x008d
                           00008E   168 _ckcon	=	0x008e
                           00008F   169 _wkcon	=	0x008f
                           000090   170 _p1	=	0x0090
                           000091   171 _sfrs	=	0x0091
                           000092   172 _capcon0	=	0x0092
                           000093   173 _capcon1	=	0x0093
                           000094   174 _capcon2	=	0x0094
                           000095   175 _ckdiv	=	0x0095
                           000096   176 _ckswt	=	0x0096
                           000097   177 _cken	=	0x0097
                           000098   178 _scon	=	0x0098
                           000099   179 _sbuf	=	0x0099
                           00009A   180 _sbuf_1	=	0x009a
                           00009B   181 _eie	=	0x009b
                           00009C   182 _eie1	=	0x009c
                           00009F   183 _chpcon	=	0x009f
                           0000A0   184 _p2	=	0x00a0
                           0000A2   185 _auxr1	=	0x00a2
                           0000A3   186 _bodcon0	=	0x00a3
                           0000A4   187 _iaptrg	=	0x00a4
                           0000A5   188 _iapuen	=	0x00a5
                           0000A6   189 _iapal	=	0x00a6
                           0000A7   190 _iapah	=	0x00a7
                           0000A8   191 _ie	=	0x00a8
                           0000A9   192 _saddr	=	0x00a9
                           0000AA   193 _wdcon	=	0x00aa
                           0000AB   194 _bodcon1	=	0x00ab
                           0000AC   195 _p3m1	=	0x00ac
                           0000AC   196 _p3s	=	0x00ac
                           0000AD   197 _p3m2	=	0x00ad
                           0000AD   198 _p3sr	=	0x00ad
                           0000AE   199 _iapfd	=	0x00ae
                           0000AF   200 _iapcn	=	0x00af
                           0000B0   201 _p3	=	0x00b0
                           0000B1   202 _p0m1	=	0x00b1
                           0000B1   203 _p0s	=	0x00b1
                           0000B2   204 _p0m2	=	0x00b2
                           0000B2   205 _p0sr	=	0x00b2
                           0000B3   206 _p1m1	=	0x00b3
                           0000B3   207 _p1s	=	0x00b3
                           0000B4   208 _p1m2	=	0x00b4
                           0000B4   209 _p1sr	=	0x00b4
                           0000B5   210 _p2s	=	0x00b5
                           0000B7   211 _iph	=	0x00b7
                           0000B7   212 _pwmintc	=	0x00b7
                           0000B8   213 _ip	=	0x00b8
                           0000B9   214 _saden	=	0x00b9
                           0000BA   215 _saden_1	=	0x00ba
                           0000BB   216 _saddr_1	=	0x00bb
                           0000BC   217 _i2dat	=	0x00bc
                           0000BD   218 _i2stat	=	0x00bd
                           0000BE   219 _i2clk	=	0x00be
                           0000BF   220 _i2toc	=	0x00bf
                           0000C0   221 _i2con	=	0x00c0
                           0000C1   222 _i2addr	=	0x00c1
                           0000C2   223 _adcrl	=	0x00c2
                           0000C3   224 _adcrh	=	0x00c3
                           0000C4   225 _t3con	=	0x00c4
                           0000C4   226 _pwm4h	=	0x00c4
                           0000C5   227 _rl3	=	0x00c5
                           0000C5   228 _pwm5h	=	0x00c5
                           0000C6   229 _rh3	=	0x00c6
                           0000C6   230 _piocon1	=	0x00c6
                           0000C7   231 _ta	=	0x00c7
                           0000C8   232 _t2con	=	0x00c8
                           0000C9   233 _t2mod	=	0x00c9
                           0000CA   234 _rcmp2l	=	0x00ca
                           0000CB   235 _rcmp2h	=	0x00cb
                           0000CC   236 _tl2	=	0x00cc
                           0000CC   237 _pwm4l	=	0x00cc
                           0000CD   238 _th2	=	0x00cd
                           0000CD   239 _pwm5l	=	0x00cd
                           0000CE   240 _adcmpl	=	0x00ce
                           0000CF   241 _adcmph	=	0x00cf
                           0000D0   242 _psw	=	0x00d0
                           0000D1   243 _pwmph	=	0x00d1
                           0000D2   244 _pwm0h	=	0x00d2
                           0000D3   245 _pwm1h	=	0x00d3
                           0000D4   246 _pwm2h	=	0x00d4
                           0000D5   247 _pwm3h	=	0x00d5
                           0000D6   248 _pnp	=	0x00d6
                           0000D7   249 _fbd	=	0x00d7
                           0000D8   250 _pwmcon0	=	0x00d8
                           0000D9   251 _pwmpl	=	0x00d9
                           0000DA   252 _pwm0l	=	0x00da
                           0000DB   253 _pwm1l	=	0x00db
                           0000DC   254 _pwm2l	=	0x00dc
                           0000DD   255 _pwm3l	=	0x00dd
                           0000DE   256 _piocon0	=	0x00de
                           0000DF   257 _pwmcon1	=	0x00df
                           0000E0   258 _acc	=	0x00e0
                           0000E1   259 _adccon1	=	0x00e1
                           0000E2   260 _adccon2	=	0x00e2
                           0000E3   261 _adcdly	=	0x00e3
                           0000E4   262 _c0l	=	0x00e4
                           0000E5   263 _c0h	=	0x00e5
                           0000E6   264 _c1l	=	0x00e6
                           0000E7   265 _c1h	=	0x00e7
                           0000E8   266 _adccon0	=	0x00e8
                           0000E9   267 _picon	=	0x00e9
                           0000EA   268 _pinen	=	0x00ea
                           0000EB   269 _pipen	=	0x00eb
                           0000EC   270 _pif	=	0x00ec
                           0000ED   271 _c2l	=	0x00ed
                           0000EE   272 _c2h	=	0x00ee
                           0000EF   273 _eip	=	0x00ef
                           0000F0   274 _b	=	0x00f0
                           0000F1   275 _capcon3	=	0x00f1
                           0000F2   276 _capcon4	=	0x00f2
                           0000F3   277 _spcr	=	0x00f3
                           0000F3   278 _spcr2	=	0x00f3
                           0000F4   279 _spsr	=	0x00f4
                           0000F5   280 _spdr	=	0x00f5
                           0000F6   281 _aindids	=	0x00f6
                           0000F7   282 _eiph	=	0x00f7
                           0000F8   283 _scon_1	=	0x00f8
                           0000F9   284 _pdten	=	0x00f9
                           0000FA   285 _pdtcnt	=	0x00fa
                           0000FB   286 _pmen	=	0x00fb
                           0000FC   287 _pmd	=	0x00fc
                           0000FE   288 _eip1	=	0x00fe
                           0000FF   289 _eiph1	=	0x00ff
                                    290 ;--------------------------------------------------------
                                    291 ; special function bits
                                    292 ;--------------------------------------------------------
                                    293 	.area RSEG    (ABS,DATA)
      000000                        294 	.org 0x0000
                                    295 ;--------------------------------------------------------
                                    296 ; overlayable register banks
                                    297 ;--------------------------------------------------------
                                    298 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        299 	.ds 8
                                    300 ;--------------------------------------------------------
                                    301 ; internal ram data
                                    302 ;--------------------------------------------------------
                                    303 	.area DSEG    (DATA)
                                    304 ;--------------------------------------------------------
                                    305 ; overlayable items in internal ram
                                    306 ;--------------------------------------------------------
                                    307 	.area	OSEG    (OVR,DATA)
                                    308 ;--------------------------------------------------------
                                    309 ; indirectly addressable internal ram data
                                    310 ;--------------------------------------------------------
                                    311 	.area ISEG    (DATA)
                                    312 ;--------------------------------------------------------
                                    313 ; absolute internal ram data
                                    314 ;--------------------------------------------------------
                                    315 	.area IABS    (ABS,DATA)
                                    316 	.area IABS    (ABS,DATA)
                                    317 ;--------------------------------------------------------
                                    318 ; bit data
                                    319 ;--------------------------------------------------------
                                    320 	.area BSEG    (BIT)
                                    321 ;--------------------------------------------------------
                                    322 ; paged external ram data
                                    323 ;--------------------------------------------------------
                                    324 	.area PSEG    (PAG,XDATA)
                                    325 ;--------------------------------------------------------
                                    326 ; external ram data
                                    327 ;--------------------------------------------------------
                                    328 	.area XSEG    (XDATA)
                                    329 ;--------------------------------------------------------
                                    330 ; absolute external ram data
                                    331 ;--------------------------------------------------------
                                    332 	.area XABS    (ABS,XDATA)
                                    333 ;--------------------------------------------------------
                                    334 ; external initialized ram data
                                    335 ;--------------------------------------------------------
                                    336 	.area XISEG   (XDATA)
                                    337 	.area HOME    (CODE)
                                    338 	.area GSINIT0 (CODE)
                                    339 	.area GSINIT1 (CODE)
                                    340 	.area GSINIT2 (CODE)
                                    341 	.area GSINIT3 (CODE)
                                    342 	.area GSINIT4 (CODE)
                                    343 	.area GSINIT5 (CODE)
                                    344 	.area GSINIT  (CODE)
                                    345 	.area GSFINAL (CODE)
                                    346 	.area CSEG    (CODE)
                                    347 ;--------------------------------------------------------
                                    348 ; global & static initialisations
                                    349 ;--------------------------------------------------------
                                    350 	.area HOME    (CODE)
                                    351 	.area GSINIT  (CODE)
                                    352 	.area GSFINAL (CODE)
                                    353 	.area GSINIT  (CODE)
                                    354 ;--------------------------------------------------------
                                    355 ; Home
                                    356 ;--------------------------------------------------------
                                    357 	.area HOME    (CODE)
                                    358 	.area HOME    (CODE)
                                    359 ;--------------------------------------------------------
                                    360 ; code
                                    361 ;--------------------------------------------------------
                                    362 	.area CSEG    (CODE)
                                    363 ;------------------------------------------------------------
                                    364 ;Allocation info for local variables in function '_delay_ms'
                                    365 ;------------------------------------------------------------
                                    366 ;__ms                      Allocated to registers r4 r5 r6 r7 
                                    367 ;------------------------------------------------------------
                                    368 ;	./src/include.c:10: void _delay_ms(uint32_t  __ms)
                                    369 ;	-----------------------------------------
                                    370 ;	 function _delay_ms
                                    371 ;	-----------------------------------------
      0001A3                        372 __delay_ms:
                           000007   373 	ar7 = 0x07
                           000006   374 	ar6 = 0x06
                           000005   375 	ar5 = 0x05
                           000004   376 	ar4 = 0x04
                           000003   377 	ar3 = 0x03
                           000002   378 	ar2 = 0x02
                           000001   379 	ar1 = 0x01
                           000000   380 	ar0 = 0x00
      0001A3 AC 82            [24]  381 	mov	r4,dpl
      0001A5 AD 83            [24]  382 	mov	r5,dph
      0001A7 AE F0            [24]  383 	mov	r6,b
      0001A9 FF               [12]  384 	mov	r7,a
                                    385 ;	./src/include.c:12: T3CON |= 0x07;                           		//Timer3 Clock = Fsys/128
      0001AA 43 C4 07         [24]  386 	orl	_t3con,#0x07
                                    387 ;	./src/include.c:13: set_TR3;                                		//Trigger Timer3 start run
      0001AD 43 C4 08         [24]  388 	orl	_t3con,#0x08
                                    389 ;	./src/include.c:14: while (__ms != 0)
      0001B0                        390 00104$:
      0001B0 EC               [12]  391 	mov	a,r4
      0001B1 4D               [12]  392 	orl	a,r5
      0001B2 4E               [12]  393 	orl	a,r6
      0001B3 4F               [12]  394 	orl	a,r7
      0001B4 60 23            [24]  395 	jz	00106$
                                    396 ;	./src/include.c:16: RL3 = 0x83; //Find  define in "Function_define.h" "TIMER VALUE"
      0001B6 75 C5 83         [24]  397 	mov	_rl3,#0x83
                                    398 ;	./src/include.c:17: RH3 = 0xFF;
      0001B9 75 C6 FF         [24]  399 	mov	_rh3,#0xff
                                    400 ;	./src/include.c:18: while (inbit(T3CON,TF3) != 1);		//Check Timer3 Time-Out Flag
      0001BC                        401 00101$:
      0001BC 74 10            [12]  402 	mov	a,#0x10
      0001BE 55 C4            [12]  403 	anl	a,_t3con
      0001C0 C4               [12]  404 	swap	a
      0001C1 54 0F            [12]  405 	anl	a,#0x0f
      0001C3 FB               [12]  406 	mov	r3,a
      0001C4 BB 01 F5         [24]  407 	cjne	r3,#0x01,00101$
                                    408 ;	./src/include.c:19: clr_TF3;
      0001C7 53 C4 EF         [24]  409 	anl	_t3con,#0xef
                                    410 ;	./src/include.c:22: __ms--;
      0001CA 1C               [12]  411 	dec	r4
      0001CB BC FF 09         [24]  412 	cjne	r4,#0xff,00129$
      0001CE 1D               [12]  413 	dec	r5
      0001CF BD FF 05         [24]  414 	cjne	r5,#0xff,00129$
      0001D2 1E               [12]  415 	dec	r6
      0001D3 BE FF 01         [24]  416 	cjne	r6,#0xff,00129$
      0001D6 1F               [12]  417 	dec	r7
      0001D7                        418 00129$:
      0001D7 80 D7            [24]  419 	sjmp	00104$
      0001D9                        420 00106$:
                                    421 ;	./src/include.c:24: clr_TR3;                                		//Stop Timer3
      0001D9 53 C4 F7         [24]  422 	anl	_t3con,#0xf7
                                    423 ;	./src/include.c:25: }
      0001DC 22               [24]  424 	ret
                                    425 ;------------------------------------------------------------
                                    426 ;Allocation info for local variables in function '_delay_us'
                                    427 ;------------------------------------------------------------
                                    428 ;_us                       Allocated to registers 
                                    429 ;------------------------------------------------------------
                                    430 ;	./src/include.c:27: void _delay_us(uint32_t _us)
                                    431 ;	-----------------------------------------
                                    432 ;	 function _delay_us
                                    433 ;	-----------------------------------------
      0001DD                        434 __delay_us:
      0001DD 85 82 2F         [24]  435 	mov	__mullong_PARM_2,dpl
      0001E0 85 83 30         [24]  436 	mov	(__mullong_PARM_2 + 1),dph
      0001E3 85 F0 31         [24]  437 	mov	(__mullong_PARM_2 + 2),b
      0001E6 F5 32            [12]  438 	mov	(__mullong_PARM_2 + 3),a
                                    439 ;	./src/include.c:29: _us = _us * 5 / 4+1;
      0001E8 90 00 05         [24]  440 	mov	dptr,#(0x05&0x00ff)
      0001EB E4               [12]  441 	clr	a
      0001EC F5 F0            [12]  442 	mov	b,a
      0001EE 12 0E 7D         [24]  443 	lcall	__mullong
      0001F1 AC 82            [24]  444 	mov	r4,dpl
      0001F3 AD 83            [24]  445 	mov	r5,dph
      0001F5 AE F0            [24]  446 	mov	r6,b
      0001F7 C3               [12]  447 	clr	c
      0001F8 13               [12]  448 	rrc	a
      0001F9 FF               [12]  449 	mov	r7,a
      0001FA EE               [12]  450 	mov	a,r6
      0001FB 13               [12]  451 	rrc	a
      0001FC FE               [12]  452 	mov	r6,a
      0001FD ED               [12]  453 	mov	a,r5
      0001FE 13               [12]  454 	rrc	a
      0001FF FD               [12]  455 	mov	r5,a
      000200 EC               [12]  456 	mov	a,r4
      000201 13               [12]  457 	rrc	a
      000202 FC               [12]  458 	mov	r4,a
      000203 EF               [12]  459 	mov	a,r7
      000204 C3               [12]  460 	clr	c
      000205 13               [12]  461 	rrc	a
      000206 FF               [12]  462 	mov	r7,a
      000207 EE               [12]  463 	mov	a,r6
      000208 13               [12]  464 	rrc	a
      000209 FE               [12]  465 	mov	r6,a
      00020A ED               [12]  466 	mov	a,r5
      00020B 13               [12]  467 	rrc	a
      00020C FD               [12]  468 	mov	r5,a
      00020D EC               [12]  469 	mov	a,r4
      00020E 13               [12]  470 	rrc	a
      00020F FC               [12]  471 	mov	r4,a
      000210 0C               [12]  472 	inc	r4
      000211 BC 00 09         [24]  473 	cjne	r4,#0x00,00112$
      000214 0D               [12]  474 	inc	r5
      000215 BD 00 05         [24]  475 	cjne	r5,#0x00,00112$
      000218 0E               [12]  476 	inc	r6
      000219 BE 00 01         [24]  477 	cjne	r6,#0x00,00112$
      00021C 0F               [12]  478 	inc	r7
      00021D                        479 00112$:
                                    480 ;	./src/include.c:30: while (--_us)
      00021D                        481 00101$:
      00021D 1C               [12]  482 	dec	r4
      00021E BC FF 09         [24]  483 	cjne	r4,#0xff,00113$
      000221 1D               [12]  484 	dec	r5
      000222 BD FF 05         [24]  485 	cjne	r5,#0xff,00113$
      000225 1E               [12]  486 	dec	r6
      000226 BE FF 01         [24]  487 	cjne	r6,#0xff,00113$
      000229 1F               [12]  488 	dec	r7
      00022A                        489 00113$:
      00022A EC               [12]  490 	mov	a,r4
      00022B 4D               [12]  491 	orl	a,r5
      00022C 4E               [12]  492 	orl	a,r6
      00022D 4F               [12]  493 	orl	a,r7
      00022E 70 ED            [24]  494 	jnz	00101$
                                    495 ;	./src/include.c:35: }
      000230 22               [24]  496 	ret
                                    497 	.area CSEG    (CODE)
                                    498 	.area CONST   (CODE)
                                    499 	.area XINIT   (CODE)
                                    500 	.area CABS    (ABS,CODE)
