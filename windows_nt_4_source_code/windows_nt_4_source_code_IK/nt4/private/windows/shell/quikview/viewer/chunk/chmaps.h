#ifdef	WINDOWS
BYTE	Mac2Win[128] = {
/*	   0	1    2	  3    4    5	 6    7    8	9   */
/*	  ---  ---  ---  ---  ---  ---	---  ---  ---  ---  */
/*120*/ 					  196, 197,
/*130*/   199, 201, 209, 214, 220, 225, 224, 226, 228, 227,
/*140*/   229, 231, 233, 232, 234, 235, 237, 236, 238, 239,
/*150*/   241, 243, 242, 244, 246, 245, 250, 249, 251, 252,
/*160*/   134, 176, 162, 163, 167, 149, 182, 223, 174, 169,
/*170*/   153, 180, 168, 1,   198, 216, 1,   177, 1,   1,
/*180*/   165, 181, 1,	 1,   1,   1,	1,   170, 186, 1,
/*190*/   230, 248, 191, 161, 172, 1,	131, 1,   1,   171,
/*200*/   187, 133, 1,	 192, 195, 213, 140, 156, 150, 151,
/*210*/   34,  34,  39,  39,  247, 1,	255, 159, 47,  164,
/*220*/   139, 155, 1,	 1,   135, 149, 130, 132, 137, 194,
/*230*/   202, 193, 203, 200, 205, 206, 207, 204, 211, 212,
/*240*/   1,   210, 218, 219, 217, 185, 136, 152, 175, 1,
/*250*/   1,   176, 184, 1,   1,   1
};

/*
|	Old smart quote to True Type
| Changed to regular quotes for grammar checkers sake
|	210	  147, 148, 145, 146, 1,   1,	255, 159, 47,  164,
*/

