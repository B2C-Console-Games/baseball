/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of /home/alan/dev/BasicGames/source/base/baseball/basic/baseball.bas: 
 *
                   +-----+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |     | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |     | |
        Address    v     v v Original BASIC statement
    -------------- ------- - ------------------------------------------------------------------------------
    0x558a3a24bdf0 ---------A   00090 PRINT "BASIC LIBRARY--'BASEBL'--18-JUL-70"
    0x558a3a24beb0 ---------A   00220 '  *  *  *  *  *  *  *  MAIN PROGRAM  *  *  *  *  *  *  *  *  *  *
    0x558a3a24bf30 ---------A   00230 '
    0x558a3a24bfc0 ---------A   00240 RANDOM
    0x558a3a24c250 ---------A   00250 FOR I=0 TO 19
    0x558a3a24c460 ---------A   00260 READ N$(I)
    0x558a3a24c6e0 ---------A   00270 FORJ=1 TO 8
    0x558a3a24c900 ---------A   00280 READ S(I,J)
    0x558a3a24c9a0 ---------A   00290 NEXT J
    0x558a3a24caf0 ---------A   00300 NEXT I
    0x558a3a2512d0 ---------A   00310 FOR I=1 TO 24
    0x558a3a2514f0 ---------A   00320 FOR J=0 TO 4
    0x558a3a251710 ---------A   00330 READ E(I,J)
    0x558a3a2517b0 ---------A   00340 NEXT J
    0x558a3a251870 ---------A   00350 NEXT I
    0x558a3a251a90 ---------A   00360 FOR I=1 TO 30
    0x558a3a251cb0 ---------A   00370 FOR J=0 TO 4
    0x558a3a251fe0 ---------A   00380 READ A(I,J)
    0x558a3a252080 ---------A   00390 NEXT J
    0x558a3a252140 ---------A   00400 NEXT I
    0x558a3a252360 ---------A   00410 FOR I=1 TO 11
    0x558a3a252580 ---------A   00420 FOR J=1 TO 6
    0x558a3a2527a0 ---------A   00430 READ Q(I,J)
    0x558a3a252840 ---------A   00440 NEXT J
    0x558a3a252900 ---------A   00450 NEXT I
    0x558a3a252b20 ---------A   00460 FOR I=1 TO 30
    0x558a3a252d40 ---------A   00470 FOR J=0 TO 2
    0x558a3a252f60 ---------A   00480 READ D(I,J)
    0x558a3a253000 ---------A   00490 NEXT J
    0x558a3a2530c0 ---------A   00500 NEXT I
    0x558a3a253aa0 ---------A   00510 DIM S(19,8),E(24,4),A(30,4),D(30,2),Q(11,6),N$(19)
    0x558a3a24c2b0 ---------A   00520 DATA "RED SOX",.02,.071,.303,.072,0,.004,.993,0
    0x558a3a2548e0 ---------A   00530 DATA "LONBORG",0,.013,.045,.128,0,0,.95,9
    0x558a3a255240 ---------A   00540 DATA "HOWARD",.013,.013,.039,.176,0,0,.946,8
    0x558a3a255990 ---------A   00550 DATA "SCOTT",.032,.046,.084,.301,1,0,.936,4
    0x558a3a2560e0 ---------A   00560 DATA "ANDREWS",.015,.015,.055,.259,1,0,.966,2
    0x558a3a256830 ---------A   00570 DATA "ADAIR",.008,.01,.052,.259,0,0,.975,1
    0x558a3a256f80 ---------A   00580 DATA "PETROCELLI",.035,.04,.091,.267,0,0,.954,6
    0x558a3a2576d0 ---------A   00590 DATA "YASTRZEMSKI",.072,.08,.13,.309,1,1,.985,3
    0x558a3a257e20 ---------A   00600 DATA "REGGIE SMITH",.029,.04,.082,.25,2,2,.952,7
    0x558a3a258580 ---------A   00610 DATA "HARRELSON",.036,.039,.085,.252,2,0,.917,5
    0x558a3a258cd0 ---------A   00620 DATA "CARDINALS",.024,.057,.274,-.002,0,.004,.996,0
    0x558a3a259420 ---------A   00630 DATA "GIBSON",.01,.01,.048,.18,1,0,.958,9
    0x558a3a259b70 ---------A   00640 DATA "MCCARVER",.029,.035,.086,.295,1,1,.973,5
    0x558a3a25a2c0 ---------A   00650 DATA "CEPEDA",.046,.046,.111,.330,1,0,.908,4
    0x558a3a25aa10 ---------A   00660 DATA "JAVIER",.028,.034,.067,.288,1,0,.981,6
    0x558a3a25b160 ---------A   00670 DATA "SHANNON",.027,.033,.071,.244,0,0,.904,7
    0x558a3a25b8b0 ---------A   00680 DATA "MAXVILL",.002,.011,.042,.225,0,0,.967,8
    0x558a3a25c000 ---------A   00690 DATA "BROCK",.029,.046,.094,.291,3,1,.936,1
    0x558a3a25c750 ---------A   00700 DATA "FLOOD",.008,.01,.055,.324,0,0,1,2
    0x558a3a25ceb0 ---------A   00710 DATA "MARIS",.023,.038,.082,.265,0,1,.989,3
    0x558a3a25da90 ---------A   00720 DATA .17,.21,.24,.27,.3,.24,.29,.33,.37,.4,.17,.21,.24,.27,.3
    0x558a3a25e670 ---------A   00730 DATA .67,.71,.75,.78,.81,.73,.79,.84,.89,.94,.67,.71,.75,.78,.81
    0x558a3a25f240 ---------A   00740 DATA .15,.19,.22,.25,.27,.6,.65,.7,.74,.78,.15,.19,.22,.25,.27
    0x558a3a25fdd0 ---------A   00750 DATA .85,1,1,1,1,.95,1,1,1,1,.85,1,1,1,1
    0x558a3a2609a0 ---------A   00760 DATA 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
    0x558a3a261580 ---------A   00770 DATA 0,0,0,0,0,0,0,0,0,.1,.1,.17,.23,.29,.35
    0x558a3a262150 ---------A   00780 DATA 0,0,0,0,0,.3,.39,.47,.53,.58,.69,.8,.88,.92,.95
    0x558a3a262d20 ---------A   00790 DATA .4,.49,.57,.65,.72,.81,.9,.96,1,1,1,1,1,1,1
    0x558a3a263900 ---------A   00800 DATA 0,0,0,0,0,0,0,0,0,0,0,0,0,.05,.1
    0x558a3a2647e0 ---------A   00810 DATA 0,0,0,0,0,0,0,.05,.1,.14,.38,.43,.48,.52,.56,.4,.48,.55,.62
    0x558a3a2656c0 ---------A   00820 DATA .68,.58,.67,.75,.82,.89,1,1,1,1,1,.05,.1,.15,.2,.3,.1,.15,.2
    0x558a3a266590 ---------A   00830 DATA .25,.35,.05,.1,.15,.2,.3,.72,.79,.85,.9,.94,1,1,1,1,1,.72,.79
    0x558a3a2673b0 ---------A   00840 DATA .85,.9,.94,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
    0x558a3a267f90 ---------A   00850 DATA .63,.75,.85,.9,.93,.48,.59,.67,.72,.76,.32,.42,.48,.53,.58
    0x558a3a268f80 ---------A   00860 DATA .14,.23,.28,.33,.37,.51,.58,.62,.66,.7,.27,.36,.43,.49,.55
    0x558a3a269b60 ---------A   00870 DATA .1,.17,.24,.31,.37,0,.02,.05,.09,.16,.14,.21,.28,.33,.38
    0x558a3a26a740 ---------A   00880 DATA .08,.11,.14,.17,.2,.02,.04,.06,.08,.09,0,0,0,0,0
    0x558a3a26b920 ---------A   00890 DATA 1,1,.9,1,.75,1,1,1,.2,.4,1,1,1,1,1,.8,1,.8,.8,0,.6,.75,.35
    0x558a3a26c660 ---------A   00900 DATA .75,.65,0,.35,.55,.2,.55,.6,0,.25,.35,.1,.35,.1,0,.05,.05
    0x558a3a26cd00 ---------A   00910 DATA .2,.1,.4,0,.3,.15,.2,.15
    0x558a3a26db20 ---------A   00920 DATA .7,0,.8,.3,.1,.15,.45,0,.5,.55,.35,.45,.7,0,.1,.15,.7,.35
    0x558a3a26e700 ---------A   00930 DATA .033,.033,2,.045,.042,3,.054,.054,5,.0564,.0576,7,.06,.06,9
    0x558a3a26f460 ---------A   00940 DATA .07,.075,5,.1,.11,6,.135,.14,4,.15,.15,3,.158,.158,1,.16,.16
    0x558a3a270100 ---------A   00950 DATA 2,.2775,.207,5,.442,.301,6,.536,.4655,4,.583,.583,3,.63,.63,1
    0x558a3a270ce0 ---------A   00960 DATA .64,.632,5,.662,.6352,6,.6652,.6572,4,.6672,.6672,3,.67,.67,1
    0x558a3a2718b0 ---------A   00970 DATA .702,.69,7,.73,.718,8,.75,.75,9,.8102,.778,7,.862,.8298,8
    0x558a3a272220 ---------A   00980 DATA .89,.89,9,.9395,.9065,7,.9835,.9505,8,1,1,9
    0x558a3a272510 ---------A   00990 LET T=O2=1
    0x558a3a2726a0 ---------A   01000 PRINT"THE WORLD SERIES-- FROM ST. LOUIS, MO."
    0x558a3a272830 ---------A   01010 PRINT"QUESTIONS ASKING 'WHICH BASE' SHOULD BE ANSWERED WITH A DIGIT"
    0x558a3a2729a0 ---------A   01020 PRINT"THOSE ASKING ABOUT ADVANCEMENT OF RUNNERS WILL PRINT"
    0x558a3a272ae0 ---------A   01030 PRINT"PROBABILITIES IF YOU TYPE 'PR'"
    0x558a3a272dd0 ---------A   01040 LET T4=W2=9
    0x558a3a273840 ---------A   01050 LET H1=O1=O3=T3=S(10,8)=S(0,8)=I2=W1=W3=0
    0x558a3a2739f0 ---------A T 01060 IF T=0 THEN 1090
    0x558a3a273a70 ---------A   01070 PRINT
    0x558a3a273c80 ---------A   01080 LET I2=I2+1
    0x558a3a273e90 ---------A T 01090 LET T=1-T
    0x558a3a273f00 ---------A   01100 PRINT
    0x558a3a273f80 ---------A   01110 PRINT
    0x558a3a2743d0 ---------A   01120 PRINT"INNING"I2"FOR "N$(10*T)
    0x558a3a274580 ---------A   01130 LET T5=T4
    0x558a3a2746b0 ---------A   01140 LET T4=W2
    0x558a3a274800 ---------A   01150 LET W2=T5
    0x558a3a2752e0 ---------A   01160 LET O=L(1)=L(2)=L(3)=B(1)=B(2)=B(3)=M1=P5=0
    0x558a3a275f10 ---------A T 01170 LET I1=T3=F1=B(4)=B(5)=B(6)=L(4)=L(5)=L(6)=L(7)=L(8)=L(9)=0
    0x558a3a2761e0 ---------A   01180 LET T7=W6=0
    0x558a3a276390 ---------A   01190 IF P5=0 THEN 1220
    0x558a3a276510 ---------A   01200 LET P5=0
    0x558a3a276580 ---------A   01210 GOSUB 8010
    0x558a3a276720 ---------A T 01220 IF M1=0 THEN 1290
    0x558a3a2768e0 ---------A   01230 LET D=M1
    0x558a3a276950 ---------A   01240 GOSUB 8110
    0x558a3a276b00 ---------A   01250 IF O3=1 THEN 1280
    0x558a3a276e40 ---------A   01260 PRINT N$(B(0))" ON BASE"M1
    0x558a3a277070 ---------A   01270 LET B(M1)=B(0)
    0x558a3a2771e0 ---------A T 01280 LET M1=0
    0x558a3a277360 ---------A T 01290 LET O3=0
    0x558a3a277840 ---------A   01300 IF B(1)+B(2)+B(3)=0 THEN 1350
    0x558a3a2779b0 ---------A   01310 PRINT"ANY LEADING OR STEALING";
    0x558a3a277b10 ---------A   01320 INPUT T$
    0x558a3a277cf0 ---------A   01330 IF T$="N" THEN 1350
    0x558a3a277d70 ---------A   01340 GOTO 5920
    0x558a3a277f10 ---------A T 01350 IF W1=0 THEN 1380
    0x558a3a278230 ---------A   01360 LET S(B(0),6)=2
    0x558a3a2783b0 ---------A   01370 LET W1=0
    0x558a3a278600 ---------A T 01380 IF W3=T+1 THEN 1410
    0x558a3a278820 ---------A   01390 LET W2=W2+1
    0x558a3a278890 ---------A   01400 GOTO 1420
    0x558a3a278a00 ---------A T 01410 LET W3=0
    0x558a3a278f90 ---------A T 01420 LET W2=W2-9*INT((W2-1)/9)
    0x558a3a2791b0 ---------A   01430 FOR I=1 TO 9
    0x558a3a2795b0 ---------A   01440 IF S(10*T+I,8)=W2 THEN 1470
    0x558a3a279670 ---------A   01450 NEXT I
    0x558a3a2797c0 ---------A   01460 PRINT "ERROR IN BAT POS."
    0x558a3a279b10 ---------A T 01470 LET B(0)=10*T+I
    0x558a3a279b90 ---------A   01480 GOTO 6840
    0x558a3a279ee0 ---------A T 01490 IF S(B(0),6)<2 THEN 1520
    0x558a3a27adb0 ---------A   01500 LET S(B(0),6)=1-S(10*(1-T),5)
    0x558a3a27af30 ---------A   01510 LET W1=1
    0x558a3a27b420 ---------A T 01520 IF RND>S(10*(1-T),1) THEN 1570
    0x558a3a27b560 ---------A   01530 PRINT"WILD PITCH"
    0x558a3a27b6d0 ---------A   01540 LET D=1
    0x558a3a27b740 ---------A   01550 GOSUB 8110
    0x558a3a27b7b0 ---------A   01560 GOTO 1520
    0x558a3a27bc20 ---------A T 01570 IF RND>S(10*(1-T),6) THEN 1620
    0x558a3a27bd60 ---------A   01580 PRINT "PASSED BALL"
    0x558a3a27bed0 ---------A   01590 LET D=1
    0x558a3a27bf40 ---------A   01600 GOSUB 8110
    0x558a3a27bfa0 ---------A   01610 GO TO 1570
    0x558a3a27c1e0 ---------A T 01620 IF B(3)=0THEN 1670
    0x558a3a27c340 ---------A   01630 PRINT"INFIELD IN";
    0x558a3a27c420 ---------A   01640 INPUT T$
    0x558a3a27c600 ---------A   01650 IF T$<>"Y" THEN 1670
    0x558a3a27c790 ---------A   01660 LET I1=1
    0x558a3a27cc10 ---------A T 01670 IF RND>S(10*(1-T),2) THEN 1810
    0x558a3a27ced0 ---------A T 01680 PRINT N$(B(0))" WALKS"
    0x558a3a27d050 ---------A   01690 LET D=1
    0x558a3a27d2b0 ---------A   01700 IF B(1)=0 THEN 1790
    0x558a3a27d520 ---------A   01710 IF B(2)=0 THEN 1770
    0x558a3a27d780 ---------A   01720 IF B(3)=0 THEN 1750
    0x558a3a27d900 ---------A   01730 LET I=3
    0x558a3a27d970 ---------A   01740 GOSUB 8310
    0x558a3a27dad0 ---------A T 01750 LET I=2
    0x558a3a27db40 ---------A   01760 GOSUB 8310
    0x558a3a27dca0 ---------A T 01770 LET I=1
    0x558a3a27dd10 ---------A   01780 GOSUB 8310
    0x558a3a27df70 ---------A T 01790 LET B(1)=B(0)
    0x558a3a27dff0 ---------A   01800 GOTO 1170
    0x558a3a27e490 ---------A T 01810 LET A=S(10*(1-T),4)
    0x558a3a27e640 ---------A   01820 IF A>0 THEN 1840
    0x558a3a27e880 ---------A   01830 LET A=2*A
    0x558a3a27f230 ---------A T 01840 LET A=A+.02-.04*ABS(S(10*(1-T),5)-S(B(0),6))
    0x558a3a27f3e0 ---------A   01850 LET X1=RND
    0x558a3a27f5b0 ---------A   01860 LET X2=RND
    0x558a3a27fa80 ---------A   01870 IF ABS(ABS(A)+3*A)<(4*RND) THEN 1900
    0x558a3a27fc40 ---------A   01880 IF A>0 THEN 3410
    0x558a3a27fdc0 ---------A   01890 LET F1=1
    0x558a3a27ff80 ---------A T 01900 LET X=RND
    0x558a3a2802a0 ---------A   01910 IF X>S(B(0),1) THEN 2130
    0x558a3a280580 ---------A   01920 PRINT N$(B(0))" HITS A HOME RUN";
    0x558a3a280700 ---------A   01930 LET D=4
    0x558a3a2808c0 ---------A   01940 IF X1>.01 THEN 2000
    0x558a3a280a00 ---------A   01950 PRINT", INSIDE THE PARK"
    0x558a3a280a80 ---------A   01960 GOSUB 8110
    0x558a3a280d20 ---------A T 01970 PRINT N$(B(0))" SCORES"
    0x558a3a280d90 ---------A   01980 GOSUB 8010
    0x558a3a280e00 ---------A   01990 GOTO 1170
    0x558a3a280fb0 ---------A T 02000 IF X1>.22 THEN 2060
    0x558a3a2810f0 ---------A   02010 PRINT" TO CENTER FIELD"
    0x558a3a281260 ---------A T 02020 LET H1=1
    0x558a3a2812d0 ---------A   02030 GOSUB 8110
    0x558a3a281430 ---------A   02040 LET H1=0
    0x558a3a2814b0 ---------A   02050 GOTO 1970
    0x558a3a281660 ---------A T 02060 IF X1>.42 THEN 2090
    0x558a3a2817a0 ---------A T 02070 PRINT" TO LEFT FIELD"
    0x558a3a281810 ---------A   02080 GOTO 2020
    0x558a3a2819c0 ---------A T 02090 IF X1>.8 THEN 2110
    0x558a3a281d30 ---------A   02100 IF S(B(0),6)=0 THEN 2070
    0x558a3a281e70 ---------A T 02110 PRINT" TO RIGHT FIELD"
    0x558a3a281ef0 ---------A   02120 GOTO 2020
    0x558a3a282200 ---------A T 02130 IF X>S(B(0),2) THEN 2330
    0x558a3a2824e0 ---------A   02140 PRINT N$(B(0))" TRIPLES ";
    0x558a3a2826a0 ---------A   02150 IF X1<.6 THEN 2240
    0x558a3a2827e0 ---------A T 02160 PRINT"TO RIGHT FIELD"
    0x558a3a282950 ---------A T 02170 LET D=3
    0x558a3a2829d0 ---------A   02180 GOSUB 8110
    0x558a3a282dd0 ---------A   02190 IF X>S(B(0),1)+.0002 THEN 2220
    0x558a3a2830a0 ---------A   02200 PRINT N$(B(0))" IS OUT TRYING FOR A HOME RUN"
    0x558a3a283110 ---------A   02210 GOTO 8160
    0x558a3a283370 ---------A T 02220 LET B(3)=B(0)
    0x558a3a2833f0 ---------A   02230 GOTO 1170
    0x558a3a2835a0 ---------A T 02240 IF X1<.35 THEN 2270
    0x558a3a2836e0 ---------A T 02250 PRINT"TO CENTER FIELD"
    0x558a3a283760 ---------A   02260 GOTO 2170
    0x558a3a283910 ---------A T 02270 IF X1>.05 THEN 2300
    0x558a3a283a50 ---------A T 02280 PRINT"TO LEFT FIELD"
    0x558a3a283ad0 ---------A   02290 GOTO 2170
    0x558a3a283e20 ---------A T 02300 IF S(B(0),6)=1 THEN 2160
    0x558a3a283fe0 ---------A   02310 IF X1>.15 THEN 2250
    0x558a3a284070 ---------A   02320 GOTO 2280
    0x558a3a284370 ---------A T 02330 IF X>S(B(0),3) THEN 2620
    0x558a3a284500 ---------A   02340 LET D=2
    0x558a3a2847e0 ---------A   02350 PRINT N$(B(0))" DOUBLES ";
    0x558a3a2849a0 ---------A   02360 IF X1>.56 THEN 2390
    0x558a3a284b00 ---------A   02370 PRINT"IN THE HOLE TO ";
    0x558a3a284b80 ---------A   02380 GOTO 2400
    0x558a3a284d00 ---------A T 02390 PRINT"OFF THE WALL IN ";
    0x558a3a285890 ---------A T 02400 ON X2/.35+10/7+4*S(B(0),6) GOTO 2410,2410,2440,2470,2470,2470,2440,2410
    0x558a3a2859c0 ---------A T 02410 PRINT"LEFT FIELD"
    0x558a3a285bb0 ---------A   02420 LET F=1
    0x558a3a285c20 ---------A   02421 RANDOM
    0x558a3a285ca0 ---------A   02430 GOTO 2490
    0x558a3a285dc0 ---------A T 02440 PRINT"CENTER FIELD"
    0x558a3a285f30 ---------A   02450 LET F=2
    0x558a3a285fa0 ---------A   02460 GOTO 2490
    0x558a3a2860c0 ---------A T 02470 PRINT"RIGHT FIELD"
    0x558a3a286230 ---------A   02480 LET F=3
    0x558a3a2862b0 ---------A T 02490 GOSUB 8110
    0x558a3a2866b0 ---------A   02500 IF X>S(B(0),2)+.0004 THEN 2540
    0x558a3a286980 ---------A   02510 PRINT N$(B(0))" IS OUT TRYING FOR A TRIPLE"
    0x558a3a2869f0 ---------A   02520 GOSUB 8110
    0x558a3a286a50 ---------A   02530 GOTO 8160
    0x558a3a286cc0 ---------A T 02540 LET B(2)=B(0)
    0x558a3a286f20 ---------A   02550 IF B(3)=0 THEN 1170
    0x558a3a287600 ---------A   02560 LET C=E(3*INT(X1+.44)+F,S(B(3),5))
    0x558a3a287790 ---------A   02570 LET I=3
    0x558a3a2878f0 ---------A   02580 PRINT "DO YOU WANT THE DOUBLE TO FURTHER";
    0x558a3a287960 ---------A   02590 GOSUB 8440
    0x558a3a287b00 ---------A   02600 IF O1=1 THEN 8160
    0x558a3a287b90 ---------A   02610 GOTO 1170
    0x558a3a287e90 ---------A T 02620 IF X>S(B(0),4) THEN 3390
    0x558a3a288020 ---------A T 02630 LET D=1
    0x558a3a288300 ---------A   02640 PRINT N$(B(0))" SINGLES ";
    0x558a3a2884d0 ---------A   02650 IF X1<.08 THEN 3180
    0x558a3a288a30 ---------A   02660 ON X1/.37+41/37 GOTO 2670,2700,2730
    0x558a3a288b80 ---------A T 02670 PRINT "SHARPLY ";
    0x558a3a288d70 ---------A   02680 LET F2=1
    0x558a3a288df0 ---------A   02690 GOTO 2750
    0x558a3a288f30 ---------A T 02700 PRINT "ON THE GROUND ";
    0x558a3a2890a0 ---------A   02710 LET F2=2
    0x558a3a289110 ---------A   02720 GOTO 2750
    0x558a3a289250 ---------A T 02730 PRINT "DEEP ";
    0x558a3a289400 ---------A   02740 LET F2=3
    0x558a3a289fa0 ---------A T 02750 ON X2/.35+11/7+4*S(B(0),6) GOTO 2760,2760,2790,2820,2820,2820,2790,2760
    0x558a3a28a0d0 ---------A T 02760 PRINT"TO LEFT FIELD"
    0x558a3a27a060 ---------A   02770 LET F=1
    0x558a3a27a0e0 ---------A   02780 GOTO 2840
    0x558a3a27a200 ---------A T 02790 PRINT"TO CENTER FIELD"
    0x558a3a27a370 ---------A   02800 LET F=2
    0x558a3a27a3f0 ---------A   02810 GOTO 2840
    0x558a3a27a510 ---------A T 02820 PRINT"TO RIGHT FIELD"
    0x558a3a27a680 ---------A   02830 LET F=3
    0x558a3a27a700 ---------A T 02840 GOSUB 8110
    0x558a3a28b4f0 ---------A   02850 IF X>S(B(0),3)+.001 THEN 2890
    0x558a3a28b7c0 ---------A   02860 PRINT N$(B(0))" IS OUT TRYING FOR A DOUBLE"
    0x558a3a28b830 ---------A   02870 GOSUB 8110
    0x558a3a28b890 ---------A   02880 GOTO 8160
    0x558a3a28bb00 ---------A T 02890 LET B(1)=B(0)
    0x558a3a28bd60 ---------A   02900 IF B(3)=0 THEN 3060
    0x558a3a28c3a0 ---------A   02910 LET C=E(3*(1+F2)+F,S(B(3),5))
    0x558a3a28c510 ---------A   02920 LET I=3
    0x558a3a28c6c0 ---------A   02930 IF C<1 THEN 2970
    0x558a3a28c740 ---------A   02940 GOSUB 8500
    0x558a3a28c8e0 ---------A   02950 IF O1=1 THEN 8160
    0x558a3a28c980 ---------A   02960 GOTO 3060
    0x558a3a28cd20 ---------A T 02970 PRINT"DO YOU WANT "N$(B(3))" TO SCORE";
    0x558a3a28ce00 ---------A   02980 INPUT T$
    0x558a3a28cff0 ---------A   02990 IF T$="Y" THEN 3030
    0x558a3a28d1d0 ---------A   03000 IF T$="N" THEN 3060
    0x558a3a28d390 ---------A   03010 PRINT"CHANCE="C
    0x558a3a28d400 ---------A   03020 GOTO 2970
    0x558a3a28d460 ---------A T 03030 GOSUB 8580
    0x558a3a28d600 ---------A   03040 IF O1=1 THEN 8160
    0x558a3a28d690 ---------A   03050 GOTO 1170
    0x558a3a28d8e0 ---------A T 03060 IF B(2)=0 THEN 1170
    0x558a3a28df20 ---------A   03070 LET C=E(3*(4+F2)+F,S(B(2),5))
    0x558a3a28e090 ---------A   03080 LET I=2
    0x558a3a28e240 ---------A   03090 IF C<1 THEN 3130
    0x558a3a28e2c0 ---------A   03100 GOSUB 8500
    0x558a3a28e460 ---------A   03110 IF O1=1 THEN 8160
    0x558a3a28e4e0 ---------A   03120 GOTO 1170
    0x558a3a28e6a0 ---------A T 03130 IF C=0 THEN 1170
    0x558a3a28e810 ---------A   03140 PRINT "DO YOU WANT THE SINGLE TO FURTHER";
    0x558a3a28e880 ---------A   03150 GOSUB 8440
    0x558a3a28ea20 ---------A   03160 IF O1=1 THEN 8160
    0x558a3a28eaa0 ---------A   03170 GOTO 1170
    0x558a3a28ec50 ---------A T 03180 IF X2>.2 THEN 3200
    0x558a3a28f100 ---------A   03190 ON S(B(0),6)+1 GOTO 3250,3370
    0x558a3a28f2c0 ---------A T 03200 IF X2>.65 THEN 3220
    0x558a3a28f770 ---------A   03210 ON S(B(0),6)+1 GOTO 3330,3350
    0x558a3a28f930 ---------A T 03220 IF X2>.95 THEN 3240
    0x558a3a28fde0 ---------A   03230 ON S(B(0),6)+1 GOTO 3350,3330
    0x558a3a290280 ---------A T 03240 ON S(B(0),6)+1 GOTO 3370,3250
    0x558a3a2903c0 ---------A T 03250 PRINT"TO THIRD BASE"
    0x558a3a290620 ---------A   03260 IF B(2)=0 THEN 3300
    0x558a3a290880 ---------A   03270 IF B(1)>0 THEN 3300
    0x558a3a290b00 ---------A   03280 LET B(1)=B(2)
    0x558a3a290d10 ---------A   03290 LET B(2)=0
    0x558a3a290d80 ---------A T 03300 GOSUB 8110
    0x558a3a290fe0 ---------A   03310 LET B(1)=B(0)
    0x558a3a291060 ---------A   03320 GOTO 1170
    0x558a3a291180 ---------A T 03330 PRINT"TO SHORTSTOP"
    0x558a3a291200 ---------A   03340 GOTO 3300
    0x558a3a291320 ---------A T 03350 PRINT"TO SECOND BASE"
    0x558a3a2913a0 ---------A   03360 GOTO 3300
    0x558a3a2914c0 ---------A T 03370 PRINT"TO FIRST BASE"
    0x558a3a291530 ---------A   03380 GOTO 3300
    0x558a3a2916e0 ---------A T 03390 IF F1=1 THEN 1900
    0x558a3a291bd0 ---------A   03400 IF X<I1*(S(B(0),4)+.03) THEN 2630
    0x558a3a292060 ---------A T 03410 IF RND>S(10*(1-T),3) THEN 3520
    0x558a3a292330 ---------A   03420 PRINT N$(B(0))" STRIKES OUT"
    0x558a3a292580 ---------A   03430 IF B(1)=0 THEN 3450
    0x558a3a292750 ---------A   03440 IF O<2 THEN 8160
    0x558a3a292bf0 ---------A T 03450 IF RND<S(10*(1-T),7) THEN 8160
    0x558a3a292d40 ---------A   03460 PRINT"CATCHER DROPS THE BALL--ERROR"
    0x558a3a292eb0 ---------A T 03470 LET D=1
    0x558a3a292f20 ---------A   03480 GOSUB 8110
    0x558a3a293190 ---------A   03490 LET B(1)=B(0)
    0x558a3a293440 ---------A   03500 PRINT N$(B(0))" ON FIRST"
    0x558a3a2934b0 ---------A   03510 GOTO 1170
    0x558a3a2936c0 ---------A T 03520 FOR J=1 TO 29
    0x558a3a293aa0 ---------A   03530 IF X1<D(J,S(B(0),6)) THEN 3560
    0x558a3a293b60 ---------A   03540 NEXT J
    0x558a3a293cf0 ---------A   03550 LET J=30
    0x558a3a293fc0 ---------A T 03560 PRINT N$(B(0))" HITS A ";
    0x558a3a294180 ---------A   03570 IF J>5 THEN 3600
    0x558a3a2942e0 ---------A   03580 PRINT"FOUL FLY TO ";
    0x558a3a294350 ---------A   03590 GOTO 3760
    0x558a3a294500 ---------A T 03600 IF J>11 THEN 3630
    0x558a3a294660 ---------A   03610 PRINT"POP FLY TO ";
    0x558a3a2946d0 ---------A   03620 GOTO 3760
    0x558a3a294880 ---------A T 03630 IF J>16 THEN 3660
    0x558a3a2949e0 ---------A   03640 PRINT "GROUND BALL TO ";
    0x558a3a294a50 ---------A   03650 GOTO 3760
    0x558a3a294c00 ---------A T 03660 IF J>21 THEN 3690
    0x558a3a294d60 ---------A   03670 PRINT"LINE DRIVE TO ";
    0x558a3a294dd0 ---------A   03680 GOTO 3760
    0x558a3a294f80 ---------A T 03690 IF J>24 THEN 3720
    0x558a3a2950e0 ---------A   03700 PRINT"SHORT FLY TO ";
    0x558a3a295150 ---------A   03710 GO TO 3760
    0x558a3a295300 ---------A T 03720 IF J>27 THEN 3750
    0x558a3a295460 ---------A   03730 PRINT"MEDIUM FLY TO ";
    0x558a3a2954e0 ---------A   03740 GOTO 3760
    0x558a3a295630 ---------A T 03750 PRINT"LONG FLY TO ";
    0x558a3a295b20 ---------A T 03760 PRINT N$(10*(1-T)+D(J,2))
    0x558a3a296130 ---------A   03770 IF RND <S(10*(1-T)+D(J,2),7) THEN 4060
    0x558a3a296320 ---------A   03780 IF J>5 THEN 3810
    0x558a3a2966c0 ---------A   03790 PRINT"FLY IS DROPPED-"N$(B(0))" GETS ANOTHER CHANCE"
    0x558a3a296730 ---------A   03800 GOTO 1670
    0x558a3a2968d0 ---------A T 03810 IF J>21 THEN 3900
    0x558a3a296aa0 ---------A   03820 IF J>11 THEN 3880
    0x558a3a296d10 ---------A   03830 IF B(2)=0 THEN 3880
    0x558a3a296f70 ---------A   03840 IF B(1)=0 THEN 3880
    0x558a3a297160 ---------A   03850 IF O=2 THEN 3880
    0x558a3a2972c0 ---------A   03860 PRINT"INFIELD FLY RULE- BALL DROPPED BUT BATTER IS OUT"
    0x558a3a297340 ---------A   03870 GOTO 8160
    0x558a3a2976c0 ---------A T 03880 PRINT"ERROR- "N$(B(0))" IS SAFE"
    0x558a3a297750 ---------A   03890 GOTO 3470
    0x558a3a297b00 ---------A T 03900 PRINT"MUFFED FLY- "N$(B(0))" IS SAFE ON ";
    0x558a3a297d50 ---------A   03910 IF B(1)=0 THEN 3930
    0x558a3a297f10 ---------A   03920 IFO<2 THEN 4030
    0x558a3a298050 ---------A T 03930 PRINT"SECOND"
    0x558a3a298240 ---------A   03940 LET E=2
    0x558a3a2983f0 ---------A T 03950 IF J>27 THEN 3970
    0x558a3a2985b0 ---------A   03960 IF O<2 THEN 4010
    0x558a3a298730 ---------A T 03970 LET D=2
    0x558a3a2987a0 ---------A T 03980 GOSUB 8110
    0x558a3a2989c0 ---------A   03990 LET B(E)=B(0)
    0x558a3a298a30 ---------A   04000 GOTO 1170
    0x558a3a298b90 ---------A T 04010 LET D=1
    0x558a3a298c00 ---------A   04020 GOTO 3980
    0x558a3a298d20 ---------A T 04030 PRINT"FIRST"
    0x558a3a298e90 ---------A   04040 LET E=1
    0x558a3a298f00 ---------A   04050 GOTO 3950
    0x558a3a2990a0 ---------A T 04060 IF J<4 THEN 8160
    0x558a3a299260 ---------A   04070 IF J>11 THEN 4100
    0x558a3a299420 ---------A   04080 IF J>5 THEN 8160
    0x558a3a299720 ---------A   04090 LET J=2*J+14
    0x558a3a2998d0 ---------A T 04100 IF J>16 THEN 5250
    0x558a3a299b00 ---------A T 04110 FOR I=1 TO 3
    0x558a3a299d20 ---------A   04120 IF B(I)=0 THEN 4150
    0x558a3a299fe0 ---------A   04130 LET B(I+3)=1
    0x558a3a29a090 ---------A   04140 NEXT I
    0x558a3a29a580 ---------A T 04150 IF B(2)*(1-B(5))=0 THEN 4290
    0x558a3a29ab20 ---------A   04160 ON D(J,2) GOTO 4190,4190,4170,4170,4190,4220
    0x558a3a29ac90 ---------A T 04170 LET T7=1
    0x558a3a29ad00 ---------A   04180 GOTO 4290
    0x558a3a29af60 ---------A T 04190 LET B(1)=B(2)
    0x558a3a29b170 ---------A   04200 LET B(2)=0
    0x558a3a29b210 ---------A   04210 GOTO 4290
    0x558a3a29b5c0 ---------A T 04220 PRINT"DO YOU WANT "N$(B(2))" TO TRY FOR THIRD ON THE PLAY";
    0x558a3a29b6a0 ---------A   04230 INPUT T$
    0x558a3a29b890 ---------A   04240 IF T$="Y" THEN 4280
    0x558a3a29ba80 ---------A   04250 IF T$="N" THEN 4190
    0x558a3a29bbd0 ---------A   04260 PRINT"CHANCE=.3 IF HE IS PLAYED"
    0x558a3a29bc40 ---------A   04270 GOTO 4220
    0x558a3a29be50 ---------A T 04280 LET B(5)=.7
    0x558a3a29c300 ---------A T 04290 IF B(3)*(1-B(6))=0 THEN 4560
    0x558a3a29c780 ---------A   04300 LET V=D(J,2)+6*I1
    0x558a3a29cfe0 ---------A   04310 ON V GOTO 4320,4320,4440,4560,4440,4560,4320,4320,4320,4540,4320,4540
    0x558a3a29d230 ---------A T 04320 IF B(2)=0 THEN 4400
    0x558a3a29d3f0 ---------A   04330 IF T7=0 THEN 4370
    0x558a3a29d670 ---------A   04340 LETB(1)=B(2)
    0x558a3a29d880 ---------A   04350 LET B(2)=0
    0x558a3a29d920 ---------A   04360 GOTO 4400
    0x558a3a29da60 ---------A T 04370 PRINT"TWO MEN HAVE ENDED UP ON THIRD. TRY PLAY AGAIN"
    0x558a3a29dd70 ---------A   04380 LET B(5)=B(6)=0
    0x558a3a29dde0 ---------A   04390 GOTO 4110
    0x558a3a29e040 ---------A T 04400 LET B(2)=B(3)
    0x558a3a29e250 ---------A   04410 LET B(3)=0
    0x558a3a29e3c0 ---------A   04420 LET T3=1
    0x558a3a29e430 ---------A   04430 GOTO 4560
    0x558a3a29e660 ---------A T 04440 LET B(6)=.25
    0x558a3a29ea20 ---------A T 04450 PRINT"DO YOU WANT "N$(B(3))" TO TRY TO SCORE ON THE PLAY";
    0x558a3a29eb00 ---------A   04460 INPUT T$
    0x558a3a29ecf0 ---------A   04470 IF T$="Y" THEN 4560
    0x558a3a29eef0 ---------A   04480 IF T$="N" THEN 4520
    0x558a3a29f350 ---------A   04490 PRINT"CHANCE="1-B(6)"IF HE IS PLAYED"
    0x558a3a29f4b0 ---------A   04500 PRINT"EVEN IF YOU TYPE 'NO', MAN WILL GO HOME IF BALL THROWN TO 2ND"
    0x558a3a29f520 ---------A   04510 GOTO 4450
    0x558a3a29f720 ---------A T 04520 LET B(6)=0
    0x558a3a29f790 ---------A   04530 GOTO 4320
    0x558a3a29f990 ---------A T 04540 LET B(6)=.4
    0x558a3a29fa10 ---------A   04550 GOTO 4450
    0x558a3a29ff00 ---------A T 04560 IF B(1)+B(2)+B(3)=0 THEN 8160
    0x558a3a2a0090 ---------A   04570 PRINT"WHAT BASE DO YOU THROW THE BALL TO(4=HOME,5=LIST CHANCES)";
    0x558a3a2a01e0 ---------A   04580 INPUT T1
    0x558a3a2a03a0 ---------A   04590 IF T1=1 THEN 5220
    0x558a3a2a0580 ---------A   04600 IF T1<5 THEN 4720
    0x558a3a2a06e0 ---------A   04610 PRINT"CHANCES FOR OUTS AT EACH BASE"
    0x558a3a2a0830 ---------A   04620 PRINT"1: AUTOMATIC",
    0x558a3a2a0a40 ---------A   04630 FOR I=2 TO 4
    0x558a3a2a0c30 ---------A   04640 PRINT I":";
    0x558a3a2a0f30 ---------A   04650 IF B(I+2)<>1 THEN 4680
    0x558a3a2a13b0 ---------A   04660 PRINT Q(I-1,D(J,2))"FORCEOUT",
    0x558a3a2a1420 ---------A   04670 GOTO 4690
    0x558a3a2a1720 ---------A T 04680 PRINT B(I+2)"TAG",
    0x558a3a2a17d0 ---------A T 04690 NEXT I
    0x558a3a2a1850 ---------A   04700 PRINT
    0x558a3a2a18d0 ---------A   04710 GOTO 4560
    0x558a3a2a1bb0 ---------A T 04720 IF B(T1+2)=0 THEN 4560
    0x558a3a2a1d70 ---------A   04730 IF T3=0 THEN 4780
    0x558a3a2a1f30 ---------A   04740 IF T1<>2 THEN 4780
    0x558a3a2a21b0 ---------A   04750 LET B(3)=B(2)
    0x558a3a2a23c0 ---------A   04760 LET B(2)=0
    0x558a3a2a2540 ---------A   04770 LET T3=0
    0x558a3a2a2840 ---------A T 04780 IF B(T1+2)=1 THEN 4930
    0x558a3a2a2b10 ---------A   04790 IF RND>B(T1+2) THEN 4870
    0x558a3a2a2c50 ---------A   04800 PRINT"RUNNER IS TAGGED OUT"
    0x558a3a2a2f00 ---------A   04810 LET B(T1-1)=0
    0x558a3a2a3070 ---------A   04820 LET D=1
    0x558a3a2a30f0 ---------A   04830 GOSUB 8110
    0x558a3a2a3390 ---------A   04840 PRINT N$(B(0))" ON FIRST"
    0x558a3a2a3600 ---------A   04850 LET B(1)=B(0)
    0x558a3a2a3680 ---------A   04860 GOTO 8160
    0x558a3a2a37a0 ---------A T 04870 PRINT"EVERYONE IS SAFE"
    0x558a3a2a3910 ---------A   04880 LET D=1
    0x558a3a2a3990 ---------A   04890 GOSUB 8110
    0x558a3a2a3c30 ---------A   04900 PRINT N$(B(0))" ON FIRST"
    0x558a3a2a3ea0 ---------A   04910 LET B(1)=B(0)
    0x558a3a2a3f20 ---------A   04920 GOTO 1170
    0x558a3a2a4330 ---------A T 04930 IFRND>Q(T1-1,D(J,2)) THEN 4870
    0x558a3a2a4690 ---------A   04940 PRINT N$(B(T1-1))" FORCED OUT"
    0x558a3a2a4940 ---------A   04950 LET B(T1-1)=0
    0x558a3a2a4af0 ---------A   04960 IF O=2 THEN 8160
    0x558a3a2a4cb0 ---------A   04970 IF T1=4 THEN 5060
    0x558a3a2a4e80 ---------A   04980 IF T1=3 THEN 5040
    0x558a3a2a5140 ---------A   04990 IF D(J,2)<5 THEN 5020
    0x558a3a2a5340 ---------A   05000 LET T2=4
    0x558a3a2a53b0 ---------A   05010 GOTO 5070
    0x558a3a2a5510 ---------A T 05020 LET T2=6
    0x558a3a2a5580 ---------A   05030 GOTO 5070
    0x558a3a2a56e0 ---------A T 05040 LET T2=5
    0x558a3a2a5750 ---------A   05050 GOTO 5070
    0x558a3a2a58d0 ---------A T 05060 LET T2=2
    0x558a3a2a5d90 ---------A T 05070 PRINT N$(10*(1-T)+T2)" MAKES THE PIVOT"
    0x558a3a2a62b0 ---------A   05080 IF RND<S(10*(1-T)+T2,7) THEN 5120
    0x558a3a2a6400 ---------A   05090 PRINT"HE THROWS THE BALL AWAY"
    0x558a3a2a6570 ---------A   05100 LET M1=2
    0x558a3a2a65e0 ---------A   05110 GOTO 8160
    0x558a3a2a6740 ---------A T 05120 LET M1=1
    0x558a3a2a6900 ---------A   05130 IF T1>2 THEN 5150
    0x558a3a2a6ef0 ---------A   05140 LET T1=T1+INT((S(B(0),5)-3)/2)
    0x558a3a2a7320 ---------A T 05150 IF RND>Q(T1+4,D(J,2)) THEN 5200
    0x558a3a2a7470 ---------A   05160 PRINT"AND OVER TO FIRST FOR THE DOUBLE PLAY"
    0x558a3a2a75e0 ---------A   05170 LET O3=1
    0x558a3a2a7750 ---------A   05180 LET O2=2
    0x558a3a2a77d0 ---------A   05190 GOTO 8160
    0x558a3a2a7900 ---------A T 05200 PRINT"DOUBLE PLAY NOT SUCCESSFUL"
    0x558a3a2a7970 ---------A   05210 GOTO 8160
    0x558a3a2a7ad0 ---------A T 05220 LET O3=1
    0x558a3a2a7c40 ---------A   05230 LET M1=1
    0x558a3a2a7cb0 ---------A   05240 GOTO 8160
    0x558a3a2a7e50 ---------A T 05250 IF J>21 THEN 5580
    0x558a3a2a8020 ---------A   05260 IF O=2 THEN 8160
    0x558a3a2a8530 ---------A   05270 IF B(1)+B(2)+B(3)=0 THEN 8160
    0x558a3a2a86c0 ---------A T 05280 PRINT"AT WHAT BASE DO YOU WANT TO TRY FOR A D.P.(4=LIST CHANCES)";
    0x558a3a2a8790 ---------A   05290 INPUT T1
    0x558a3a2a8950 ---------A   05300 IF T1<4 THEN 5400
    0x558a3a2a8b70 ---------A   05310 FOR I=1 TO 3
    0x558a3a2a8d60 ---------A   05320 PRINT I":";
    0x558a3a28a2f0 ---------A   05330 IF B(I)=0 THEN 5360
    0x558a3a28a690 ---------A   05340 PRINT Q(I+8,D(J,2)),
    0x558a3a28a700 ---------A   05350 GOTO 5370
    0x558a3a28a840 ---------A T 05360 PRINT "NO RUNNER",
    0x558a3a28a8f0 ---------A T 05370 NEXT I
    0x558a3a28a970 ---------A   05380 PRINT
    0x558a3a28a9f0 ---------A   05390 GOTO 5280
    0x558a3a28ac00 ---------A T 05400 IF B(T1)=0 THEN 5280
    0x558a3a28b020 ---------A   05410 IF RND>Q(T1+8,D(J,2)) THEN 5560
    0x558a3a2aaea0 ---------A   05420 LET B(T1)=0
    0x558a3a2ab050 ---------A   05430 IF O=1 THEN 5490
    0x558a3a2ab280 ---------A   05440 FOR I=1 TO 3
    0x558a3a2ab4f0 ---------A   05450 IF I*T1=3 THEN 5480
    0x558a3a2ab710 ---------A   05460 IF B(I)=0 THEN 5480
    0x558a3a2ab790 ---------A   05470 GOTO 5520
    0x558a3a2ab830 ---------A T 05480 NEXT I
    0x558a3a2ab970 ---------A T 05490 PRINT"DOUBLE PLAY"
    0x558a3a2abae0 ---------A   05500 LET O2=2
    0x558a3a2abb60 ---------A   05510 GOTO 8160
    0x558a3a2abd20 ---------A T 05520 IF RND>.3 THEN 5490
    0x558a3a2abfa0 ---------A   05530 PRINT"TRIPLE PLAY MADE ON "N$(B(I))
    0x558a3a2ac110 ---------A   05540 LET O2=3
    0x558a3a2ac190 ---------A   05550 GOTO 8160
    0x558a3a2ac2b0 ---------A T 05560 PRINT"UNSUCCESSFUL"
    0x558a3a2ac320 ---------A   05570 GOTO 8160
    0x558a3a2ac4d0 ---------A T 05580 IF O=2 THEN 8160
    0x558a3a2aca00 ---------A   05590 LET F=J-INT((J-1)/3)*3
    0x558a3a2acc60 ---------A   05600 IF B(3)=0 THEN 5810
    0x558a3a2ad0e0 ---------A   05610 LET C=A(J-12,S(B(3),5))
    0x558a3a2ad290 ---------A   05620 IF C<1 THEN 5660
    0x558a3a2ad410 ---------A   05630 LET I=3
    0x558a3a2ad480 ---------A   05640 GOSUB 8500
    0x558a3a2ad500 ---------A   05650 GOTO 5810
    0x558a3a2ad8a0 ---------A T 05660 PRINT"DO YOU WANT "N$(B(3))" TO SCORE ON THE FLY";
    0x558a3a2ad980 ---------A   05670 INPUT T$
    0x558a3a2adb70 ---------A   05680 IF T$="Y" THEN 5720
    0x558a3a2add60 ---------A   05690 IF T$="N" THEN 8160
    0x558a3a2adf20 ---------A   05700 PRINT"CHANCE TO SCORE="C
    0x558a3a2adfa0 ---------A   05710 GOTO 5660
    0x558a3a2ae1e0 ---------A T 05720 IF B(1)=0 THEN 5750
    0x558a3a2ae260 ---------A   05730 GOSUB 8580
    0x558a3a2ae2c0 ---------A   05740 GOTO 5770
    0x558a3a2ae420 ---------A T 05750 LET I=3
    0x558a3a2ae490 ---------A   05760 GOSUB 8500
    0x558a3a2ae630 ---------A T 05770 IF O1=0 THEN 5800
    0x558a3a2ae7b0 ---------A   05780 LET O2=2 
    0x558a3a2ae930 ---------A   05790 LET O1=0
    0x558a3a2aeb90 ---------A T 05800 IF O+O2=3 THEN 8160
    0x558a3a2aedf0 ---------A T 05810 IF B(2)=0 THEN 8160
    0x558a3a2aef80 ---------A   05820 LET I=2
    0x558a3a2af3f0 ---------A   05830 LET C=A(J-21,S(B(2),5))
    0x558a3a2af5a0 ---------A   05840 IF C=0 THEN 8160
    0x558a3a2af760 ---------A   05850 IF C<1 THEN 5880
    0x558a3a2af7e0 ---------A   05860 GOSUB 8500
    0x558a3a2af850 ---------A   05870 GOTO 8160
    0x558a3a2af9a0 ---------A T 05880 PRINT"DO YOU WANT THE FLY TO";
    0x558a3a2afa10 ---------A   05890 GOSUB 8440
    0x558a3a2afbd0 ---------A   05900 LET O2=O2+O1
    0x558a3a2afc60 ---------A   05910 GOTO 8160
    0x558a3a2afdc0 ---------A T 05920 PRINT"WHAT BASE DO YOU WANT TO LEAD FROM(0=NONE)";
    0x558a3a2afe90 ---------A   05930 INPUT T5
    0x558a3a2b0060 ---------A   05940 IF T5=0 THEN 6120
    0x558a3a2b02a0 ---------A   05950 IF B(T5)=0 THEN 5920
    0x558a3a2b0810 ---------A   05960 IF ABS(L(T5)-10*B(T5)-2.5)>2 THEN 6000
    0x558a3a2b0ac0 ---------A   05970 PRINT N$(B(T5))"'S PREVIOUS LEAD REMAINS IN EFFECT,"
    0x558a3a2b0c00 ---------A   05980 PRINT"AS LONG AS HE IS ON THAT BASE"
    0x558a3a2b0c80 ---------A   05990 GOTO 5920
    0x558a3a2b1050 ---------A T 06000 LET L(T5)=INT(4*RND)+1
    0x558a3a2b1350 ---------A   06010 PRINT"RUNNER HAS A TYPE"L(T5)"LEAD (1=BEST,4=WORST)"
    0x558a3a2b1730 ---------A   06020 LET L(T5)=L(T5)+10*B(T5)
    0x558a3a2b18f0 ---------A   06030 IF RND>.06 THEN 6110
    0x558a3a2b1d40 ---------A   06040 IF RND>S(11-10*T,7) THEN 6080
    0x558a3a2b1fc0 ---------A   06050 PRINT N$(B(T5))" PICKED OFF"
    0x558a3a2b2190 ---------A   06060 LET B(T5)=0
    0x558a3a2b2230 ---------A   06070 GOTO 8160
    0x558a3a2b2370 ---------A T 06080 PRINT"PITCHER THROWS THE BALL AWAY TRYING FOR A PICKOFF"
    0x558a3a2b24e0 ---------A   06090 LET D=1
    0x558a3a2b2570 ---------A   06100 GOSUB 8110
    0x558a3a2b2d20 ---------A T 06110 IF B(1)*(B(2)+B(3))+B(2)*B(3)>0 THEN 5920
    0x558a3a2b2eb0 ---------A T 06120 PRINT"WHAT BASE DO YOU WANT TO STEAL FROM(0=NONE,4=LIST CHANCES)";
    0x558a3a2b2f80 ---------A T 06130 INPUT T5
    0x558a3a2b3140 ---------A   06140 IF T5=0 THEN 6420
    0x558a3a2b3300 ---------A   06150 IF T5<>4 THEN 6280
    0x558a3a2b3520 ---------A   06160 FOR I=1 TO 3
    0x558a3a2b3710 ---------A   06170 PRINT I":";
    0x558a3a2b3920 ---------A   06180 IF B(I)>0 THEN 6210
    0x558a3a2b3a80 ---------A   06190 PRINT"NO RUNNER",
    0x558a3a2b3b00 ---------A   06200 GOTO 6250
    0x558a3a2b3e60 ---------A T 06210 IF INT(L(I)/10)=B(I) THEN 6240
    0x558a3a2b3fc0 ---------A   06220 PRINT"NO LEAD",
    0x558a3a2b4050 ---------A   06230 GOTO 6250
    0x558a3a2b47f0 ---------A T 06240 PRINT A(4*I+L(I)-10*B(I)+14,S(B(I),5)),
    0x558a3a2b48a0 ---------A T 06250 NEXT I
    0x558a3a2b4920 ---------A   06260 PRINT
    0x558a3a2b49a0 ---------A   06270 GOTO 6120
    0x558a3a2b4ba0 ---------A T 06280 IF B(T5)>0 THEN 6310
    0x558a3a2b4ce0 ---------A   06290 PRINT"NO RUNNER"
    0x558a3a2b4d60 ---------A   06300 GOTO 6120
    0x558a3a2b50f0 ---------A T 06310 IF INT(L(T5)/10)=B(T5) THEN 6340
    0x558a3a2b5250 ---------A   06320 PRINT"RUNNER MAY NOT STEAL WITHOUT TAKING A LEAD FIRST"
    0x558a3a2b52d0 ---------A   06330 GOTO 5920
    0x558a3a2b55b0 ---------A T 06340 IF B(T5+1)=0 THEN 6390
    0x558a3a2b5780 ---------A   06350 IF T5=3 THEN 6390
    0x558a3a2b5ab0 ---------A   06360 IF L(T5+4)=1 THEN 6390
    0x558a3a2b5c20 ---------A   06370 PRINT"YOU MUST GIVE THE RUNNER AHEAD OF YOU THE STEAL SIGN FIRST"
    0x558a3a2b5c90 ---------A   06380 GOTO 6120
    0x558a3a2b5f70 ---------A T 06390 LET L(T5+3)=1
    0x558a3a2b60f0 ---------A   06400 PRINT"WHAT OTHER BASE DO YOU WANT TO STEAL FROM ON THE PLAY(0=NONE)";
    0x558a3a2b6170 ---------A   06410 GOTO 6130
    0x558a3a2b6630 ---------A T 06420 IF L(4)+L(5)+L(6)=0 THEN 1350
    0x558a3a2b6860 ---------A   06430 FOR I=1 TO 3
    0x558a3a2b6b80 ---------A   06440 IF L(I+3)=0 THEN 6470
    0x558a3a2b74c0 ---------A   06450 LET L(I+6)=A(4*I+L(I)-10*B(I)+14,S(B(I),5))
    0x558a3a2b7750 ---------A   06460 LET T6=I+1
    0x558a3a2b7800 ---------A T 06470 NEXT I
    0x558a3a2b7d10 ---------A   06480 IF L(4)+L(5)+L(6)=1 THEN 6520
    0x558a3a2b7e80 ---------A T 06490 PRINT"WHICH BASE DO YOU THROW TO (4=HOME)";
    0x558a3a2b7f60 ---------A   06500 INPUT T6
    0x558a3a2b8260 ---------A   06510 IF L(T6+2)=0 THEN 6490
    0x558a3a2b8490 ---------A T 06520 LET I=T6-1
    0x558a3a2b88d0 ---------A   06530 IF RND<S(12-10*T,7)THEN 6670
    0x558a3a2b8a20 ---------A   06540 PRINT "ERROR BY THE CATCHER"
    0x558a3a2b8bd0 ---------A   06550 IF RND<.5 THEN 6570
    0x558a3a2b8d50 ---------A   06560 LET W6=1
    0x558a3a2b8ed0 ---------A T 06570 LETD=1
    0x558a3a2b9190 ---------A   06580 FOR I=3 TO 1 STEP-1
    0x558a3a2b9490 ---------A   06590     IF L(I+3)=0THEN 6610
    0x558a3a2b9510 ---------A   06600     GOSUB 8310
    0x558a3a2b95b0 ---------A T 06610 NEXT I
    0x558a3a2b9770 ---------A   06620 IF W6<>1 THEN 6640
    0x558a3a2b97f0 ---------A   06630 GOSUB 8110
    0x558a3a2b9990 ---------A T 06640 IFO1=0THEN 1350
    0x558a3a2b9ad0 ---------A   06650 LETO2=O1
    0x558a3a2b9b50 ---------A   06660 GOTO 8160
    0x558a3a2b9df0 ---------A T 06670 IFRND<L(I+6) THEN 6720
    0x558a3a2ba020 ---------A   06680 LET O1=O1+1
    0x558a3a2ba290 ---------A   06690 PRINT N$(B(I))" OUT STEALING"
    0x558a3a2ba460 ---------A   06700 LET B(I)=0
    0x558a3a2ba620 ---------A   06710 IF O=2 THEN 6570
    0x558a3a2ba8e0 ---------A T 06720 FOR J=3 TO 1 STEP -1
    0x558a3a2baa70 ---------A   06730 IF J=I THEN 6770
    0x558a3a2bad80 ---------A   06740 IF L(J+3)<>1 THEN 6770
    0x558a3a2bb050 ---------A   06750 IF ABS(J-I)>1 THEN 6770
    0x558a3a2bb450 ---------A   06760 IF L(J)-10*B(J)=4 THEN 6790
    0x558a3a2bb510 ---------A T 06770 NEXT J
    0x558a3a2bb5a0 ---------A   06780 GOTO 6570
    0x558a3a2bb840 ---------A T 06790 IF RND<L(J+6)THEN 6570
    0x558a3a2bba70 ---------A   06800 LET O1=O1+1
    0x558a3a2bbce0 ---------A   06810 PRINT N$(B(J))" OUT STEALING"
    0x558a3a2bbeb0 ---------A   06820 LET B(J)=0
    0x558a3a2bbf20 ---------A   06830 GOTO 6570
    0x558a3a2bbf90 ---------A T 06840 PRINT
    0x558a3a2bc250 ---------A   06850 PRINT N$(B(0))" IS UP"
    0x558a3a2bc3a0 ---------A   06860 PRINT"INTENTIONAL WALK";
    0x558a3a2bc470 ---------A   06870 INPUT T$
    0x558a3a2bc650 ---------A   06880 IF T$="Y"THEN 1680
    0x558a3a2bc7b0 ---------A   06890 PRINT"BUNT";
    0x558a3a2bc890 ---------A   06900 INPUT T$
    0x558a3a2bca70 ---------A   06910 IF T$<>"Y" THEN 1490
    0x558a3a2bcc80 ---------A   06920 LET P2=0
    0x558a3a2bd180 ---------A   06930 IF L(4)+L(5)+L(6)=0 THEN 6960
    0x558a3a2bd2e0 ---------A   06940 PRINT "BATTER STARTS WITH ONE STRIKE BECAUSE OF STEAL PLAY"
    0x558a3a2bd460 ---------A   06950 LET P2=1
    0x558a3a2bdb80 ---------A T 06960 LET P3=.81+(4-S(B(0),5))^2*.00875
    0x558a3a2bddf0 ---------A T 06970 IF B(3)=0 THEN 7040
    0x558a3a2bdf60 ---------A   06980 PRINT"DO YOU WANT A SUICIDE SQUEEZE";
    0x558a3a2be040 ---------A   06990 INPUT T$
    0x558a3a2be220 ---------A   07000 IF T$<>"Y" THEN 7040
    0x558a3a2be420 ---------A   07010 LET P4=1
    0x558a3a2be590 ---------A   07020 LET I=3
    0x558a3a2be600 ---------A   07030 GOTO 7050
    0x558a3a2be760 ---------A T 07040 LET P4=0
    0x558a3a2be910 ---------A T 07050 LET P0=RND
    0x558a3a2be980 ---------A   07060 GOTO 7220
    0x558a3a2beb80 ---------A T 07070 LET O=O+1
    0x558a3a2becf0 ---------A   07080 LET O1=0
    0x558a3a2beea0 ---------A   07090 IF O=1 THEN 7120
    0x558a3a2befe0 ---------A   07100 PRINT"TWO OUTS"
    0x558a3a2bf050 ---------A   07110 GOTO 7130
    0x558a3a2bf180 ---------A T 07120 PRINT"ONE OUT"
    0x558a3a2bf2d0 ---------A T 07130 PRINT"IS THE BUNT STILL ON";
    0x558a3a2bf3b0 ---------A   07140 INPUT T$
    0x558a3a2bf590 ---------A   07150 IF T$<>"N" THEN 6970
    0x558a3a2bf760 ---------A   07160 IF P2<2 THEN 1490
    0x558a3a2bfc00 ---------A   07170 IF RND>S(10*(1-T),3) THEN 1490
    0x558a3a2bfed0 ---------A   07180 PRINT N$(B(0))" STRIKES OUT ON THE NEXT PITCH"
    0x558a3a2bff40 ---------A   07190 GOTO 8160
    0x558a3a2c0140 ---------A T 07200 LET W3=T+1
    0x558a3a2c01c0 ---------A   07210 GOTO 8160
    0x558a3a2c0360 ---------A T 07220 IF P0>.15 THEN 7370
    0x558a3a2c0590 ---------A   07230 LET P2=P2+1
    0x558a3a2c0750 ---------A   07240 PRINT"CALLED STRIKE"P2
    0x558a3a2c0de0 ---------A   07250 LET C=.45-(4-S(B(3),5))^2*.02
    0x558a3a2c0f90 ---------A   07260 IF P2<3 THEN 7320
    0x558a3a2c1150 ---------A   07270 IF O=2 THEN 8160
    0x558a3a2c1310 ---------A   07280 IF P4=0 THEN 8160
    0x558a3a2c1390 ---------A   07290 GOSUB 8500
    0x558a3a2c1590 ---------A   07300 LET O2=1+O1
    0x558a3a2c1600 ---------A   07310 GOTO 8160
    0x558a3a2c17a0 ---------A T 07320 IF P4=0 THEN 7130
    0x558a3a2c1830 ---------A   07330 GOSUB 8500
    0x558a3a2c1a70 ---------A   07340 IF O+O1=3 THEN 7200
    0x558a3a2c1c30 ---------A   07350 IF O1=1 THEN 7070
    0x558a3a2c1cb0 ---------A   07360 GOTO 7130
    0x558a3a2c1e70 ---------A T 07370 IF P0>.23THEN 7440
    0x558a3a2c1fc0 ---------A   07380 PRINT"BUNT IS POPPED UP AND CAUGHT"
    0x558a3a2c2190 ---------A   07390 IF P4=0 THEN 8160
    0x558a3a2c2460 ---------A   07400 PRINT N$(B(3))" IS CAUGHT OFF BASE AND IS OUT"
    0x558a3a2c2670 ---------A   07410 LET B(3)=0
    0x558a3a2c27e0 ---------A   07420 LET O2=2
    0x558a3a2c2850 ---------A   07430 GOTO 8160
    0x558a3a2c29f0 ---------A T 07440 IF P0>.49THEN 7490
    0x558a3a2c2c20 ---------A   07450 LET P2=P2+1
    0x558a3a2c2dd0 ---------A   07460 PRINT"FOUL BUNT, STRIKE"P2
    0x558a3a2c2f80 ---------A   07470 IF P2<3 THEN 7130
    0x558a3a2c3000 ---------A   07480 GOTO 8160
    0x558a3a2c31c0 ---------A T 07490 IF P0>.56THEN 7570
    0x558a3a2c3310 ---------A   07500 PRINT"BAD BUNT, RIGHT BACK AT A FIELDER"
    0x558a3a2c3480 ---------A   07510 LET J=15
    0x558a3a2c3630 ---------A   07520 IF P4=0 THEN 4110
    0x558a3a2c37c0 ---------A   07530 LET P5=1
    0x558a3a2c38f0 ---------A   07540 PRINT"NO PLAY AT HOME"
    0x558a3a2c3b00 ---------A   07550 LET B(3)=0
    0x558a3a2c3b70 ---------A   07560 GOTO 4110
    0x558a3a2c3ce0 ---------A T 07570 IF P0>P3 THEN 7960
    0x558a3a2c3e30 ---------A   07580 PRINT"GOOD SACRIFICE BUNT"
    0x558a3a2c4080 ---------A   07590 IF B(3)>0 THEN 7630
    0x558a3a2c4200 ---------A   07600 LET D=1
    0x558a3a2c4270 ---------A   07610 GOSUB 8110
    0x558a3a2c42d0 ---------A   07620 GOTO 8160
    0x558a3a2c4480 ---------A T 07630 IF P4=1 THEN 7860
    0x558a3a2c4820 ---------A   07640 IF B(1)*B(2)=0 THEN 7820
    0x558a3a2c4a40 ---------A   07650 LET B(3)=0
    0x558a3a2c4bb0 ---------A   07660 LET D=1
    0x558a3a2c4c40 ---------A   07670 GOSUB 8110
    0x558a3a2c4da0 ---------A   07680 PRINT"DO YOU TRY FOR A FORCEOUT AT HOME?"
    0x558a3a2c4f10 ---------A   07690 PRINT"CHANCE=.75. IF YOU TYPE 'NO', BATTER IS OUT";
    0x558a3a2c4ff0 ---------A   07700 INPUT T$
    0x558a3a2c51d0 ---------A   07710 IF T$<>"N" THEN 7740
    0x558a3a2c5350 ---------A   07720 LET P5=1
    0x558a3a2c53d0 ---------A   07730 GOTO 8160
    0x558a3a2c5670 ---------A T 07740 PRINT N$(B(0))" ON FIRST"
    0x558a3a2c58f0 ---------A   07750 LET B(1)=B(0)
    0x558a3a2c5ab0 ---------A   07760 IF RND<.75 THEN 7800
    0x558a3a2c5bf0 ---------A   07770 PRINT"SAFE AT HOME"
    0x558a3a2c5c60 ---------A   07780 GOSUB 8010
    0x558a3a2c5cd0 ---------A   07790 GOTO 1170
    0x558a3a2c5df0 ---------A T 07800 PRINT"OUT AT THE PLATE"
    0x558a3a2c5e90 ---------A   07810 GOTO 8160
    0x558a3a2c5fe0 ---------A T 07820 PRINT"DO YOU TRY TO KEEP THE RUN FROM SCORING(IF YOU DO,"
    0x558a3a2c6130 ---------A   07830 PRINT"BATTER IS SAFE)";
    0x558a3a2c6210 ---------A   07840 INPUT T$
    0x558a3a2c63f0 ---------A   07850 IF T$="Y" THEN 7890
    0x558a3a2c6570 ---------A T 07860 LET M1=1
    0x558a3a2c66e0 ---------A   07870 LET O3=1
    0x558a3a2c6760 ---------A   07880 GOTO 8160
    0x558a3a2c69a0 ---------A T 07890 IF B(2)>0 THEN 7930
    0x558a3a2c6b20 ---------A   07900 LET I=1
    0x558a3a2c6c90 ---------A   07910 LET D=1
    0x558a3a2c6d10 ---------A   07920 GOSUB 8310
    0x558a3a2c6fb0 ---------A T 07930 PRINT N$(B(0))" ON FIRST"
    0x558a3a2c7220 ---------A   07940 LET B(1)=B(0)
    0x558a3a2c72b0 ---------A   07950 GOTO 1170
    0x558a3a2c7630 ---------A T 07960 PRINT"BUNT SINGLE--"N$(B(0))" ON FIRST"
    0x558a3a2c77a0 ---------A   07970 LET D=1
    0x558a3a2c7810 ---------A   07980 GOSUB 8110
    0x558a3a2c7a70 ---------A   07990 LET B(1)=B(0)
    0x558a3a2c7af0 ---------A   08000 GOTO 1170
    0x558a3a2c80d0 ---------B G 08010 LET S(10*T,8)=S(10*T,8)+1
    0x558a3a2c87c0 ---------B   08020 PRINT"SCORE:",N$(0);S(0,8),N$(10);S(10,8)
    0x558a3a2c8970 ---------B   08030 IF I2<9 THEN 8100
    0x558a3a2c8b40 ---------B   08040 IF T=0 THEN 8100
    0x558a3a2c8f40 ---------B   08050 IF S(0,8)>=S(10,8) THEN 8100
    0x558a3a2c9110 ---------B   08060 IF H1=1 THEN 8100
    0x558a3a2c9270 --------BA T 08070 PRINT"GAME IS OVER***"
    0x558a3a2c9960 --------BA   08080 PRINT"FINAL SCORE:",N$(0);S(0,8),N$(10);S(10,8)
    0x558a3a2c99b0 --------BA   08090 STOP
    0x558a3a2c9a10 ---------B T 08100 RETURN
    0x558a3a2c9cf0 ---------C G 08110 FOR I=3 TO 1 STEP -1
    0x558a3a2c9f10 ---------C   08120 IF B(I)=0 THEN 8140
    0x558a3a2c9f90 ---------C   08130 GOSUB 8310
    0x558a3a2ca030 ---------C T 08140 NEXT I
    0x558a3a2ca090 ---------C   08150 RETURN
    0x558a3a2ca210 ---------A T 08160 LET O1=0
    0x558a3a2ca3e0 ---------A   08170 LET O=O+O2
    0x558a3a2ca550 ---------A   08180 LET O2=1
    0x558a3a2ca700 ---------A   08190 IF O>2 THEN 8250
    0x558a3a2ca8c0 ---------A   08200 IF O=2 THEN 8230
    0x558a3a2caa00 ---------A   08210 PRINT"ONE OUT"
    0x558a3a2caa70 ---------A   08220 GOTO 1170
    0x558a3a2cab90 ---------A T 08230 PRINT "TWO OUTS"
    0x558a3a2cac00 ---------A   08240 GOTO 1170
    0x558a3a2cada0 ---------A T 08250 IF I2<9 THEN 1060
    0x558a3a2caf70 ---------A   08260 IF T=1 THEN 8290
    0x558a3a2cb370 ---------A   08270 IF S(10,8)>S(0,8) THEN 8070
    0x558a3a2cb400 ---------A   08280 GOTO 1060
    0x558a3a2cb7e0 ---------A T 08290 IF S(10,8)=S(0,8) THEN 1060
    0x558a3a2cb870 ---------A   08300 GOTO 8070
    0x558a3a2cba70 ---------D G 08310 IF B(I)=0 THEN 8430
    0x558a3a2cbc30 ---------D   08320 PRINT N$(B(I));
    0x558a3a2cbe80 ---------D   08330 IF I+D<4 THEN 8370
    0x558a3a2cbfc0 ---------D   08340 PRINT" SCORES"
    0x558a3a2cc030 ---------D   08350 GOSUB 8010
    0x558a3a2cc090 ---------D   08360 GOTO 8420
    0x558a3a2cc310 ---------D T 08370 LET B(I+D)=B(I)
    0x558a3a2cc570 ---------D   08380 IF I+D=2 THEN 8410
    0x558a3a2cc6b0 ---------D   08390 PRINT" MOVES TO THIRD"
    0x558a3a2cc730 ---------D   08400 GOTO 8420
    0x558a3a2cc850 ---------D T 08410 PRINT" MOVES TO SECOND"
    0x558a3a2cca20 ---------D T 08420 LET B(I)=0
    0x558a3a2cca70 ---------D T 08430 RETURN
    0x558a3a2ccd20 ---------E B 08440 PRINT" ADVANCE "N$(B(I));
    0x558a3a2cce00 ---------E   08450 INPUT T$
    0x558a3a2ccff0 ---------E   08460 IF T$="Y" THEN 8500
    0x558a3a2cd1e0 ---------E   08470 IF T$="N" THEN 8540
    0x558a3a2cd3a0 ---------E   08480 PRINT"CHANCE OF ADVANCING="C
    0x558a3a2cd410 ---------E   08490 GOTO 8440
    0x558a3a2cd570 --------FE B 08500 IF RND<C THEN 8550
    0x558a3a2cd700 --------FE   08510 LET O1=1
    0x558a3a2cd970 --------FE   08520 PRINT N$(B(I))" IS OUT"
    0x558a3a2cdb40 --------FE   08530 LET B(I)=0
    0x558a3a2cdb90 --------FE T 08540 RETURN
    0x558a3a2cdd10 --------FE T 08550 LET D=1
    0x558a3a2cdd80 --------FE   08560 GOSUB 8310
    0x558a3a2cddc0 --------FE   08570 RETURN
    0x558a3a2ce030 ---------G G 08580 IF B(2)>0 THEN 8780
    0x558a3a2ce1e0 ---------G   08590 LET D=1
    0x558a3a2ce760 ---------G T 08600 PRINT"DO YOU WANT "N$(16+F-10*T)" TO THROW TO THE PLATE";
    0x558a3a2ce840 ---------G   08610 INPUT T$
    0x558a3a2cea30 ---------G   08620 IF T$="Y" THEN 8660
    0x558a3a2cec20 ---------G   08630 IF T$="N" THEN 8930
    0x558a3a2cede0 ---------G   08640 PRINT"CHANCE TO SCORE="C
    0x558a3a2cee70 ---------G   08650 GOTO 8600
    0x558a3a2cf210 ---------G T 08660 PRINT"DO YOU WANT "N$(B(1))" TO BREAK FOR SECOND";
    0x558a3a2cf2f0 ---------G   08670 INPUT T$
    0x558a3a2cf4e0 ---------G   08680 IF T$="Y" THEN 8730
    0x558a3a2cf700 ---------G   08690 IF T$="N" THEN 8780
    0x558a3a2cf890 ---------G   08700 PRINT".3 CHANCE TO BE OUT AND .15 CHANCE TO BE FORCED BACK TO FIRST,"
    0x558a3a2cf9d0 ---------G   08710 PRINT"UNLESS BALL GOES THROUGH TO PLATE"
    0x558a3a2cfa60 ---------G   08720 GOTO 8660
    0x558a3a2cfbb0 ---------G T 08730 PRINT"DO YOU WANT THE THROW CUT OFF";
    0x558a3a2cfc90 ---------G   08740 INPUT T$
    0x558a3a2cfe70 ---------G   08750 IF T$="Y" THEN 8810
    0x558a3a2cfff0 ---------G   08760 LET I=1
    0x558a3a2d0060 ---------G   08770 GOSUB 8310
    0x558a3a2d01c0 ---------G T 08780 LET I=3
    0x558a3a2d0230 ---------G   08790 GOSUB 8500
    0x558a3a2d0270 ---------G   08800 RETURN
    0x558a3a2d03f0 ---------G T 08810 LET I=3
    0x558a3a2d0480 ---------G   08820 GOSUB 8310
    0x558a3a2d09d0 ---------G   08830 ON RND/.55+16/11 GOTO 8840,8880,8910
    0x558a3a2d0b00 ---------G T 08840 PRINT"OUT AT SECOND"
    0x558a3a2d0c70 ---------G   08850 LET O1=1
    0x558a3a2d0e80 ---------G   08860 LET B(1)=0
    0x558a3a2d0ed0 ---------G   08870 RETURN
    0x558a3a2d1050 ---------G T 08880 LET I=1
    0x558a3a2d10c0 ---------G   08890 GOSUB 8310
    0x558a3a2d1100 ---------G   08900 RETURN
    0x558a3a2d13f0 ---------G T 08910 PRINT N$(B(1))" BLUFFS AND GOES BACK TO FIRST"
    0x558a3a2d1440 ---------G   08920 RETURN
    0x558a3a2d15c0 ---------G T 08930 LET I=3
    0x558a3a2d1630 ---------G   08940 GOSUB 8310
    0x558a3a2d1670 ---------G   08950 RETURN
    0x558a3a2d16d0 ---------A   08960 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     01060      08250T, 08280T, 08290T
     01090      01060T
     01170      01800T, 01990T, 02230T, 02550T, 02610T, 03050T, 03060T, 03120T, 
                03130T, 03170T, 03320T, 03510T, 04000T, 04920T, 07790T, 07950T, 
                08000T, 08220T, 08240T
     01220      01190T
     01280      01250T
     01290      01220T
     01350      01300T, 01330T, 06420T, 06640T
     01380      01350T
     01410      01380T
     01420      01400T
     01470      01440T
     01490      06910T, 07160T, 07170T
     01520      01490T, 01560T
     01570      01520T, 01610T
     01620      01570T
     01670      01620T, 01650T, 03800T
     01680      06880T
     01750      01720T
     01770      01710T
     01790      01700T
     01810      01670T
     01840      01820T
     01900      01870T, 03390T
     01970      02050T
     02000      01940T
     02020      02080T, 02120T
     02060      02000T
     02070      02100T
     02090      02060T
     02110      02090T
     02130      01910T
     02160      02300T
     02170      02260T, 02290T
     02220      02190T
     02240      02150T
     02250      02310T
     02270      02240T
     02280      02320T
     02300      02270T
     02330      02130T
     02390      02360T
     02400      02380T
     02410      02400T, 02400T, 02400T
     02440      02400T, 02400T
     02470      02400T, 02400T, 02400T
     02490      02430T, 02460T
     02540      02500T
     02620      02330T
     02630      03400T
     02670      02660T
     02700      02660T
     02730      02660T
     02750      02690T, 02720T
     02760      02750T, 02750T, 02750T
     02790      02750T, 02750T
     02820      02750T, 02750T, 02750T
     02840      02780T, 02810T
     02890      02850T
     02970      02930T, 03020T
     03030      02990T
     03060      02900T, 02960T, 03000T
     03130      03090T
     03180      02650T
     03200      03180T
     03220      03200T
     03240      03220T
     03250      03190T, 03240T
     03300      03260T, 03270T, 03340T, 03360T, 03380T
     03330      03210T, 03230T
     03350      03210T, 03230T
     03370      03190T, 03240T
     03390      02620T
     03410      01880T
     03450      03430T
     03470      03890T
     03520      03410T
     03560      03530T
     03600      03570T
     03630      03600T
     03660      03630T
     03690      03660T
     03720      03690T
     03750      03720T
     03760      03590T, 03620T, 03650T, 03680T, 03710T, 03740T
     03810      03780T
     03880      03820T, 03830T, 03840T, 03850T
     03900      03810T
     03930      03910T
     03950      04050T
     03970      03950T
     03980      04020T
     04010      03960T
     04030      03920T
     04060      03770T
     04100      04070T
     04110      04390T, 07520T, 07560T
     04150      04120T
     04170      04160T, 04160T
     04190      04160T, 04160T, 04160T, 04250T
     04220      04160T, 04270T
     04280      04240T
     04290      04150T, 04180T, 04210T
     04320      04310T, 04310T, 04310T, 04310T, 04310T, 04310T, 04530T
     04370      04330T
     04400      04320T, 04360T
     04440      04310T, 04310T
     04450      04510T, 04550T
     04520      04480T
     04540      04310T, 04310T
     04560      04290T, 04310T, 04310T, 04430T, 04470T, 04710T, 04720T
     04680      04650T
     04690      04670T
     04720      04600T
     04780      04730T, 04740T
     04870      04790T, 04930T
     04930      04780T
     05020      04990T
     05040      04980T
     05060      04970T
     05070      05010T, 05030T, 05050T
     05120      05080T
     05150      05130T
     05200      05150T
     05220      04590T
     05250      04100T
     05280      05390T, 05400T
     05360      05330T
     05370      05350T
     05400      05300T
     05480      05450T, 05460T
     05490      05430T, 05520T
     05520      05470T
     05560      05410T
     05580      05250T
     05660      05620T, 05710T
     05720      05680T
     05750      05720T
     05770      05740T
     05800      05770T
     05810      05600T, 05650T
     05880      05850T
     05920      01340T, 05950T, 05990T, 06110T, 06330T
     06000      05960T
     06080      06040T
     06110      06030T
     06120      05940T, 06270T, 06300T, 06380T
     06130      06410T
     06210      06180T
     06240      06210T
     06250      06200T, 06230T
     06280      06150T
     06310      06280T
     06340      06310T
     06390      06340T, 06350T, 06360T
     06420      06140T
     06470      06440T
     06490      06510T
     06520      06480T
     06570      06550T, 06710T, 06780T, 06790T, 06830T
     06610      06590T
     06640      06620T
     06670      06530T
     06720      06670T
     06770      06730T, 06740T, 06750T
     06790      06760T
     06840      01480T
     06960      06930T
     06970      07150T
     07040      06970T, 07000T
     07050      07030T
     07070      07350T
     07120      07090T
     07130      07110T, 07320T, 07360T, 07470T
     07200      07340T
     07220      07060T
     07320      07260T
     07370      07220T
     07440      07370T
     07490      07440T
     07570      07490T
     07630      07590T
     07740      07710T
     07800      07760T
     07820      07640T
     07860      07630T
     07890      07850T
     07930      07890T
     07960      07570T
     08010      01210G, 01980G, 07780G, 08350G
     08070      08270T, 08300T
     08100      08030T, 08040T, 08050T, 08060T
     08110      01240G, 01550G, 01600G, 01960G, 02030G, 02180G, 02490G, 02520G, 
                02840G, 02870G, 03300G, 03480G, 03980G, 04830G, 04890G, 06100G, 
                06630G, 07610G, 07670G, 07980G
     08140      08120T
     08160      02210T, 02530T, 02600T, 02880T, 02950T, 03040T, 03110T, 03160T, 
                03440T, 03450T, 03870T, 04060T, 04080T, 04560T, 04860T, 04960T, 
                05110T, 05190T, 05210T, 05240T, 05260T, 05270T, 05510T, 05550T, 
                05570T, 05580T, 05690T, 05800T, 05810T, 05840T, 05870T, 05910T, 
                06070T, 06660T, 07190T, 07210T, 07270T, 07280T, 07310T, 07390T, 
                07430T, 07480T, 07620T, 07730T, 07810T, 07880T
     08230      08200T
     08250      08190T
     08290      08260T
     08310      01740G, 01760G, 01780G, 06600G, 07920G, 08130G, 08560G, 08770G, 
                08820G, 08890G, 08940G
     08370      08330T
     08410      08380T
     08420      08360T, 08400T
     08430      08310T
     08440      02590G, 03150G, 05890G, 08490T
     08500      02940G, 03100G, 05640G, 05760G, 05860G, 07290G, 07330G, 08460T, 
                08790G
     08540      08470T
     08550      08500T
     08580      03030G, 05730G
     08600      08650T
     08660      08620T, 08720T
     08730      08680T
     08780      08580T, 08690T
     08810      08750T
     08840      08830T
     08880      08830T
     08910      08830T
     08930      08630T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start           Target           Return             End    
  --- --------------   --------------   --------------   -------------- 
   A) 0x558a3a24bdf0   0x558a3a24bdf0   0x558a3a2d16d0   0x558a3a2d16d0 
   B) 0x558a3a2c80d0   0x558a3a2c80d0   0x558a3a2c9a10   0x558a3a2c9a10 
   C) 0x558a3a2c9cf0   0x558a3a2c9cf0   0x558a3a2ca090   0x558a3a2ca090 
   D) 0x558a3a2cba70   0x558a3a2cba70   0x558a3a2cca70   0x558a3a2cca70 
   E) 0x558a3a2ccd20   0x558a3a2ccd20   0x558a3a2cdb90   0x558a3a2cddc0 
   F) 0x558a3a2cd570   0x558a3a2cd570   0x558a3a2cdb90   0x558a3a2cddc0 
   G) 0x558a3a2ce030   0x558a3a2ce030   0x558a3a2d0270   0x558a3a2d1670 

    NOTE: Routine B overlaps, or is tangled with, routine A!
    NOTE: Routine C overlaps, or is tangled with, routine A!
    NOTE: Routine D overlaps, or is tangled with, routine A!
    NOTE: Routine E overlaps, or is tangled with, routine A!
    NOTE: Routine F overlaps, or is tangled with, routine A!
    NOTE: Routine G overlaps, or is tangled with, routine A!
    NOTE: Routine F overlaps, or is tangled with, routine E!

 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     09880 - 10000     130 

 */



