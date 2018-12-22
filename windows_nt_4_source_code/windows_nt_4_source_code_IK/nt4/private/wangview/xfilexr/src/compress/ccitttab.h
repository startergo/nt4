/*
$Id: ccitttab.h,v 3.2 1994/08/05 14:50:10 danis Exp $
*/
/* Trade secret of Kurzweil Computer Products, Inc.
   Copyright 1987 Kurzweil Computer Products, Inc.  All rights reserved.
   This notice is intended as a precaution against inadvertant publication and
   does not imply publication or any waiver of confidentiality.  The year
   included in the foregoing notice is the year of creation of the work.
*/
/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
$Log:   S:\products\msprods\xfilexr\src\compress\ccitttab.h_v  $
 * 
 *    Rev 1.0   12 Jun 1996 05:50:02   BLDR
 *  
 * 
 *    Rev 1.0   01 Jan 1996 11:15:32   MHUGHES
 * Initial revision.
 * 
 *    Rev 1.1   14 Sep 1995 16:55:12   LUKE
 * No change.
 * 
 *    Rev 1.0   16 Jun 1995 17:37:00   EHOPPE
 * Initial revision.
 * 
 *    Rev 1.2   08 Mar 1995 11:08:32   EHOPPE
 * Latest rev from danis@xis.  Includes buffering control and G32D suuport.
 * Revision 3.2  1994/08/05  14:50:10  danis
 * 	Tables changed to accomodate fill between last codeword and
 * 	EOL code for Group III FAX.
 *
 * Revision 3.1  1994/01/21  22:29:04  danis
 * 	Changed name of ccitt_tab.h to ccitttab.h
 *
 * Revision 3.3  1994/01/20  15:30:24  danis
 * 	Added more comments.
 *
 * Revision 3.2  1994/01/20  15:19:09  danis
 * 	Added a comment about reproducing these tables from the more
 * 	obvious Group III runlength code tables.
 *
 * Revision 3.1  1993/11/19  20:57:06  danis
 * 	Tables for fast Group III decompression.
 *
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
*/