BYTE	DCA2Win[512] = {
	/*		  0	1     2     3	  4	5     6	  7	  8     9	  A	B     C     D	  E	F      */
	/* 0x00*/	  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, /*40*/
	/* 0x10*/	  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, /*40*/
	/* 0x20*/	  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, /*40*/
	/* 0x20*/	  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, /*40*/
	/* 0x40 */	  0x20, 0x20, 0xe2, 0xe4, 0xe0, 0xe1, 0xe3, 0xe5, 0xe7, 0xf1, 0x5b, 0x2e, 0x3c, 0x28, 0x2b, 0x21, /*40*/
	/* 0x50 */	  0x26, 0xe9, 0xea, 0xeb, 0xe8, 0xed, 0xee, 0xef, 0xec, 0xdf, 0x5d, 0x24, 0x2a, 0x29, 0x3b, 0x5e, /*50*/
	/* 0x60 */	  0x2d, 0x2f, 0xc2, 0xc4, 0xc0, 0xc1, 0xc3, 0xc5, 0xc7, 0xd1, 0x7c, 0x2c, 0x25, 0x5f, 0x3e, 0x3f, /*60*/
	/* 0x70 */	  0xf8, 0xc9, 0xca, 0xcb, 0xc8, 0xcd, 0xce, 0xcf, 0xcc, 0x60, 0x3a, 0x23, 0x40, 0x27, 0x3d, 0x22, /*70*/
	/* 0x80 */    0xd8, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0xab, 0xbb, 0xf0, 0xfd, 0xfe, 0xb1, /*80*/
	/* 0x90 */	  0xb0, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f, 0x70, 0x71, 0x72, 0xaa, 0xba, 0xe6, 0xb8, 0xc6, 0xa4, /*90*/
	/* 0xA0 */	  0xb5, 0x7e, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7a, 0xa1, 0xbf, 0xd0, 0xdd, 0xfe, 0xae, /*A0*/
	/* 0xB0 */	  0xa2, 0xa3, 0xa5, 0x01, 0x01, 0xa7, 0xb6, 0xbc, 0xbd, 0xbe, 0xac, 0x7c, 0xaf, 0xa8, 0xb4, 0x3d, /*B0*/
	/* 0xC0 */	  0x7b, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x2d, 0xf4, 0xf6, 0xf2, 0xf3, 0xf5, /*C0*/
	/* 0xD0 */	  0x7d, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x51, 0x52, 0x01, 0xfb, 0xfc, 0xf9, 0xfa, 0xff, /*D0*/
	/* 0xE0 */	  0x5c, 0x20, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0xb2, 0xd4, 0xd6, 0xd2, 0xd3, 0xd5, /*E0*/
	/* 0xF0 */    0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0xb3, 0xdb, 0xdc, 0xd9, 0xda, 0x01,	/*F0*/

// Page 2
 	/*			    0	  1	2     3     4	  5	6     7     8	  9	A     B     C	  D	E	    F       */
	/* 0x100 */	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,   /*100*/
	/* 0x110 */	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,   /*110*/
	/* 0x120 */	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,   /*120*/
	/* 0x120 */	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,   /*130*/
	/* 0x140 */ 0x20,	0x20,	0x3d,	0x2d,	0x2b,	0x01,	0x01,	0x01,	0x01,	0x2f,	0x5b,	0x01,	0x3c,	0x28,	0xa9,	0x01,   /*140*/
	/* 0x150 */ 0x01,	0x01,	0x3c,	0x3e,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x5d,	0xb7,	0x01,	0x29,	0xa8,	0x01,   /*150*/
	/* 0x160 */ 0x2d,	0x01,	0x01,	0x01,	0x01,	0x01,	0x3c,	0x3e,	0x01,	0xa4,	0xb4,	0x01,	0x01,	0x5f,	0x3e,	0x01,   /*160*/
	/* 0x170 */ 0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01, 0xf7,	0xb1,	0xb0,	0xb4,	0x22,	0xae,	  /*170*/
	/* 0x180 */ 0x3d,	0x01,	0xdf,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,   /*180*/
	/* 0x190 */ 0x01,	0x01,	0x01,	0x01,	0xb5,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,   /*190*/
	/* 0x1A0 */ 0x01,	0x7e,	0x01,	0x01,	0x01,	0xd7,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,   /*1A0*/
	/* 0x1B0 */ 0x01,	0xb9,	0xb2,	0xb3,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0xa3,	0xa4,	0xa5,   /*1B0*/
	/* 0x1C0 */ 0x7b,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0xb6,	0x01,	0x2d,	0x01,	0x01,	0x01,	0x01,	0x01,   /*1C0*/
	/* 0x1D0 */ 0x7d,	0x3d,	0xa7,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x2d,	0x01,	0x01,   /*1D0*/
	/* 0x1E0 */ 0x5c,	0x20,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,   /*1E0*/
	/* 0x1F0 */ 0x01,	0xb9,	0xb2,	0xb3,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01    /*1F0*/
};


#endif