/*
 *  Symbol Table Listing for '/home/alan/dev/BasicGames/source/base/baseball/basic/baseball.bas'
 *
    A     Array    Integer     {0,31} {0,5} 
    A              Float   
    ABS   Function Integer     args=1, int   
    B     Array    Integer     {0,10} 
    C              Float   
    D     Array    Integer     {0,31} {0,3} 
    D              Integer 
    E     Array    Integer     {0,25} {0,5} 
    E              Integer 
    F              Integer 
    F1             Integer 
    F2             Integer 
    H1             Integer 
    I              Integer 
    I1             Integer 
    I2             Integer 
    INT   Function Integer     args=1, float 
    J              Integer 
    L     Array    Integer     {0,10} 
    M1             Integer 
    N$    Array    String      {0,20} 
    O              Integer 
    O1             Integer 
    O2             Integer 
    O3             Integer 
    P0             Integer 
    P2             Integer 
    P3             Float   
    P4             Integer 
    P5             Integer 
    Q     Array    Integer     {0,12} {0,7} 
    RND   Function Integer     args=1, int   
    S     Array    Integer     {0,20} {0,9} 
    T              Integer 
    T$             String  
    T1             Integer 
    T2             Integer 
    T3             Integer 
    T4             Integer 
    T5             Integer 
    T6             Integer 
    T7             Integer 
    V              Integer 
    W1             Integer 
    W2             Integer 
    W3             Integer 
    W6             Integer 
    X              Integer 
    X1             Integer 
    X2             Integer 

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of /home/alan/dev/BasicGames/source/base/baseball/basic/baseball.bas: 
 *
                   +-----+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |     | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |     | |
        Address    v     v v Original BASIC statement
    -------------- ------- - ------------------------------------------------------------------------------
    0x558a3a24bdf0 ---------A   01000 PRINT "BASIC LIBRARY--'BASEBL'--18-JUL-70"
    0x558a3a24beb0 ---------A   01010 '  *  *  *  *  *  *  *  MAIN PROGRAM  *  *  *  *  *  *  *  *  *  *
    0x558a3a24bf30 ---------A   01020 '
    0x558a3a24bfc0 ---------A   01030 RANDOM
    0x558a3a24c250 ---------A   01040 FOR I=0 TO 19
    0x558a3a24c460 ---------A   01050 READ N$(I)
    0x558a3a24c6e0 ---------A   01060 FORJ=1 TO 8
    0x558a3a24c900 ---------A   01070 READ S(I,J)
    0x558a3a24c9a0 ---------A   01080 NEXT J
    0x558a3a24caf0 ---------A   01090 NEXT I
    0x558a3a2512d0 ---------A   01100 FOR I=1 TO 24
    0x558a3a2514f0 ---------A   01110 FOR J=0 TO 4
    0x558a3a251710 ---------A   01120 READ E(I,J)
    0x558a3a2517b0 ---------A   01130 NEXT J
    0x558a3a251870 ---------A   01140 NEXT I
    0x558a3a251a90 ---------A   01150 FOR I=1 TO 30
    0x558a3a251cb0 ---------A   01160 FOR J=0 TO 4
    0x558a3a251fe0 ---------A   01170 READ A(I,J)
    0x558a3a252080 ---------A   01180 NEXT J
    0x558a3a252140 ---------A   01190 NEXT I
    0x558a3a252360 ---------A   01200 FOR I=1 TO 11
    0x558a3a252580 ---------A   01210 FOR J=1 TO 6
    0x558a3a2527a0 ---------A   01220 READ Q(I,J)
    0x558a3a252840 ---------A   01230 NEXT J
    0x558a3a252900 ---------A   01240 NEXT I
    0x558a3a252b20 ---------A   01250 FOR I=1 TO 30
    0x558a3a252d40 ---------A   01260 FOR J=0 TO 2
    0x558a3a252f60 ---------A   01270 READ D(I,J)
    0x558a3a253000 ---------A   01280 NEXT J
    0x558a3a2530c0 ---------A   01290 NEXT I
    0x558a3a253aa0 ---------A   01300 DIM S(19,8),E(24,4),A(30,4),D(30,2),Q(11,6),N$(19)
    0x558a3a24c2b0 ---------A   01310 DATA "RED SOX",.02,.071,.303,.072,0,.004,.993,0
    0x558a3a2548e0 ---------A   01320 DATA "LONBORG",0,.013,.045,.128,0,0,.95,9
    0x558a3a255240 ---------A   01330 DATA "HOWARD",.013,.013,.039,.176,0,0,.946,8
    0x558a3a255990 ---------A   01340 DATA "SCOTT",.032,.046,.084,.301,1,0,.936,4
    0x558a3a2560e0 ---------A   01350 DATA "ANDREWS",.015,.015,.055,.259,1,0,.966,2
    0x558a3a256830 ---------A   01360 DATA "ADAIR",.008,.01,.052,.259,0,0,.975,1
    0x558a3a256f80 ---------A   01370 DATA "PETROCELLI",.035,.04,.091,.267,0,0,.954,6
    0x558a3a2576d0 ---------A   01380 DATA "YASTRZEMSKI",.072,.08,.13,.309,1,1,.985,3
    0x558a3a257e20 ---------A   01390 DATA "REGGIE SMITH",.029,.04,.082,.25,2,2,.952,7
    0x558a3a258580 ---------A   01400 DATA "HARRELSON",.036,.039,.085,.252,2,0,.917,5
    0x558a3a258cd0 ---------A   01410 DATA "CARDINALS",.024,.057,.274,-.002,0,.004,.996,0
    0x558a3a259420 ---------A   01420 DATA "GIBSON",.01,.01,.048,.18,1,0,.958,9
    0x558a3a259b70 ---------A   01430 DATA "MCCARVER",.029,.035,.086,.295,1,1,.973,5
    0x558a3a25a2c0 ---------A   01440 DATA "CEPEDA",.046,.046,.111,.330,1,0,.908,4
    0x558a3a25aa10 ---------A   01450 DATA "JAVIER",.028,.034,.067,.288,1,0,.981,6
    0x558a3a25b160 ---------A   01460 DATA "SHANNON",.027,.033,.071,.244,0,0,.904,7
    0x558a3a25b8b0 ---------A   01470 DATA "MAXVILL",.002,.011,.042,.225,0,0,.967,8
    0x558a3a25c000 ---------A   01480 DATA "BROCK",.029,.046,.094,.291,3,1,.936,1
    0x558a3a25c750 ---------A   01490 DATA "FLOOD",.008,.01,.055,.324,0,0,1,2
    0x558a3a25ceb0 ---------A   01500 DATA "MARIS",.023,.038,.082,.265,0,1,.989,3
    0x558a3a25da90 ---------A   01510 DATA .17,.21,.24,.27,.3,.24,.29,.33,.37,.4,.17,.21,.24,.27,.3
    0x558a3a25e670 ---------A   01520 DATA .67,.71,.75,.78,.81,.73,.79,.84,.89,.94,.67,.71,.75,.78,.81
    0x558a3a25f240 ---------A   01530 DATA .15,.19,.22,.25,.27,.6,.65,.7,.74,.78,.15,.19,.22,.25,.27
    0x558a3a25fdd0 ---------A   01540 DATA .85,1,1,1,1,.95,1,1,1,1,.85,1,1,1,1
    0x558a3a2609a0 ---------A   01550 DATA 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
    0x558a3a261580 ---------A   01560 DATA 0,0,0,0,0,0,0,0,0,.1,.1,.17,.23,.29,.35
    0x558a3a262150 ---------A   01570 DATA 0,0,0,0,0,.3,.39,.47,.53,.58,.69,.8,.88,.92,.95
    0x558a3a262d20 ---------A   01580 DATA .4,.49,.57,.65,.72,.81,.9,.96,1,1,1,1,1,1,1
    0x558a3a263900 ---------A   01590 DATA 0,0,0,0,0,0,0,0,0,0,0,0,0,.05,.1
    0x558a3a2647e0 ---------A   01600 DATA 0,0,0,0,0,0,0,.05,.1,.14,.38,.43,.48,.52,.56,.4,.48,.55,.62
    0x558a3a2656c0 ---------A   01610 DATA .68,.58,.67,.75,.82,.89,1,1,1,1,1,.05,.1,.15,.2,.3,.1,.15,.2
    0x558a3a266590 ---------A   01620 DATA .25,.35,.05,.1,.15,.2,.3,.72,.79,.85,.9,.94,1,1,1,1,1,.72,.79
    0x558a3a2673b0 ---------A   01630 DATA .85,.9,.94,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
    0x558a3a267f90 ---------A   01640 DATA .63,.75,.85,.9,.93,.48,.59,.67,.72,.76,.32,.42,.48,.53,.58
    0x558a3a268f80 ---------A   01650 DATA .14,.23,.28,.33,.37,.51,.58,.62,.66,.7,.27,.36,.43,.49,.55
    0x558a3a269b60 ---------A   01660 DATA .1,.17,.24,.31,.37,0,.02,.05,.09,.16,.14,.21,.28,.33,.38
    0x558a3a26a740 ---------A   01670 DATA .08,.11,.14,.17,.2,.02,.04,.06,.08,.09,0,0,0,0,0
    0x558a3a26b920 ---------A   01680 DATA 1,1,.9,1,.75,1,1,1,.2,.4,1,1,1,1,1,.8,1,.8,.8,0,.6,.75,.35
    0x558a3a26c660 ---------A   01690 DATA .75,.65,0,.35,.55,.2,.55,.6,0,.25,.35,.1,.35,.1,0,.05,.05
    0x558a3a26cd00 ---------A   01700 DATA .2,.1,.4,0,.3,.15,.2,.15
    0x558a3a26db20 ---------A   01710 DATA .7,0,.8,.3,.1,.15,.45,0,.5,.55,.35,.45,.7,0,.1,.15,.7,.35
    0x558a3a26e700 ---------A   01720 DATA .033,.033,2,.045,.042,3,.054,.054,5,.0564,.0576,7,.06,.06,9
    0x558a3a26f460 ---------A   01730 DATA .07,.075,5,.1,.11,6,.135,.14,4,.15,.15,3,.158,.158,1,.16,.16
    0x558a3a270100 ---------A   01740 DATA 2,.2775,.207,5,.442,.301,6,.536,.4655,4,.583,.583,3,.63,.63,1
    0x558a3a270ce0 ---------A   01750 DATA .64,.632,5,.662,.6352,6,.6652,.6572,4,.6672,.6672,3,.67,.67,1
    0x558a3a2718b0 ---------A   01760 DATA .702,.69,7,.73,.718,8,.75,.75,9,.8102,.778,7,.862,.8298,8
    0x558a3a272220 ---------A   01770 DATA .89,.89,9,.9395,.9065,7,.9835,.9505,8,1,1,9
    0x558a3a272510 ---------A   01780 LET T=O2=1
    0x558a3a2726a0 ---------A   01790 PRINT"THE WORLD SERIES-- FROM ST. LOUIS, MO."
    0x558a3a272830 ---------A   01800 PRINT"QUESTIONS ASKING 'WHICH BASE' SHOULD BE ANSWERED WITH A DIGIT"
    0x558a3a2729a0 ---------A   01810 PRINT"THOSE ASKING ABOUT ADVANCEMENT OF RUNNERS WILL PRINT"
    0x558a3a272ae0 ---------A   01820 PRINT"PROBABILITIES IF YOU TYPE 'PR'"
    0x558a3a272dd0 ---------A   01830 LET T4=W2=9
    0x558a3a273840 ---------A   01840 LET H1=O1=O3=T3=S(10,8)=S(0,8)=I2=W1=W3=0
    0x558a3a2739f0 ---------A T 01850 IF T=0 THEN 1880
    0x558a3a273a70 ---------A   01860 PRINT
    0x558a3a273c80 ---------A   01870 LET I2=I2+1
    0x558a3a273e90 ---------A T 01880 LET T=1-T
    0x558a3a273f00 ---------A   01890 PRINT
    0x558a3a273f80 ---------A   01900 PRINT
    0x558a3a2743d0 ---------A   01910 PRINT"INNING"I2"FOR "N$(10*T)
    0x558a3a274580 ---------A   01920 LET T5=T4
    0x558a3a2746b0 ---------A   01930 LET T4=W2
    0x558a3a274800 ---------A   01940 LET W2=T5
    0x558a3a2752e0 ---------A   01950 LET O=L(1)=L(2)=L(3)=B(1)=B(2)=B(3)=M1=P5=0
    0x558a3a275f10 ---------A T 01960 LET I1=T3=F1=B(4)=B(5)=B(6)=L(4)=L(5)=L(6)=L(7)=L(8)=L(9)=0
    0x558a3a2761e0 ---------A   01970 LET T7=W6=0
    0x558a3a276390 ---------A   01980 IF P5=0 THEN 2010
    0x558a3a276510 ---------A   01990 LET P5=0
    0x558a3a276580 ---------A   02000 GOSUB 9000
    0x558a3a276720 ---------A T 02010 IF M1=0 THEN 2080
    0x558a3a2768e0 ---------A   02020 LET D=M1
    0x558a3a276950 ---------A   02030 GOSUB 9100
    0x558a3a276b00 ---------A   02040 IF O3=1 THEN 2070
    0x558a3a276e40 ---------A   02050 PRINT N$(B(0))" ON BASE"M1
    0x558a3a277070 ---------A   02060 LET B(M1)=B(0)
    0x558a3a2771e0 ---------A T 02070 LET M1=0
    0x558a3a277360 ---------A T 02080 LET O3=0
    0x558a3a277840 ---------A   02090 IF B(1)+B(2)+B(3)=0 THEN 2140
    0x558a3a2779b0 ---------A   02100 PRINT"ANY LEADING OR STEALING";
    0x558a3a277b10 ---------A   02110 INPUT T$
    0x558a3a277cf0 ---------A   02120 IF T$="N" THEN 2140
    0x558a3a277d70 ---------A   02130 GOTO 6720
    0x558a3a277f10 ---------A T 02140 IF W1=0 THEN 2170
    0x558a3a278230 ---------A   02150 LET S(B(0),6)=2
    0x558a3a2783b0 ---------A   02160 LET W1=0
    0x558a3a278600 ---------A T 02170 IF W3=T+1 THEN 2200
    0x558a3a278820 ---------A   02180 LET W2=W2+1
    0x558a3a278890 ---------A   02190 GOTO 2210
    0x558a3a278a00 ---------A T 02200 LET W3=0
    0x558a3a278f90 ---------A T 02210 LET W2=W2-9*INT((W2-1)/9)
    0x558a3a2791b0 ---------A   02220 FOR I=1 TO 9
    0x558a3a2795b0 ---------A   02230 IF S(10*T+I,8)=W2 THEN 2260
    0x558a3a279670 ---------A   02240 NEXT I
    0x558a3a2797c0 ---------A   02250 PRINT "ERROR IN BAT POS."
    0x558a3a279b10 ---------A T 02260 LET B(0)=10*T+I
    0x558a3a279b90 ---------A   02270 GOTO 7640
    0x558a3a279ee0 ---------A T 02280 IF S(B(0),6)<2 THEN 2310
    0x558a3a27adb0 ---------A   02290 LET S(B(0),6)=1-S(10*(1-T),5)
    0x558a3a27af30 ---------A   02300 LET W1=1
    0x558a3a27b420 ---------A T 02310 IF RND>S(10*(1-T),1) THEN 2360
    0x558a3a27b560 ---------A   02320 PRINT"WILD PITCH"
    0x558a3a27b6d0 ---------A   02330 LET D=1
    0x558a3a27b740 ---------A   02340 GOSUB 9100
    0x558a3a27b7b0 ---------A   02350 GOTO 2310
    0x558a3a27bc20 ---------A T 02360 IF RND>S(10*(1-T),6) THEN 2410
    0x558a3a27bd60 ---------A   02370 PRINT "PASSED BALL"
    0x558a3a27bed0 ---------A   02380 LET D=1
    0x558a3a27bf40 ---------A   02390 GOSUB 9100
    0x558a3a27bfa0 ---------A   02400 GO TO 2360
    0x558a3a27c1e0 ---------A T 02410 IF B(3)=0THEN 2460
    0x558a3a27c340 ---------A   02420 PRINT"INFIELD IN";
    0x558a3a27c420 ---------A   02430 INPUT T$
    0x558a3a27c600 ---------A   02440 IF T$<>"Y" THEN 2460
    0x558a3a27c790 ---------A   02450 LET I1=1
    0x558a3a27cc10 ---------A T 02460 IF RND>S(10*(1-T),2) THEN 2600
    0x558a3a27ced0 ---------A T 02470 PRINT N$(B(0))" WALKS"
    0x558a3a27d050 ---------A   02480 LET D=1
    0x558a3a27d2b0 ---------A   02490 IF B(1)=0 THEN 2580
    0x558a3a27d520 ---------A   02500 IF B(2)=0 THEN 2560
    0x558a3a27d780 ---------A   02510 IF B(3)=0 THEN 2540
    0x558a3a27d900 ---------A   02520 LET I=3
    0x558a3a27d970 ---------A   02530 GOSUB 9150
    0x558a3a27dad0 ---------A T 02540 LET I=2
    0x558a3a27db40 ---------A   02550 GOSUB 9150
    0x558a3a27dca0 ---------A T 02560 LET I=1
    0x558a3a27dd10 ---------A   02570 GOSUB 9150
    0x558a3a27df70 ---------A T 02580 LET B(1)=B(0)
    0x558a3a27dff0 ---------A   02590 GOTO 1960
    0x558a3a27e490 ---------A T 02600 LET A=S(10*(1-T),4)
    0x558a3a27e640 ---------A   02610 IF A>0 THEN 2630
    0x558a3a27e880 ---------A   02620 LET A=2*A
    0x558a3a27f230 ---------A T 02630 LET A=A+.02-.04*ABS(S(10*(1-T),5)-S(B(0),6))
    0x558a3a27f3e0 ---------A   02640 LET X1=RND
    0x558a3a27f5b0 ---------A   02650 LET X2=RND
    0x558a3a27fa80 ---------A   02660 IF ABS(ABS(A)+3*A)<(4*RND) THEN 2690
    0x558a3a27fc40 ---------A   02670 IF A>0 THEN 4210
    0x558a3a27fdc0 ---------A   02680 LET F1=1
    0x558a3a27ff80 ---------A T 02690 LET X=RND
    0x558a3a2802a0 ---------A   02700 IF X>S(B(0),1) THEN 2920
    0x558a3a280580 ---------A   02710 PRINT N$(B(0))" HITS A HOME RUN";
    0x558a3a280700 ---------A   02720 LET D=4
    0x558a3a2808c0 ---------A   02730 IF X1>.01 THEN 2790
    0x558a3a280a00 ---------A   02740 PRINT", INSIDE THE PARK"
    0x558a3a280a80 ---------A   02750 GOSUB 9100
    0x558a3a280d20 ---------A T 02760 PRINT N$(B(0))" SCORES"
    0x558a3a280d90 ---------A   02770 GOSUB 9000
    0x558a3a280e00 ---------A   02780 GOTO 1960
    0x558a3a280fb0 ---------A T 02790 IF X1>.22 THEN 2850
    0x558a3a2810f0 ---------A   02800 PRINT" TO CENTER FIELD"
    0x558a3a281260 ---------A T 02810 LET H1=1
    0x558a3a2812d0 ---------A   02820 GOSUB 9100
    0x558a3a281430 ---------A   02830 LET H1=0
    0x558a3a2814b0 ---------A   02840 GOTO 2760
    0x558a3a281660 ---------A T 02850 IF X1>.42 THEN 2880
    0x558a3a2817a0 ---------A T 02860 PRINT" TO LEFT FIELD"
    0x558a3a281810 ---------A   02870 GOTO 2810
    0x558a3a2819c0 ---------A T 02880 IF X1>.8 THEN 2900
    0x558a3a281d30 ---------A   02890 IF S(B(0),6)=0 THEN 2860
    0x558a3a281e70 ---------A T 02900 PRINT" TO RIGHT FIELD"
    0x558a3a281ef0 ---------A   02910 GOTO 2810
    0x558a3a282200 ---------A T 02920 IF X>S(B(0),2) THEN 3120
    0x558a3a2824e0 ---------A   02930 PRINT N$(B(0))" TRIPLES ";
    0x558a3a2826a0 ---------A   02940 IF X1<.6 THEN 3030
    0x558a3a2827e0 ---------A T 02950 PRINT"TO RIGHT FIELD"
    0x558a3a282950 ---------A T 02960 LET D=3
    0x558a3a2829d0 ---------A   02970 GOSUB 9100
    0x558a3a282dd0 ---------A   02980 IF X>S(B(0),1)+.0002 THEN 3010
    0x558a3a2830a0 ---------A   02990 PRINT N$(B(0))" IS OUT TRYING FOR A HOME RUN"
    0x558a3a283110 ---------A   03000 GOTO 8840
    0x558a3a283370 ---------A T 03010 LET B(3)=B(0)
    0x558a3a2833f0 ---------A   03020 GOTO 1960
    0x558a3a2835a0 ---------A T 03030 IF X1<.35 THEN 3060
    0x558a3a2836e0 ---------A T 03040 PRINT"TO CENTER FIELD"
    0x558a3a283760 ---------A   03050 GOTO 2960
    0x558a3a283910 ---------A T 03060 IF X1>.05 THEN 3090
    0x558a3a283a50 ---------A T 03070 PRINT"TO LEFT FIELD"
    0x558a3a283ad0 ---------A   03080 GOTO 2960
    0x558a3a283e20 ---------A T 03090 IF S(B(0),6)=1 THEN 2950
    0x558a3a283fe0 ---------A   03100 IF X1>.15 THEN 3040
    0x558a3a284070 ---------A   03110 GOTO 3070
    0x558a3a284370 ---------A T 03120 IF X>S(B(0),3) THEN 3420
    0x558a3a284500 ---------A   03130 LET D=2
    0x558a3a2847e0 ---------A   03140 PRINT N$(B(0))" DOUBLES ";
    0x558a3a2849a0 ---------A   03150 IF X1>.56 THEN 3180
    0x558a3a284b00 ---------A   03160 PRINT"IN THE HOLE TO ";
    0x558a3a284b80 ---------A   03170 GOTO 3190
    0x558a3a284d00 ---------A T 03180 PRINT"OFF THE WALL IN ";
    0x558a3a285890 ---------A T 03190 ON X2/.35+10/7+4*S(B(0),6) GOTO 3200,3200,3240,3270,3270,3270,3240,3200
    0x558a3a2859c0 ---------A T 03200 PRINT"LEFT FIELD"
    0x558a3a285bb0 ---------A   03210 LET F=1
    0x558a3a285c20 ---------A   03220 RANDOM
    0x558a3a285ca0 ---------A   03230 GOTO 3290
    0x558a3a285dc0 ---------A T 03240 PRINT"CENTER FIELD"
    0x558a3a285f30 ---------A   03250 LET F=2
    0x558a3a285fa0 ---------A   03260 GOTO 3290
    0x558a3a2860c0 ---------A T 03270 PRINT"RIGHT FIELD"
    0x558a3a286230 ---------A   03280 LET F=3
    0x558a3a2862b0 ---------A T 03290 GOSUB 9100
    0x558a3a2866b0 ---------A   03300 IF X>S(B(0),2)+.0004 THEN 3340
    0x558a3a286980 ---------A   03310 PRINT N$(B(0))" IS OUT TRYING FOR A TRIPLE"
    0x558a3a2869f0 ---------A   03320 GOSUB 9100
    0x558a3a286a50 ---------A   03330 GOTO 8840
    0x558a3a286cc0 ---------A T 03340 LET B(2)=B(0)
    0x558a3a286f20 ---------A   03350 IF B(3)=0 THEN 1960
    0x558a3a287600 ---------A   03360 LET C=E(3*INT(X1+.44)+F,S(B(3),5))
    0x558a3a287790 ---------A   03370 LET I=3
    0x558a3a2878f0 ---------A   03380 PRINT "DO YOU WANT THE DOUBLE TO FURTHER";
    0x558a3a287960 ---------A   03390 GOSUB 9280
    0x558a3a287b00 ---------A   03400 IF O1=1 THEN 8840
    0x558a3a287b90 ---------A   03410 GOTO 1960
    0x558a3a287e90 ---------A T 03420 IF X>S(B(0),4) THEN 4190
    0x558a3a288020 ---------A T 03430 LET D=1
    0x558a3a288300 ---------A   03440 PRINT N$(B(0))" SINGLES ";
    0x558a3a2884d0 ---------A   03450 IF X1<.08 THEN 3980
    0x558a3a288a30 ---------A   03460 ON X1/.37+41/37 GOTO 3470,3500,3530
    0x558a3a288b80 ---------A T 03470 PRINT "SHARPLY ";
    0x558a3a288d70 ---------A   03480 LET F2=1
    0x558a3a288df0 ---------A   03490 GOTO 3550
    0x558a3a288f30 ---------A T 03500 PRINT "ON THE GROUND ";
    0x558a3a2890a0 ---------A   03510 LET F2=2
    0x558a3a289110 ---------A   03520 GOTO 3550
    0x558a3a289250 ---------A T 03530 PRINT "DEEP ";
    0x558a3a289400 ---------A   03540 LET F2=3
    0x558a3a289fa0 ---------A T 03550 ON X2/.35+11/7+4*S(B(0),6) GOTO 3560,3560,3590,3620,3620,3620,3590,3560
    0x558a3a28a0d0 ---------A T 03560 PRINT"TO LEFT FIELD"
    0x558a3a27a060 ---------A   03570 LET F=1
    0x558a3a27a0e0 ---------A   03580 GOTO 3640
    0x558a3a27a200 ---------A T 03590 PRINT"TO CENTER FIELD"
    0x558a3a27a370 ---------A   03600 LET F=2
    0x558a3a27a3f0 ---------A   03610 GOTO 3640
    0x558a3a27a510 ---------A T 03620 PRINT"TO RIGHT FIELD"
    0x558a3a27a680 ---------A   03630 LET F=3
    0x558a3a27a700 ---------A T 03640 GOSUB 9100
    0x558a3a28b4f0 ---------A   03650 IF X>S(B(0),3)+.001 THEN 3690
    0x558a3a28b7c0 ---------A   03660 PRINT N$(B(0))" IS OUT TRYING FOR A DOUBLE"
    0x558a3a28b830 ---------A   03670 GOSUB 9100
    0x558a3a28b890 ---------A   03680 GOTO 8840
    0x558a3a28bb00 ---------A T 03690 LET B(1)=B(0)
    0x558a3a28bd60 ---------A   03700 IF B(3)=0 THEN 3860
    0x558a3a28c3a0 ---------A   03710 LET C=E(3*(1+F2)+F,S(B(3),5))
    0x558a3a28c510 ---------A   03720 LET I=3
    0x558a3a28c6c0 ---------A   03730 IF C<1 THEN 3770
    0x558a3a28c740 ---------A   03740 GOSUB 9420
    0x558a3a28c8e0 ---------A   03750 IF O1=1 THEN 8840
    0x558a3a28c980 ---------A   03760 GOTO 3860
    0x558a3a28cd20 ---------A T 03770 PRINT"DO YOU WANT "N$(B(3))" TO SCORE";
    0x558a3a28ce00 ---------A   03780 INPUT T$
    0x558a3a28cff0 ---------A   03790 IF T$="Y" THEN 3830
    0x558a3a28d1d0 ---------A   03800 IF T$="N" THEN 3860
    0x558a3a28d390 ---------A   03810 PRINT"CHANCE="C
    0x558a3a28d400 ---------A   03820 GOTO 3770
    0x558a3a28d460 ---------A T 03830 GOSUB 9500
    0x558a3a28d600 ---------A   03840 IF O1=1 THEN 8840
    0x558a3a28d690 ---------A   03850 GOTO 1960
    0x558a3a28d8e0 ---------A T 03860 IF B(2)=0 THEN 1960
    0x558a3a28df20 ---------A   03870 LET C=E(3*(4+F2)+F,S(B(2),5))
    0x558a3a28e090 ---------A   03880 LET I=2
    0x558a3a28e240 ---------A   03890 IF C<1 THEN 3930
    0x558a3a28e2c0 ---------A   03900 GOSUB 9420
    0x558a3a28e460 ---------A   03910 IF O1=1 THEN 8840
    0x558a3a28e4e0 ---------A   03920 GOTO 1960
    0x558a3a28e6a0 ---------A T 03930 IF C=0 THEN 1960
    0x558a3a28e810 ---------A   03940 PRINT "DO YOU WANT THE SINGLE TO FURTHER";
    0x558a3a28e880 ---------A   03950 GOSUB 9280
    0x558a3a28ea20 ---------A   03960 IF O1=1 THEN 8840
    0x558a3a28eaa0 ---------A   03970 GOTO 1960
    0x558a3a28ec50 ---------A T 03980 IF X2>.2 THEN 4000
    0x558a3a28f100 ---------A   03990 ON S(B(0),6)+1 GOTO 4050,4170
    0x558a3a28f2c0 ---------A T 04000 IF X2>.65 THEN 4020
    0x558a3a28f770 ---------A   04010 ON S(B(0),6)+1 GOTO 4130,4150
    0x558a3a28f930 ---------A T 04020 IF X2>.95 THEN 4040
    0x558a3a28fde0 ---------A   04030 ON S(B(0),6)+1 GOTO 4150,4130
    0x558a3a290280 ---------A T 04040 ON S(B(0),6)+1 GOTO 4170,4050
    0x558a3a2903c0 ---------A T 04050 PRINT"TO THIRD BASE"
    0x558a3a290620 ---------A   04060 IF B(2)=0 THEN 4100
    0x558a3a290880 ---------A   04070 IF B(1)>0 THEN 4100
    0x558a3a290b00 ---------A   04080 LET B(1)=B(2)
    0x558a3a290d10 ---------A   04090 LET B(2)=0
    0x558a3a290d80 ---------A T 04100 GOSUB 9100
    0x558a3a290fe0 ---------A   04110 LET B(1)=B(0)
    0x558a3a291060 ---------A   04120 GOTO 1960
    0x558a3a291180 ---------A T 04130 PRINT"TO SHORTSTOP"
    0x558a3a291200 ---------A   04140 GOTO 4100
    0x558a3a291320 ---------A T 04150 PRINT"TO SECOND BASE"
    0x558a3a2913a0 ---------A   04160 GOTO 4100
    0x558a3a2914c0 ---------A T 04170 PRINT"TO FIRST BASE"
    0x558a3a291530 ---------A   04180 GOTO 4100
    0x558a3a2916e0 ---------A T 04190 IF F1=1 THEN 2690
    0x558a3a291bd0 ---------A   04200 IF X<I1*(S(B(0),4)+.03) THEN 3430
    0x558a3a292060 ---------A T 04210 IF RND>S(10*(1-T),3) THEN 4320
    0x558a3a292330 ---------A   04220 PRINT N$(B(0))" STRIKES OUT"
    0x558a3a292580 ---------A   04230 IF B(1)=0 THEN 4250
    0x558a3a292750 ---------A   04240 IF O<2 THEN 8840
    0x558a3a292bf0 ---------A T 04250 IF RND<S(10*(1-T),7) THEN 8840
    0x558a3a292d40 ---------A   04260 PRINT"CATCHER DROPS THE BALL--ERROR"
    0x558a3a292eb0 ---------A T 04270 LET D=1
    0x558a3a292f20 ---------A   04280 GOSUB 9100
    0x558a3a293190 ---------A   04290 LET B(1)=B(0)
    0x558a3a293440 ---------A   04300 PRINT N$(B(0))" ON FIRST"
    0x558a3a2934b0 ---------A   04310 GOTO 1960
    0x558a3a2936c0 ---------A T 04320 FOR J=1 TO 29
    0x558a3a293aa0 ---------A   04330 IF X1<D(J,S(B(0),6)) THEN 4360
    0x558a3a293b60 ---------A   04340 NEXT J
    0x558a3a293cf0 ---------A   04350 LET J=30
    0x558a3a293fc0 ---------A T 04360 PRINT N$(B(0))" HITS A ";
    0x558a3a294180 ---------A   04370 IF J>5 THEN 4400
    0x558a3a2942e0 ---------A   04380 PRINT"FOUL FLY TO ";
    0x558a3a294350 ---------A   04390 GOTO 4560
    0x558a3a294500 ---------A T 04400 IF J>11 THEN 4430
    0x558a3a294660 ---------A   04410 PRINT"POP FLY TO ";
    0x558a3a2946d0 ---------A   04420 GOTO 4560
    0x558a3a294880 ---------A T 04430 IF J>16 THEN 4460
    0x558a3a2949e0 ---------A   04440 PRINT "GROUND BALL TO ";
    0x558a3a294a50 ---------A   04450 GOTO 4560
    0x558a3a294c00 ---------A T 04460 IF J>21 THEN 4490
    0x558a3a294d60 ---------A   04470 PRINT"LINE DRIVE TO ";
    0x558a3a294dd0 ---------A   04480 GOTO 4560
    0x558a3a294f80 ---------A T 04490 IF J>24 THEN 4520
    0x558a3a2950e0 ---------A   04500 PRINT"SHORT FLY TO ";
    0x558a3a295150 ---------A   04510 GO TO 4560
    0x558a3a295300 ---------A T 04520 IF J>27 THEN 4550
    0x558a3a295460 ---------A   04530 PRINT"MEDIUM FLY TO ";
    0x558a3a2954e0 ---------A   04540 GOTO 4560
    0x558a3a295630 ---------A T 04550 PRINT"LONG FLY TO ";
    0x558a3a295b20 ---------A T 04560 PRINT N$(10*(1-T)+D(J,2))
    0x558a3a296130 ---------A   04570 IF RND <S(10*(1-T)+D(J,2),7) THEN 4860
    0x558a3a296320 ---------A   04580 IF J>5 THEN 4610
    0x558a3a2966c0 ---------A   04590 PRINT"FLY IS DROPPED-"N$(B(0))" GETS ANOTHER CHANCE"
    0x558a3a296730 ---------A   04600 GOTO 2460
    0x558a3a2968d0 ---------A T 04610 IF J>21 THEN 4700
    0x558a3a296aa0 ---------A   04620 IF J>11 THEN 4680
    0x558a3a296d10 ---------A   04630 IF B(2)=0 THEN 4680
    0x558a3a296f70 ---------A   04640 IF B(1)=0 THEN 4680
    0x558a3a297160 ---------A   04650 IF O=2 THEN 4680
    0x558a3a2972c0 ---------A   04660 PRINT"INFIELD FLY RULE- BALL DROPPED BUT BATTER IS OUT"
    0x558a3a297340 ---------A   04670 GOTO 8840
    0x558a3a2976c0 ---------A T 04680 PRINT"ERROR- "N$(B(0))" IS SAFE"
    0x558a3a297750 ---------A   04690 GOTO 4270
    0x558a3a297b00 ---------A T 04700 PRINT"MUFFED FLY- "N$(B(0))" IS SAFE ON ";
    0x558a3a297d50 ---------A   04710 IF B(1)=0 THEN 4730
    0x558a3a297f10 ---------A   04720 IFO<2 THEN 4830
    0x558a3a298050 ---------A T 04730 PRINT"SECOND"
    0x558a3a298240 ---------A   04740 LET E=2
    0x558a3a2983f0 ---------A T 04750 IF J>27 THEN 4770
    0x558a3a2985b0 ---------A   04760 IF O<2 THEN 4810
    0x558a3a298730 ---------A T 04770 LET D=2
    0x558a3a2987a0 ---------A T 04780 GOSUB 9100
    0x558a3a2989c0 ---------A   04790 LET B(E)=B(0)
    0x558a3a298a30 ---------A   04800 GOTO 1960
    0x558a3a298b90 ---------A T 04810 LET D=1
    0x558a3a298c00 ---------A   04820 GOTO 4780
    0x558a3a298d20 ---------A T 04830 PRINT"FIRST"
    0x558a3a298e90 ---------A   04840 LET E=1
    0x558a3a298f00 ---------A   04850 GOTO 4750
    0x558a3a2990a0 ---------A T 04860 IF J<4 THEN 8840
    0x558a3a299260 ---------A   04870 IF J>11 THEN 4900
    0x558a3a299420 ---------A   04880 IF J>5 THEN 8840
    0x558a3a299720 ---------A   04890 LET J=2*J+14
    0x558a3a2998d0 ---------A T 04900 IF J>16 THEN 6050
    0x558a3a299b00 ---------A T 04910 FOR I=1 TO 3
    0x558a3a299d20 ---------A   04920 IF B(I)=0 THEN 4950
    0x558a3a299fe0 ---------A   04930 LET B(I+3)=1
    0x558a3a29a090 ---------A   04940 NEXT I
    0x558a3a29a580 ---------A T 04950 IF B(2)*(1-B(5))=0 THEN 5090
    0x558a3a29ab20 ---------A   04960 ON D(J,2) GOTO 4990,4990,4970,4970,4990,5020
    0x558a3a29ac90 ---------A T 04970 LET T7=1
    0x558a3a29ad00 ---------A   04980 GOTO 5090
    0x558a3a29af60 ---------A T 04990 LET B(1)=B(2)
    0x558a3a29b170 ---------A   05000 LET B(2)=0
    0x558a3a29b210 ---------A   05010 GOTO 5090
    0x558a3a29b5c0 ---------A T 05020 PRINT"DO YOU WANT "N$(B(2))" TO TRY FOR THIRD ON THE PLAY";
    0x558a3a29b6a0 ---------A   05030 INPUT T$
    0x558a3a29b890 ---------A   05040 IF T$="Y" THEN 5080
    0x558a3a29ba80 ---------A   05050 IF T$="N" THEN 4990
    0x558a3a29bbd0 ---------A   05060 PRINT"CHANCE=.3 IF HE IS PLAYED"
    0x558a3a29bc40 ---------A   05070 GOTO 5020
    0x558a3a29be50 ---------A T 05080 LET B(5)=.7
    0x558a3a29c300 ---------A T 05090 IF B(3)*(1-B(6))=0 THEN 5360
    0x558a3a29c780 ---------A   05100 LET V=D(J,2)+6*I1
    0x558a3a29cfe0 ---------A   05110 ON V GOTO 5120,5120,5240,5360,5240,5360,5120,5120,5120,5340,5120,5340
    0x558a3a29d230 ---------A T 05120 IF B(2)=0 THEN 5200
    0x558a3a29d3f0 ---------A   05130 IF T7=0 THEN 5170
    0x558a3a29d670 ---------A   05140 LETB(1)=B(2)
    0x558a3a29d880 ---------A   05150 LET B(2)=0
    0x558a3a29d920 ---------A   05160 GOTO 5200
    0x558a3a29da60 ---------A T 05170 PRINT"TWO MEN HAVE ENDED UP ON THIRD. TRY PLAY AGAIN"
    0x558a3a29dd70 ---------A   05180 LET B(5)=B(6)=0
    0x558a3a29dde0 ---------A   05190 GOTO 4910
    0x558a3a29e040 ---------A T 05200 LET B(2)=B(3)
    0x558a3a29e250 ---------A   05210 LET B(3)=0
    0x558a3a29e3c0 ---------A   05220 LET T3=1
    0x558a3a29e430 ---------A   05230 GOTO 5360
    0x558a3a29e660 ---------A T 05240 LET B(6)=.25
    0x558a3a29ea20 ---------A T 05250 PRINT"DO YOU WANT "N$(B(3))" TO TRY TO SCORE ON THE PLAY";
    0x558a3a29eb00 ---------A   05260 INPUT T$
    0x558a3a29ecf0 ---------A   05270 IF T$="Y" THEN 5360
    0x558a3a29eef0 ---------A   05280 IF T$="N" THEN 5320
    0x558a3a29f350 ---------A   05290 PRINT"CHANCE="1-B(6)"IF HE IS PLAYED"
    0x558a3a29f4b0 ---------A   05300 PRINT"EVEN IF YOU TYPE 'NO', MAN WILL GO HOME IF BALL THROWN TO 2ND"
    0x558a3a29f520 ---------A   05310 GOTO 5250
    0x558a3a29f720 ---------A T 05320 LET B(6)=0
    0x558a3a29f790 ---------A   05330 GOTO 5120
    0x558a3a29f990 ---------A T 05340 LET B(6)=.4
    0x558a3a29fa10 ---------A   05350 GOTO 5250
    0x558a3a29ff00 ---------A T 05360 IF B(1)+B(2)+B(3)=0 THEN 8840
    0x558a3a2a0090 ---------A   05370 PRINT"WHAT BASE DO YOU THROW THE BALL TO(4=HOME,5=LIST CHANCES)";
    0x558a3a2a01e0 ---------A   05380 INPUT T1
    0x558a3a2a03a0 ---------A   05390 IF T1=1 THEN 6020
    0x558a3a2a0580 ---------A   05400 IF T1<5 THEN 5520
    0x558a3a2a06e0 ---------A   05410 PRINT"CHANCES FOR OUTS AT EACH BASE"
    0x558a3a2a0830 ---------A   05420 PRINT"1: AUTOMATIC",
    0x558a3a2a0a40 ---------A   05430 FOR I=2 TO 4
    0x558a3a2a0c30 ---------A   05440 PRINT I":";
    0x558a3a2a0f30 ---------A   05450 IF B(I+2)<>1 THEN 5480
    0x558a3a2a13b0 ---------A   05460 PRINT Q(I-1,D(J,2))"FORCEOUT",
    0x558a3a2a1420 ---------A   05470 GOTO 5490
    0x558a3a2a1720 ---------A T 05480 PRINT B(I+2)"TAG",
    0x558a3a2a17d0 ---------A T 05490 NEXT I
    0x558a3a2a1850 ---------A   05500 PRINT
    0x558a3a2a18d0 ---------A   05510 GOTO 5360
    0x558a3a2a1bb0 ---------A T 05520 IF B(T1+2)=0 THEN 5360
    0x558a3a2a1d70 ---------A   05530 IF T3=0 THEN 5580
    0x558a3a2a1f30 ---------A   05540 IF T1<>2 THEN 5580
    0x558a3a2a21b0 ---------A   05550 LET B(3)=B(2)
    0x558a3a2a23c0 ---------A   05560 LET B(2)=0
    0x558a3a2a2540 ---------A   05570 LET T3=0
    0x558a3a2a2840 ---------A T 05580 IF B(T1+2)=1 THEN 5730
    0x558a3a2a2b10 ---------A   05590 IF RND>B(T1+2) THEN 5670
    0x558a3a2a2c50 ---------A   05600 PRINT"RUNNER IS TAGGED OUT"
    0x558a3a2a2f00 ---------A   05610 LET B(T1-1)=0
    0x558a3a2a3070 ---------A   05620 LET D=1
    0x558a3a2a30f0 ---------A   05630 GOSUB 9100
    0x558a3a2a3390 ---------A   05640 PRINT N$(B(0))" ON FIRST"
    0x558a3a2a3600 ---------A   05650 LET B(1)=B(0)
    0x558a3a2a3680 ---------A   05660 GOTO 8840
    0x558a3a2a37a0 ---------A T 05670 PRINT"EVERYONE IS SAFE"
    0x558a3a2a3910 ---------A   05680 LET D=1
    0x558a3a2a3990 ---------A   05690 GOSUB 9100
    0x558a3a2a3c30 ---------A   05700 PRINT N$(B(0))" ON FIRST"
    0x558a3a2a3ea0 ---------A   05710 LET B(1)=B(0)
    0x558a3a2a3f20 ---------A   05720 GOTO 1960
    0x558a3a2a4330 ---------A T 05730 IFRND>Q(T1-1,D(J,2)) THEN 5670
    0x558a3a2a4690 ---------A   05740 PRINT N$(B(T1-1))" FORCED OUT"
    0x558a3a2a4940 ---------A   05750 LET B(T1-1)=0
    0x558a3a2a4af0 ---------A   05760 IF O=2 THEN 8840
    0x558a3a2a4cb0 ---------A   05770 IF T1=4 THEN 5860
    0x558a3a2a4e80 ---------A   05780 IF T1=3 THEN 5840
    0x558a3a2a5140 ---------A   05790 IF D(J,2)<5 THEN 5820
    0x558a3a2a5340 ---------A   05800 LET T2=4
    0x558a3a2a53b0 ---------A   05810 GOTO 5870
    0x558a3a2a5510 ---------A T 05820 LET T2=6
    0x558a3a2a5580 ---------A   05830 GOTO 5870
    0x558a3a2a56e0 ---------A T 05840 LET T2=5
    0x558a3a2a5750 ---------A   05850 GOTO 5870
    0x558a3a2a58d0 ---------A T 05860 LET T2=2
    0x558a3a2a5d90 ---------A T 05870 PRINT N$(10*(1-T)+T2)" MAKES THE PIVOT"
    0x558a3a2a62b0 ---------A   05880 IF RND<S(10*(1-T)+T2,7) THEN 5920
    0x558a3a2a6400 ---------A   05890 PRINT"HE THROWS THE BALL AWAY"
    0x558a3a2a6570 ---------A   05900 LET M1=2
    0x558a3a2a65e0 ---------A   05910 GOTO 8840
    0x558a3a2a6740 ---------A T 05920 LET M1=1
    0x558a3a2a6900 ---------A   05930 IF T1>2 THEN 5950
    0x558a3a2a6ef0 ---------A   05940 LET T1=T1+INT((S(B(0),5)-3)/2)
    0x558a3a2a7320 ---------A T 05950 IF RND>Q(T1+4,D(J,2)) THEN 6000
    0x558a3a2a7470 ---------A   05960 PRINT"AND OVER TO FIRST FOR THE DOUBLE PLAY"
    0x558a3a2a75e0 ---------A   05970 LET O3=1
    0x558a3a2a7750 ---------A   05980 LET O2=2
    0x558a3a2a77d0 ---------A   05990 GOTO 8840
    0x558a3a2a7900 ---------A T 06000 PRINT"DOUBLE PLAY NOT SUCCESSFUL"
    0x558a3a2a7970 ---------A   06010 GOTO 8840
    0x558a3a2a7ad0 ---------A T 06020 LET O3=1
    0x558a3a2a7c40 ---------A   06030 LET M1=1
    0x558a3a2a7cb0 ---------A   06040 GOTO 8840
    0x558a3a2a7e50 ---------A T 06050 IF J>21 THEN 6380
    0x558a3a2a8020 ---------A   06060 IF O=2 THEN 8840
    0x558a3a2a8530 ---------A   06070 IF B(1)+B(2)+B(3)=0 THEN 8840
    0x558a3a2a86c0 ---------A T 06080 PRINT"AT WHAT BASE DO YOU WANT TO TRY FOR A D.P.(4=LIST CHANCES)";
    0x558a3a2a8790 ---------A   06090 INPUT T1
    0x558a3a2a8950 ---------A   06100 IF T1<4 THEN 6200
    0x558a3a2a8b70 ---------A   06110 FOR I=1 TO 3
    0x558a3a2a8d60 ---------A   06120 PRINT I":";
    0x558a3a28a2f0 ---------A   06130 IF B(I)=0 THEN 6160
    0x558a3a28a690 ---------A   06140 PRINT Q(I+8,D(J,2)),
    0x558a3a28a700 ---------A   06150 GOTO 6170
    0x558a3a28a840 ---------A T 06160 PRINT "NO RUNNER",
    0x558a3a28a8f0 ---------A T 06170 NEXT I
    0x558a3a28a970 ---------A   06180 PRINT
    0x558a3a28a9f0 ---------A   06190 GOTO 6080
    0x558a3a28ac00 ---------A T 06200 IF B(T1)=0 THEN 6080
    0x558a3a28b020 ---------A   06210 IF RND>Q(T1+8,D(J,2)) THEN 6360
    0x558a3a2aaea0 ---------A   06220 LET B(T1)=0
    0x558a3a2ab050 ---------A   06230 IF O=1 THEN 6290
    0x558a3a2ab280 ---------A   06240 FOR I=1 TO 3
    0x558a3a2ab4f0 ---------A   06250 IF I*T1=3 THEN 6280
    0x558a3a2ab710 ---------A   06260 IF B(I)=0 THEN 6280
    0x558a3a2ab790 ---------A   06270 GOTO 6320
    0x558a3a2ab830 ---------A T 06280 NEXT I
    0x558a3a2ab970 ---------A T 06290 PRINT"DOUBLE PLAY"
    0x558a3a2abae0 ---------A   06300 LET O2=2
    0x558a3a2abb60 ---------A   06310 GOTO 8840
    0x558a3a2abd20 ---------A T 06320 IF RND>.3 THEN 6290
    0x558a3a2abfa0 ---------A   06330 PRINT"TRIPLE PLAY MADE ON "N$(B(I))
    0x558a3a2ac110 ---------A   06340 LET O2=3
    0x558a3a2ac190 ---------A   06350 GOTO 8840
    0x558a3a2ac2b0 ---------A T 06360 PRINT"UNSUCCESSFUL"
    0x558a3a2ac320 ---------A   06370 GOTO 8840
    0x558a3a2ac4d0 ---------A T 06380 IF O=2 THEN 8840
    0x558a3a2aca00 ---------A   06390 LET F=J-INT((J-1)/3)*3
    0x558a3a2acc60 ---------A   06400 IF B(3)=0 THEN 6610
    0x558a3a2ad0e0 ---------A   06410 LET C=A(J-12,S(B(3),5))
    0x558a3a2ad290 ---------A   06420 IF C<1 THEN 6460
    0x558a3a2ad410 ---------A   06430 LET I=3
    0x558a3a2ad480 ---------A   06440 GOSUB 9420
    0x558a3a2ad500 ---------A   06450 GOTO 6610
    0x558a3a2ad8a0 ---------A T 06460 PRINT"DO YOU WANT "N$(B(3))" TO SCORE ON THE FLY";
    0x558a3a2ad980 ---------A   06470 INPUT T$
    0x558a3a2adb70 ---------A   06480 IF T$="Y" THEN 6520
    0x558a3a2add60 ---------A   06490 IF T$="N" THEN 8840
    0x558a3a2adf20 ---------A   06500 PRINT"CHANCE TO SCORE="C
    0x558a3a2adfa0 ---------A   06510 GOTO 6460
    0x558a3a2ae1e0 ---------A T 06520 IF B(1)=0 THEN 6550
    0x558a3a2ae260 ---------A   06530 GOSUB 9500
    0x558a3a2ae2c0 ---------A   06540 GOTO 6570
    0x558a3a2ae420 ---------A T 06550 LET I=3
    0x558a3a2ae490 ---------A   06560 GOSUB 9420
    0x558a3a2ae630 ---------A T 06570 IF O1=0 THEN 6600
    0x558a3a2ae7b0 ---------A   06580 LET O2=2 
    0x558a3a2ae930 ---------A   06590 LET O1=0
    0x558a3a2aeb90 ---------A T 06600 IF O+O2=3 THEN 8840
    0x558a3a2aedf0 ---------A T 06610 IF B(2)=0 THEN 8840
    0x558a3a2aef80 ---------A   06620 LET I=2
    0x558a3a2af3f0 ---------A   06630 LET C=A(J-21,S(B(2),5))
    0x558a3a2af5a0 ---------A   06640 IF C=0 THEN 8840
    0x558a3a2af760 ---------A   06650 IF C<1 THEN 6680
    0x558a3a2af7e0 ---------A   06660 GOSUB 9420
    0x558a3a2af850 ---------A   06670 GOTO 8840
    0x558a3a2af9a0 ---------A T 06680 PRINT"DO YOU WANT THE FLY TO";
    0x558a3a2afa10 ---------A   06690 GOSUB 9280
    0x558a3a2afbd0 ---------A   06700 LET O2=O2+O1
    0x558a3a2afc60 ---------A   06710 GOTO 8840
    0x558a3a2afdc0 ---------A T 06720 PRINT"WHAT BASE DO YOU WANT TO LEAD FROM(0=NONE)";
    0x558a3a2afe90 ---------A   06730 INPUT T5
    0x558a3a2b0060 ---------A   06740 IF T5=0 THEN 6920
    0x558a3a2b02a0 ---------A   06750 IF B(T5)=0 THEN 6720
    0x558a3a2b0810 ---------A   06760 IF ABS(L(T5)-10*B(T5)-2.5)>2 THEN 6800
    0x558a3a2b0ac0 ---------A   06770 PRINT N$(B(T5))"'S PREVIOUS LEAD REMAINS IN EFFECT,"
    0x558a3a2b0c00 ---------A   06780 PRINT"AS LONG AS HE IS ON THAT BASE"
    0x558a3a2b0c80 ---------A   06790 GOTO 6720
    0x558a3a2b1050 ---------A T 06800 LET L(T5)=INT(4*RND)+1
    0x558a3a2b1350 ---------A   06810 PRINT"RUNNER HAS A TYPE"L(T5)"LEAD (1=BEST,4=WORST)"
    0x558a3a2b1730 ---------A   06820 LET L(T5)=L(T5)+10*B(T5)
    0x558a3a2b18f0 ---------A   06830 IF RND>.06 THEN 6910
    0x558a3a2b1d40 ---------A   06840 IF RND>S(11-10*T,7) THEN 6880
    0x558a3a2b1fc0 ---------A   06850 PRINT N$(B(T5))" PICKED OFF"
    0x558a3a2b2190 ---------A   06860 LET B(T5)=0
    0x558a3a2b2230 ---------A   06870 GOTO 8840
    0x558a3a2b2370 ---------A T 06880 PRINT"PITCHER THROWS THE BALL AWAY TRYING FOR A PICKOFF"
    0x558a3a2b24e0 ---------A   06890 LET D=1
    0x558a3a2b2570 ---------A   06900 GOSUB 9100
    0x558a3a2b2d20 ---------A T 06910 IF B(1)*(B(2)+B(3))+B(2)*B(3)>0 THEN 6720
    0x558a3a2b2eb0 ---------A T 06920 PRINT"WHAT BASE DO YOU WANT TO STEAL FROM(0=NONE,4=LIST CHANCES)";
    0x558a3a2b2f80 ---------A T 06930 INPUT T5
    0x558a3a2b3140 ---------A   06940 IF T5=0 THEN 7220
    0x558a3a2b3300 ---------A   06950 IF T5<>4 THEN 7080
    0x558a3a2b3520 ---------A   06960 FOR I=1 TO 3
    0x558a3a2b3710 ---------A   06970 PRINT I":";
    0x558a3a2b3920 ---------A   06980 IF B(I)>0 THEN 7010
    0x558a3a2b3a80 ---------A   06990 PRINT"NO RUNNER",
    0x558a3a2b3b00 ---------A   07000 GOTO 7050
    0x558a3a2b3e60 ---------A T 07010 IF INT(L(I)/10)=B(I) THEN 7040
    0x558a3a2b3fc0 ---------A   07020 PRINT"NO LEAD",
    0x558a3a2b4050 ---------A   07030 GOTO 7050
    0x558a3a2b47f0 ---------A T 07040 PRINT A(4*I+L(I)-10*B(I)+14,S(B(I),5)),
    0x558a3a2b48a0 ---------A T 07050 NEXT I
    0x558a3a2b4920 ---------A   07060 PRINT
    0x558a3a2b49a0 ---------A   07070 GOTO 6920
    0x558a3a2b4ba0 ---------A T 07080 IF B(T5)>0 THEN 7110
    0x558a3a2b4ce0 ---------A   07090 PRINT"NO RUNNER"
    0x558a3a2b4d60 ---------A   07100 GOTO 6920
    0x558a3a2b50f0 ---------A T 07110 IF INT(L(T5)/10)=B(T5) THEN 7140
    0x558a3a2b5250 ---------A   07120 PRINT"RUNNER MAY NOT STEAL WITHOUT TAKING A LEAD FIRST"
    0x558a3a2b52d0 ---------A   07130 GOTO 6720
    0x558a3a2b55b0 ---------A T 07140 IF B(T5+1)=0 THEN 7190
    0x558a3a2b5780 ---------A   07150 IF T5=3 THEN 7190
    0x558a3a2b5ab0 ---------A   07160 IF L(T5+4)=1 THEN 7190
    0x558a3a2b5c20 ---------A   07170 PRINT"YOU MUST GIVE THE RUNNER AHEAD OF YOU THE STEAL SIGN FIRST"
    0x558a3a2b5c90 ---------A   07180 GOTO 6920
    0x558a3a2b5f70 ---------A T 07190 LET L(T5+3)=1
    0x558a3a2b60f0 ---------A   07200 PRINT"WHAT OTHER BASE DO YOU WANT TO STEAL FROM ON THE PLAY(0=NONE)";
    0x558a3a2b6170 ---------A   07210 GOTO 6930
    0x558a3a2b6630 ---------A T 07220 IF L(4)+L(5)+L(6)=0 THEN 2140
    0x558a3a2b6860 ---------A   07230 FOR I=1 TO 3
    0x558a3a2b6b80 ---------A   07240 IF L(I+3)=0 THEN 7270
    0x558a3a2b74c0 ---------A   07250 LET L(I+6)=A(4*I+L(I)-10*B(I)+14,S(B(I),5))
    0x558a3a2b7750 ---------A   07260 LET T6=I+1
    0x558a3a2b7800 ---------A T 07270 NEXT I
    0x558a3a2b7d10 ---------A   07280 IF L(4)+L(5)+L(6)=1 THEN 7320
    0x558a3a2b7e80 ---------A T 07290 PRINT"WHICH BASE DO YOU THROW TO (4=HOME)";
    0x558a3a2b7f60 ---------A   07300 INPUT T6
    0x558a3a2b8260 ---------A   07310 IF L(T6+2)=0 THEN 7290
    0x558a3a2b8490 ---------A T 07320 LET I=T6-1
    0x558a3a2b88d0 ---------A   07330 IF RND<S(12-10*T,7)THEN 7470
    0x558a3a2b8a20 ---------A   07340 PRINT "ERROR BY THE CATCHER"
    0x558a3a2b8bd0 ---------A   07350 IF RND<.5 THEN 7370
    0x558a3a2b8d50 ---------A   07360 LET W6=1
    0x558a3a2b8ed0 ---------A T 07370 LETD=1
    0x558a3a2b9190 ---------A   07380 FOR I=3 TO 1 STEP-1
    0x558a3a2b9490 ---------A   07390     IF L(I+3)=0THEN 7410
    0x558a3a2b9510 ---------A   07400     GOSUB 9150
    0x558a3a2b95b0 ---------A T 07410 NEXT I
    0x558a3a2b9770 ---------A   07420 IF W6<>1 THEN 7440
    0x558a3a2b97f0 ---------A   07430 GOSUB 9100
    0x558a3a2b9990 ---------A T 07440 IFO1=0THEN 2140
    0x558a3a2b9ad0 ---------A   07450 LETO2=O1
    0x558a3a2b9b50 ---------A   07460 GOTO 8840
    0x558a3a2b9df0 ---------A T 07470 IFRND<L(I+6) THEN 7520
    0x558a3a2ba020 ---------A   07480 LET O1=O1+1
    0x558a3a2ba290 ---------A   07490 PRINT N$(B(I))" OUT STEALING"
    0x558a3a2ba460 ---------A   07500 LET B(I)=0
    0x558a3a2ba620 ---------A   07510 IF O=2 THEN 7370
    0x558a3a2ba8e0 ---------A T 07520 FOR J=3 TO 1 STEP -1
    0x558a3a2baa70 ---------A   07530 IF J=I THEN 7570
    0x558a3a2bad80 ---------A   07540 IF L(J+3)<>1 THEN 7570
    0x558a3a2bb050 ---------A   07550 IF ABS(J-I)>1 THEN 7570
    0x558a3a2bb450 ---------A   07560 IF L(J)-10*B(J)=4 THEN 7590
    0x558a3a2bb510 ---------A T 07570 NEXT J
    0x558a3a2bb5a0 ---------A   07580 GOTO 7370
    0x558a3a2bb840 ---------A T 07590 IF RND<L(J+6)THEN 7370
    0x558a3a2bba70 ---------A   07600 LET O1=O1+1
    0x558a3a2bbce0 ---------A   07610 PRINT N$(B(J))" OUT STEALING"
    0x558a3a2bbeb0 ---------A   07620 LET B(J)=0
    0x558a3a2bbf20 ---------A   07630 GOTO 7370
    0x558a3a2bbf90 ---------A T 07640 PRINT
    0x558a3a2bc250 ---------A   07650 PRINT N$(B(0))" IS UP"
    0x558a3a2bc3a0 ---------A   07660 PRINT"INTENTIONAL WALK";
    0x558a3a2bc470 ---------A   07670 INPUT T$
    0x558a3a2bc650 ---------A   07680 IF T$="Y"THEN 2470
    0x558a3a2bc7b0 ---------A   07690 PRINT"BUNT";
    0x558a3a2bc890 ---------A   07700 INPUT T$
    0x558a3a2bca70 ---------A   07710 IF T$<>"Y" THEN 2280
    0x558a3a2bcc80 ---------A   07720 LET P2=0
    0x558a3a2bd180 ---------A   07730 IF L(4)+L(5)+L(6)=0 THEN 7760
    0x558a3a2bd2e0 ---------A   07740 PRINT "BATTER STARTS WITH ONE STRIKE BECAUSE OF STEAL PLAY"
    0x558a3a2bd460 ---------A   07750 LET P2=1
    0x558a3a2bdb80 ---------A T 07760 LET P3=.81+(4-S(B(0),5))^2*.00875
    0x558a3a2bddf0 ---------A T 07770 IF B(3)=0 THEN 7840
    0x558a3a2bdf60 ---------A   07780 PRINT"DO YOU WANT A SUICIDE SQUEEZE";
    0x558a3a2be040 ---------A   07790 INPUT T$
    0x558a3a2be220 ---------A   07800 IF T$<>"Y" THEN 7840
    0x558a3a2be420 ---------A   07810 LET P4=1
    0x558a3a2be590 ---------A   07820 LET I=3
    0x558a3a2be600 ---------A   07830 GOTO 7850
    0x558a3a2be760 ---------A T 07840 LET P4=0
    0x558a3a2be910 ---------A T 07850 LET P0=RND
    0x558a3a2be980 ---------A   07860 GOTO 8020
    0x558a3a2beb80 ---------A T 07870 LET O=O+1
    0x558a3a2becf0 ---------A   07880 LET O1=0
    0x558a3a2beea0 ---------A   07890 IF O=1 THEN 7920
    0x558a3a2befe0 ---------A   07900 PRINT"TWO OUTS"
    0x558a3a2bf050 ---------A   07910 GOTO 7930
    0x558a3a2bf180 ---------A T 07920 PRINT"ONE OUT"
    0x558a3a2bf2d0 ---------A T 07930 PRINT"IS THE BUNT STILL ON";
    0x558a3a2bf3b0 ---------A   07940 INPUT T$
    0x558a3a2bf590 ---------A   07950 IF T$<>"N" THEN 7770
    0x558a3a2bf760 ---------A   07960 IF P2<2 THEN 2280
    0x558a3a2bfc00 ---------A   07970 IF RND>S(10*(1-T),3) THEN 2280
    0x558a3a2bfed0 ---------A   07980 PRINT N$(B(0))" STRIKES OUT ON THE NEXT PITCH"
    0x558a3a2bff40 ---------A   07990 GOTO 8840
    0x558a3a2c0140 ---------A T 08000 LET W3=T+1
    0x558a3a2c01c0 ---------A   08010 GOTO 8840
    0x558a3a2c0360 ---------A T 08020 IF P0>.15 THEN 8170
    0x558a3a2c0590 ---------A   08030 LET P2=P2+1
    0x558a3a2c0750 ---------A   08040 PRINT"CALLED STRIKE"P2
    0x558a3a2c0de0 ---------A   08050 LET C=.45-(4-S(B(3),5))^2*.02
    0x558a3a2c0f90 ---------A   08060 IF P2<3 THEN 8120
    0x558a3a2c1150 ---------A   08070 IF O=2 THEN 8840
    0x558a3a2c1310 ---------A   08080 IF P4=0 THEN 8840
    0x558a3a2c1390 ---------A   08090 GOSUB 9420
    0x558a3a2c1590 ---------A   08100 LET O2=1+O1
    0x558a3a2c1600 ---------A   08110 GOTO 8840
    0x558a3a2c17a0 ---------A T 08120 IF P4=0 THEN 7930
    0x558a3a2c1830 ---------A   08130 GOSUB 9420
    0x558a3a2c1a70 ---------A   08140 IF O+O1=3 THEN 8000
    0x558a3a2c1c30 ---------A   08150 IF O1=1 THEN 7870
    0x558a3a2c1cb0 ---------A   08160 GOTO 7930
    0x558a3a2c1e70 ---------A T 08170 IF P0>.23THEN 8240
    0x558a3a2c1fc0 ---------A   08180 PRINT"BUNT IS POPPED UP AND CAUGHT"
    0x558a3a2c2190 ---------A   08190 IF P4=0 THEN 8840
    0x558a3a2c2460 ---------A   08200 PRINT N$(B(3))" IS CAUGHT OFF BASE AND IS OUT"
    0x558a3a2c2670 ---------A   08210 LET B(3)=0
    0x558a3a2c27e0 ---------A   08220 LET O2=2
    0x558a3a2c2850 ---------A   08230 GOTO 8840
    0x558a3a2c29f0 ---------A T 08240 IF P0>.49THEN 8290
    0x558a3a2c2c20 ---------A   08250 LET P2=P2+1
    0x558a3a2c2dd0 ---------A   08260 PRINT"FOUL BUNT, STRIKE"P2
    0x558a3a2c2f80 ---------A   08270 IF P2<3 THEN 7930
    0x558a3a2c3000 ---------A   08280 GOTO 8840
    0x558a3a2c31c0 ---------A T 08290 IF P0>.56THEN 8370
    0x558a3a2c3310 ---------A   08300 PRINT"BAD BUNT, RIGHT BACK AT A FIELDER"
    0x558a3a2c3480 ---------A   08310 LET J=15
    0x558a3a2c3630 ---------A   08320 IF P4=0 THEN 4910
    0x558a3a2c37c0 ---------A   08330 LET P5=1
    0x558a3a2c38f0 ---------A   08340 PRINT"NO PLAY AT HOME"
    0x558a3a2c3b00 ---------A   08350 LET B(3)=0
    0x558a3a2c3b70 ---------A   08360 GOTO 4910
    0x558a3a2c3ce0 ---------A T 08370 IF P0>P3 THEN 8760
    0x558a3a2c3e30 ---------A   08380 PRINT"GOOD SACRIFICE BUNT"
    0x558a3a2c4080 ---------A   08390 IF B(3)>0 THEN 8430
    0x558a3a2c4200 ---------A   08400 LET D=1
    0x558a3a2c4270 ---------A   08410 GOSUB 9100
    0x558a3a2c42d0 ---------A   08420 GOTO 8840
    0x558a3a2c4480 ---------A T 08430 IF P4=1 THEN 8660
    0x558a3a2c4820 ---------A   08440 IF B(1)*B(2)=0 THEN 8620
    0x558a3a2c4a40 ---------A   08450 LET B(3)=0
    0x558a3a2c4bb0 ---------A   08460 LET D=1
    0x558a3a2c4c40 ---------A   08470 GOSUB 9100
    0x558a3a2c4da0 ---------A   08480 PRINT"DO YOU TRY FOR A FORCEOUT AT HOME?"
    0x558a3a2c4f10 ---------A   08490 PRINT"CHANCE=.75. IF YOU TYPE 'NO', BATTER IS OUT";
    0x558a3a2c4ff0 ---------A   08500 INPUT T$
    0x558a3a2c51d0 ---------A   08510 IF T$<>"N" THEN 8540
    0x558a3a2c5350 ---------A   08520 LET P5=1
    0x558a3a2c53d0 ---------A   08530 GOTO 8840
    0x558a3a2c5670 ---------A T 08540 PRINT N$(B(0))" ON FIRST"
    0x558a3a2c58f0 ---------A   08550 LET B(1)=B(0)
    0x558a3a2c5ab0 ---------A   08560 IF RND<.75 THEN 8600
    0x558a3a2c5bf0 ---------A   08570 PRINT"SAFE AT HOME"
    0x558a3a2c5c60 ---------A   08580 GOSUB 9000
    0x558a3a2c5cd0 ---------A   08590 GOTO 1960
    0x558a3a2c5df0 ---------A T 08600 PRINT"OUT AT THE PLATE"
    0x558a3a2c5e90 ---------A   08610 GOTO 8840
    0x558a3a2c5fe0 ---------A T 08620 PRINT"DO YOU TRY TO KEEP THE RUN FROM SCORING(IF YOU DO,"
    0x558a3a2c6130 ---------A   08630 PRINT"BATTER IS SAFE)";
    0x558a3a2c6210 ---------A   08640 INPUT T$
    0x558a3a2c63f0 ---------A   08650 IF T$="Y" THEN 8690
    0x558a3a2c6570 ---------A T 08660 LET M1=1
    0x558a3a2c66e0 ---------A   08670 LET O3=1
    0x558a3a2c6760 ---------A   08680 GOTO 8840
    0x558a3a2c69a0 ---------A T 08690 IF B(2)>0 THEN 8730
    0x558a3a2c6b20 ---------A   08700 LET I=1
    0x558a3a2c6c90 ---------A   08710 LET D=1
    0x558a3a2c6d10 ---------A   08720 GOSUB 9150
    0x558a3a2c6fb0 ---------A T 08730 PRINT N$(B(0))" ON FIRST"
    0x558a3a2c7220 ---------A   08740 LET B(1)=B(0)
    0x558a3a2c72b0 ---------A   08750 GOTO 1960
    0x558a3a2c7630 ---------A T 08760 PRINT"BUNT SINGLE--"N$(B(0))" ON FIRST"
    0x558a3a2c77a0 ---------A   08770 LET D=1
    0x558a3a2c7810 ---------A   08780 GOSUB 9100
    0x558a3a2c7a70 ---------A   08790 LET B(1)=B(0)
    0x558a3a2c7af0 ---------A   08800 GOTO 1960
    0x558a3a2c9270 ---------A T 08810 PRINT"GAME IS OVER***"
    0x558a3a2c9960 ---------A   08820 PRINT"FINAL SCORE:",N$(0);S(0,8),N$(10);S(10,8)
    0x558a3a2c99b0 ---------A   08830 STOP
    0x558a3a2ca210 ---------A T 08840 LET O1=0
    0x558a3a2ca3e0 ---------A   08850 LET O=O+O2
    0x558a3a2ca550 ---------A   08860 LET O2=1
    0x558a3a2ca700 ---------A   08870 IF O>2 THEN 8930
    0x558a3a2ca8c0 ---------A   08880 IF O=2 THEN 8910
    0x558a3a2caa00 ---------A   08890 PRINT"ONE OUT"
    0x558a3a2caa70 ---------A   08900 GOTO 1960
    0x558a3a2cab90 ---------A T 08910 PRINT "TWO OUTS"
    0x558a3a2cac00 ---------A   08920 GOTO 1960
    0x558a3a2cada0 ---------A T 08930 IF I2<9 THEN 1850
    0x558a3a2caf70 ---------A   08940 IF T=1 THEN 8970
    0x558a3a2cb370 ---------A   08950 IF S(10,8)>S(0,8) THEN 8810
    0x558a3a2cb400 ---------A   08960 GOTO 1850
    0x558a3a2cb7e0 ---------A T 08970 IF S(10,8)=S(0,8) THEN 1850
    0x558a3a2cb870 ---------A   08980 GOTO 8810
    0x558a3a2d16d0 ---------A   08990 END
    0x558a3a2c80d0 ---------B G 09000 LET S(10*T,8)=S(10*T,8)+1
    0x558a3a2c87c0 ---------B   09010 PRINT"SCORE:",N$(0);S(0,8),N$(10);S(10,8)
    0x558a3a2c8970 ---------B   09020 IF I2<9 THEN 9090
    0x558a3a2c8b40 ---------B   09030 IF T=0 THEN 9090
    0x558a3a2c8f40 ---------B   09040 IF S(0,8)>=S(10,8) THEN 9090
    0x558a3a2c9110 ---------B   09050 IF H1=1 THEN 9090
    0x558a3a2dd520 ---------B   09060 PRINT"GAME IS OVER***"
    0x558a3a2dbf90 ---------B   09070 PRINT"FINAL SCORE:",N$(0);S(0,8),N$(10);S(10,8)
    0x558a3a2e5ce0 ---------B   09080 STOP
    0x558a3a2c9a10 ---------B T 09090 RETURN
    0x558a3a2c9cf0 ---------C G 09100 FOR I=3 TO 1 STEP -1
    0x558a3a2c9f10 ---------C   09110 IF B(I)=0 THEN 9130
    0x558a3a2c9f90 ---------C   09120 GOSUB 9150
    0x558a3a2ca030 ---------C T 09130 NEXT I
    0x558a3a2ca090 ---------C   09140 RETURN
    0x558a3a2cba70 ---------D G 09150 IF B(I)=0 THEN 9270
    0x558a3a2cbc30 ---------D   09160 PRINT N$(B(I));
    0x558a3a2cbe80 ---------D   09170 IF I+D<4 THEN 9210
    0x558a3a2cbfc0 ---------D   09180 PRINT" SCORES"
    0x558a3a2cc030 ---------D   09190 GOSUB 9000
    0x558a3a2cc090 ---------D   09200 GOTO 9260
    0x558a3a2cc310 ---------D T 09210 LET B(I+D)=B(I)
    0x558a3a2cc570 ---------D   09220 IF I+D=2 THEN 9250
    0x558a3a2cc6b0 ---------D   09230 PRINT" MOVES TO THIRD"
    0x558a3a2cc730 ---------D   09240 GOTO 9260
    0x558a3a2cc850 ---------D T 09250 PRINT" MOVES TO SECOND"
    0x558a3a2cca20 ---------D T 09260 LET B(I)=0
    0x558a3a2cca70 ---------D T 09270 RETURN
    0x558a3a2ccd20 ---------E B 09280 PRINT" ADVANCE "N$(B(I));
    0x558a3a2cce00 ---------E   09290 INPUT T$
    0x558a3a2ccff0 ---------E   09300 IF T$="Y" THEN 9340
    0x558a3a2cd1e0 ---------E   09310 IF T$="N" THEN 9380
    0x558a3a2cd3a0 ---------E   09320 PRINT"CHANCE OF ADVANCING="C
    0x558a3a2cd410 ---------E   09330 GOTO 9280
    0x558a3a2e5e60 ---------E T 09340 IF RND<C THEN 9390
    0x558a3a2da7d0 ---------E   09350 LET O1=1
    0x558a3a2d7a80 ---------E   09360 PRINT N$(B(I))" IS OUT"
    0x558a3a2e2340 ---------E   09370 LET B(I)=0
    0x558a3a2e5ee0 ---------E T 09380 GOTO 9410 (Pseudo Goto)
    0x558a3a2d38c0 ---------E T 09390 LET D=1
    0x558a3a2e5f40 ---------E   09400 GOSUB 9150
    0x558a3a2e5fd0 ---------E T 09410 RETURN
    0x558a3a2cd570 ---------F G 09420 IF RND<C THEN 9470
    0x558a3a2cd700 ---------F   09430 LET O1=1
    0x558a3a2cd970 ---------F   09440 PRINT N$(B(I))" IS OUT"
    0x558a3a2cdb40 ---------F   09450 LET B(I)=0
    0x558a3a2e5860 ---------F   09460 GOTO 9490 (Pseudo Goto)
    0x558a3a2cdd10 ---------F T 09470 LET D=1
    0x558a3a2cdd80 ---------F   09480 GOSUB 9150
    0x558a3a2cddc0 ---------F T 09490 RETURN
    0x558a3a2ce030 ---------G G 09500 IF B(2)>0 THEN 9700
    0x558a3a2ce1e0 ---------G   09510 LET D=1
    0x558a3a2ce760 ---------G T 09520 PRINT"DO YOU WANT "N$(16+F-10*T)" TO THROW TO THE PLATE";
    0x558a3a2ce840 ---------G   09530 INPUT T$
    0x558a3a2cea30 ---------G   09540 IF T$="Y" THEN 9580
    0x558a3a2cec20 ---------G   09550 IF T$="N" THEN 9850
    0x558a3a2cede0 ---------G   09560 PRINT"CHANCE TO SCORE="C
    0x558a3a2cee70 ---------G   09570 GOTO 9520
    0x558a3a2cf210 ---------G T 09580 PRINT"DO YOU WANT "N$(B(1))" TO BREAK FOR SECOND";
    0x558a3a2cf2f0 ---------G   09590 INPUT T$
    0x558a3a2cf4e0 ---------G   09600 IF T$="Y" THEN 9650
    0x558a3a2cf700 ---------G   09610 IF T$="N" THEN 9700
    0x558a3a2cf890 ---------G   09620 PRINT".3 CHANCE TO BE OUT AND .15 CHANCE TO BE FORCED BACK TO FIRST,"
    0x558a3a2cf9d0 ---------G   09630 PRINT"UNLESS BALL GOES THROUGH TO PLATE"
    0x558a3a2cfa60 ---------G   09640 GOTO 9580
    0x558a3a2cfbb0 ---------G T 09650 PRINT"DO YOU WANT THE THROW CUT OFF";
    0x558a3a2cfc90 ---------G   09660 INPUT T$
    0x558a3a2cfe70 ---------G   09670 IF T$="Y" THEN 9730
    0x558a3a2cfff0 ---------G   09680 LET I=1
    0x558a3a2d0060 ---------G   09690 GOSUB 9150
    0x558a3a2d01c0 ---------G T 09700 LET I=3
    0x558a3a2d0230 ---------G   09710 GOSUB 9420
    0x558a3a2e58f0 ---------G   09720 GOTO 9870 (Pseudo Goto)
    0x558a3a2d03f0 ---------G T 09730 LET I=3
    0x558a3a2d0480 ---------G   09740 GOSUB 9150
    0x558a3a2d09d0 ---------G   09750 ON RND/.55+16/11 GOTO 9760,9800,9830
    0x558a3a2d0b00 ---------G T 09760 PRINT"OUT AT SECOND"
    0x558a3a2d0c70 ---------G   09770 LET O1=1
    0x558a3a2d0e80 ---------G   09780 LET B(1)=0
    0x558a3a2e5960 ---------G   09790 GOTO 9870 (Pseudo Goto)
    0x558a3a2d1050 ---------G T 09800 LET I=1
    0x558a3a2d10c0 ---------G   09810 GOSUB 9150
    0x558a3a2e59d0 ---------G   09820 GOTO 9870 (Pseudo Goto)
    0x558a3a2d13f0 ---------G T 09830 PRINT N$(B(1))" BLUFFS AND GOES BACK TO FIRST"
    0x558a3a2e5a40 ---------G   09840 GOTO 9870 (Pseudo Goto)
    0x558a3a2d15c0 ---------G T 09850 LET I=3
    0x558a3a2d1630 ---------G   09860 GOSUB 9150
    0x558a3a2d1670 ---------G T 09870 RETURN
 */