/* The new Group III decompressor uses these tables. I should */
/* really generate them from a more compact representation    */
/* at run time to save distribution medium space. If I don't  */
/* get back to this, let me know. If something should happen  */
/* to me, code that generates these  tables from more compact */
/* tables ( the compact tables are essentially the tables     */
/* listed in Table I and Table II of the TIFF 6.0 spec and    */ 
/* also in the T.4 specification) is in :                     */
/*                                    /us/tdev/tables/ccitt/  */ 
/*                                                            */
/*                                             danis          */
struct ccitt_lookup table1_white[] = {
	{0,8,9},
	{0,8,8},
	{29,8,-1},
	{30,8,-1},
	{45,8,-1},
	{46,8,-1},
	{22,7,-1},
	{22,7,-1},
	{23,7,-1},
	{23,7,-1},
	{47,8,-1},
	{48,8,-1},
	{13,6,-1},
	{13,6,-1},
	{13,6,-1},
	{13,6,-1},
	{20,7,-1},
	{20,7,-1},
	{33,8,-1},
	{34,8,-1},
	{35,8,-1},
	{36,8,-1},
	{37,8,-1},
	{38,8,-1},
	{19,7,-1},
	{19,7,-1},
	{31,8,-1},
	{32,8,-1},
	{1,6,-1},
	{1,6,-1},
	{1,6,-1},
	{1,6,-1},
	{12,6,-1},
	{12,6,-1},
	{12,6,-1},
	{12,6,-1},
	{53,8,-1},
	{54,8,-1},
	{26,7,-1},
	{26,7,-1},
	{39,8,-1},
	{40,8,-1},
	{41,8,-1},
	{42,8,-1},
	{43,8,-1},
	{44,8,-1},
	{21,7,-1},
	{21,7,-1},
	{28,7,-1},
	{28,7,-1},
	{61,8,-1},
	{62,8,-1},
	{63,8,-1},
	{0,8,-1},
	{320,8,-2},
	{384,8,-2},
	{10,5,-1},
	{10,5,-1},
	{10,5,-1},
	{10,5,-1},
	{10,5,-1},
	{10,5,-1},
	{10,5,-1},
	{10,5,-1},
	{11,5,-1},
	{11,5,-1},
	{11,5,-1},
	{11,5,-1},
	{11,5,-1},
	{11,5,-1},
	{11,5,-1},
	{11,5,-1},
	{27,7,-1},
	{27,7,-1},
	{59,8,-1},
	{60,8,-1},
	{0,8,6},
	{0,8,7},
	{18,7,-1},
	{18,7,-1},
	{24,7,-1},
	{24,7,-1},
	{49,8,-1},
	{50,8,-1},
	{51,8,-1},
	{52,8,-1},
	{25,7,-1},
	{25,7,-1},
	{55,8,-1},
	{56,8,-1},
	{57,8,-1},
	{58,8,-1},
	{192,6,-2},
	{192,6,-2},
	{192,6,-2},
	{192,6,-2},
	{1664,6,-2},
	{1664,6,-2},
	{1664,6,-2},
	{1664,6,-2},
	{448,8,-2},
	{512,8,-2},
	{0,8,0},
	{640,8,-2},
	{576,8,-2},
	{0,8,1},
	{0,8,2},
	{0,8,3},
	{0,8,4},
	{0,8,5},
	{256,7,-2},
	{256,7,-2},
	{2,4,-1},
	{2,4,-1},
	{2,4,-1},
	{2,4,-1},
	{2,4,-1},
	{2,4,-1},
	{2,4,-1},
	{2,4,-1},
	{2,4,-1},
	{2,4,-1},
	{2,4,-1},
	{2,4,-1},
	{2,4,-1},
	{2,4,-1},
	{2,4,-1},
	{2,4,-1},
	{3,4,-1},
	{3,4,-1},
	{3,4,-1},
	{3,4,-1},
	{3,4,-1},
	{3,4,-1},
	{3,4,-1},
	{3,4,-1},
	{3,4,-1},
	{3,4,-1},
	{3,4,-1},
	{3,4,-1},
	{3,4,-1},
	{3,4,-1},
	{3,4,-1},
	{3,4,-1},
	{128,5,-2},
	{128,5,-2},
	{128,5,-2},
	{128,5,-2},
	{128,5,-2},
	{128,5,-2},
	{128,5,-2},
	{128,5,-2},
	{8,5,-1},
	{8,5,-1},
	{8,5,-1},
	{8,5,-1},
	{8,5,-1},
	{8,5,-1},
	{8,5,-1},
	{8,5,-1},
	{9,5,-1},
	{9,5,-1},
	{9,5,-1},
	{9,5,-1},
	{9,5,-1},
	{9,5,-1},
	{9,5,-1},
	{9,5,-1},
	{16,6,-1},
	{16,6,-1},
	{16,6,-1},
	{16,6,-1},
	{17,6,-1},
	{17,6,-1},
	{17,6,-1},
	{17,6,-1},
	{4,4,-1},
	{4,4,-1},
	{4,4,-1},
	{4,4,-1},
	{4,4,-1},
	{4,4,-1},
	{4,4,-1},
	{4,4,-1},
	{4,4,-1},
	{4,4,-1},
	{4,4,-1},
	{4,4,-1},
	{4,4,-1},
	{4,4,-1},
	{4,4,-1},
	{4,4,-1},
	{5,4,-1},
	{5,4,-1},
	{5,4,-1},
	{5,4,-1},
	{5,4,-1},
	{5,4,-1},
	{5,4,-1},
	{5,4,-1},
	{5,4,-1},
	{5,4,-1},
	{5,4,-1},
	{5,4,-1},
	{5,4,-1},
	{5,4,-1},
	{5,4,-1},
	{5,4,-1},
	{14,6,-1},
	{14,6,-1},
	{14,6,-1},
	{14,6,-1},
	{15,6,-1},
	{15,6,-1},
	{15,6,-1},
	{15,6,-1},
	{64,5,-2},
	{64,5,-2},
	{64,5,-2},
	{64,5,-2},
	{64,5,-2},
	{64,5,-2},
	{64,5,-2},
	{64,5,-2},
	{6,4,-1},
	{6,4,-1},
	{6,4,-1},
	{6,4,-1},
	{6,4,-1},
	{6,4,-1},
	{6,4,-1},
	{6,4,-1},
	{6,4,-1},
	{6,4,-1},
	{6,4,-1},
	{6,4,-1},
	{6,4,-1},
	{6,4,-1},
	{6,4,-1},
	{6,4,-1},
	{7,4,-1},
	{7,4,-1},
	{7,4,-1},
	{7,4,-1},
	{7,4,-1},
	{7,4,-1},
	{7,4,-1},
	{7,4,-1},
	{7,4,-1},
	{7,4,-1},
	{7,4,-1},
	{7,4,-1},
	{7,4,-1},
	{7,4,-1},
	{7,4,-1},
	{7,4,-1},
};
struct ccitt_lookup table2_white[10][32] = {
{
	{704,4,-2},
	{704,4,-2},
	{704,4,-2},
	{704,4,-2},
	{704,4,-2},
	{704,4,-2},
	{704,4,-2},
	{704,4,-2},
	{704,4,-2},
	{704,4,-2},
	{704,4,-2},
	{704,4,-2},
	{704,4,-2},
	{704,4,-2},
	{704,4,-2},
	{704,4,-2},
	{768,4,-2},
	{768,4,-2},
	{768,4,-2},
	{768,4,-2},
	{768,4,-2},
	{768,4,-2},
	{768,4,-2},
	{768,4,-2},
	{768,4,-2},
	{768,4,-2},
	{768,4,-2},
	{768,4,-2},
	{768,4,-2},
	{768,4,-2},
	{768,4,-2},
	{768,4,-2},
},
{
	{832,4,-2},
	{832,4,-2},
	{832,4,-2},
	{832,4,-2},
	{832,4,-2},
	{832,4,-2},
	{832,4,-2},
	{832,4,-2},
	{832,4,-2},
	{832,4,-2},
	{832,4,-2},
	{832,4,-2},
	{832,4,-2},
	{832,4,-2},
	{832,4,-2},
	{832,4,-2},
	{896,4,-2},
	{896,4,-2},
	{896,4,-2},
	{896,4,-2},
	{896,4,-2},
	{896,4,-2},
	{896,4,-2},
	{896,4,-2},
	{896,4,-2},
	{896,4,-2},
	{896,4,-2},
	{896,4,-2},
	{896,4,-2},
	{896,4,-2},
	{896,4,-2},
	{896,4,-2},
},
{
	{960,4,-2},
	{960,4,-2},
	{960,4,-2},
	{960,4,-2},
	{960,4,-2},
	{960,4,-2},
	{960,4,-2},
	{960,4,-2},
	{960,4,-2},
	{960,4,-2},
	{960,4,-2},
	{960,4,-2},
	{960,4,-2},
	{960,4,-2},
	{960,4,-2},
	{960,4,-2},
	{1024,4,-2},
	{1024,4,-2},
	{1024,4,-2},
	{1024,4,-2},
	{1024,4,-2},
	{1024,4,-2},
	{1024,4,-2},
	{1024,4,-2},
	{1024,4,-2},
	{1024,4,-2},
	{1024,4,-2},
	{1024,4,-2},
	{1024,4,-2},
	{1024,4,-2},
	{1024,4,-2},
	{1024,4,-2},
},
{
	{1088,4,-2},
	{1088,4,-2},
	{1088,4,-2},
	{1088,4,-2},
	{1088,4,-2},
	{1088,4,-2},
	{1088,4,-2},
	{1088,4,-2},
	{1088,4,-2},
	{1088,4,-2},
	{1088,4,-2},
	{1088,4,-2},
	{1088,4,-2},
	{1088,4,-2},
	{1088,4,-2},
	{1088,4,-2},
	{1152,4,-2},
	{1152,4,-2},
	{1152,4,-2},
	{1152,4,-2},
	{1152,4,-2},
	{1152,4,-2},
	{1152,4,-2},
	{1152,4,-2},
	{1152,4,-2},
	{1152,4,-2},
	{1152,4,-2},
	{1152,4,-2},
	{1152,4,-2},
	{1152,4,-2},
	{1152,4,-2},
	{1152,4,-2},
},
{
	{1216,4,-2},
	{1216,4,-2},
	{1216,4,-2},
	{1216,4,-2},
	{1216,4,-2},
	{1216,4,-2},
	{1216,4,-2},
	{1216,4,-2},
	{1216,4,-2},
	{1216,4,-2},
	{1216,4,-2},
	{1216,4,-2},
	{1216,4,-2},
	{1216,4,-2},
	{1216,4,-2},
	{1216,4,-2},
	{1280,4,-2},
	{1280,4,-2},
	{1280,4,-2},
	{1280,4,-2},
	{1280,4,-2},
	{1280,4,-2},
	{1280,4,-2},
	{1280,4,-2},
	{1280,4,-2},
	{1280,4,-2},
	{1280,4,-2},
	{1280,4,-2},
	{1280,4,-2},
	{1280,4,-2},
	{1280,4,-2},
	{1280,4,-2},
},
{
	{1344,4,-2},
	{1344,4,-2},
	{1344,4,-2},
	{1344,4,-2},
	{1344,4,-2},
	{1344,4,-2},
	{1344,4,-2},
	{1344,4,-2},
	{1344,4,-2},
	{1344,4,-2},
	{1344,4,-2},
	{1344,4,-2},
	{1344,4,-2},
	{1344,4,-2},
	{1344,4,-2},
	{1344,4,-2},
	{1408,4,-2},
	{1408,4,-2},
	{1408,4,-2},
	{1408,4,-2},
	{1408,4,-2},
	{1408,4,-2},
	{1408,4,-2},
	{1408,4,-2},
	{1408,4,-2},
	{1408,4,-2},
	{1408,4,-2},
	{1408,4,-2},
	{1408,4,-2},
	{1408,4,-2},
	{1408,4,-2},
	{1408,4,-2},
},
{
	{1472,4,-2},
	{1472,4,-2},
	{1472,4,-2},
	{1472,4,-2},
	{1472,4,-2},
	{1472,4,-2},
	{1472,4,-2},
	{1472,4,-2},
	{1472,4,-2},
	{1472,4,-2},
	{1472,4,-2},
	{1472,4,-2},
	{1472,4,-2},
	{1472,4,-2},
	{1472,4,-2},
	{1472,4,-2},
	{1536,4,-2},
	{1536,4,-2},
	{1536,4,-2},
	{1536,4,-2},
	{1536,4,-2},
	{1536,4,-2},
	{1536,4,-2},
	{1536,4,-2},
	{1536,4,-2},
	{1536,4,-2},
	{1536,4,-2},
	{1536,4,-2},
	{1536,4,-2},
	{1536,4,-2},
	{1536,4,-2},
	{1536,4,-2},
},
{
	{1600,4,-2},
	{1600,4,-2},
	{1600,4,-2},
	{1600,4,-2},
	{1600,4,-2},
	{1600,4,-2},
	{1600,4,-2},
	{1600,4,-2},
	{1600,4,-2},
	{1600,4,-2},
	{1600,4,-2},
	{1600,4,-2},
	{1600,4,-2},
	{1600,4,-2},
	{1600,4,-2},
	{1600,4,-2},
	{1728,4,-2},
	{1728,4,-2},
	{1728,4,-2},
	{1728,4,-2},
	{1728,4,-2},
	{1728,4,-2},
	{1728,4,-2},
	{1728,4,-2},
	{1728,4,-2},
	{1728,4,-2},
	{1728,4,-2},
	{1728,4,-2},
	{1728,4,-2},
	{1728,4,-2},
	{1728,4,-2},
	{1728,4,-2},
},
{
	{1792,6,-2},
	{1792,6,-2},
	{1792,6,-2},
	{1792,6,-2},
	{1984,7,-2},
	{1984,7,-2},
	{2048,7,-2},
	{2048,7,-2},
	{2112,7,-2},
	{2112,7,-2},
	{2176,7,-2},
	{2176,7,-2},
	{2240,7,-2},
	{2240,7,-2},
	{2304,7,-2},
	{2304,7,-2},
	{1856,6,-2},
	{1856,6,-2},
	{1856,6,-2},
	{1856,6,-2},
	{1920,6,-2},
	{1920,6,-2},
	{1920,6,-2},
	{1920,6,-2},
	{2368,7,-2},
	{2368,7,-2},
	{2432,7,-2},
	{2432,7,-2},
	{2496,7,-2},
	{2496,7,-2},
	{2560,7,-2},
	{2560,7,-2},
},
{
	{-3,8,-4},
	{-3,8,-3},
	{-3,7,-3},
	{-3,7,-3},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
},
};
struct ccitt_lookup table1_black[] = {
	{0,8,7},
	{0,8,6},
	{0,8,4},
	{0,8,5},
	{13,8,-1},
	{0,8,2},
	{0,8,3},
	{14,8,-1},
	{10,7,-1},
	{10,7,-1},
	{11,7,-1},
	{11,7,-1},
	{0,8,1},
	{0,8,0},
	{12,7,-1},
	{12,7,-1},
	{9,6,-1},
	{9,6,-1},
	{9,6,-1},
	{9,6,-1},
	{8,6,-1},
	{8,6,-1},
	{8,6,-1},
	{8,6,-1},
	{7,5,-1},
	{7,5,-1},
	{7,5,-1},
	{7,5,-1},
	{7,5,-1},
	{7,5,-1},
	{7,5,-1},
	{7,5,-1},
	{6,4,-1},
	{6,4,-1},
	{6,4,-1},
	{6,4,-1},
	{6,4,-1},
	{6,4,-1},
	{6,4,-1},
	{6,4,-1},
	{6,4,-1},
	{6,4,-1},
	{6,4,-1},
	{6,4,-1},
	{6,4,-1},
	{6,4,-1},
	{6,4,-1},
	{6,4,-1},
	{5,4,-1},
	{5,4,-1},
	{5,4,-1},
	{5,4,-1},
	{5,4,-1},
	{5,4,-1},
	{5,4,-1},
	{5,4,-1},
	{5,4,-1},
	{5,4,-1},
	{5,4,-1},
	{5,4,-1},
	{5,4,-1},
	{5,4,-1},
	{5,4,-1},
	{5,4,-1},
	{1,3,-1},
	{1,3,-1},
	{1,3,-1},
	{1,3,-1},
	{1,3,-1},
	{1,3,-1},
	{1,3,-1},
	{1,3,-1},
	{1,3,-1},
	{1,3,-1},
	{1,3,-1},
	{1,3,-1},
	{1,3,-1},
	{1,3,-1},
	{1,3,-1},
	{1,3,-1},
	{1,3,-1},
	{1,3,-1},
	{1,3,-1},
	{1,3,-1},
	{1,3,-1},
	{1,3,-1},
	{1,3,-1},
	{1,3,-1},
	{1,3,-1},
	{1,3,-1},
	{1,3,-1},
	{1,3,-1},
	{1,3,-1},
	{1,3,-1},
	{1,3,-1},
	{1,3,-1},
	{4,3,-1},
	{4,3,-1},
	{4,3,-1},
	{4,3,-1},
	{4,3,-1},
	{4,3,-1},
	{4,3,-1},
	{4,3,-1},
	{4,3,-1},
	{4,3,-1},
	{4,3,-1},
	{4,3,-1},
	{4,3,-1},
	{4,3,-1},
	{4,3,-1},
	{4,3,-1},
	{4,3,-1},
	{4,3,-1},
	{4,3,-1},
	{4,3,-1},
	{4,3,-1},
	{4,3,-1},
	{4,3,-1},
	{4,3,-1},
	{4,3,-1},
	{4,3,-1},
	{4,3,-1},
	{4,3,-1},
	{4,3,-1},
	{4,3,-1},
	{4,3,-1},
	{4,3,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{3,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
	{2,2,-1},
};
struct ccitt_lookup table2_black[8][32] = {
{
	{20,6,-1},
	{20,6,-1},
	{20,6,-1},
	{20,6,-1},
	{34,7,-1},
	{34,7,-1},
	{35,7,-1},
	{35,7,-1},
	{36,7,-1},
	{36,7,-1},
	{37,7,-1},
	{37,7,-1},
	{38,7,-1},
	{38,7,-1},
	{39,7,-1},
	{39,7,-1},
	{21,6,-1},
	{21,6,-1},
	{21,6,-1},
	{21,6,-1},
	{42,7,-1},
	{42,7,-1},
	{43,7,-1},
	{43,7,-1},
	{0,5,-1},
	{0,5,-1},
	{0,5,-1},
	{0,5,-1},
	{0,5,-1},
	{0,5,-1},
	{0,5,-1},
	{0,5,-1},
},
{
	{15,4,-1},
	{15,4,-1},
	{15,4,-1},
	{15,4,-1},
	{15,4,-1},
	{15,4,-1},
	{15,4,-1},
	{15,4,-1},
	{15,4,-1},
	{15,4,-1},
	{15,4,-1},
	{15,4,-1},
	{15,4,-1},
	{15,4,-1},
	{15,4,-1},
	{15,4,-1},
	{128,7,-2},
	{128,7,-2},
	{192,7,-2},
	{192,7,-2},
	{26,7,-1},
	{26,7,-1},
	{27,7,-1},
	{27,7,-1},
	{28,7,-1},
	{28,7,-1},
	{29,7,-1},
	{29,7,-1},
	{19,6,-1},
	{19,6,-1},
	{19,6,-1},
	{19,6,-1},
},
{
	{23,6,-1},
	{23,6,-1},
	{23,6,-1},
	{23,6,-1},
	{50,7,-1},
	{50,7,-1},
	{51,7,-1},
	{51,7,-1},
	{44,7,-1},
	{44,7,-1},
	{45,7,-1},
	{45,7,-1},
	{46,7,-1},
	{46,7,-1},
	{47,7,-1},
	{47,7,-1},
	{57,7,-1},
	{57,7,-1},
	{58,7,-1},
	{58,7,-1},
	{61,7,-1},
	{61,7,-1},
	{256,7,-2},
	{256,7,-2},
	{16,5,-1},
	{16,5,-1},
	{16,5,-1},
	{16,5,-1},
	{16,5,-1},
	{16,5,-1},
	{16,5,-1},
	{16,5,-1},
},
{
	{17,5,-1},
	{17,5,-1},
	{17,5,-1},
	{17,5,-1},
	{17,5,-1},
	{17,5,-1},
	{17,5,-1},
	{17,5,-1},
	{48,7,-1},
	{48,7,-1},
	{49,7,-1},
	{49,7,-1},
	{62,7,-1},
	{62,7,-1},
	{63,7,-1},
	{63,7,-1},
	{30,7,-1},
	{30,7,-1},
	{31,7,-1},
	{31,7,-1},
	{32,7,-1},
	{32,7,-1},
	{33,7,-1},
	{33,7,-1},
	{40,7,-1},
	{40,7,-1},
	{41,7,-1},
	{41,7,-1},
	{22,6,-1},
	{22,6,-1},
	{22,6,-1},
	{22,6,-1},
},
{
	{18,5,-1},
	{18,5,-1},
	{18,5,-1},
	{18,5,-1},
	{18,5,-1},
	{18,5,-1},
	{18,5,-1},
	{18,5,-1},
	{52,7,-1},
	{52,7,-1},
	{640,8,-2},
	{704,8,-2},
	{768,8,-2},
	{832,8,-2},
	{55,7,-1},
	{55,7,-1},
	{56,7,-1},
	{56,7,-1},
	{1280,8,-2},
	{1344,8,-2},
	{1408,8,-2},
	{1472,8,-2},
	{59,7,-1},
	{59,7,-1},
	{60,7,-1},
	{60,7,-1},
	{1536,8,-2},
	{1600,8,-2},
	{24,6,-1},
	{24,6,-1},
	{24,6,-1},
	{24,6,-1},
},
{
	{25,6,-1},
	{25,6,-1},
	{25,6,-1},
	{25,6,-1},
	{1664,8,-2},
	{1728,8,-2},
	{320,7,-2},
	{320,7,-2},
	{384,7,-2},
	{384,7,-2},
	{448,7,-2},
	{448,7,-2},
	{512,8,-2},
	{576,8,-2},
	{53,7,-1},
	{53,7,-1},
	{54,7,-1},
	{54,7,-1},
	{896,8,-2},
	{960,8,-2},
	{1024,8,-2},
	{1088,8,-2},
	{1152,8,-2},
	{1216,8,-2},
	{64,5,-2},
	{64,5,-2},
	{64,5,-2},
	{64,5,-2},
	{64,5,-2},
	{64,5,-2},
	{64,5,-2},
	{64,5,-2},
},
{
	{1792,6,-2},
	{1792,6,-2},
	{1792,6,-2},
	{1792,6,-2},
	{1984,7,-2},
	{1984,7,-2},
	{2048,7,-2},
	{2048,7,-2},
	{2112,7,-2},
	{2112,7,-2},
	{2176,7,-2},
	{2176,7,-2},
	{2240,7,-2},
	{2240,7,-2},
	{2304,7,-2},
	{2304,7,-2},
	{1856,6,-2},
	{1856,6,-2},
	{1856,6,-2},
	{1856,6,-2},
	{1920,6,-2},
	{1920,6,-2},
	{1920,6,-2},
	{1920,6,-2},
	{2368,7,-2},
	{2368,7,-2},
	{2432,7,-2},
	{2432,7,-2},
	{2496,7,-2},
	{2496,7,-2},
	{2560,7,-2},
	{2560,7,-2},
},
{
	{-3,8,-4},
	{-3,8,-3},
	{-3,7,-3},
	{-3,7,-3},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
	{-9,-9,-9},
},
};