#ifdef MAC
BYTE	Win2Mac[256] = {
/*	     0	   1	 2     3     4	   5	 6     7     8	   9   */

/*  0*/      0,    1,	 2,    3,    4,    5,	 6,    7,    8,    9,
/* 10*/     10,   11,	12,   13,   14,   15,	16,   17,   18,   19,
/* 20*/     20,   21,	22,   23,   24,   25,	26,   27,   28,   29,
/* 30*/     30,   31,	32,   33,   34,   35,	36,   37,   38,   39,
/* 40*/     40,   41,	42,   43,   44,   45,	46,   47,   48,   49,
/* 50*/     50,   51,	52,   53,   54,   55,	56,   57,   58,   59,
/* 60*/     60,   61,	62,   63,   64,   65,	66,   67,   68,   69,
/* 70*/     70,   71,	72,   73,   74,   75,	76,   77,   78,   79,
/* 80*/     80,   81,	82,   83,   84,   85,	86,   87,   88,   89,
/* 90*/     90,   91,	92,   93,   94,   95,	96,   97,   98,   99,
/*100*/    100,  101,  102,  103,  104,  105,  106,  107,  108,  109,
/*110*/    110,  111,  112,  113,  114,  115,  116,  117,  118,  119,
/*120*/    120,  121,  122,  123,  124,  125,  126,  127,  		
			 					  		 		 		 		 		 		 		
/*	     0	   1	 2     3     4	   5	 6     7     8	   9   */
/*120*/ 						     1,    1,
/*130*/      1,    1,	 1,    1,    1,    1,	 1,    1,    1,    1,
/*140*/      1,    1,	 1,    1,    1, 0xd4, 0xd5,    1,    1,    1,
/*150*/      1,    1,	 1,    1,    1,    1,	 1,    1,    1,    1,
/*160*/   0x20, 0xc1, 0xa2, 0xa3, 0xdb, 0xb4,	 1, 0xa4, 0xac, 0xa9,
/*170*/   0xbb, 0xc7, 0xc2, 0xd0, 0xa8, 0xd1, 0xa5, 0xb1,    1,    1,
/*180*/   0xab, 0xb5, 0xa6, 0xa1,    1,    1, 0xbc, 0xc8,    1,    1,
/*190*/      1, 0xc0, 0xcb, 0xe7, 0xe5, 0xcc, 0x80, 0x81, 0xae, 0x82,
/*200*/   0xe9, 0x83, 0xe6, 0xe8, 0xed, 0xea, 0xeb, 0xec,    1, 0x84,
/*210*/   0xf1, 0xee, 0xef, 0xcd, 0x85,    1, 0xaf, 0xf4, 0xf2, 0xf3,
/*220*/   0x86,    1,	 1, 0xa7, 0x88, 0x87, 0x89, 0x8b, 0x8a, 0x8c,
/*230*/   0xce, 0x8d, 0x8f, 0x8e, 0x90, 0x91, 0x93, 0x92, 0x94, 0x95,
/*240*/   0xb6, 0x96, 0x98, 0x97, 0x99, 0x9b, 0x9a, 0xd6, 0xbf, 0x9d,
/*250*/   0x9c, 0x9e, 0x9f,    1,    1, 0xd8
};

BYTE	PC2Mac[256] = {
/*	   0	1    2	  3    4    5	 6    7    8	9   */
/*  0*/     1,	 1,   1, 169, 168, 167, 170, 183,   1,	 1,
/* 10*/     1,	  1,   1,   1,	1,   1,   1,   1,   1,	 1,
/* 20*/   166, 164,	 1,   1, 173, 175, 174, 172,   1, 171,	
/* 30*/     1,	 1,  32,  33,  34,  35,  36,  37,  38,	39,
/* 40*/    40,	41,  42,  43,  44,  45,  46,  47,  48,	49,
/* 50*/    50,	51,  52,  53,  54,  55,  56,  57,  58,	59,
/* 60*/    60,	61,  62,  63,  64,  65,  66,  67,  68,	69,
/* 70*/    70,	71,  72,  73,  74,  75,  76,  77,  78,	79,
/* 80*/    80,	81,  82,  83,  84,  85,  86,  87,  88,	89,
/* 90*/    90,	91,  92,  93,  94,  95,  96,  97,  98,	99,
/*100*/   100, 101, 102, 103, 104, 105, 106, 107, 108, 109,
/*110*/   110, 111, 112, 113, 114, 115, 116, 117, 118, 119,
/*120*/   120, 121, 122, 123, 124, 125, 126, 127,

/*120*/ 					  130, 159,
/*130*/   142, 137, 138, 136, 140, 141, 144, 145, 143, 149,
/*140*/   148, 147, 128, 129, 131, 190, 174, 153, 154, 152,
/*150*/   158, 157, 216, 133, 134, 162, 163, 180,   1,	 1,
/*160*/   135, 146, 151, 156, 150, 132, 187, 188, 192,	 1,
/*170*/   194,	 1,   1, 193, 199, 200,   1,   1,   1, 189,
/*180*/     1,	 1,   1,   1,	1,   1,   1,   1,   1,	 1,	
/*190*/     1,	 1,   1,  94,	1,   1, 190,   1,   1,	 1,
/*200*/     1,	 1,   1,   1,	1,   1,   1,   1,   1,	 1,
/*210*/     1,	 1,   1,   1,	1,   1,   1,   1,   1,	 1,
/*220*/     1,	 1,   1,   1, 181,  0xA7,  71, 185,  83, 115,
/*230*/   109, 116,  70,  81, 189, 100, 176,   1, 206, 199,
/*240*/   186, 177, 179, 178, 243, 245, 214, 197, 161,	 1,
/*250*/   225, 195,   1,   1,	1,   1,
};


