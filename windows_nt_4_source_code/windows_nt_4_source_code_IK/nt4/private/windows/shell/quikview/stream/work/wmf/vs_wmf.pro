/* VS_WMF.C 18/02/94 12.50.32 */
VW_ENTRYSC SHORT VW_ENTRYMOD VwStreamOpenFunc (SOFILE hFile, SHORT wFileId,
	 BYTE VWPTR *pFileName, SOFILTERINFO VWPTR *pFilterInfo, HPROC hProc);
VW_ENTRYSC VOID VW_ENTRYMOD VwStreamCloseFunc (SOFILE hFile, HPROC hProc);
VW_LOCALSC SHORT VW_LOCALMOD GetInt (HPROC hProc);
VW_LOCALSC LONG VW_LOCALMOD GetLong (HPROC hProc);
VW_LOCALSC SOCOLORREF VW_LOCALMOD GetColor (HPROC hProc);
VW_ENTRYSC SHORT VW_ENTRYMOD VwStreamTellFunc (SOFILE hFile, HPROC hProc);
VW_ENTRYSC SHORT VW_ENTRYMOD VwStreamSeekFunc (SOFILE hFile, HPROC hProc);
VW_ENTRYSC SHORT VW_ENTRYMOD VwStreamSectionFunc (SOFILE hFile, HPROC hProc);
VW_LOCALSC VOID VW_LOCALMOD InsertObj (HPROC hProc);
VW_LOCALSC VOID VW_LOCALMOD SelectObj (WORD ObjIndex, HPROC hProc);
VW_ENTRYSC SHORT VW_ENTRYMOD VwStreamReadFunc (SOFILE hFile, HPROC hProc);