//---------------------------------------------------------------------------
// $Header$ 
//
// NOTE: This program has been automatically tranlated by b2c
//
// $Log$ 
// 
//---------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
//---------------------------------------------------------------------------
// Global data area.
//---------------------------------------------------------------------------
char* data_01310s[]={"RED SOX",".02",".071",".303",".072","0",".004",".993","0"};
char* data_01320s[]={"LONBORG","0",".013",".045",".128","0","0",".95","9"};
char* data_01330s[]={"HOWARD",".013",".013",".039",".176","0","0",".946","8"};
char* data_01340s[]={"SCOTT",".032",".046",".084",".301","1","0",".936","4"};
char* data_01350s[]={"ANDREWS",".015",".015",".055",".259","1","0",".966","2"};
char* data_01360s[]={"ADAIR",".008",".01",".052",".259","0","0",".975","1"};
char* data_01370s[]={"PETROCELLI",".035",".04",".091",".267","0","0",".954","6"};
char* data_01380s[]={"YASTRZEMSKI",".072",".08",".13",".309","1","1",".985","3"};
char* data_01390s[]={"REGGIE SMITH",".029",".04",".082",".25","2","2",".952","7"};
char* data_01400s[]={"HARRELSON",".036",".039",".085",".252","2","0",".917","5"};
char* data_01410s[]={"CARDINALS",".024",".057",".274","-.002","0",".004",".996","0"};
char* data_01420s[]={"GIBSON",".01",".01",".048",".18","1","0",".958","9"};
char* data_01430s[]={"MCCARVER",".029",".035",".086",".295","1","1",".973","5"};
char* data_01440s[]={"CEPEDA",".046",".046",".111",".330","1","0",".908","4"};
char* data_01450s[]={"JAVIER",".028",".034",".067",".288","1","0",".981","6"};
char* data_01460s[]={"SHANNON",".027",".033",".071",".244","0","0",".904","7"};
char* data_01470s[]={"MAXVILL",".002",".011",".042",".225","0","0",".967","8"};
char* data_01480s[]={"BROCK",".029",".046",".094",".291","3","1",".936","1"};
char* data_01490s[]={"FLOOD",".008",".01",".055",".324","0","0","1","2"};
char* data_01500s[]={"MARIS",".023",".038",".082",".265","0","1",".989","3"};
char* data_01510s[]={".17",".21",".24",".27",".3",".24",".29",".33",".37",".4",".17",".21",".24",".27",".3"};
char* data_01520s[]={".67",".71",".75",".78",".81",".73",".79",".84",".89",".94",".67",".71",".75",".78",".81"};
char* data_01530s[]={".15",".19",".22",".25",".27",".6",".65",".7",".74",".78",".15",".19",".22",".25",".27"};
char* data_01540s[]={".85","1","1","1","1",".95","1","1","1","1",".85","1","1","1","1"};
char* data_01550s[]={"1","1","1","1","1","1","1","1","1","1","1","1","1","1","1"};
char* data_01560s[]={"0","0","0","0","0","0","0","0","0",".1",".1",".17",".23",".29",".35"};
char* data_01570s[]={"0","0","0","0","0",".3",".39",".47",".53",".58",".69",".8",".88",".92",".95"};
char* data_01580s[]={".4",".49",".57",".65",".72",".81",".9",".96","1","1","1","1","1","1","1"};
char* data_01590s[]={"0","0","0","0","0","0","0","0","0","0","0","0","0",".05",".1"};
char* data_01600s[]={"0","0","0","0","0","0","0",".05",".1",".14",".38",".43",".48",".52",".56",".4",".48",".55",".62"};
char* data_01610s[]={".68",".58",".67",".75",".82",".89","1","1","1","1","1",".05",".1",".15",".2",".3",".1",".15",".2"};
char* data_01620s[]={".25",".35",".05",".1",".15",".2",".3",".72",".79",".85",".9",".94","1","1","1","1","1",".72",".79"};
char* data_01630s[]={".85",".9",".94","1","1","1","1","1","1","1","1","1","1","1","1","1","1","1"};
char* data_01640s[]={".63",".75",".85",".9",".93",".48",".59",".67",".72",".76",".32",".42",".48",".53",".58"};
char* data_01650s[]={".14",".23",".28",".33",".37",".51",".58",".62",".66",".7",".27",".36",".43",".49",".55"};
char* data_01660s[]={".1",".17",".24",".31",".37","0",".02",".05",".09",".16",".14",".21",".28",".33",".38"};
char* data_01670s[]={".08",".11",".14",".17",".2",".02",".04",".06",".08",".09","0","0","0","0","0"};
char* data_01680s[]={"1","1",".9","1",".75","1","1","1",".2",".4","1","1","1","1","1",".8","1",".8",".8","0",".6",".75",".35"};
char* data_01690s[]={".75",".65","0",".35",".55",".2",".55",".6","0",".25",".35",".1",".35",".1","0",".05",".05"};
char* data_01700s[]={".2",".1",".4","0",".3",".15",".2",".15"};
char* data_01710s[]={".7","0",".8",".3",".1",".15",".45","0",".5",".55",".35",".45",".7","0",".1",".15",".7",".35"};
char* data_01720s[]={".333",".033","2",".045",".042","3",".054",".054","5",".0564",".0576","7",".06",".06","9"};
char* data_01730s[]={".07",".075","5",".1",".11","6",".135",".14","4",".15",".15","3",".158",".158","1",".16",".16"};
char* data_01740s[]={"2",".2775",".207","5",".442",".301","6",".536",".4655","4",".583",".583","3",".63",".63","1"};
char* data_01750s[]={".64",".632","5",".662",".6352","6",".6652",".6572","4",".6672",".6672","3",".67",".67","1"};
char* data_01760s[]={".022",".69","7",".73",".718","8",".75",".75","9",".8102",".778","7",".862",".8298","8"};
char* data_01770s[]={".89",".89","9",".9395",".9065","7",".9835",".9505","8","1","1","9"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1310,  9,data_01310s},
    { 1320,  9,data_01320s},
    { 1330,  9,data_01330s},
    { 1340,  9,data_01340s},
    { 1350,  9,data_01350s},
    { 1360,  9,data_01360s},
    { 1370,  9,data_01370s},
    { 1380,  9,data_01380s},
    { 1390,  9,data_01390s},
    { 1400,  9,data_01400s},
    { 1410,  9,data_01410s},
    { 1420,  9,data_01420s},
    { 1430,  9,data_01430s},
    { 1440,  9,data_01440s},
    { 1450,  9,data_01450s},
    { 1460,  9,data_01460s},
    { 1470,  9,data_01470s},
    { 1480,  9,data_01480s},
    { 1490,  9,data_01490s},
    { 1500,  9,data_01500s},
    { 1510, 15,data_01510s},
    { 1520, 15,data_01520s},
    { 1530, 15,data_01530s},
    { 1540, 15,data_01540s},
    { 1550, 15,data_01550s},
    { 1560, 15,data_01560s},
    { 1570, 15,data_01570s},
    { 1580, 15,data_01580s},
    { 1590, 15,data_01590s},
    { 1600, 19,data_01600s},
    { 1610, 19,data_01610s},
    { 1620, 19,data_01620s},
    { 1630, 18,data_01630s},
    { 1640, 15,data_01640s},
    { 1650, 15,data_01650s},
    { 1660, 15,data_01660s},
    { 1670, 15,data_01670s},
    { 1680, 23,data_01680s},
    { 1690, 17,data_01690s},
    { 1700,  8,data_01700s},
    { 1710, 18,data_01710s},
    { 1720, 15,data_01720s},
    { 1730, 17,data_01730s},
    { 1740, 16,data_01740s},
    { 1750, 15,data_01750s},
    { 1760, 15,data_01760s},
    { 1770, 12,data_01770s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
int   A_int_arr[31][5]; // Comments?
float A_flt;        // Comments?
int   B_int_arr[10];// Comments?
float C_flt;        // Comments?
int   D_int_arr[31][3]; // Comments?
int   D_int;        // Comments?
int   E_int_arr[25][5]; // Comments?
int   E_int;        // Comments?
int   F_int;        // Comments?
int   F1_int;       // Comments?
int   F2_int;       // Comments?
int   H1_int;       // Comments?
int   i;            // Comments?
int   I1_int;       // Comments?
int   I2_int;       // Comments?
int   j;            // Comments?
int   L_int_arr[10];// Comments?
int   M1_int;       // Comments?
char* TeamPlayerName[20];   // Comments?
int   O_int;        // Comments?
int   O1_int;       // Comments?
int   O2_int;       // Comments?
int   O3_int;       // Comments?
int   P0_int;       // Comments?
int   P2_int;       // Comments?
float P3_flt;       // Comments?
int   P4_int;       // Comments?
int   P5_int;       // Comments?
int   Q_int_arr[12][7]; // Comments?
int   S_int_arr[20][9]; // Comments?
int   T_int;        // Comments?
char* T_str;        // Comments?
int   T1_int;       // Comments?
int   T2_int;       // Comments?
int   T3_int;       // Comments?
int   T4_int;       // Comments?
int   T5_int;       // Comments?
int   T6_int;       // Comments?
int   T7_int;       // Comments?
int   V_int;        // Comments?
int   W1_int;       // Comments?
int   W2_int;       // Comments?
int   W3_int;       // Comments?
int   W6_int;       // Comments?
int   X_int;        // Comments?
int   X1_int;       // Comments?
int   X2_int;       // Comments?
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_09000();
void Routine_09100();
void Routine_09150();
void Routine_09280();
void Routine_09420();
void Routine_09500();

//---------------------------------------------------------------------------
// Program Functions.
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
// Program Subroutines.
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Routine B
//---------------------------------------------------------------------------

void Routine_09000(){
    // 09000 LET S(10*T,8)=S(10*T,8)+1
    S_int_arr[(int)10*T_int][(int)8] = S_int_arr[(int)10*T_int][(int)8]+1;
    // 09010 PRINT"SCORE:",N$(0);S(0,8),N$(10);S(10,8)
    b2c_fprintf(stdout,"SCORE:@%s %d @%s %d ",TeamPlayerName[(int)0],S_int_arr[(int)0][(int)8],TeamPlayerName[(int)10],S_int_arr[(int)10][(int)8]); b2c_fprintf(stdout,"\n");
    // 09020 IF I2<9 THEN 9090
    if(I2_int<9)goto Lbl_09090;
    // 09030 IF T=0 THEN 9090
    if(T_int==0)goto Lbl_09090;
    // 09040 IF S(0,8)>=S(10,8) THEN 9090
    if(S_int_arr[(int)0][(int)8]>=S_int_arr[(int)10][(int)8])goto Lbl_09090;
    // 09050 IF H1=1 THEN 9090
    if(H1_int==1)goto Lbl_09090;
    // 09060 PRINT"GAME IS OVER***"
    b2c_fprintf(stdout,"GAME IS OVER***"); b2c_fprintf(stdout,"\n");
    // 09070 PRINT"FINAL SCORE:",N$(0);S(0,8),N$(10);S(10,8)
    b2c_fprintf(stdout,"FINAL SCORE:@%s %d @%s %d ",TeamPlayerName[(int)0],S_int_arr[(int)0][(int)8],TeamPlayerName[(int)10],S_int_arr[(int)10][(int)8]); b2c_fprintf(stdout,"\n");
    // 09080 STOP
    exit(1);

  Lbl_09090:
    // 09090 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------

void Routine_09100(){
    // 09100 FOR I=3 TO 1 STEP -1
    for(i=3;i>=1;i+=-1){
        // 09110 IF B(I)=0 THEN 9130
        if(B_int_arr[(int)i]==0)goto Lbl_09130;
        // 09120 GOSUB 9150
        Routine_09150();

  Lbl_09130:
        // 09130 NEXT I
        int dummy_9130=0; // Ignore this line.
    }; // End-For(i)
    // 09140 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine D
//---------------------------------------------------------------------------

void Routine_09150(){
    // 09150 IF B(I)=0 THEN 9270
    if(B_int_arr[(int)i]==0)goto Lbl_09270;
    // 09160 PRINT N$(B(I));
    b2c_fprintf(stdout,"%s",TeamPlayerName[(int)B_int_arr[(int)i]]); 
    // 09170 IF I+D<4 THEN 9210
    if(i+D_int<4)goto Lbl_09210;
    // 09180 PRINT" SCORES"
    b2c_fprintf(stdout," SCORES"); b2c_fprintf(stdout,"\n");
    // 09190 GOSUB 9000
    Routine_09000();
    // 09200 GOTO 9260
    goto Lbl_09260;

  Lbl_09210:
    // 09210 LET B(I+D)=B(I)
    B_int_arr[(int)i+D_int] = B_int_arr[(int)i];
    // 09220 IF I+D=2 THEN 9250
    if(i+D_int==2)goto Lbl_09250;
    // 09230 PRINT" MOVES TO THIRD"
    b2c_fprintf(stdout," MOVES TO THIRD"); b2c_fprintf(stdout,"\n");
    // 09240 GOTO 9260
    goto Lbl_09260;

  Lbl_09250:
    // 09250 PRINT" MOVES TO SECOND"
    b2c_fprintf(stdout," MOVES TO SECOND"); b2c_fprintf(stdout,"\n");

  Lbl_09260:
    // 09260 LET B(I)=0
    B_int_arr[(int)i] = 0;

  Lbl_09270:
    // 09270 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine E
//---------------------------------------------------------------------------

void Routine_09280(){

  Lbl_09280:
    // 09280 PRINT" ADVANCE "N$(B(I));
    b2c_fprintf(stdout," ADVANCE %s",TeamPlayerName[(int)B_int_arr[(int)i]]); 
    // 09290 INPUT T$
    // Start of Basic INPUT statement 09290
    printf(" ? ");
    char inpbuf_09290[100];
    if(fgets(inpbuf_09290,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_09290=strtok(inpbuf_09290," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_09290==nullptr){
            T_str = "";
        }else{
            T_str = ps_09290;
        };
    }; // End of Basic INPUT statement 09290
    // 09300 IF T$="Y" THEN 9340
    if(strcmp(T_str,"Y")==0)goto Lbl_09340;
    // 09310 IF T$="N" THEN 9380
    if(strcmp(T_str,"N")==0)goto Lbl_09380;
    // 09320 PRINT"CHANCE OF ADVANCING="C
    b2c_fprintf(stdout,"CHANCE OF ADVANCING= %f ",C_flt); b2c_fprintf(stdout,"\n");
    // 09330 GOTO 9280
    goto Lbl_09280;

  Lbl_09340:
    // 09340 IF RND<C THEN 9390
    if(RND()<C_flt)goto Lbl_09390;
    // 09350 LET O1=1
    O1_int = 1;
    // 09360 PRINT N$(B(I))" IS OUT"
    b2c_fprintf(stdout,"%s IS OUT",TeamPlayerName[(int)B_int_arr[(int)i]]); b2c_fprintf(stdout,"\n");
    // 09370 LET B(I)=0
    B_int_arr[(int)i] = 0;

  Lbl_09380:
    // 09380 GOTO 9410 (Pseudo Goto)
    goto Lbl_09410;

  Lbl_09390:
    // 09390 LET D=1
    D_int = 1;
    // 09400 GOSUB 9150
    Routine_09150();

  Lbl_09410:
    // 09410 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine F
//---------------------------------------------------------------------------

void Routine_09420(){
    // 09420 IF RND<C THEN 9470
    if(RND()<C_flt)goto Lbl_09470;
    // 09430 LET O1=1
    O1_int = 1;
    // 09440 PRINT N$(B(I))" IS OUT"
    b2c_fprintf(stdout,"%s IS OUT",TeamPlayerName[(int)B_int_arr[(int)i]]); b2c_fprintf(stdout,"\n");
    // 09450 LET B(I)=0
    B_int_arr[(int)i] = 0;
    // 09460 GOTO 9490 (Pseudo Goto)
    goto Lbl_09490;

  Lbl_09470:
    // 09470 LET D=1
    D_int = 1;
    // 09480 GOSUB 9150
    Routine_09150();

  Lbl_09490:
    // 09490 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine G
//---------------------------------------------------------------------------

void Routine_09500(){
    // 09500 IF B(2)>0 THEN 9700
    if(B_int_arr[(int)2]>0)goto Lbl_09700;
    // 09510 LET D=1
    D_int = 1;

  Lbl_09520:
    // 09520 PRINT"DO YOU WANT "N$(16+F-10*T)" TO THROW TO THE PLATE";
    b2c_fprintf(stdout,"DO YOU WANT %s TO THROW TO THE PLATE",TeamPlayerName[(int)16+F_int-10*T_int]); 
    // 09530 INPUT T$
    // Start of Basic INPUT statement 09530
    printf(" ? ");
    char inpbuf_09530[100];
    if(fgets(inpbuf_09530,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_09530=strtok(inpbuf_09530," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_09530==nullptr){
            T_str = "";
        }else{
            T_str = ps_09530;
        };
    }; // End of Basic INPUT statement 09530
    // 09540 IF T$="Y" THEN 9580
    if(strcmp(T_str,"Y")==0)goto Lbl_09580;
    // 09550 IF T$="N" THEN 9850
    if(strcmp(T_str,"N")==0)goto Lbl_09850;
    // 09560 PRINT"CHANCE TO SCORE="C
    b2c_fprintf(stdout,"CHANCE TO SCORE= %f ",C_flt); b2c_fprintf(stdout,"\n");
    // 09570 GOTO 9520
    goto Lbl_09520;

  Lbl_09580:
    // 09580 PRINT"DO YOU WANT "N$(B(1))" TO BREAK FOR SECOND";
    b2c_fprintf(stdout,"DO YOU WANT %s TO BREAK FOR SECOND",TeamPlayerName[(int)B_int_arr[(int)1]]); 
    // 09590 INPUT T$
    // Start of Basic INPUT statement 09590
    printf(" ? ");
    char inpbuf_09590[100];
    if(fgets(inpbuf_09590,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_09590=strtok(inpbuf_09590," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_09590==nullptr){
            T_str = "";
        }else{
            T_str = ps_09590;
        };
    }; // End of Basic INPUT statement 09590
    // 09600 IF T$="Y" THEN 9650
    if(strcmp(T_str,"Y")==0)goto Lbl_09650;
    // 09610 IF T$="N" THEN 9700
    if(strcmp(T_str,"N")==0)goto Lbl_09700;
    // 09620 PRINT".3 CHANCE TO BE OUT AND .15 CHANCE TO BE FORCED BACK TO FIRST,"
    b2c_fprintf(stdout,".3 CHANCE TO BE OUT AND .15 CHANCE TO BE FORCED BACK TO FIRST,"); b2c_fprintf(stdout,"\n");
    // 09630 PRINT"UNLESS BALL GOES THROUGH TO PLATE"
    b2c_fprintf(stdout,"UNLESS BALL GOES THROUGH TO PLATE"); b2c_fprintf(stdout,"\n");
    // 09640 GOTO 9580
    goto Lbl_09580;

  Lbl_09650:
    // 09650 PRINT"DO YOU WANT THE THROW CUT OFF";
    b2c_fprintf(stdout,"DO YOU WANT THE THROW CUT OFF"); 
    // 09660 INPUT T$
    // Start of Basic INPUT statement 09660
    printf(" ? ");
    char inpbuf_09660[100];
    if(fgets(inpbuf_09660,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_09660=strtok(inpbuf_09660," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_09660==nullptr){
            T_str = "";
        }else{
            T_str = ps_09660;
        };
    }; // End of Basic INPUT statement 09660
    // 09670 IF T$="Y" THEN 9730
    if(strcmp(T_str,"Y")==0)goto Lbl_09730;
    // 09680 LET I=1
    i = 1;
    // 09690 GOSUB 9150
    Routine_09150();

  Lbl_09700:
    // 09700 LET I=3
    i = 3;
    // 09710 GOSUB 9420
    Routine_09420();
    // 09720 GOTO 9870 (Pseudo Goto)
    goto Lbl_09870;

  Lbl_09730:
    // 09730 LET I=3
    i = 3;
    // 09740 GOSUB 9150
    Routine_09150();
    // 09750 ON RND/.55+16/11 GOTO 9760,9800,9830
    switch((int)(RND()/0.55+16/11)){
        case 1: goto Lbl_09760;
        case 2: goto Lbl_09800;
        case 3: goto Lbl_09830;
        default: break; 
    };

  Lbl_09760:
    // 09760 PRINT"OUT AT SECOND"
    b2c_fprintf(stdout,"OUT AT SECOND"); b2c_fprintf(stdout,"\n");
    // 09770 LET O1=1
    O1_int = 1;
    // 09780 LET B(1)=0
    B_int_arr[(int)1] = 0;
    // 09790 GOTO 9870 (Pseudo Goto)
    goto Lbl_09870;

  Lbl_09800:
    // 09800 LET I=1
    i = 1;
    // 09810 GOSUB 9150
    Routine_09150();
    // 09820 GOTO 9870 (Pseudo Goto)
    goto Lbl_09870;

  Lbl_09830:
    // 09830 PRINT N$(B(1))" BLUFFS AND GOES BACK TO FIRST"
    b2c_fprintf(stdout,"%s BLUFFS AND GOES BACK TO FIRST",TeamPlayerName[(int)B_int_arr[(int)1]]); b2c_fprintf(stdout,"\n");
    // 09840 GOTO 9870 (Pseudo Goto)
    goto Lbl_09870;

  Lbl_09850:
    // 09850 LET I=3
    i = 3;
    // 09860 GOSUB 9150
    Routine_09150();

  Lbl_09870:
    // 09870 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT "BASIC LIBRARY--'BASEBL'--18-JUL-70"
    b2c_fprintf(stdout,"BASIC LIBRARY--'BASEBL'--18-JUL-70"); b2c_fprintf(stdout,"\n");
    // 01010 '  *  *  *  *  *  *  *  MAIN PROGRAM  *  *  *  *  *  *  *  *  *  *
    // 01020 '
    // 01030 RANDOM
    RANDOMIZE();
    // 01040 FOR I=0 TO 19
    for(i=0;i<=19;i++){
        // 01050 READ N$(I)
        TeamPlayerName[(int)i] = Get_Data_String();
        // 01060 FORJ=1 TO 8
        for(j=1;j<=8;j++){
            // 01070 READ S(I,J)
            S_int_arr[(int)i][(int)j] = Get_Data_Int();
            // 01080 NEXT J
            int dummy_1080=0; // Ignore this line.
        }; // End-For(j)
        // 01090 NEXT I
        int dummy_1090=0; // Ignore this line.
    }; // End-For(i)
    // 01100 FOR I=1 TO 24
    for(i=1;i<=24;i++){
        // 01110 FOR J=0 TO 4
        for(j=0;j<=4;j++){
            // 01120 READ E(I,J)
            E_int_arr[(int)i][(int)j] = Get_Data_Int();
            // 01130 NEXT J
            int dummy_1130=0; // Ignore this line.
        }; // End-For(j)
        // 01140 NEXT I
        int dummy_1140=0; // Ignore this line.
    }; // End-For(i)
    // 01150 FOR I=1 TO 30
    for(i=1;i<=30;i++){
        // 01160 FOR J=0 TO 4
        for(j=0;j<=4;j++){
            // 01170 READ A(I,J)
            A_int_arr[(int)i][(int)j] = Get_Data_Int();
            // 01180 NEXT J
            int dummy_1180=0; // Ignore this line.
        }; // End-For(j)
        // 01190 NEXT I
        int dummy_1190=0; // Ignore this line.
    }; // End-For(i)
    // 01200 FOR I=1 TO 11
    for(i=1;i<=11;i++){
        // 01210 FOR J=1 TO 6
        for(j=1;j<=6;j++){
            // 01220 READ Q(I,J)
            Q_int_arr[(int)i][(int)j] = Get_Data_Int();
            // 01230 NEXT J
            int dummy_1230=0; // Ignore this line.
        }; // End-For(j)
        // 01240 NEXT I
        int dummy_1240=0; // Ignore this line.
    }; // End-For(i)
    // 01250 FOR I=1 TO 30
    for(i=1;i<=30;i++){
        // 01260 FOR J=0 TO 2
        for(j=0;j<=2;j++){
            // 01270 READ D(I,J)
            D_int_arr[(int)i][(int)j] = Get_Data_Int();
            // 01280 NEXT J
            int dummy_1280=0; // Ignore this line.
        }; // End-For(j)
        // 01290 NEXT I
        int dummy_1290=0; // Ignore this line.
    }; // End-For(i)
    // 01300 DIM S(19,8),E(24,4),A(30,4),D(30,2),Q(11,6),N$(19)
    // 01310 DATA "RED SOX",.02,.071,.303,.072,0,.004,.993,0
    // 01320 DATA "LONBORG",0,.013,.045,.128,0,0,.95,9
    // 01330 DATA "HOWARD",.013,.013,.039,.176,0,0,.946,8
    // 01340 DATA "SCOTT",.032,.046,.084,.301,1,0,.936,4
    // 01350 DATA "ANDREWS",.015,.015,.055,.259,1,0,.966,2
    // 01360 DATA "ADAIR",.008,.01,.052,.259,0,0,.975,1
    // 01370 DATA "PETROCELLI",.035,.04,.091,.267,0,0,.954,6
    // 01380 DATA "YASTRZEMSKI",.072,.08,.13,.309,1,1,.985,3
    // 01390 DATA "REGGIE SMITH",.029,.04,.082,.25,2,2,.952,7
    // 01400 DATA "HARRELSON",.036,.039,.085,.252,2,0,.917,5
    // 01410 DATA "CARDINALS",.024,.057,.274,-.002,0,.004,.996,0
    // 01420 DATA "GIBSON",.01,.01,.048,.18,1,0,.958,9
    // 01430 DATA "MCCARVER",.029,.035,.086,.295,1,1,.973,5
    // 01440 DATA "CEPEDA",.046,.046,.111,.330,1,0,.908,4
    // 01450 DATA "JAVIER",.028,.034,.067,.288,1,0,.981,6
    // 01460 DATA "SHANNON",.027,.033,.071,.244,0,0,.904,7
    // 01470 DATA "MAXVILL",.002,.011,.042,.225,0,0,.967,8
    // 01480 DATA "BROCK",.029,.046,.094,.291,3,1,.936,1
    // 01490 DATA "FLOOD",.008,.01,.055,.324,0,0,1,2
    // 01500 DATA "MARIS",.023,.038,.082,.265,0,1,.989,3
    // 01510 DATA .17,.21,.24,.27,.3,.24,.29,.33,.37,.4,.17,.21,.24,.27,.3
    // 01520 DATA .67,.71,.75,.78,.81,.73,.79,.84,.89,.94,.67,.71,.75,.78,.81
    // 01530 DATA .15,.19,.22,.25,.27,.6,.65,.7,.74,.78,.15,.19,.22,.25,.27
    // 01540 DATA .85,1,1,1,1,.95,1,1,1,1,.85,1,1,1,1
    // 01550 DATA 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
    // 01560 DATA 0,0,0,0,0,0,0,0,0,.1,.1,.17,.23,.29,.35
    // 01570 DATA 0,0,0,0,0,.3,.39,.47,.53,.58,.69,.8,.88,.92,.95
    // 01580 DATA .4,.49,.57,.65,.72,.81,.9,.96,1,1,1,1,1,1,1
    // 01590 DATA 0,0,0,0,0,0,0,0,0,0,0,0,0,.05,.1
    // 01600 DATA 0,0,0,0,0,0,0,.05,.1,.14,.38,.43,.48,.52,.56,.4,.48,.55,.62
    // 01610 DATA .68,.58,.67,.75,.82,.89,1,1,1,1,1,.05,.1,.15,.2,.3,.1,.15,.2
    // 01620 DATA .25,.35,.05,.1,.15,.2,.3,.72,.79,.85,.9,.94,1,1,1,1,1,.72,.79
    // 01630 DATA .85,.9,.94,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
    // 01640 DATA .63,.75,.85,.9,.93,.48,.59,.67,.72,.76,.32,.42,.48,.53,.58
    // 01650 DATA .14,.23,.28,.33,.37,.51,.58,.62,.66,.7,.27,.36,.43,.49,.55
    // 01660 DATA .1,.17,.24,.31,.37,0,.02,.05,.09,.16,.14,.21,.28,.33,.38
    // 01670 DATA .08,.11,.14,.17,.2,.02,.04,.06,.08,.09,0,0,0,0,0
    // 01680 DATA 1,1,.9,1,.75,1,1,1,.2,.4,1,1,1,1,1,.8,1,.8,.8,0,.6,.75,.35
    // 01690 DATA .75,.65,0,.35,.55,.2,.55,.6,0,.25,.35,.1,.35,.1,0,.05,.05
    // 01700 DATA .2,.1,.4,0,.3,.15,.2,.15
    // 01710 DATA .7,0,.8,.3,.1,.15,.45,0,.5,.55,.35,.45,.7,0,.1,.15,.7,.35
    // 01720 DATA .033,.033,2,.045,.042,3,.054,.054,5,.0564,.0576,7,.06,.06,9
    // 01730 DATA .07,.075,5,.1,.11,6,.135,.14,4,.15,.15,3,.158,.158,1,.16,.16
    // 01740 DATA 2,.2775,.207,5,.442,.301,6,.536,.4655,4,.583,.583,3,.63,.63,1
    // 01750 DATA .64,.632,5,.662,.6352,6,.6652,.6572,4,.6672,.6672,3,.67,.67,1
    // 01760 DATA .702,.69,7,.73,.718,8,.75,.75,9,.8102,.778,7,.862,.8298,8
    // 01770 DATA .89,.89,9,.9395,.9065,7,.9835,.9505,8,1,1,9
    // 01780 LET T=O2=1
    O2_int = T_int = 1;
    // 01790 PRINT"THE WORLD SERIES-- FROM ST. LOUIS, MO."
    b2c_fprintf(stdout,"THE WORLD SERIES-- FROM ST. LOUIS, MO."); b2c_fprintf(stdout,"\n");
    // 01800 PRINT"QUESTIONS ASKING 'WHICH BASE' SHOULD BE ANSWERED WITH A DIGIT"
    b2c_fprintf(stdout,"QUESTIONS ASKING 'WHICH BASE' SHOULD BE ANSWERED WITH A DIGIT"); b2c_fprintf(stdout,"\n");
    // 01810 PRINT"THOSE ASKING ABOUT ADVANCEMENT OF RUNNERS WILL PRINT"
    b2c_fprintf(stdout,"THOSE ASKING ABOUT ADVANCEMENT OF RUNNERS WILL PRINT"); b2c_fprintf(stdout,"\n");
    // 01820 PRINT"PROBABILITIES IF YOU TYPE 'PR'"
    b2c_fprintf(stdout,"PROBABILITIES IF YOU TYPE 'PR'"); b2c_fprintf(stdout,"\n");
    // 01830 LET T4=W2=9
    W2_int = T4_int = 9;
    // 01840 LET H1=O1=O3=T3=S(10,8)=S(0,8)=I2=W1=W3=0
    W3_int = W1_int = I2_int = S_int_arr[(int)0][(int)8] = S_int_arr[(int)10][(int)8] = T3_int = O3_int = O1_int = H1_int = 0;

  Lbl_01850:
    // 01850 IF T=0 THEN 1880
    if(T_int==0)goto Lbl_01880;
    // 01860 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01870 LET I2=I2+1
    I2_int = I2_int+1;

  Lbl_01880:
    // 01880 LET T=1-T
    T_int = 1-T_int;
    // 01890 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01900 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01910 PRINT"INNING"I2"FOR "N$(10*T)
    b2c_fprintf(stdout,"INNING %d FOR %s",I2_int,TeamPlayerName[(int)10*T_int]); b2c_fprintf(stdout,"\n");
    // 01920 LET T5=T4
    T5_int = T4_int;
    // 01930 LET T4=W2
    T4_int = W2_int;
    // 01940 LET W2=T5
    W2_int = T5_int;
    // 01950 LET O=L(1)=L(2)=L(3)=B(1)=B(2)=B(3)=M1=P5=0
    P5_int = M1_int = B_int_arr[(int)3] = B_int_arr[(int)2] = B_int_arr[(int)1] = L_int_arr[(int)3] = L_int_arr[(int)2] = L_int_arr[(int)1] = O_int = 0;

  Lbl_01960:
    // 01960 LET I1=T3=F1=B(4)=B(5)=B(6)=L(4)=L(5)=L(6)=L(7)=L(8)=L(9)=0
    L_int_arr[(int)9] = L_int_arr[(int)8] = L_int_arr[(int)7] = L_int_arr[(int)6] = L_int_arr[(int)5] = L_int_arr[(int)4] = B_int_arr[(int)6] = B_int_arr[(int)5] = B_int_arr[(int)4] = F1_int = T3_int = I1_int = 0;
    // 01970 LET T7=W6=0
    W6_int = T7_int = 0;
    // 01980 IF P5=0 THEN 2010
    if(P5_int==0)goto Lbl_02010;
    // 01990 LET P5=0
    P5_int = 0;
    // 02000 GOSUB 9000
    Routine_09000();

  Lbl_02010:
    // 02010 IF M1=0 THEN 2080
    if(M1_int==0)goto Lbl_02080;
    // 02020 LET D=M1
    D_int = M1_int;
    // 02030 GOSUB 9100
    Routine_09100();
    // 02040 IF O3=1 THEN 2070
    if(O3_int==1)goto Lbl_02070;
    // 02050 PRINT N$(B(0))" ON BASE"M1
    b2c_fprintf(stdout,"%s ON BASE %d ",TeamPlayerName[(int)B_int_arr[(int)0]],M1_int); b2c_fprintf(stdout,"\n");
    // 02060 LET B(M1)=B(0)
    B_int_arr[(int)M1_int] = B_int_arr[(int)0];

  Lbl_02070:
    // 02070 LET M1=0
    M1_int = 0;

  Lbl_02080:
    // 02080 LET O3=0
    O3_int = 0;
    // 02090 IF B(1)+B(2)+B(3)=0 THEN 2140
    if(B_int_arr[(int)1]+B_int_arr[(int)2]+B_int_arr[(int)3]==0)goto Lbl_02140;
    // 02100 PRINT"ANY LEADING OR STEALING";
    b2c_fprintf(stdout,"ANY LEADING OR STEALING"); 
    // 02110 INPUT T$
    // Start of Basic INPUT statement 02110
    printf(" ? ");
    char inpbuf_02110[100];
    if(fgets(inpbuf_02110,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_02110=strtok(inpbuf_02110," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_02110==nullptr){
            T_str = "";
        }else{
            T_str = ps_02110;
        };
    }; // End of Basic INPUT statement 02110
    // 02120 IF T$="N" THEN 2140
    if(strcmp(T_str,"N")==0)goto Lbl_02140;
    // 02130 GOTO 6720
    goto Lbl_06720;

  Lbl_02140:
    // 02140 IF W1=0 THEN 2170
    if(W1_int==0)goto Lbl_02170;
    // 02150 LET S(B(0),6)=2
    S_int_arr[(int)B_int_arr[(int)0]][(int)6] = 2;
    // 02160 LET W1=0
    W1_int = 0;

  Lbl_02170:
    // 02170 IF W3=T+1 THEN 2200
    if(W3_int==T_int+1)goto Lbl_02200;
    // 02180 LET W2=W2+1
    W2_int = W2_int+1;
    // 02190 GOTO 2210
    goto Lbl_02210;

  Lbl_02200:
    // 02200 LET W3=0
    W3_int = 0;

  Lbl_02210:
    // 02210 LET W2=W2-9*INT((W2-1)/9)
    W2_int = W2_int-9*INT((W2_int-1)/9);
    // 02220 FOR I=1 TO 9
    for(i=1;i<=9;i++){
        // 02230 IF S(10*T+I,8)=W2 THEN 2260
        if(S_int_arr[(int)10*T_int+i][(int)8]==W2_int)goto Lbl_02260;
        // 02240 NEXT I
        int dummy_2240=0; // Ignore this line.
    }; // End-For(i)
    // 02250 PRINT "ERROR IN BAT POS."
    b2c_fprintf(stdout,"ERROR IN BAT POS."); b2c_fprintf(stdout,"\n");

  Lbl_02260:
    // 02260 LET B(0)=10*T+I
    B_int_arr[(int)0] = 10*T_int+i;
    // 02270 GOTO 7640
    goto Lbl_07640;

  Lbl_02280:
    // 02280 IF S(B(0),6)<2 THEN 2310
    if(S_int_arr[(int)B_int_arr[(int)0]][(int)6]<2)goto Lbl_02310;
    // 02290 LET S(B(0),6)=1-S(10*(1-T),5)
    S_int_arr[(int)B_int_arr[(int)0]][(int)6] = 1-S_int_arr[(int)10*(1-T_int)][(int)5];
    // 02300 LET W1=1
    W1_int = 1;

  Lbl_02310:
    // 02310 IF RND>S(10*(1-T),1) THEN 2360
    if(RND()>S_int_arr[(int)10*(1-T_int)][(int)1])goto Lbl_02360;
    // 02320 PRINT"WILD PITCH"
    b2c_fprintf(stdout,"WILD PITCH"); b2c_fprintf(stdout,"\n");
    // 02330 LET D=1
    D_int = 1;
    // 02340 GOSUB 9100
    Routine_09100();
    // 02350 GOTO 2310
    goto Lbl_02310;

  Lbl_02360:
    // 02360 IF RND>S(10*(1-T),6) THEN 2410
    if(RND()>S_int_arr[(int)10*(1-T_int)][(int)6])goto Lbl_02410;
    // 02370 PRINT "PASSED BALL"
    b2c_fprintf(stdout,"PASSED BALL"); b2c_fprintf(stdout,"\n");
    // 02380 LET D=1
    D_int = 1;
    // 02390 GOSUB 9100
    Routine_09100();
    // 02400 GO TO 2360
    goto Lbl_02360;

  Lbl_02410:
    // 02410 IF B(3)=0THEN 2460
    if(B_int_arr[(int)3]==0)goto Lbl_02460;
    // 02420 PRINT"INFIELD IN";
    b2c_fprintf(stdout,"INFIELD IN"); 
    // 02430 INPUT T$
    // Start of Basic INPUT statement 02430
    printf(" ? ");
    char inpbuf_02430[100];
    if(fgets(inpbuf_02430,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_02430=strtok(inpbuf_02430," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_02430==nullptr){
            T_str = "";
        }else{
            T_str = ps_02430;
        };
    }; // End of Basic INPUT statement 02430
    // 02440 IF T$<>"Y" THEN 2460
    if(strcmp(T_str,"Y")!=0)goto Lbl_02460;
    // 02450 LET I1=1
    I1_int = 1;

  Lbl_02460:
    // 02460 IF RND>S(10*(1-T),2) THEN 2600
    if(RND()>S_int_arr[(int)10*(1-T_int)][(int)2])goto Lbl_02600;

  Lbl_02470:
    // 02470 PRINT N$(B(0))" WALKS"
    b2c_fprintf(stdout,"%s WALKS",TeamPlayerName[(int)B_int_arr[(int)0]]); b2c_fprintf(stdout,"\n");
    // 02480 LET D=1
    D_int = 1;
    // 02490 IF B(1)=0 THEN 2580
    if(B_int_arr[(int)1]==0)goto Lbl_02580;
    // 02500 IF B(2)=0 THEN 2560
    if(B_int_arr[(int)2]==0)goto Lbl_02560;
    // 02510 IF B(3)=0 THEN 2540
    if(B_int_arr[(int)3]==0)goto Lbl_02540;
    // 02520 LET I=3
    i = 3;
    // 02530 GOSUB 9150
    Routine_09150();

  Lbl_02540:
    // 02540 LET I=2
    i = 2;
    // 02550 GOSUB 9150
    Routine_09150();

  Lbl_02560:
    // 02560 LET I=1
    i = 1;
    // 02570 GOSUB 9150
    Routine_09150();

  Lbl_02580:
    // 02580 LET B(1)=B(0)
    B_int_arr[(int)1] = B_int_arr[(int)0];
    // 02590 GOTO 1960
    goto Lbl_01960;

  Lbl_02600:
    // 02600 LET A=S(10*(1-T),4)
    A_flt = S_int_arr[(int)10*(1-T_int)][(int)4];
    // 02610 IF A>0 THEN 2630
    if(A_flt>0)goto Lbl_02630;
    // 02620 LET A=2*A
    A_flt = 2*A_flt;

  Lbl_02630:
    // 02630 LET A=A+.02-.04*ABS(S(10*(1-T),5)-S(B(0),6))
    A_flt = A_flt+0.02-0.04*ABS(S_int_arr[(int)10*(1-T_int)][(int)5]-S_int_arr[(int)B_int_arr[(int)0]][(int)6]);
    // 02640 LET X1=RND
    X1_int = RND();
    // 02650 LET X2=RND
    X2_int = RND();
    // 02660 IF ABS(ABS(A)+3*A)<(4*RND) THEN 2690
    if(ABS(ABS(A_flt)+3*A_flt)<(4*RND()))goto Lbl_02690;
    // 02670 IF A>0 THEN 4210
    if(A_flt>0)goto Lbl_04210;
    // 02680 LET F1=1
    F1_int = 1;

  Lbl_02690:
    // 02690 LET X=RND
    X_int = RND();
    // 02700 IF X>S(B(0),1) THEN 2920
    if(X_int>S_int_arr[(int)B_int_arr[(int)0]][(int)1])goto Lbl_02920;
    // 02710 PRINT N$(B(0))" HITS A HOME RUN";
    b2c_fprintf(stdout,"%s HITS A HOME RUN",TeamPlayerName[(int)B_int_arr[(int)0]]); 
    // 02720 LET D=4
    D_int = 4;
    // 02730 IF X1>.01 THEN 2790
    if(X1_int>0.01)goto Lbl_02790;
    // 02740 PRINT", INSIDE THE PARK"
    b2c_fprintf(stdout,", INSIDE THE PARK"); b2c_fprintf(stdout,"\n");
    // 02750 GOSUB 9100
    Routine_09100();

  Lbl_02760:
    // 02760 PRINT N$(B(0))" SCORES"
    b2c_fprintf(stdout,"%s SCORES",TeamPlayerName[(int)B_int_arr[(int)0]]); b2c_fprintf(stdout,"\n");
    // 02770 GOSUB 9000
    Routine_09000();
    // 02780 GOTO 1960
    goto Lbl_01960;

  Lbl_02790:
    // 02790 IF X1>.22 THEN 2850
    if(X1_int>0.22)goto Lbl_02850;
    // 02800 PRINT" TO CENTER FIELD"
    b2c_fprintf(stdout," TO CENTER FIELD"); b2c_fprintf(stdout,"\n");

  Lbl_02810:
    // 02810 LET H1=1
    H1_int = 1;
    // 02820 GOSUB 9100
    Routine_09100();
    // 02830 LET H1=0
    H1_int = 0;
    // 02840 GOTO 2760
    goto Lbl_02760;

  Lbl_02850:
    // 02850 IF X1>.42 THEN 2880
    if(X1_int>0.42)goto Lbl_02880;

  Lbl_02860:
    // 02860 PRINT" TO LEFT FIELD"
    b2c_fprintf(stdout," TO LEFT FIELD"); b2c_fprintf(stdout,"\n");
    // 02870 GOTO 2810
    goto Lbl_02810;

  Lbl_02880:
    // 02880 IF X1>.8 THEN 2900
    if(X1_int>0.8)goto Lbl_02900;
    // 02890 IF S(B(0),6)=0 THEN 2860
    if(S_int_arr[(int)B_int_arr[(int)0]][(int)6]==0)goto Lbl_02860;

  Lbl_02900:
    // 02900 PRINT" TO RIGHT FIELD"
    b2c_fprintf(stdout," TO RIGHT FIELD"); b2c_fprintf(stdout,"\n");
    // 02910 GOTO 2810
    goto Lbl_02810;

  Lbl_02920:
    // 02920 IF X>S(B(0),2) THEN 3120
    if(X_int>S_int_arr[(int)B_int_arr[(int)0]][(int)2])goto Lbl_03120;
    // 02930 PRINT N$(B(0))" TRIPLES ";
    b2c_fprintf(stdout,"%s TRIPLES ",TeamPlayerName[(int)B_int_arr[(int)0]]); 
    // 02940 IF X1<.6 THEN 3030
    if(X1_int<0.6)goto Lbl_03030;

  Lbl_02950:
    // 02950 PRINT"TO RIGHT FIELD"
    b2c_fprintf(stdout,"TO RIGHT FIELD"); b2c_fprintf(stdout,"\n");

  Lbl_02960:
    // 02960 LET D=3
    D_int = 3;
    // 02970 GOSUB 9100
    Routine_09100();
    // 02980 IF X>S(B(0),1)+.0002 THEN 3010
    if(X_int>S_int_arr[(int)B_int_arr[(int)0]][(int)1]+0.0002)goto Lbl_03010;
    // 02990 PRINT N$(B(0))" IS OUT TRYING FOR A HOME RUN"
    b2c_fprintf(stdout,"%s IS OUT TRYING FOR A HOME RUN",TeamPlayerName[(int)B_int_arr[(int)0]]); b2c_fprintf(stdout,"\n");
    // 03000 GOTO 8840
    goto Lbl_08840;

  Lbl_03010:
    // 03010 LET B(3)=B(0)
    B_int_arr[(int)3] = B_int_arr[(int)0];
    // 03020 GOTO 1960
    goto Lbl_01960;

  Lbl_03030:
    // 03030 IF X1<.35 THEN 3060
    if(X1_int<0.35)goto Lbl_03060;

  Lbl_03040:
    // 03040 PRINT"TO CENTER FIELD"
    b2c_fprintf(stdout,"TO CENTER FIELD"); b2c_fprintf(stdout,"\n");
    // 03050 GOTO 2960
    goto Lbl_02960;

  Lbl_03060:
    // 03060 IF X1>.05 THEN 3090
    if(X1_int>0.05)goto Lbl_03090;

  Lbl_03070:
    // 03070 PRINT"TO LEFT FIELD"
    b2c_fprintf(stdout,"TO LEFT FIELD"); b2c_fprintf(stdout,"\n");
    // 03080 GOTO 2960
    goto Lbl_02960;

  Lbl_03090:
    // 03090 IF S(B(0),6)=1 THEN 2950
    if(S_int_arr[(int)B_int_arr[(int)0]][(int)6]==1)goto Lbl_02950;
    // 03100 IF X1>.15 THEN 3040
    if(X1_int>0.15)goto Lbl_03040;
    // 03110 GOTO 3070
    goto Lbl_03070;

  Lbl_03120:
    // 03120 IF X>S(B(0),3) THEN 3420
    if(X_int>S_int_arr[(int)B_int_arr[(int)0]][(int)3])goto Lbl_03420;
    // 03130 LET D=2
    D_int = 2;
    // 03140 PRINT N$(B(0))" DOUBLES ";
    b2c_fprintf(stdout,"%s DOUBLES ",TeamPlayerName[(int)B_int_arr[(int)0]]); 
    // 03150 IF X1>.56 THEN 3180
    if(X1_int>0.56)goto Lbl_03180;
    // 03160 PRINT"IN THE HOLE TO ";
    b2c_fprintf(stdout,"IN THE HOLE TO "); 
    // 03170 GOTO 3190
    goto Lbl_03190;

  Lbl_03180:
    // 03180 PRINT"OFF THE WALL IN ";
    b2c_fprintf(stdout,"OFF THE WALL IN "); 

  Lbl_03190:
    // 03190 ON X2/.35+10/7+4*S(B(0),6) GOTO 3200,3200,3240,3270,3270,3270,3240,3200
    switch((int)(X2_int/0.35+10/7+4*S_int_arr[(int)B_int_arr[(int)0]][(int)6])){
        case 1: goto Lbl_03200;
        case 2: goto Lbl_03200;
        case 3: goto Lbl_03240;
        case 4: goto Lbl_03270;
        case 5: goto Lbl_03270;
        case 6: goto Lbl_03270;
        case 7: goto Lbl_03240;
        case 8: goto Lbl_03200;
        default: break; 
    };

  Lbl_03200:
    // 03200 PRINT"LEFT FIELD"
    b2c_fprintf(stdout,"LEFT FIELD"); b2c_fprintf(stdout,"\n");
    // 03210 LET F=1
    F_int = 1;
    // 03220 RANDOM
    RANDOMIZE();
    // 03230 GOTO 3290
    goto Lbl_03290;

  Lbl_03240:
    // 03240 PRINT"CENTER FIELD"
    b2c_fprintf(stdout,"CENTER FIELD"); b2c_fprintf(stdout,"\n");
    // 03250 LET F=2
    F_int = 2;
    // 03260 GOTO 3290
    goto Lbl_03290;

  Lbl_03270:
    // 03270 PRINT"RIGHT FIELD"
    b2c_fprintf(stdout,"RIGHT FIELD"); b2c_fprintf(stdout,"\n");
    // 03280 LET F=3
    F_int = 3;

  Lbl_03290:
    // 03290 GOSUB 9100
    Routine_09100();
    // 03300 IF X>S(B(0),2)+.0004 THEN 3340
    if(X_int>S_int_arr[(int)B_int_arr[(int)0]][(int)2]+0.0004)goto Lbl_03340;
    // 03310 PRINT N$(B(0))" IS OUT TRYING FOR A TRIPLE"
    b2c_fprintf(stdout,"%s IS OUT TRYING FOR A TRIPLE",TeamPlayerName[(int)B_int_arr[(int)0]]); b2c_fprintf(stdout,"\n");
    // 03320 GOSUB 9100
    Routine_09100();
    // 03330 GOTO 8840
    goto Lbl_08840;

  Lbl_03340:
    // 03340 LET B(2)=B(0)
    B_int_arr[(int)2] = B_int_arr[(int)0];
    // 03350 IF B(3)=0 THEN 1960
    if(B_int_arr[(int)3]==0)goto Lbl_01960;
    // 03360 LET C=E(3*INT(X1+.44)+F,S(B(3),5))
    C_flt = E_int_arr[(int)3*INT(X1_int+0.44)+F_int][(int)S_int_arr[(int)B_int_arr[(int)3]][(int)5]];
    // 03370 LET I=3
    i = 3;
    // 03380 PRINT "DO YOU WANT THE DOUBLE TO FURTHER";
    b2c_fprintf(stdout,"DO YOU WANT THE DOUBLE TO FURTHER"); 
    // 03390 GOSUB 9280
    Routine_09280();
    // 03400 IF O1=1 THEN 8840
    if(O1_int==1)goto Lbl_08840;
    // 03410 GOTO 1960
    goto Lbl_01960;

  Lbl_03420:
    // 03420 IF X>S(B(0),4) THEN 4190
    if(X_int>S_int_arr[(int)B_int_arr[(int)0]][(int)4])goto Lbl_04190;

  Lbl_03430:
    // 03430 LET D=1
    D_int = 1;
    // 03440 PRINT N$(B(0))" SINGLES ";
    b2c_fprintf(stdout,"%s SINGLES ",TeamPlayerName[(int)B_int_arr[(int)0]]); 
    // 03450 IF X1<.08 THEN 3980
    if(X1_int<0.08)goto Lbl_03980;
    // 03460 ON X1/.37+41/37 GOTO 3470,3500,3530
    switch((int)(X1_int/0.37+41/37)){
        case 1: goto Lbl_03470;
        case 2: goto Lbl_03500;
        case 3: goto Lbl_03530;
        default: break; 
    };

  Lbl_03470:
    // 03470 PRINT "SHARPLY ";
    b2c_fprintf(stdout,"SHARPLY "); 
    // 03480 LET F2=1
    F2_int = 1;
    // 03490 GOTO 3550
    goto Lbl_03550;

  Lbl_03500:
    // 03500 PRINT "ON THE GROUND ";
    b2c_fprintf(stdout,"ON THE GROUND "); 
    // 03510 LET F2=2
    F2_int = 2;
    // 03520 GOTO 3550
    goto Lbl_03550;

  Lbl_03530:
    // 03530 PRINT "DEEP ";
    b2c_fprintf(stdout,"DEEP "); 
    // 03540 LET F2=3
    F2_int = 3;

  Lbl_03550:
    // 03550 ON X2/.35+11/7+4*S(B(0),6) GOTO 3560,3560,3590,3620,3620,3620,3590,3560
    switch((int)(X2_int/0.35+11/7+4*S_int_arr[(int)B_int_arr[(int)0]][(int)6])){
        case 1: goto Lbl_03560;
        case 2: goto Lbl_03560;
        case 3: goto Lbl_03590;
        case 4: goto Lbl_03620;
        case 5: goto Lbl_03620;
        case 6: goto Lbl_03620;
        case 7: goto Lbl_03590;
        case 8: goto Lbl_03560;
        default: break; 
    };

  Lbl_03560:
    // 03560 PRINT"TO LEFT FIELD"
    b2c_fprintf(stdout,"TO LEFT FIELD"); b2c_fprintf(stdout,"\n");
    // 03570 LET F=1
    F_int = 1;
    // 03580 GOTO 3640
    goto Lbl_03640;

  Lbl_03590:
    // 03590 PRINT"TO CENTER FIELD"
    b2c_fprintf(stdout,"TO CENTER FIELD"); b2c_fprintf(stdout,"\n");
    // 03600 LET F=2
    F_int = 2;
    // 03610 GOTO 3640
    goto Lbl_03640;

  Lbl_03620:
    // 03620 PRINT"TO RIGHT FIELD"
    b2c_fprintf(stdout,"TO RIGHT FIELD"); b2c_fprintf(stdout,"\n");
    // 03630 LET F=3
    F_int = 3;

  Lbl_03640:
    // 03640 GOSUB 9100
    Routine_09100();
    // 03650 IF X>S(B(0),3)+.001 THEN 3690
    if(X_int>S_int_arr[(int)B_int_arr[(int)0]][(int)3]+0.001)goto Lbl_03690;
    // 03660 PRINT N$(B(0))" IS OUT TRYING FOR A DOUBLE"
    b2c_fprintf(stdout,"%s IS OUT TRYING FOR A DOUBLE",TeamPlayerName[(int)B_int_arr[(int)0]]); b2c_fprintf(stdout,"\n");
    // 03670 GOSUB 9100
    Routine_09100();
    // 03680 GOTO 8840
    goto Lbl_08840;

  Lbl_03690:
    // 03690 LET B(1)=B(0)
    B_int_arr[(int)1] = B_int_arr[(int)0];
    // 03700 IF B(3)=0 THEN 3860
    if(B_int_arr[(int)3]==0)goto Lbl_03860;
    // 03710 LET C=E(3*(1+F2)+F,S(B(3),5))
    C_flt = E_int_arr[(int)3*(1+F2_int)+F_int][(int)S_int_arr[(int)B_int_arr[(int)3]][(int)5]];
    // 03720 LET I=3
    i = 3;
    // 03730 IF C<1 THEN 3770
    if(C_flt<1)goto Lbl_03770;
    // 03740 GOSUB 9420
    Routine_09420();
    // 03750 IF O1=1 THEN 8840
    if(O1_int==1)goto Lbl_08840;
    // 03760 GOTO 3860
    goto Lbl_03860;

  Lbl_03770:
    // 03770 PRINT"DO YOU WANT "N$(B(3))" TO SCORE";
    b2c_fprintf(stdout,"DO YOU WANT %s TO SCORE",TeamPlayerName[(int)B_int_arr[(int)3]]); 
    // 03780 INPUT T$
    // Start of Basic INPUT statement 03780
    printf(" ? ");
    char inpbuf_03780[100];
    if(fgets(inpbuf_03780,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_03780=strtok(inpbuf_03780," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_03780==nullptr){
            T_str = "";
        }else{
            T_str = ps_03780;
        };
    }; // End of Basic INPUT statement 03780
    // 03790 IF T$="Y" THEN 3830
    if(strcmp(T_str,"Y")==0)goto Lbl_03830;
    // 03800 IF T$="N" THEN 3860
    if(strcmp(T_str,"N")==0)goto Lbl_03860;
    // 03810 PRINT"CHANCE="C
    b2c_fprintf(stdout,"CHANCE= %f ",C_flt); b2c_fprintf(stdout,"\n");
    // 03820 GOTO 3770
    goto Lbl_03770;

  Lbl_03830:
    // 03830 GOSUB 9500
    Routine_09500();
    // 03840 IF O1=1 THEN 8840
    if(O1_int==1)goto Lbl_08840;
    // 03850 GOTO 1960
    goto Lbl_01960;

  Lbl_03860:
    // 03860 IF B(2)=0 THEN 1960
    if(B_int_arr[(int)2]==0)goto Lbl_01960;
    // 03870 LET C=E(3*(4+F2)+F,S(B(2),5))
    C_flt = E_int_arr[(int)3*(4+F2_int)+F_int][(int)S_int_arr[(int)B_int_arr[(int)2]][(int)5]];
    // 03880 LET I=2
    i = 2;
    // 03890 IF C<1 THEN 3930
    if(C_flt<1)goto Lbl_03930;
    // 03900 GOSUB 9420
    Routine_09420();
    // 03910 IF O1=1 THEN 8840
    if(O1_int==1)goto Lbl_08840;
    // 03920 GOTO 1960
    goto Lbl_01960;

  Lbl_03930:
    // 03930 IF C=0 THEN 1960
    if(C_flt==0)goto Lbl_01960;
    // 03940 PRINT "DO YOU WANT THE SINGLE TO FURTHER";
    b2c_fprintf(stdout,"DO YOU WANT THE SINGLE TO FURTHER"); 
    // 03950 GOSUB 9280
    Routine_09280();
    // 03960 IF O1=1 THEN 8840
    if(O1_int==1)goto Lbl_08840;
    // 03970 GOTO 1960
    goto Lbl_01960;

  Lbl_03980:
    // 03980 IF X2>.2 THEN 4000
    if(X2_int>0.2)goto Lbl_04000;
    // 03990 ON S(B(0),6)+1 GOTO 4050,4170
    switch((int)(S_int_arr[(int)B_int_arr[(int)0]][(int)6]+1)){
        case 1: goto Lbl_04050;
        case 2: goto Lbl_04170;
        default: break; 
    };

  Lbl_04000:
    // 04000 IF X2>.65 THEN 4020
    if(X2_int>0.65)goto Lbl_04020;
    // 04010 ON S(B(0),6)+1 GOTO 4130,4150
    switch((int)(S_int_arr[(int)B_int_arr[(int)0]][(int)6]+1)){
        case 1: goto Lbl_04130;
        case 2: goto Lbl_04150;
        default: break; 
    };

  Lbl_04020:
    // 04020 IF X2>.95 THEN 4040
    if(X2_int>0.95)goto Lbl_04040;
    // 04030 ON S(B(0),6)+1 GOTO 4150,4130
    switch((int)(S_int_arr[(int)B_int_arr[(int)0]][(int)6]+1)){
        case 1: goto Lbl_04150;
        case 2: goto Lbl_04130;
        default: break; 
    };

  Lbl_04040:
    // 04040 ON S(B(0),6)+1 GOTO 4170,4050
    switch((int)(S_int_arr[(int)B_int_arr[(int)0]][(int)6]+1)){
        case 1: goto Lbl_04170;
        case 2: goto Lbl_04050;
        default: break; 
    };

  Lbl_04050:
    // 04050 PRINT"TO THIRD BASE"
    b2c_fprintf(stdout,"TO THIRD BASE"); b2c_fprintf(stdout,"\n");
    // 04060 IF B(2)=0 THEN 4100
    if(B_int_arr[(int)2]==0)goto Lbl_04100;
    // 04070 IF B(1)>0 THEN 4100
    if(B_int_arr[(int)1]>0)goto Lbl_04100;
    // 04080 LET B(1)=B(2)
    B_int_arr[(int)1] = B_int_arr[(int)2];
    // 04090 LET B(2)=0
    B_int_arr[(int)2] = 0;

  Lbl_04100:
    // 04100 GOSUB 9100
    Routine_09100();
    // 04110 LET B(1)=B(0)
    B_int_arr[(int)1] = B_int_arr[(int)0];
    // 04120 GOTO 1960
    goto Lbl_01960;

  Lbl_04130:
    // 04130 PRINT"TO SHORTSTOP"
    b2c_fprintf(stdout,"TO SHORTSTOP"); b2c_fprintf(stdout,"\n");
    // 04140 GOTO 4100
    goto Lbl_04100;

  Lbl_04150:
    // 04150 PRINT"TO SECOND BASE"
    b2c_fprintf(stdout,"TO SECOND BASE"); b2c_fprintf(stdout,"\n");
    // 04160 GOTO 4100
    goto Lbl_04100;

  Lbl_04170:
    // 04170 PRINT"TO FIRST BASE"
    b2c_fprintf(stdout,"TO FIRST BASE"); b2c_fprintf(stdout,"\n");
    // 04180 GOTO 4100
    goto Lbl_04100;

  Lbl_04190:
    // 04190 IF F1=1 THEN 2690
    if(F1_int==1)goto Lbl_02690;
    // 04200 IF X<I1*(S(B(0),4)+.03) THEN 3430
    if(X_int<I1_int*(S_int_arr[(int)B_int_arr[(int)0]][(int)4]+0.03))goto Lbl_03430;

  Lbl_04210:
    // 04210 IF RND>S(10*(1-T),3) THEN 4320
    if(RND()>S_int_arr[(int)10*(1-T_int)][(int)3])goto Lbl_04320;
    // 04220 PRINT N$(B(0))" STRIKES OUT"
    b2c_fprintf(stdout,"%s STRIKES OUT",TeamPlayerName[(int)B_int_arr[(int)0]]); b2c_fprintf(stdout,"\n");
    // 04230 IF B(1)=0 THEN 4250
    if(B_int_arr[(int)1]==0)goto Lbl_04250;
    // 04240 IF O<2 THEN 8840
    if(O_int<2)goto Lbl_08840;

  Lbl_04250:
    // 04250 IF RND<S(10*(1-T),7) THEN 8840
    if(RND()<S_int_arr[(int)10*(1-T_int)][(int)7])goto Lbl_08840;
    // 04260 PRINT"CATCHER DROPS THE BALL--ERROR"
    b2c_fprintf(stdout,"CATCHER DROPS THE BALL--ERROR"); b2c_fprintf(stdout,"\n");

  Lbl_04270:
    // 04270 LET D=1
    D_int = 1;
    // 04280 GOSUB 9100
    Routine_09100();
    // 04290 LET B(1)=B(0)
    B_int_arr[(int)1] = B_int_arr[(int)0];
    // 04300 PRINT N$(B(0))" ON FIRST"
    b2c_fprintf(stdout,"%s ON FIRST",TeamPlayerName[(int)B_int_arr[(int)0]]); b2c_fprintf(stdout,"\n");
    // 04310 GOTO 1960
    goto Lbl_01960;

  Lbl_04320:
    // 04320 FOR J=1 TO 29
    for(j=1;j<=29;j++){
        // 04330 IF X1<D(J,S(B(0),6)) THEN 4360
        if(X1_int<D_int_arr[(int)j][(int)S_int_arr[(int)B_int_arr[(int)0]][(int)6]])goto Lbl_04360;
        // 04340 NEXT J
        int dummy_4340=0; // Ignore this line.
    }; // End-For(j)
    // 04350 LET J=30
    j = 30;

  Lbl_04360:
    // 04360 PRINT N$(B(0))" HITS A ";
    b2c_fprintf(stdout,"%s HITS A ",TeamPlayerName[(int)B_int_arr[(int)0]]); 
    // 04370 IF J>5 THEN 4400
    if(j>5)goto Lbl_04400;
    // 04380 PRINT"FOUL FLY TO ";
    b2c_fprintf(stdout,"FOUL FLY TO "); 
    // 04390 GOTO 4560
    goto Lbl_04560;

  Lbl_04400:
    // 04400 IF J>11 THEN 4430
    if(j>11)goto Lbl_04430;
    // 04410 PRINT"POP FLY TO ";
    b2c_fprintf(stdout,"POP FLY TO "); 
    // 04420 GOTO 4560
    goto Lbl_04560;

  Lbl_04430:
    // 04430 IF J>16 THEN 4460
    if(j>16)goto Lbl_04460;
    // 04440 PRINT "GROUND BALL TO ";
    b2c_fprintf(stdout,"GROUND BALL TO "); 
    // 04450 GOTO 4560
    goto Lbl_04560;

  Lbl_04460:
    // 04460 IF J>21 THEN 4490
    if(j>21)goto Lbl_04490;
    // 04470 PRINT"LINE DRIVE TO ";
    b2c_fprintf(stdout,"LINE DRIVE TO "); 
    // 04480 GOTO 4560
    goto Lbl_04560;

  Lbl_04490:
    // 04490 IF J>24 THEN 4520
    if(j>24)goto Lbl_04520;
    // 04500 PRINT"SHORT FLY TO ";
    b2c_fprintf(stdout,"SHORT FLY TO "); 
    // 04510 GO TO 4560
    goto Lbl_04560;

  Lbl_04520:
    // 04520 IF J>27 THEN 4550
    if(j>27)goto Lbl_04550;
    // 04530 PRINT"MEDIUM FLY TO ";
    b2c_fprintf(stdout,"MEDIUM FLY TO "); 
    // 04540 GOTO 4560
    goto Lbl_04560;

  Lbl_04550:
    // 04550 PRINT"LONG FLY TO ";
    b2c_fprintf(stdout,"LONG FLY TO "); 

  Lbl_04560:
    // 04560 PRINT N$(10*(1-T)+D(J,2))
    b2c_fprintf(stdout,"%s",TeamPlayerName[(int)10*(1-T_int)+D_int_arr[(int)j][(int)2]]); b2c_fprintf(stdout,"\n");
    // 04570 IF RND <S(10*(1-T)+D(J,2),7) THEN 4860
    if(RND()<S_int_arr[(int)10*(1-T_int)+D_int_arr[(int)j][(int)2]][(int)7])goto Lbl_04860;
    // 04580 IF J>5 THEN 4610
    if(j>5)goto Lbl_04610;
    // 04590 PRINT"FLY IS DROPPED-"N$(B(0))" GETS ANOTHER CHANCE"
    b2c_fprintf(stdout,"FLY IS DROPPED-%s GETS ANOTHER CHANCE",TeamPlayerName[(int)B_int_arr[(int)0]]); b2c_fprintf(stdout,"\n");
    // 04600 GOTO 2460
    goto Lbl_02460;

  Lbl_04610:
    // 04610 IF J>21 THEN 4700
    if(j>21)goto Lbl_04700;
    // 04620 IF J>11 THEN 4680
    if(j>11)goto Lbl_04680;
    // 04630 IF B(2)=0 THEN 4680
    if(B_int_arr[(int)2]==0)goto Lbl_04680;
    // 04640 IF B(1)=0 THEN 4680
    if(B_int_arr[(int)1]==0)goto Lbl_04680;
    // 04650 IF O=2 THEN 4680
    if(O_int==2)goto Lbl_04680;
    // 04660 PRINT"INFIELD FLY RULE- BALL DROPPED BUT BATTER IS OUT"
    b2c_fprintf(stdout,"INFIELD FLY RULE- BALL DROPPED BUT BATTER IS OUT"); b2c_fprintf(stdout,"\n");
    // 04670 GOTO 8840
    goto Lbl_08840;

  Lbl_04680:
    // 04680 PRINT"ERROR- "N$(B(0))" IS SAFE"
    b2c_fprintf(stdout,"ERROR- %s IS SAFE",TeamPlayerName[(int)B_int_arr[(int)0]]); b2c_fprintf(stdout,"\n");
    // 04690 GOTO 4270
    goto Lbl_04270;

  Lbl_04700:
    // 04700 PRINT"MUFFED FLY- "N$(B(0))" IS SAFE ON ";
    b2c_fprintf(stdout,"MUFFED FLY- %s IS SAFE ON ",TeamPlayerName[(int)B_int_arr[(int)0]]); 
    // 04710 IF B(1)=0 THEN 4730
    if(B_int_arr[(int)1]==0)goto Lbl_04730;
    // 04720 IFO<2 THEN 4830
    if(O_int<2)goto Lbl_04830;

  Lbl_04730:
    // 04730 PRINT"SECOND"
    b2c_fprintf(stdout,"SECOND"); b2c_fprintf(stdout,"\n");
    // 04740 LET E=2
    E_int = 2;

  Lbl_04750:
    // 04750 IF J>27 THEN 4770
    if(j>27)goto Lbl_04770;
    // 04760 IF O<2 THEN 4810
    if(O_int<2)goto Lbl_04810;

  Lbl_04770:
    // 04770 LET D=2
    D_int = 2;

  Lbl_04780:
    // 04780 GOSUB 9100
    Routine_09100();
    // 04790 LET B(E)=B(0)
    B_int_arr[(int)E_int] = B_int_arr[(int)0];
    // 04800 GOTO 1960
    goto Lbl_01960;

  Lbl_04810:
    // 04810 LET D=1
    D_int = 1;
    // 04820 GOTO 4780
    goto Lbl_04780;

  Lbl_04830:
    // 04830 PRINT"FIRST"
    b2c_fprintf(stdout,"FIRST"); b2c_fprintf(stdout,"\n");
    // 04840 LET E=1
    E_int = 1;
    // 04850 GOTO 4750
    goto Lbl_04750;

  Lbl_04860:
    // 04860 IF J<4 THEN 8840
    if(j<4)goto Lbl_08840;
    // 04870 IF J>11 THEN 4900
    if(j>11)goto Lbl_04900;
    // 04880 IF J>5 THEN 8840
    if(j>5)goto Lbl_08840;
    // 04890 LET J=2*J+14
    j = 2*j+14;

  Lbl_04900:
    // 04900 IF J>16 THEN 6050
    if(j>16)goto Lbl_06050;

  Lbl_04910:
    // 04910 FOR I=1 TO 3
    for(i=1;i<=3;i++){
        // 04920 IF B(I)=0 THEN 4950
        if(B_int_arr[(int)i]==0)goto Lbl_04950;
        // 04930 LET B(I+3)=1
        B_int_arr[(int)i+3] = 1;
        // 04940 NEXT I
        int dummy_4940=0; // Ignore this line.
    }; // End-For(i)

  Lbl_04950:
    // 04950 IF B(2)*(1-B(5))=0 THEN 5090
    if(B_int_arr[(int)2]*(1-B_int_arr[(int)5])==0)goto Lbl_05090;
    // 04960 ON D(J,2) GOTO 4990,4990,4970,4970,4990,5020
    switch((int)(D_int_arr[(int)j][(int)2])){
        case 1: goto Lbl_04990;
        case 2: goto Lbl_04990;
        case 3: goto Lbl_04970;
        case 4: goto Lbl_04970;
        case 5: goto Lbl_04990;
        case 6: goto Lbl_05020;
        default: break; 
    };

  Lbl_04970:
    // 04970 LET T7=1
    T7_int = 1;
    // 04980 GOTO 5090
    goto Lbl_05090;

  Lbl_04990:
    // 04990 LET B(1)=B(2)
    B_int_arr[(int)1] = B_int_arr[(int)2];
    // 05000 LET B(2)=0
    B_int_arr[(int)2] = 0;
    // 05010 GOTO 5090
    goto Lbl_05090;

  Lbl_05020:
    // 05020 PRINT"DO YOU WANT "N$(B(2))" TO TRY FOR THIRD ON THE PLAY";
    b2c_fprintf(stdout,"DO YOU WANT %s TO TRY FOR THIRD ON THE PLAY",TeamPlayerName[(int)B_int_arr[(int)2]]); 
    // 05030 INPUT T$
    // Start of Basic INPUT statement 05030
    printf(" ? ");
    char inpbuf_05030[100];
    if(fgets(inpbuf_05030,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_05030=strtok(inpbuf_05030," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_05030==nullptr){
            T_str = "";
        }else{
            T_str = ps_05030;
        };
    }; // End of Basic INPUT statement 05030
    // 05040 IF T$="Y" THEN 5080
    if(strcmp(T_str,"Y")==0)goto Lbl_05080;
    // 05050 IF T$="N" THEN 4990
    if(strcmp(T_str,"N")==0)goto Lbl_04990;
    // 05060 PRINT"CHANCE=.3 IF HE IS PLAYED"
    b2c_fprintf(stdout,"CHANCE=.3 IF HE IS PLAYED"); b2c_fprintf(stdout,"\n");
    // 05070 GOTO 5020
    goto Lbl_05020;

  Lbl_05080:
    // 05080 LET B(5)=.7
    B_int_arr[(int)5] = 0.7;

  Lbl_05090:
    // 05090 IF B(3)*(1-B(6))=0 THEN 5360
    if(B_int_arr[(int)3]*(1-B_int_arr[(int)6])==0)goto Lbl_05360;
    // 05100 LET V=D(J,2)+6*I1
    V_int = D_int_arr[(int)j][(int)2]+6*I1_int;
    // 05110 ON V GOTO 5120,5120,5240,5360,5240,5360,5120,5120,5120,5340,5120,5340
    switch((int)(V_int)){
        case 1: goto Lbl_05120;
        case 2: goto Lbl_05120;
        case 3: goto Lbl_05240;
        case 4: goto Lbl_05360;
        case 5: goto Lbl_05240;
        case 6: goto Lbl_05360;
        case 7: goto Lbl_05120;
        case 8: goto Lbl_05120;
        case 9: goto Lbl_05120;
        case 10: goto Lbl_05340;
        case 11: goto Lbl_05120;
        case 12: goto Lbl_05340;
        default: break; 
    };

  Lbl_05120:
    // 05120 IF B(2)=0 THEN 5200
    if(B_int_arr[(int)2]==0)goto Lbl_05200;
    // 05130 IF T7=0 THEN 5170
    if(T7_int==0)goto Lbl_05170;
    // 05140 LETB(1)=B(2)
    B_int_arr[(int)1] = B_int_arr[(int)2];
    // 05150 LET B(2)=0
    B_int_arr[(int)2] = 0;
    // 05160 GOTO 5200
    goto Lbl_05200;

  Lbl_05170:
    // 05170 PRINT"TWO MEN HAVE ENDED UP ON THIRD. TRY PLAY AGAIN"
    b2c_fprintf(stdout,"TWO MEN HAVE ENDED UP ON THIRD. TRY PLAY AGAIN"); b2c_fprintf(stdout,"\n");
    // 05180 LET B(5)=B(6)=0
    B_int_arr[(int)6] = B_int_arr[(int)5] = 0;
    // 05190 GOTO 4910
    goto Lbl_04910;

  Lbl_05200:
    // 05200 LET B(2)=B(3)
    B_int_arr[(int)2] = B_int_arr[(int)3];
    // 05210 LET B(3)=0
    B_int_arr[(int)3] = 0;
    // 05220 LET T3=1
    T3_int = 1;
    // 05230 GOTO 5360
    goto Lbl_05360;

  Lbl_05240:
    // 05240 LET B(6)=.25
    B_int_arr[(int)6] = 0.25;

  Lbl_05250:
    // 05250 PRINT"DO YOU WANT "N$(B(3))" TO TRY TO SCORE ON THE PLAY";
    b2c_fprintf(stdout,"DO YOU WANT %s TO TRY TO SCORE ON THE PLAY",TeamPlayerName[(int)B_int_arr[(int)3]]); 
    // 05260 INPUT T$
    // Start of Basic INPUT statement 05260
    printf(" ? ");
    char inpbuf_05260[100];
    if(fgets(inpbuf_05260,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_05260=strtok(inpbuf_05260," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_05260==nullptr){
            T_str = "";
        }else{
            T_str = ps_05260;
        };
    }; // End of Basic INPUT statement 05260
    // 05270 IF T$="Y" THEN 5360
    if(strcmp(T_str,"Y")==0)goto Lbl_05360;
    // 05280 IF T$="N" THEN 5320
    if(strcmp(T_str,"N")==0)goto Lbl_05320;
    // 05290 PRINT"CHANCE="1-B(6)"IF HE IS PLAYED"
    b2c_fprintf(stdout,"CHANCE=%dIF HE IS PLAYED",1-B_int_arr[(int)6]); b2c_fprintf(stdout,"\n");
    // 05300 PRINT"EVEN IF YOU TYPE 'NO', MAN WILL GO HOME IF BALL THROWN TO 2ND"
    b2c_fprintf(stdout,"EVEN IF YOU TYPE 'NO', MAN WILL GO HOME IF BALL THROWN TO 2ND"); b2c_fprintf(stdout,"\n");
    // 05310 GOTO 5250
    goto Lbl_05250;

  Lbl_05320:
    // 05320 LET B(6)=0
    B_int_arr[(int)6] = 0;
    // 05330 GOTO 5120
    goto Lbl_05120;

  Lbl_05340:
    // 05340 LET B(6)=.4
    B_int_arr[(int)6] = 0.4;
    // 05350 GOTO 5250
    goto Lbl_05250;

  Lbl_05360:
    // 05360 IF B(1)+B(2)+B(3)=0 THEN 8840
    if(B_int_arr[(int)1]+B_int_arr[(int)2]+B_int_arr[(int)3]==0)goto Lbl_08840;
    // 05370 PRINT"WHAT BASE DO YOU THROW THE BALL TO(4=HOME,5=LIST CHANCES)";
    b2c_fprintf(stdout,"WHAT BASE DO YOU THROW THE BALL TO(4=HOME,5=LIST CHANCES)"); 
    // 05380 INPUT T1
    // Start of Basic INPUT statement 05380
    printf(" ? ");
    char inpbuf_05380[100];
    if(fgets(inpbuf_05380,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_05380=strtok(inpbuf_05380," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_05380==nullptr){
            T1_int = 0;
        }else{
            T1_int = atof(ps_05380);
        };
    }; // End of Basic INPUT statement 05380
    // 05390 IF T1=1 THEN 6020
    if(T1_int==1)goto Lbl_06020;
    // 05400 IF T1<5 THEN 5520
    if(T1_int<5)goto Lbl_05520;
    // 05410 PRINT"CHANCES FOR OUTS AT EACH BASE"
    b2c_fprintf(stdout,"CHANCES FOR OUTS AT EACH BASE"); b2c_fprintf(stdout,"\n");
    // 05420 PRINT"1: AUTOMATIC",
    b2c_fprintf(stdout,"1: AUTOMATIC@"); 
    // 05430 FOR I=2 TO 4
    for(i=2;i<=4;i++){
        // 05440 PRINT I":";
        b2c_fprintf(stdout," %d :",i); 
        // 05450 IF B(I+2)<>1 THEN 5480
        if(B_int_arr[(int)i+2]!=1)goto Lbl_05480;
        // 05460 PRINT Q(I-1,D(J,2))"FORCEOUT",
        b2c_fprintf(stdout," %d FORCEOUT@",Q_int_arr[(int)i-1][(int)D_int_arr[(int)j][(int)2]]); 
        // 05470 GOTO 5490
        goto Lbl_05490;

  Lbl_05480:
        // 05480 PRINT B(I+2)"TAG",
        b2c_fprintf(stdout," %d TAG@",B_int_arr[(int)i+2]); 

  Lbl_05490:
        // 05490 NEXT I
        int dummy_5490=0; // Ignore this line.
    }; // End-For(i)
    // 05500 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 05510 GOTO 5360
    goto Lbl_05360;

  Lbl_05520:
    // 05520 IF B(T1+2)=0 THEN 5360
    if(B_int_arr[(int)T1_int+2]==0)goto Lbl_05360;
    // 05530 IF T3=0 THEN 5580
    if(T3_int==0)goto Lbl_05580;
    // 05540 IF T1<>2 THEN 5580
    if(T1_int!=2)goto Lbl_05580;
    // 05550 LET B(3)=B(2)
    B_int_arr[(int)3] = B_int_arr[(int)2];
    // 05560 LET B(2)=0
    B_int_arr[(int)2] = 0;
    // 05570 LET T3=0
    T3_int = 0;

  Lbl_05580:
    // 05580 IF B(T1+2)=1 THEN 5730
    if(B_int_arr[(int)T1_int+2]==1)goto Lbl_05730;
    // 05590 IF RND>B(T1+2) THEN 5670
    if(RND()>B_int_arr[(int)T1_int+2])goto Lbl_05670;
    // 05600 PRINT"RUNNER IS TAGGED OUT"
    b2c_fprintf(stdout,"RUNNER IS TAGGED OUT"); b2c_fprintf(stdout,"\n");
    // 05610 LET B(T1-1)=0
    B_int_arr[(int)T1_int-1] = 0;
    // 05620 LET D=1
    D_int = 1;
    // 05630 GOSUB 9100
    Routine_09100();
    // 05640 PRINT N$(B(0))" ON FIRST"
    b2c_fprintf(stdout,"%s ON FIRST",TeamPlayerName[(int)B_int_arr[(int)0]]); b2c_fprintf(stdout,"\n");
    // 05650 LET B(1)=B(0)
    B_int_arr[(int)1] = B_int_arr[(int)0];
    // 05660 GOTO 8840
    goto Lbl_08840;

  Lbl_05670:
    // 05670 PRINT"EVERYONE IS SAFE"
    b2c_fprintf(stdout,"EVERYONE IS SAFE"); b2c_fprintf(stdout,"\n");
    // 05680 LET D=1
    D_int = 1;
    // 05690 GOSUB 9100
    Routine_09100();
    // 05700 PRINT N$(B(0))" ON FIRST"
    b2c_fprintf(stdout,"%s ON FIRST",TeamPlayerName[(int)B_int_arr[(int)0]]); b2c_fprintf(stdout,"\n");
    // 05710 LET B(1)=B(0)
    B_int_arr[(int)1] = B_int_arr[(int)0];
    // 05720 GOTO 1960
    goto Lbl_01960;

  Lbl_05730:
    // 05730 IFRND>Q(T1-1,D(J,2)) THEN 5670
    if(RND()>Q_int_arr[(int)T1_int-1][(int)D_int_arr[(int)j][(int)2]])goto Lbl_05670;
    // 05740 PRINT N$(B(T1-1))" FORCED OUT"
    b2c_fprintf(stdout,"%s FORCED OUT",TeamPlayerName[(int)B_int_arr[(int)T1_int-1]]); b2c_fprintf(stdout,"\n");
    // 05750 LET B(T1-1)=0
    B_int_arr[(int)T1_int-1] = 0;
    // 05760 IF O=2 THEN 8840
    if(O_int==2)goto Lbl_08840;
    // 05770 IF T1=4 THEN 5860
    if(T1_int==4)goto Lbl_05860;
    // 05780 IF T1=3 THEN 5840
    if(T1_int==3)goto Lbl_05840;
    // 05790 IF D(J,2)<5 THEN 5820
    if(D_int_arr[(int)j][(int)2]<5)goto Lbl_05820;
    // 05800 LET T2=4
    T2_int = 4;
    // 05810 GOTO 5870
    goto Lbl_05870;

  Lbl_05820:
    // 05820 LET T2=6
    T2_int = 6;
    // 05830 GOTO 5870
    goto Lbl_05870;

  Lbl_05840:
    // 05840 LET T2=5
    T2_int = 5;
    // 05850 GOTO 5870
    goto Lbl_05870;

  Lbl_05860:
    // 05860 LET T2=2
    T2_int = 2;

  Lbl_05870:
    // 05870 PRINT N$(10*(1-T)+T2)" MAKES THE PIVOT"
    b2c_fprintf(stdout,"%s MAKES THE PIVOT",TeamPlayerName[(int)10*(1-T_int)+T2_int]); b2c_fprintf(stdout,"\n");
    // 05880 IF RND<S(10*(1-T)+T2,7) THEN 5920
    if(RND()<S_int_arr[(int)10*(1-T_int)+T2_int][(int)7])goto Lbl_05920;
    // 05890 PRINT"HE THROWS THE BALL AWAY"
    b2c_fprintf(stdout,"HE THROWS THE BALL AWAY"); b2c_fprintf(stdout,"\n");
    // 05900 LET M1=2
    M1_int = 2;
    // 05910 GOTO 8840
    goto Lbl_08840;

  Lbl_05920:
    // 05920 LET M1=1
    M1_int = 1;
    // 05930 IF T1>2 THEN 5950
    if(T1_int>2)goto Lbl_05950;
    // 05940 LET T1=T1+INT((S(B(0),5)-3)/2)
    T1_int = T1_int+INT((S_int_arr[(int)B_int_arr[(int)0]][(int)5]-3)/2);

  Lbl_05950:
    // 05950 IF RND>Q(T1+4,D(J,2)) THEN 6000
    if(RND()>Q_int_arr[(int)T1_int+4][(int)D_int_arr[(int)j][(int)2]])goto Lbl_06000;
    // 05960 PRINT"AND OVER TO FIRST FOR THE DOUBLE PLAY"
    b2c_fprintf(stdout,"AND OVER TO FIRST FOR THE DOUBLE PLAY"); b2c_fprintf(stdout,"\n");
    // 05970 LET O3=1
    O3_int = 1;
    // 05980 LET O2=2
    O2_int = 2;
    // 05990 GOTO 8840
    goto Lbl_08840;

  Lbl_06000:
    // 06000 PRINT"DOUBLE PLAY NOT SUCCESSFUL"
    b2c_fprintf(stdout,"DOUBLE PLAY NOT SUCCESSFUL"); b2c_fprintf(stdout,"\n");
    // 06010 GOTO 8840
    goto Lbl_08840;

  Lbl_06020:
    // 06020 LET O3=1
    O3_int = 1;
    // 06030 LET M1=1
    M1_int = 1;
    // 06040 GOTO 8840
    goto Lbl_08840;

  Lbl_06050:
    // 06050 IF J>21 THEN 6380
    if(j>21)goto Lbl_06380;
    // 06060 IF O=2 THEN 8840
    if(O_int==2)goto Lbl_08840;
    // 06070 IF B(1)+B(2)+B(3)=0 THEN 8840
    if(B_int_arr[(int)1]+B_int_arr[(int)2]+B_int_arr[(int)3]==0)goto Lbl_08840;

  Lbl_06080:
    // 06080 PRINT"AT WHAT BASE DO YOU WANT TO TRY FOR A D.P.(4=LIST CHANCES)";
    b2c_fprintf(stdout,"AT WHAT BASE DO YOU WANT TO TRY FOR A D.P.(4=LIST CHANCES)"); 
    // 06090 INPUT T1
    // Start of Basic INPUT statement 06090
    printf(" ? ");
    char inpbuf_06090[100];
    if(fgets(inpbuf_06090,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_06090=strtok(inpbuf_06090," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_06090==nullptr){
            T1_int = 0;
        }else{
            T1_int = atof(ps_06090);
        };
    }; // End of Basic INPUT statement 06090
    // 06100 IF T1<4 THEN 6200
    if(T1_int<4)goto Lbl_06200;
    // 06110 FOR I=1 TO 3
    for(i=1;i<=3;i++){
        // 06120 PRINT I":";
        b2c_fprintf(stdout," %d :",i); 
        // 06130 IF B(I)=0 THEN 6160
        if(B_int_arr[(int)i]==0)goto Lbl_06160;
        // 06140 PRINT Q(I+8,D(J,2)),
        b2c_fprintf(stdout," %d @",Q_int_arr[(int)i+8][(int)D_int_arr[(int)j][(int)2]]); 
        // 06150 GOTO 6170
        goto Lbl_06170;

  Lbl_06160:
        // 06160 PRINT "NO RUNNER",
        b2c_fprintf(stdout,"NO RUNNER@"); 

  Lbl_06170:
        // 06170 NEXT I
        int dummy_6170=0; // Ignore this line.
    }; // End-For(i)
    // 06180 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 06190 GOTO 6080
    goto Lbl_06080;

  Lbl_06200:
    // 06200 IF B(T1)=0 THEN 6080
    if(B_int_arr[(int)T1_int]==0)goto Lbl_06080;
    // 06210 IF RND>Q(T1+8,D(J,2)) THEN 6360
    if(RND()>Q_int_arr[(int)T1_int+8][(int)D_int_arr[(int)j][(int)2]])goto Lbl_06360;
    // 06220 LET B(T1)=0
    B_int_arr[(int)T1_int] = 0;
    // 06230 IF O=1 THEN 6290
    if(O_int==1)goto Lbl_06290;
    // 06240 FOR I=1 TO 3
    for(i=1;i<=3;i++){
        // 06250 IF I*T1=3 THEN 6280
        if(i*T1_int==3)goto Lbl_06280;
        // 06260 IF B(I)=0 THEN 6280
        if(B_int_arr[(int)i]==0)goto Lbl_06280;
        // 06270 GOTO 6320
        goto Lbl_06320;

  Lbl_06280:
        // 06280 NEXT I
        int dummy_6280=0; // Ignore this line.
    }; // End-For(i)

  Lbl_06290:
    // 06290 PRINT"DOUBLE PLAY"
    b2c_fprintf(stdout,"DOUBLE PLAY"); b2c_fprintf(stdout,"\n");
    // 06300 LET O2=2
    O2_int = 2;
    // 06310 GOTO 8840
    goto Lbl_08840;

  Lbl_06320:
    // 06320 IF RND>.3 THEN 6290
    if(RND()>0.3)goto Lbl_06290;
    // 06330 PRINT"TRIPLE PLAY MADE ON "N$(B(I))
    b2c_fprintf(stdout,"TRIPLE PLAY MADE ON %s",TeamPlayerName[(int)B_int_arr[(int)i]]); b2c_fprintf(stdout,"\n");
    // 06340 LET O2=3
    O2_int = 3;
    // 06350 GOTO 8840
    goto Lbl_08840;

  Lbl_06360:
    // 06360 PRINT"UNSUCCESSFUL"
    b2c_fprintf(stdout,"UNSUCCESSFUL"); b2c_fprintf(stdout,"\n");
    // 06370 GOTO 8840
    goto Lbl_08840;

  Lbl_06380:
    // 06380 IF O=2 THEN 8840
    if(O_int==2)goto Lbl_08840;
    // 06390 LET F=J-INT((J-1)/3)*3
    F_int = j-INT((j-1)/3)*3;
    // 06400 IF B(3)=0 THEN 6610
    if(B_int_arr[(int)3]==0)goto Lbl_06610;
    // 06410 LET C=A(J-12,S(B(3),5))
    C_flt = A_int_arr[(int)j-12][(int)S_int_arr[(int)B_int_arr[(int)3]][(int)5]];
    // 06420 IF C<1 THEN 6460
    if(C_flt<1)goto Lbl_06460;
    // 06430 LET I=3
    i = 3;
    // 06440 GOSUB 9420
    Routine_09420();
    // 06450 GOTO 6610
    goto Lbl_06610;

  Lbl_06460:
    // 06460 PRINT"DO YOU WANT "N$(B(3))" TO SCORE ON THE FLY";
    b2c_fprintf(stdout,"DO YOU WANT %s TO SCORE ON THE FLY",TeamPlayerName[(int)B_int_arr[(int)3]]); 
    // 06470 INPUT T$
    // Start of Basic INPUT statement 06470
    printf(" ? ");
    char inpbuf_06470[100];
    if(fgets(inpbuf_06470,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_06470=strtok(inpbuf_06470," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_06470==nullptr){
            T_str = "";
        }else{
            T_str = ps_06470;
        };
    }; // End of Basic INPUT statement 06470
    // 06480 IF T$="Y" THEN 6520
    if(strcmp(T_str,"Y")==0)goto Lbl_06520;
    // 06490 IF T$="N" THEN 8840
    if(strcmp(T_str,"N")==0)goto Lbl_08840;
    // 06500 PRINT"CHANCE TO SCORE="C
    b2c_fprintf(stdout,"CHANCE TO SCORE= %f ",C_flt); b2c_fprintf(stdout,"\n");
    // 06510 GOTO 6460
    goto Lbl_06460;

  Lbl_06520:
    // 06520 IF B(1)=0 THEN 6550
    if(B_int_arr[(int)1]==0)goto Lbl_06550;
    // 06530 GOSUB 9500
    Routine_09500();
    // 06540 GOTO 6570
    goto Lbl_06570;

  Lbl_06550:
    // 06550 LET I=3
    i = 3;
    // 06560 GOSUB 9420
    Routine_09420();

  Lbl_06570:
    // 06570 IF O1=0 THEN 6600
    if(O1_int==0)goto Lbl_06600;
    // 06580 LET O2=2 
    O2_int = 2;
    // 06590 LET O1=0
    O1_int = 0;

  Lbl_06600:
    // 06600 IF O+O2=3 THEN 8840
    if(O_int+O2_int==3)goto Lbl_08840;

  Lbl_06610:
    // 06610 IF B(2)=0 THEN 8840
    if(B_int_arr[(int)2]==0)goto Lbl_08840;
    // 06620 LET I=2
    i = 2;
    // 06630 LET C=A(J-21,S(B(2),5))
    C_flt = A_int_arr[(int)j-21][(int)S_int_arr[(int)B_int_arr[(int)2]][(int)5]];
    // 06640 IF C=0 THEN 8840
    if(C_flt==0)goto Lbl_08840;
    // 06650 IF C<1 THEN 6680
    if(C_flt<1)goto Lbl_06680;
    // 06660 GOSUB 9420
    Routine_09420();
    // 06670 GOTO 8840
    goto Lbl_08840;

  Lbl_06680:
    // 06680 PRINT"DO YOU WANT THE FLY TO";
    b2c_fprintf(stdout,"DO YOU WANT THE FLY TO"); 
    // 06690 GOSUB 9280
    Routine_09280();
    // 06700 LET O2=O2+O1
    O2_int = O2_int+O1_int;
    // 06710 GOTO 8840
    goto Lbl_08840;

  Lbl_06720:
    // 06720 PRINT"WHAT BASE DO YOU WANT TO LEAD FROM(0=NONE)";
    b2c_fprintf(stdout,"WHAT BASE DO YOU WANT TO LEAD FROM(0=NONE)"); 
    // 06730 INPUT T5
    // Start of Basic INPUT statement 06730
    printf(" ? ");
    char inpbuf_06730[100];
    if(fgets(inpbuf_06730,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_06730=strtok(inpbuf_06730," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_06730==nullptr){
            T5_int = 0;
        }else{
            T5_int = atof(ps_06730);
        };
    }; // End of Basic INPUT statement 06730
    // 06740 IF T5=0 THEN 6920
    if(T5_int==0)goto Lbl_06920;
    // 06750 IF B(T5)=0 THEN 6720
    if(B_int_arr[(int)T5_int]==0)goto Lbl_06720;
    // 06760 IF ABS(L(T5)-10*B(T5)-2.5)>2 THEN 6800
    if(ABS(L_int_arr[(int)T5_int]-10*B_int_arr[(int)T5_int]-2.5)>2)goto Lbl_06800;
    // 06770 PRINT N$(B(T5))"'S PREVIOUS LEAD REMAINS IN EFFECT,"
    b2c_fprintf(stdout,"%s'S PREVIOUS LEAD REMAINS IN EFFECT,",TeamPlayerName[(int)B_int_arr[(int)T5_int]]); b2c_fprintf(stdout,"\n");
    // 06780 PRINT"AS LONG AS HE IS ON THAT BASE"
    b2c_fprintf(stdout,"AS LONG AS HE IS ON THAT BASE"); b2c_fprintf(stdout,"\n");
    // 06790 GOTO 6720
    goto Lbl_06720;

  Lbl_06800:
    // 06800 LET L(T5)=INT(4*RND)+1
    L_int_arr[(int)T5_int] = INT(4*RND())+1;
    // 06810 PRINT"RUNNER HAS A TYPE"L(T5)"LEAD (1=BEST,4=WORST)"
    b2c_fprintf(stdout,"RUNNER HAS A TYPE %d LEAD (1=BEST,4=WORST)",L_int_arr[(int)T5_int]); b2c_fprintf(stdout,"\n");
    // 06820 LET L(T5)=L(T5)+10*B(T5)
    L_int_arr[(int)T5_int] = L_int_arr[(int)T5_int]+10*B_int_arr[(int)T5_int];
    // 06830 IF RND>.06 THEN 6910
    if(RND()>0.06)goto Lbl_06910;
    // 06840 IF RND>S(11-10*T,7) THEN 6880
    if(RND()>S_int_arr[(int)11-10*T_int][(int)7])goto Lbl_06880;
    // 06850 PRINT N$(B(T5))" PICKED OFF"
    b2c_fprintf(stdout,"%s PICKED OFF",TeamPlayerName[(int)B_int_arr[(int)T5_int]]); b2c_fprintf(stdout,"\n");
    // 06860 LET B(T5)=0
    B_int_arr[(int)T5_int] = 0;
    // 06870 GOTO 8840
    goto Lbl_08840;

  Lbl_06880:
    // 06880 PRINT"PITCHER THROWS THE BALL AWAY TRYING FOR A PICKOFF"
    b2c_fprintf(stdout,"PITCHER THROWS THE BALL AWAY TRYING FOR A PICKOFF"); b2c_fprintf(stdout,"\n");
    // 06890 LET D=1
    D_int = 1;
    // 06900 GOSUB 9100
    Routine_09100();

  Lbl_06910:
    // 06910 IF B(1)*(B(2)+B(3))+B(2)*B(3)>0 THEN 6720
    if(B_int_arr[(int)1]*(B_int_arr[(int)2]+B_int_arr[(int)3])+B_int_arr[(int)2]*B_int_arr[(int)3]>0)goto Lbl_06720;

  Lbl_06920:
    // 06920 PRINT"WHAT BASE DO YOU WANT TO STEAL FROM(0=NONE,4=LIST CHANCES)";
    b2c_fprintf(stdout,"WHAT BASE DO YOU WANT TO STEAL FROM(0=NONE,4=LIST CHANCES)"); 

  Lbl_06930:
    // 06930 INPUT T5
    // Start of Basic INPUT statement 06930
    printf(" ? ");
    char inpbuf_06930[100];
    if(fgets(inpbuf_06930,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_06930=strtok(inpbuf_06930," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_06930==nullptr){
            T5_int = 0;
        }else{
            T5_int = atof(ps_06930);
        };
    }; // End of Basic INPUT statement 06930
    // 06940 IF T5=0 THEN 7220
    if(T5_int==0)goto Lbl_07220;
    // 06950 IF T5<>4 THEN 7080
    if(T5_int!=4)goto Lbl_07080;
    // 06960 FOR I=1 TO 3
    for(i=1;i<=3;i++){
        // 06970 PRINT I":";
        b2c_fprintf(stdout," %d :",i); 
        // 06980 IF B(I)>0 THEN 7010
        if(B_int_arr[(int)i]>0)goto Lbl_07010;
        // 06990 PRINT"NO RUNNER",
        b2c_fprintf(stdout,"NO RUNNER@"); 
        // 07000 GOTO 7050
        goto Lbl_07050;

  Lbl_07010:
        // 07010 IF INT(L(I)/10)=B(I) THEN 7040
        if(INT(L_int_arr[(int)i]/10)==B_int_arr[(int)i])goto Lbl_07040;
        // 07020 PRINT"NO LEAD",
        b2c_fprintf(stdout,"NO LEAD@"); 
        // 07030 GOTO 7050
        goto Lbl_07050;

  Lbl_07040:
        // 07040 PRINT A(4*I+L(I)-10*B(I)+14,S(B(I),5)),
        b2c_fprintf(stdout," %d @",A_int_arr[(int)4*i+L_int_arr[(int)i]-10*B_int_arr[(int)i]+14][(int)S_int_arr[(int)B_int_arr[(int)i]][(int)5]]); 

  Lbl_07050:
        // 07050 NEXT I
        int dummy_7050=0; // Ignore this line.
    }; // End-For(i)
    // 07060 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 07070 GOTO 6920
    goto Lbl_06920;

  Lbl_07080:
    // 07080 IF B(T5)>0 THEN 7110
    if(B_int_arr[(int)T5_int]>0)goto Lbl_07110;
    // 07090 PRINT"NO RUNNER"
    b2c_fprintf(stdout,"NO RUNNER"); b2c_fprintf(stdout,"\n");
    // 07100 GOTO 6920
    goto Lbl_06920;

  Lbl_07110:
    // 07110 IF INT(L(T5)/10)=B(T5) THEN 7140
    if(INT(L_int_arr[(int)T5_int]/10)==B_int_arr[(int)T5_int])goto Lbl_07140;
    // 07120 PRINT"RUNNER MAY NOT STEAL WITHOUT TAKING A LEAD FIRST"
    b2c_fprintf(stdout,"RUNNER MAY NOT STEAL WITHOUT TAKING A LEAD FIRST"); b2c_fprintf(stdout,"\n");
    // 07130 GOTO 6720
    goto Lbl_06720;

  Lbl_07140:
    // 07140 IF B(T5+1)=0 THEN 7190
    if(B_int_arr[(int)T5_int+1]==0)goto Lbl_07190;
    // 07150 IF T5=3 THEN 7190
    if(T5_int==3)goto Lbl_07190;
    // 07160 IF L(T5+4)=1 THEN 7190
    if(L_int_arr[(int)T5_int+4]==1)goto Lbl_07190;
    // 07170 PRINT"YOU MUST GIVE THE RUNNER AHEAD OF YOU THE STEAL SIGN FIRST"
    b2c_fprintf(stdout,"YOU MUST GIVE THE RUNNER AHEAD OF YOU THE STEAL SIGN FIRST"); b2c_fprintf(stdout,"\n");
    // 07180 GOTO 6920
    goto Lbl_06920;

  Lbl_07190:
    // 07190 LET L(T5+3)=1
    L_int_arr[(int)T5_int+3] = 1;
    // 07200 PRINT"WHAT OTHER BASE DO YOU WANT TO STEAL FROM ON THE PLAY(0=NONE)";
    b2c_fprintf(stdout,"WHAT OTHER BASE DO YOU WANT TO STEAL FROM ON THE PLAY(0=NONE)"); 
    // 07210 GOTO 6930
    goto Lbl_06930;

  Lbl_07220:
    // 07220 IF L(4)+L(5)+L(6)=0 THEN 2140
    if(L_int_arr[(int)4]+L_int_arr[(int)5]+L_int_arr[(int)6]==0)goto Lbl_02140;
    // 07230 FOR I=1 TO 3
    for(i=1;i<=3;i++){
        // 07240 IF L(I+3)=0 THEN 7270
        if(L_int_arr[(int)i+3]==0)goto Lbl_07270;
        // 07250 LET L(I+6)=A(4*I+L(I)-10*B(I)+14,S(B(I),5))
        L_int_arr[(int)i+6] = A_int_arr[(int)4*i+L_int_arr[(int)i]-10*B_int_arr[(int)i]+14][(int)S_int_arr[(int)B_int_arr[(int)i]][(int)5]];
        // 07260 LET T6=I+1
        T6_int = i+1;

  Lbl_07270:
        // 07270 NEXT I
        int dummy_7270=0; // Ignore this line.
    }; // End-For(i)
    // 07280 IF L(4)+L(5)+L(6)=1 THEN 7320
    if(L_int_arr[(int)4]+L_int_arr[(int)5]+L_int_arr[(int)6]==1)goto Lbl_07320;

  Lbl_07290:
    // 07290 PRINT"WHICH BASE DO YOU THROW TO (4=HOME)";
    b2c_fprintf(stdout,"WHICH BASE DO YOU THROW TO (4=HOME)"); 
    // 07300 INPUT T6
    // Start of Basic INPUT statement 07300
    printf(" ? ");
    char inpbuf_07300[100];
    if(fgets(inpbuf_07300,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_07300=strtok(inpbuf_07300," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_07300==nullptr){
            T6_int = 0;
        }else{
            T6_int = atof(ps_07300);
        };
    }; // End of Basic INPUT statement 07300
    // 07310 IF L(T6+2)=0 THEN 7290
    if(L_int_arr[(int)T6_int+2]==0)goto Lbl_07290;

  Lbl_07320:
    // 07320 LET I=T6-1
    i = T6_int-1;
    // 07330 IF RND<S(12-10*T,7)THEN 7470
    if(RND()<S_int_arr[(int)12-10*T_int][(int)7])goto Lbl_07470;
    // 07340 PRINT "ERROR BY THE CATCHER"
    b2c_fprintf(stdout,"ERROR BY THE CATCHER"); b2c_fprintf(stdout,"\n");
    // 07350 IF RND<.5 THEN 7370
    if(RND()<0.5)goto Lbl_07370;
    // 07360 LET W6=1
    W6_int = 1;

  Lbl_07370:
    // 07370 LETD=1
    D_int = 1;
    // 07380 FOR I=3 TO 1 STEP-1
    for(i=3;i>=1;i+=-1){
        // 07390     IF L(I+3)=0THEN 7410
        if(L_int_arr[(int)i+3]==0)goto Lbl_07410;
        // 07400     GOSUB 9150
        Routine_09150();

  Lbl_07410:
        // 07410 NEXT I
        int dummy_7410=0; // Ignore this line.
    }; // End-For(i)
    // 07420 IF W6<>1 THEN 7440
    if(W6_int!=1)goto Lbl_07440;
    // 07430 GOSUB 9100
    Routine_09100();

  Lbl_07440:
    // 07440 IFO1=0THEN 2140
    if(O1_int==0)goto Lbl_02140;
    // 07450 LETO2=O1
    O2_int = O1_int;
    // 07460 GOTO 8840
    goto Lbl_08840;

  Lbl_07470:
    // 07470 IFRND<L(I+6) THEN 7520
    if(RND()<L_int_arr[(int)i+6])goto Lbl_07520;
    // 07480 LET O1=O1+1
    O1_int = O1_int+1;
    // 07490 PRINT N$(B(I))" OUT STEALING"
    b2c_fprintf(stdout,"%s OUT STEALING",TeamPlayerName[(int)B_int_arr[(int)i]]); b2c_fprintf(stdout,"\n");
    // 07500 LET B(I)=0
    B_int_arr[(int)i] = 0;
    // 07510 IF O=2 THEN 7370
    if(O_int==2)goto Lbl_07370;

  Lbl_07520:
    // 07520 FOR J=3 TO 1 STEP -1
    for(j=3;j>=1;j+=-1){
        // 07530 IF J=I THEN 7570
        if(j==i)goto Lbl_07570;
        // 07540 IF L(J+3)<>1 THEN 7570
        if(L_int_arr[(int)j+3]!=1)goto Lbl_07570;
        // 07550 IF ABS(J-I)>1 THEN 7570
        if(ABS(j-i)>1)goto Lbl_07570;
        // 07560 IF L(J)-10*B(J)=4 THEN 7590
        if(L_int_arr[(int)j]-10*B_int_arr[(int)j]==4)goto Lbl_07590;

  Lbl_07570:
        // 07570 NEXT J
        int dummy_7570=0; // Ignore this line.
    }; // End-For(j)
    // 07580 GOTO 7370
    goto Lbl_07370;

  Lbl_07590:
    // 07590 IF RND<L(J+6)THEN 7370
    if(RND()<L_int_arr[(int)j+6])goto Lbl_07370;
    // 07600 LET O1=O1+1
    O1_int = O1_int+1;
    // 07610 PRINT N$(B(J))" OUT STEALING"
    b2c_fprintf(stdout,"%s OUT STEALING",TeamPlayerName[(int)B_int_arr[(int)j]]); b2c_fprintf(stdout,"\n");
    // 07620 LET B(J)=0
    B_int_arr[(int)j] = 0;
    // 07630 GOTO 7370
    goto Lbl_07370;

  Lbl_07640:
    // 07640 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 07650 PRINT N$(B(0))" IS UP"
    b2c_fprintf(stdout,"%s IS UP",TeamPlayerName[(int)B_int_arr[(int)0]]); b2c_fprintf(stdout,"\n");
    // 07660 PRINT"INTENTIONAL WALK";
    b2c_fprintf(stdout,"INTENTIONAL WALK"); 
    // 07670 INPUT T$
    // Start of Basic INPUT statement 07670
    printf(" ? ");
    char inpbuf_07670[100];
    if(fgets(inpbuf_07670,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_07670=strtok(inpbuf_07670," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_07670==nullptr){
            T_str = "";
        }else{
            T_str = ps_07670;
        };
    }; // End of Basic INPUT statement 07670
    // 07680 IF T$="Y"THEN 2470
    if(strcmp(T_str,"Y")==0)goto Lbl_02470;
    // 07690 PRINT"BUNT";
    b2c_fprintf(stdout,"BUNT"); 
    // 07700 INPUT T$
    // Start of Basic INPUT statement 07700
    printf(" ? ");
    char inpbuf_07700[100];
    if(fgets(inpbuf_07700,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_07700=strtok(inpbuf_07700," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_07700==nullptr){
            T_str = "";
        }else{
            T_str = ps_07700;
        };
    }; // End of Basic INPUT statement 07700
    // 07710 IF T$<>"Y" THEN 2280
    if(strcmp(T_str,"Y")!=0)goto Lbl_02280;
    // 07720 LET P2=0
    P2_int = 0;
    // 07730 IF L(4)+L(5)+L(6)=0 THEN 7760
    if(L_int_arr[(int)4]+L_int_arr[(int)5]+L_int_arr[(int)6]==0)goto Lbl_07760;
    // 07740 PRINT "BATTER STARTS WITH ONE STRIKE BECAUSE OF STEAL PLAY"
    b2c_fprintf(stdout,"BATTER STARTS WITH ONE STRIKE BECAUSE OF STEAL PLAY"); b2c_fprintf(stdout,"\n");
    // 07750 LET P2=1
    P2_int = 1;

  Lbl_07760:
    // 07760 LET P3=.81+(4-S(B(0),5))^2*.00875
    P3_flt = 0.81+IPower((4-S_int_arr[(int)B_int_arr[(int)0]][(int)5]),2)*0.00875;

  Lbl_07770:
    // 07770 IF B(3)=0 THEN 7840
    if(B_int_arr[(int)3]==0)goto Lbl_07840;
    // 07780 PRINT"DO YOU WANT A SUICIDE SQUEEZE";
    b2c_fprintf(stdout,"DO YOU WANT A SUICIDE SQUEEZE"); 
    // 07790 INPUT T$
    // Start of Basic INPUT statement 07790
    printf(" ? ");
    char inpbuf_07790[100];
    if(fgets(inpbuf_07790,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_07790=strtok(inpbuf_07790," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_07790==nullptr){
            T_str = "";
        }else{
            T_str = ps_07790;
        };
    }; // End of Basic INPUT statement 07790
    // 07800 IF T$<>"Y" THEN 7840
    if(strcmp(T_str,"Y")!=0)goto Lbl_07840;
    // 07810 LET P4=1
    P4_int = 1;
    // 07820 LET I=3
    i = 3;
    // 07830 GOTO 7850
    goto Lbl_07850;

  Lbl_07840:
    // 07840 LET P4=0
    P4_int = 0;

  Lbl_07850:
    // 07850 LET P0=RND
    P0_int = RND();
    // 07860 GOTO 8020
    goto Lbl_08020;

  Lbl_07870:
    // 07870 LET O=O+1
    O_int = O_int+1;
    // 07880 LET O1=0
    O1_int = 0;
    // 07890 IF O=1 THEN 7920
    if(O_int==1)goto Lbl_07920;
    // 07900 PRINT"TWO OUTS"
    b2c_fprintf(stdout,"TWO OUTS"); b2c_fprintf(stdout,"\n");
    // 07910 GOTO 7930
    goto Lbl_07930;

  Lbl_07920:
    // 07920 PRINT"ONE OUT"
    b2c_fprintf(stdout,"ONE OUT"); b2c_fprintf(stdout,"\n");

  Lbl_07930:
    // 07930 PRINT"IS THE BUNT STILL ON";
    b2c_fprintf(stdout,"IS THE BUNT STILL ON"); 
    // 07940 INPUT T$
    // Start of Basic INPUT statement 07940
    printf(" ? ");
    char inpbuf_07940[100];
    if(fgets(inpbuf_07940,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_07940=strtok(inpbuf_07940," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_07940==nullptr){
            T_str = "";
        }else{
            T_str = ps_07940;
        };
    }; // End of Basic INPUT statement 07940
    // 07950 IF T$<>"N" THEN 7770
    if(strcmp(T_str,"N")!=0)goto Lbl_07770;
    // 07960 IF P2<2 THEN 2280
    if(P2_int<2)goto Lbl_02280;
    // 07970 IF RND>S(10*(1-T),3) THEN 2280
    if(RND()>S_int_arr[(int)10*(1-T_int)][(int)3])goto Lbl_02280;
    // 07980 PRINT N$(B(0))" STRIKES OUT ON THE NEXT PITCH"
    b2c_fprintf(stdout,"%s STRIKES OUT ON THE NEXT PITCH",TeamPlayerName[(int)B_int_arr[(int)0]]); b2c_fprintf(stdout,"\n");
    // 07990 GOTO 8840
    goto Lbl_08840;

  Lbl_08000:
    // 08000 LET W3=T+1
    W3_int = T_int+1;
    // 08010 GOTO 8840
    goto Lbl_08840;

  Lbl_08020:
    // 08020 IF P0>.15 THEN 8170
    if(P0_int>0.15)goto Lbl_08170;
    // 08030 LET P2=P2+1
    P2_int = P2_int+1;
    // 08040 PRINT"CALLED STRIKE"P2
    b2c_fprintf(stdout,"CALLED STRIKE %d ",P2_int); b2c_fprintf(stdout,"\n");
    // 08050 LET C=.45-(4-S(B(3),5))^2*.02
    C_flt = 0.45-IPower((4-S_int_arr[(int)B_int_arr[(int)3]][(int)5]),2)*0.02;
    // 08060 IF P2<3 THEN 8120
    if(P2_int<3)goto Lbl_08120;
    // 08070 IF O=2 THEN 8840
    if(O_int==2)goto Lbl_08840;
    // 08080 IF P4=0 THEN 8840
    if(P4_int==0)goto Lbl_08840;
    // 08090 GOSUB 9420
    Routine_09420();
    // 08100 LET O2=1+O1
    O2_int = 1+O1_int;
    // 08110 GOTO 8840
    goto Lbl_08840;

  Lbl_08120:
    // 08120 IF P4=0 THEN 7930
    if(P4_int==0)goto Lbl_07930;
    // 08130 GOSUB 9420
    Routine_09420();
    // 08140 IF O+O1=3 THEN 8000
    if(O_int+O1_int==3)goto Lbl_08000;
    // 08150 IF O1=1 THEN 7870
    if(O1_int==1)goto Lbl_07870;
    // 08160 GOTO 7930
    goto Lbl_07930;

  Lbl_08170:
    // 08170 IF P0>.23THEN 8240
    if(P0_int>0.23)goto Lbl_08240;
    // 08180 PRINT"BUNT IS POPPED UP AND CAUGHT"
    b2c_fprintf(stdout,"BUNT IS POPPED UP AND CAUGHT"); b2c_fprintf(stdout,"\n");
    // 08190 IF P4=0 THEN 8840
    if(P4_int==0)goto Lbl_08840;
    // 08200 PRINT N$(B(3))" IS CAUGHT OFF BASE AND IS OUT"
    b2c_fprintf(stdout,"%s IS CAUGHT OFF BASE AND IS OUT",TeamPlayerName[(int)B_int_arr[(int)3]]); b2c_fprintf(stdout,"\n");
    // 08210 LET B(3)=0
    B_int_arr[(int)3] = 0;
    // 08220 LET O2=2
    O2_int = 2;
    // 08230 GOTO 8840
    goto Lbl_08840;

  Lbl_08240:
    // 08240 IF P0>.49THEN 8290
    if(P0_int>0.49)goto Lbl_08290;
    // 08250 LET P2=P2+1
    P2_int = P2_int+1;
    // 08260 PRINT"FOUL BUNT, STRIKE"P2
    b2c_fprintf(stdout,"FOUL BUNT, STRIKE %d ",P2_int); b2c_fprintf(stdout,"\n");
    // 08270 IF P2<3 THEN 7930
    if(P2_int<3)goto Lbl_07930;
    // 08280 GOTO 8840
    goto Lbl_08840;

  Lbl_08290:
    // 08290 IF P0>.56THEN 8370
    if(P0_int>0.56)goto Lbl_08370;
    // 08300 PRINT"BAD BUNT, RIGHT BACK AT A FIELDER"
    b2c_fprintf(stdout,"BAD BUNT, RIGHT BACK AT A FIELDER"); b2c_fprintf(stdout,"\n");
    // 08310 LET J=15
    j = 15;
    // 08320 IF P4=0 THEN 4910
    if(P4_int==0)goto Lbl_04910;
    // 08330 LET P5=1
    P5_int = 1;
    // 08340 PRINT"NO PLAY AT HOME"
    b2c_fprintf(stdout,"NO PLAY AT HOME"); b2c_fprintf(stdout,"\n");
    // 08350 LET B(3)=0
    B_int_arr[(int)3] = 0;
    // 08360 GOTO 4910
    goto Lbl_04910;

  Lbl_08370:
    // 08370 IF P0>P3 THEN 8760
    if(P0_int>P3_flt)goto Lbl_08760;
    // 08380 PRINT"GOOD SACRIFICE BUNT"
    b2c_fprintf(stdout,"GOOD SACRIFICE BUNT"); b2c_fprintf(stdout,"\n");
    // 08390 IF B(3)>0 THEN 8430
    if(B_int_arr[(int)3]>0)goto Lbl_08430;
    // 08400 LET D=1
    D_int = 1;
    // 08410 GOSUB 9100
    Routine_09100();
    // 08420 GOTO 8840
    goto Lbl_08840;

  Lbl_08430:
    // 08430 IF P4=1 THEN 8660
    if(P4_int==1)goto Lbl_08660;
    // 08440 IF B(1)*B(2)=0 THEN 8620
    if(B_int_arr[(int)1]*B_int_arr[(int)2]==0)goto Lbl_08620;
    // 08450 LET B(3)=0
    B_int_arr[(int)3] = 0;
    // 08460 LET D=1
    D_int = 1;
    // 08470 GOSUB 9100
    Routine_09100();
    // 08480 PRINT"DO YOU TRY FOR A FORCEOUT AT HOME?"
    b2c_fprintf(stdout,"DO YOU TRY FOR A FORCEOUT AT HOME?"); b2c_fprintf(stdout,"\n");
    // 08490 PRINT"CHANCE=.75. IF YOU TYPE 'NO', BATTER IS OUT";
    b2c_fprintf(stdout,"CHANCE=.75. IF YOU TYPE 'NO', BATTER IS OUT"); 
    // 08500 INPUT T$
    // Start of Basic INPUT statement 08500
    printf(" ? ");
    char inpbuf_08500[100];
    if(fgets(inpbuf_08500,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_08500=strtok(inpbuf_08500," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_08500==nullptr){
            T_str = "";
        }else{
            T_str = ps_08500;
        };
    }; // End of Basic INPUT statement 08500
    // 08510 IF T$<>"N" THEN 8540
    if(strcmp(T_str,"N")!=0)goto Lbl_08540;
    // 08520 LET P5=1
    P5_int = 1;
    // 08530 GOTO 8840
    goto Lbl_08840;

  Lbl_08540:
    // 08540 PRINT N$(B(0))" ON FIRST"
    b2c_fprintf(stdout,"%s ON FIRST",TeamPlayerName[(int)B_int_arr[(int)0]]); b2c_fprintf(stdout,"\n");
    // 08550 LET B(1)=B(0)
    B_int_arr[(int)1] = B_int_arr[(int)0];
    // 08560 IF RND<.75 THEN 8600
    if(RND()<0.75)goto Lbl_08600;
    // 08570 PRINT"SAFE AT HOME"
    b2c_fprintf(stdout,"SAFE AT HOME"); b2c_fprintf(stdout,"\n");
    // 08580 GOSUB 9000
    Routine_09000();
    // 08590 GOTO 1960
    goto Lbl_01960;

  Lbl_08600:
    // 08600 PRINT"OUT AT THE PLATE"
    b2c_fprintf(stdout,"OUT AT THE PLATE"); b2c_fprintf(stdout,"\n");
    // 08610 GOTO 8840
    goto Lbl_08840;

  Lbl_08620:
    // 08620 PRINT"DO YOU TRY TO KEEP THE RUN FROM SCORING(IF YOU DO,"
    b2c_fprintf(stdout,"DO YOU TRY TO KEEP THE RUN FROM SCORING(IF YOU DO,"); b2c_fprintf(stdout,"\n");
    // 08630 PRINT"BATTER IS SAFE)";
    b2c_fprintf(stdout,"BATTER IS SAFE)"); 
    // 08640 INPUT T$
    // Start of Basic INPUT statement 08640
    printf(" ? ");
    char inpbuf_08640[100];
    if(fgets(inpbuf_08640,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_08640=strtok(inpbuf_08640," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_08640==nullptr){
            T_str = "";
        }else{
            T_str = ps_08640;
        };
    }; // End of Basic INPUT statement 08640
    // 08650 IF T$="Y" THEN 8690
    if(strcmp(T_str,"Y")==0)goto Lbl_08690;

  Lbl_08660:
    // 08660 LET M1=1
    M1_int = 1;
    // 08670 LET O3=1
    O3_int = 1;
    // 08680 GOTO 8840
    goto Lbl_08840;

  Lbl_08690:
    // 08690 IF B(2)>0 THEN 8730
    if(B_int_arr[(int)2]>0)goto Lbl_08730;
    // 08700 LET I=1
    i = 1;
    // 08710 LET D=1
    D_int = 1;
    // 08720 GOSUB 9150
    Routine_09150();

  Lbl_08730:
    // 08730 PRINT N$(B(0))" ON FIRST"
    b2c_fprintf(stdout,"%s ON FIRST",TeamPlayerName[(int)B_int_arr[(int)0]]); b2c_fprintf(stdout,"\n");
    // 08740 LET B(1)=B(0)
    B_int_arr[(int)1] = B_int_arr[(int)0];
    // 08750 GOTO 1960
    goto Lbl_01960;

  Lbl_08760:
    // 08760 PRINT"BUNT SINGLE--"N$(B(0))" ON FIRST"
    b2c_fprintf(stdout,"BUNT SINGLE--%s ON FIRST",TeamPlayerName[(int)B_int_arr[(int)0]]); b2c_fprintf(stdout,"\n");
    // 08770 LET D=1
    D_int = 1;
    // 08780 GOSUB 9100
    Routine_09100();
    // 08790 LET B(1)=B(0)
    B_int_arr[(int)1] = B_int_arr[(int)0];
    // 08800 GOTO 1960
    goto Lbl_01960;

  Lbl_08810:
    // 08810 PRINT"GAME IS OVER***"
    b2c_fprintf(stdout,"GAME IS OVER***"); b2c_fprintf(stdout,"\n");
    // 08820 PRINT"FINAL SCORE:",N$(0);S(0,8),N$(10);S(10,8)
    b2c_fprintf(stdout,"FINAL SCORE:@%s %d @%s %d ",TeamPlayerName[(int)0],S_int_arr[(int)0][(int)8],TeamPlayerName[(int)10],S_int_arr[(int)10][(int)8]); b2c_fprintf(stdout,"\n");
    // 08830 STOP
    exit(1);

  Lbl_08840:
    // 08840 LET O1=0
    O1_int = 0;
    // 08850 LET O=O+O2
    O_int = O_int+O2_int;
    // 08860 LET O2=1
    O2_int = 1;
    // 08870 IF O>2 THEN 8930
    if(O_int>2)goto Lbl_08930;
    // 08880 IF O=2 THEN 8910
    if(O_int==2)goto Lbl_08910;
    // 08890 PRINT"ONE OUT"
    b2c_fprintf(stdout,"ONE OUT"); b2c_fprintf(stdout,"\n");
    // 08900 GOTO 1960
    goto Lbl_01960;

  Lbl_08910:
    // 08910 PRINT "TWO OUTS"
    b2c_fprintf(stdout,"TWO OUTS"); b2c_fprintf(stdout,"\n");
    // 08920 GOTO 1960
    goto Lbl_01960;

  Lbl_08930:
    // 08930 IF I2<9 THEN 1850
    if(I2_int<9)goto Lbl_01850;
    // 08940 IF T=1 THEN 8970
    if(T_int==1)goto Lbl_08970;
    // 08950 IF S(10,8)>S(0,8) THEN 8810
    if(S_int_arr[(int)10][(int)8]>S_int_arr[(int)0][(int)8])goto Lbl_08810;
    // 08960 GOTO 1850
    goto Lbl_01850;

  Lbl_08970:
    // 08970 IF S(10,8)=S(0,8) THEN 1850
    if(S_int_arr[(int)10][(int)8]==S_int_arr[(int)0][(int)8])goto Lbl_01850;
    // 08980 GOTO 8810
    goto Lbl_08810;
    // 08990 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