BYTE	DCA2Mac[512] = {
 	/*			      0	   1	 2     3     4	   5	 6     7     8	   9	 A     B     C	   D	 E	 F	    */
	/* 0x00 */    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, /*00*/
	/* 0x10 */    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, /*10*/
	/* 0x20 */    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, /*20*/
	/* 0x30 */    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, /*30*/
	/* 0x40 */    0x20, 0x20, 0x89, 0x8a, 0x88, 0x87, 0x8b, 0x8c, 0x8d, 0x96, 0x5b, 0x2e, 0x3c, 0x28, 0x2b, 0x21, /*40*/
	/* 0x50 */    0x26, 0x8e, 0x90, 0x91, 0x9f, 0x92, 0x94, 0x95, 0x93, 0xa7, 0x5d, 0x24, 0x2a, 0x29, 0x3b, 0x5e, /*50*/
	/* 0x60 */    0x2d, 0x2f, 0x01, 0x80, 0xcb, 0x01, 0xcc, 0x81, 0x82, 0x84, 0x7c, 0x2c, 0x25, 0x5f, 0x3e, 0x3f, /*60*/
	/* 0x70 */    0xbf, 0x83, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x60, 0x3a, 0x23, 0x40, 0x27, 0x3d, 0x22, /*70*/
	/* 0x80 */    0xaf, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0xc7, 0xc8, 0x01, 0x01, 0x01, 0xb1, /*80*/
	/* 0x90 */    0xa1, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f, 0x70, 0x71, 0x72, 0xbb, 0xbc, 0xbe, 0x01, 0xae, 0x01, /*90*/
	/* 0xA0 */    0xb5, 0x7e, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7a, 0xc1, 0xc0, 0x01, 0x01, 0x01, 0xa8, /*A0*/
	/* 0xB0 */    0xa2, 0xa3, 0xb4, 0x01, 0xc4, 0xa4, 0xa6, 0x01, 0x01, 0x01, 0xc2, 0x7c, 0x01, 0xac, 0xab, 0x01, /*B0*/
	/* 0xC0 */    0x7b, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x2d, 0x99, 0x9a, 0x98, 0x97, 0x9b, /*C0*/
	/* 0xD0 */    0x7d, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x51, 0x52, 0x01, 0x9e, 0x9f, 0x9d, 0x9c, 0x01, /*D0*/
	/* 0xE0 */    0x5c, 0x20, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x01, 0x01, 0x85, 0x01, 0x01, 0xcd, /*E0*/
	/* 0xF0 */    0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x01, 0x86, 0x01, 0x01, 0x01, 0x01, /*F0*/

// Page 2
	/* 0x100 */   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, /*0x100*/
	/* 0x110 */   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, /*0x110*/
	/* 0x120 */   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, /*0x120*/
	/* 0x130 */   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, /*0x130*/
	/* 0x140 */   0x20, 0x20, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x5b, 0xa0, 0x3c, 0x28, 0xa9, 0xc3, /*0x140*/
	/* 0x150 */   0xb2, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x5d, 0x01, 0xad, 0x29, 0xac, 0x01, /*0x150*/
	/* 0x160 */   0x2d, 0xb3, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x27, 0x01, 0x01, 0x5f, 0x3e, 0xba, /*0x160*/
	/* 0x170 */   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x60, 0xd6, 0xb1, 0xa1, 0xab, 0x22, 0xa8, /*0x170*/
	/* 0x180 */   0x01, 0x01, 0xa7, 0x01, 0x01, 0x01, 0xb9, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, /*0x180*/
	/* 0x190 */   0x01, 0x01, 0x01, 0x01, 0xb5, 0x01, 0x01, 0x01, 0x01, 0x01, 0xc2, 0xc5, 0xc1, 0x04, 0x01, 0x01, /*0x190*/
	/* 0x1A0 */   0x01, 0x7e, 0x01, 0x01, 0x01, 0x01, 0xb6, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, /*0x1A0*/
	/* 0x1B0 */   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xa5, 0xa3, 0x01, 0xb4, /*0x1B0*/
	/* 0x1C0 */   0x7b, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xa6, 0x01, 0x2d, 0x01, 0x01, 0x01, 0x7c, 0x01, /*0x1C0*/
	/* 0x1D0 */   0x7d, 0x01, 0xa4, 0xbd, 0x01, 0x7e, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, /*0x1D0*/
	/* 0x1E0 */   0x5c, 0x20, 0xb7, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xc2, 0x01, 0x01, 0x01, 0x01, /*0x1E0*/
	/* 0x1F0 */   0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xaf, 0x01, 0x01, 0x01, 0x01, 0x01
};

