/*
** Copyright 1992, Silicon Graphics, Inc.
** All Rights Reserved.
**
** This is UNPUBLISHED PROPRIETARY SOURCE CODE of Silicon Graphics, Inc.;
** the contents of this file may not be disclosed to third parties, copied or
** duplicated in any form, in whole or in part, without the prior written
** permission of Silicon Graphics, Inc.
**
** RESTRICTED RIGHTS LEGEND:
** Use, duplication or disclosure by the Government is subject to restrictions
** as set forth in subdivision (c)(1)(ii) of the Rights in Technical Data
** and Computer Software clause at DFARS 252.227-7013, and/or in similar or
** successor clauses in the FAR, DOD or NASA FAR Supplement. Unpublished -
** rights reserved under the Copyright Laws of the United States.
*/
#include "precomp.h"
#pragma hdrstop

#include "imfuncs.h"

__GLsrvDispatchTable __glGenim_srvDispatchTable = {
    __glim_DrawPolyArray,
    __glim_Bitmap,
    __glim_Color4fv,
    __glim_EdgeFlag,
    __glim_Indexf,
    __glim_Normal3fv,
    __glim_RasterPos4fv,
    __glim_TexCoord4fv,
    __glim_ClipPlane,
    __glim_ColorMaterial,
    __glim_CullFace,
    __glim_AddSwapHintRectWIN,
    __glim_Fogfv,
    __glim_FrontFace,
    __glim_Hint,
    __glim_Lightfv,
    __glim_LightModelfv,
    __glim_LineStipple,
    __glim_LineWidth,
    __glim_Materialfv,
    __glim_PointSize,
    __glim_PolygonMode,
    __glim_PolygonStipple,
    __glim_Scissor,
    __glim_ShadeModel,
    __glim_TexParameterfv,
    __glim_TexParameteriv,
    __glim_TexImage1D,
    __glim_TexImage2D,
    __glim_TexEnvfv,
    __glim_TexEnviv,
    __glim_TexGenfv,
    __glim_FeedbackBuffer,
    __glim_SelectBuffer,
    __glim_RenderMode,
    __glim_InitNames,
    __glim_LoadName,
    __glim_PassThrough,
    __glim_PopName,
    __glim_PushName,
    __glim_DrawBuffer,
    __glim_GenClear,
    __glim_ClearAccum,
    __glim_ClearIndex,
    __glim_ClearColor,
    __glim_ClearStencil,
    __glim_ClearDepth,
    __glim_StencilMask,
    __glim_ColorMask,
    __glim_DepthMask,
    __glim_IndexMask,
    __glim_GenAccum,
    __glim_Disable,
    __glim_GenEnable,
    __glim_PopAttrib,
    __glim_PushAttrib,
    __glim_Map1d,
    __glim_Map1f,
    __glim_Map2d,
    __glim_Map2f,
    __glim_MapGrid1f,
    __glim_MapGrid2f,
    __glim_AlphaFunc,
    __glim_BlendFunc,
    __glim_LogicOp,
    __glim_StencilFunc,
    __glim_StencilOp,
    __glim_DepthFunc,
    __glim_PixelZoom,
    __glim_PixelTransferf,
    __glim_PixelTransferi,
    __glim_PixelStoref,
    __glim_PixelStorei,
    __glim_PixelMapfv,
    __glim_PixelMapuiv,
    __glim_PixelMapusv,
    __glim_ReadBuffer,
    __glim_GenCopyPixels,
    __glim_GenReadPixels,
    __glim_GenDrawPixels,
    __glim_GetBooleanv,
    __glim_GetClipPlane,
    __glim_GetDoublev,
    __glim_GetError,
    __glim_GetFloatv,
    __glim_GetIntegerv,
    __glim_GetLightfv,
    __glim_GetLightiv,
    __glim_GetMapdv,
    __glim_GetMapfv,
    __glim_GetMapiv,
    __glim_GetMaterialfv,
    __glim_GetMaterialiv,
    __glim_GetPixelMapfv,
    __glim_GetPixelMapuiv,
    __glim_GetPixelMapusv,
    __glim_GetPolygonStipple,
    __glim_GetTexEnvfv,
    __glim_GetTexEnviv,
    __glim_GetTexGendv,
    __glim_GetTexGenfv,
    __glim_GetTexGeniv,
    __glim_GetTexImage,
    __glim_GetTexParameterfv,
    __glim_GetTexParameteriv,
    __glim_GetTexLevelParameterfv,
    __glim_GetTexLevelParameteriv,
    __glim_IsEnabled,
    __glim_DepthRange,
    __glim_Frustum,
    __glim_LoadIdentity,
    __glim_LoadMatrixf,
    __glim_MatrixMode,
    __glim_MultMatrixf,
    __glim_Ortho,
    __glim_PopMatrix,
    __glim_PushMatrix,
    __glim_Rotatef,
    __glim_Scalef,
    __glim_Translatef,
    __glim_Viewport,
    __glim_AreTexturesResident,
    __glim_BindTexture,
    __glim_CopyTexImage1D,
    __glim_CopyTexImage2D,
    __glim_CopyTexSubImage1D,
    __glim_CopyTexSubImage2D,
    __glim_DeleteTextures,
    __glim_GenTextures,
    __glim_IsTexture,
    __glim_PrioritizeTextures,
    __glim_TexSubImage1D,
    __glim_TexSubImage2D,
    __glim_ColorTableEXT,
    __glim_ColorSubTableEXT,
    __glim_GetColorTableEXT,
    __glim_GetColorTableParameterivEXT,
    __glim_GetColorTableParameterfvEXT,
    __glim_PolygonOffset,
};