#endif


#ifdef	OS2
BYTE	Mac2Win[128] = {

/*	   0	1    2	  3    4    5	 6    7    8	9   */
/*	  ---  ---  ---  ---  ---  ---	---  ---  ---  ---  */
/*120*/ 					  196, 197,
/*130*/   199, 201, 209, 214, 220, 225, 224, 226, 228, 227,
/*140*/   229, 231, 233, 232, 234, 235, 237, 236, 238, 239,
/*150*/   241, 243, 242, 244, 246, 245, 250, 249, 251, 252,
/*160*/   134, 176, 162, 163, 167, 149, 182, 223, 174, 169,
/*170*/   153, 180, 168, 1,   198, 216, 1,   177, 1,   1,
/*180*/   165, 181, 1,	 1,   1,   1,	1,   170, 186, 1,
/*190*/   230, 248, 191, 161, 172, 1,	131, 1,   1,   171,
/*200*/   187, 133, 1,	 192, 195, 213, 140, 156, 150, 151,
/*210*/   34,  34,  39,  39,  247, 1,	255, 159, 47,  164,
/*220*/   139, 155, 1,	 1,   135, 149, 130, 132, 137, 194,
/*230*/   202, 193, 203, 200, 205, 206, 207, 204, 211, 212,
/*240*/   1,   210, 218, 219, 217, 185, 136, 152, 175, 1,
/*250*/   1,   176, 184, 1,   1,   1
};

/*
|	Old smart quote to True Type
| Changed to regular quotes for grammar checkers sake
|	210	  147, 148, 145, 146, 1,   1,	255, 159, 47,  164,
*/

BYTE	DCA2Win[512] = {
	/*		  0	1     2     3	  4	5     6	  7	  8     9	  A	B     C     D	  E	F      */
	/* 0x00*/	  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, /*40*/
	/* 0x10*/	  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, /*40*/
	/* 0x20*/	  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, /*40*/
	/* 0x20*/	  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, /*40*/
	/* 0x40 */	  0x20, 0x20, 0xe2, 0xe4, 0xe0, 0xe1, 0xe3, 0xe5, 0xe7, 0xf1, 0x5b, 0x2e, 0x3c, 0x28, 0x2b, 0x21, /*40*/
	/* 0x50 */	  0x26, 0xe9, 0xea, 0xeb, 0xe8, 0xed, 0xee, 0xef, 0xec, 0xdf, 0x5d, 0x24, 0x2a, 0x29, 0x3b, 0x5e, /*50*/
	/* 0x60 */	  0x2d, 0x2f, 0xc2, 0xc4, 0xc0, 0xc1, 0xc3, 0xc5, 0xc7, 0xd1, 0x7c, 0x2c, 0x25, 0x5f, 0x3e, 0x3f, /*60*/
	/* 0x70 */	  0xf8, 0xc9, 0xca, 0xcb, 0xc8, 0xcd, 0xce, 0xcf, 0xcc, 0x60, 0x3a, 0x23, 0x40, 0x27, 0x3d, 0x22, /*70*/
	/* 0x80 */    0xd8, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0xab, 0xbb, 0xf0, 0xfd, 0xfe, 0xb1, /*80*/
	/* 0x90 */	  0xb0, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f, 0x70, 0x71, 0x72, 0xaa, 0xba, 0xe6, 0xb8, 0xc6, 0xa4, /*90*/
	/* 0xA0 */	  0xb5, 0x7e, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7a, 0xa1, 0xbf, 0xd0, 0xdd, 0xfe, 0xae, /*A0*/
	/* 0xB0 */	  0xa2, 0xa3, 0xa5, 0x01, 0x01, 0xa7, 0xb6, 0xbc, 0xbd, 0xbe, 0xac, 0x7c, 0xaf, 0xa8, 0xb4, 0x3d, /*B0*/
	/* 0xC0 */	  0x7b, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x2d, 0xf4, 0xf6, 0xf2, 0xf3, 0xf5, /*C0*/
	/* 0xD0 */	  0x7d, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x51, 0x52, 0x01, 0xfb, 0xfc, 0xf9, 0xfa, 0xff, /*D0*/
	/* 0xE0 */	  0x5c, 0x20, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0xb2, 0xd4, 0xd6, 0xd2, 0xd3, 0xd5, /*E0*/
	/* 0xF0 */    0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0xb3, 0xdb, 0xdc, 0xd9, 0xda, 0x01,	/*F0*/

// Page 2
 	/*			    0	  1	2     3     4	  5	6     7     8	  9	A     B     C	  D	E	    F       */
	/* 0x100 */	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,   /*100*/
	/* 0x110 */	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,   /*110*/
	/* 0x120 */	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,   /*120*/
	/* 0x120 */	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,   /*130*/
	/* 0x140 */ 0x20,	0x20,	0x3d,	0x2d,	0x2b,	0x01,	0x01,	0x01,	0x01,	0x2f,	0x5b,	0x01,	0x3c,	0x28,	0xa9,	0x01,   /*140*/
	/* 0x150 */ 0x01,	0x01,	0x3c,	0x3e,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x5d,	0xb7,	0x01,	0x29,	0xa8,	0x01,   /*150*/
	/* 0x160 */ 0x2d,	0x01,	0x01,	0x01,	0x01,	0x01,	0x3c,	0x3e,	0x01,	0xa4,	0xb4,	0x01,	0x01,	0x5f,	0x3e,	0x01,   /*160*/
	/* 0x170 */ 0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01, 0xf7,	0xb1,	0xb0,	0xb4,	0x22,	0xae,	  /*170*/
	/* 0x180 */ 0x3d,	0x01,	0xdf,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,   /*180*/
	/* 0x190 */ 0x01,	0x01,	0x01,	0x01,	0xb5,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,   /*190*/
	/* 0x1A0 */ 0x01,	0x7e,	0x01,	0x01,	0x01,	0xd7,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,   /*1A0*/
	/* 0x1B0 */ 0x01,	0xb9,	0xb2,	0xb3,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0xa3,	0xa4,	0xa5,   /*1B0*/
	/* 0x1C0 */ 0x7b,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0xb6,	0x01,	0x2d,	0x01,	0x01,	0x01,	0x01,	0x01,   /*1C0*/
	/* 0x1D0 */ 0x7d,	0x3d,	0xa7,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x2d,	0x01,	0x01,   /*1D0*/
	/* 0x1E0 */ 0x5c,	0x20,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,   /*1E0*/
	/* 0x1F0 */ 0x01,	0xb9,	0xb2,	0xb3,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01    /*1F0*/
};


#endif














