/******************************************************************************
* Name         : sgx535pixfmts.h
* Title        : Pixel format definitions
* Author(s)    : Imagination Technologies
* Created      : 19th May 2009
*
* Copyright    : 2009 by Imagination Technologies Limited.
*                All rights reserved. No part of this software, either material
*                or conceptual may be copied or distributed, transmitted,
*                transcribed, stored in a retrieval system or translated into
*                any human or computer language in any form by any means,
*                electronic, mechanical, manual or otherwise, or disclosed
*                to third parties without the express written permission of
*                Imagination Technologies Limited, Home Park Estate,
*                Kings Langley, Hertfordshire, WD4 8LZ, U.K.
*
* Description  : For specified pixel formats, describe useful information
*
* Platform     : Generic
*
* Modifications:-
* $Log: sgx535pixfmts.h $
******************************************************************************/

#ifndef _SGX535PIXFMTS_H_
#define _SGX535PIXFMTS_H_

/**********************************************/
/*       AUTO-GENERATED : DO NOT MODIFY       */
/**********************************************/
/* Use the TextureFormatParser tool to apply  */
/* updates. It can be found in...             */
/* %WORKROOT%/eurasia/tools/intern/           */
/**********************************************/

IMG_INTERNAL const SGX_PIXEL_FORMAT asSGXPixelFormat[] = 
{
	{	/* PVRSRV_PIXEL_FORMAT_UNKNOWN */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_RGB565 */
		1,	/* ui32NumChunks */
		16,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_R5G6B5, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_R5G6B5,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_RGB555 */
		1,	/* ui32NumChunks */
		16,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_A1R5G5B5, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_A1R5G5B5,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_RGB888 */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_BGR888 */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* ## RESERVED ## */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* ## RESERVED ## */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* ## RESERVED ## */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_GREY_SCALE */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* ## RESERVED ## */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* ## RESERVED ## */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* ## RESERVED ## */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* ## RESERVED ## */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_PAL12 */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_PAL8 */
		1,	/* ui32NumChunks */
		16,	/* ui32TotalBitsPerPixel */
	
		{
			{EURASIA_PDS_DOUTT0_CHANREPLICATE, EURASIA_PDS_DOUTT1_TEXFORMAT_U88, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_MONO16,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_PAL4 */
		1,	/* ui32NumChunks */
		8,	/* ui32TotalBitsPerPixel */
	
		{
			{EURASIA_PDS_DOUTT0_CHANREPLICATE, EURASIA_PDS_DOUTT1_TEXFORMAT_U8, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_MONO8,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_PAL2 */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_PAL1 */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_ARGB1555 */
		1,	/* ui32NumChunks */
		16,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_A1R5G5B5, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_A1R5G5B5,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_ARGB4444 */
		1,	/* ui32NumChunks */
		16,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_A4R4G4B4, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_A4R4G4B4,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_ARGB8888 */
		1,	/* ui32NumChunks */
		32,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_B8G8R8A8, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_A8R8G8B8,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_ABGR8888 */
		1,	/* ui32NumChunks */
		32,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_R8G8B8A8, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_R8G8B8A8,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_YV12 */
		3,	/* ui32NumChunks */
		12,	/* ui32TotalBitsPerPixel */
	
		{
			{EURASIA_PDS_DOUTT0_CHANREPLICATE, EURASIA_PDS_DOUTT1_TEXFORMAT_U8, 0}, /* aui32TAGControlWords - Chunk 0 */
			{EURASIA_PDS_DOUTT0_CHANREPLICATE, EURASIA_PDS_DOUTT1_TEXFORMAT_U8, 0}, /* aui32TAGControlWords - Chunk 1 */
			{EURASIA_PDS_DOUTT0_CHANREPLICATE, EURASIA_PDS_DOUTT1_TEXFORMAT_U8, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_MONO8,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_I420 */
		3,	/* ui32NumChunks */
		12,	/* ui32TotalBitsPerPixel */
	
		{
			{EURASIA_PDS_DOUTT0_CHANREPLICATE, EURASIA_PDS_DOUTT1_TEXFORMAT_U8, 0}, /* aui32TAGControlWords - Chunk 0 */
			{EURASIA_PDS_DOUTT0_CHANREPLICATE, EURASIA_PDS_DOUTT1_TEXFORMAT_U8, 0}, /* aui32TAGControlWords - Chunk 1 */
			{EURASIA_PDS_DOUTT0_CHANREPLICATE, EURASIA_PDS_DOUTT1_TEXFORMAT_U8, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_MONO8,	/* ui32PBEFormat */
	},
	{	/* ## RESERVED ## */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_IMC2 */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_XRGB8888 */
		1,	/* ui32NumChunks */
		32,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_B8G8R8A8, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_A8R8G8B8,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_XBGR8888 */
		1,	/* ui32NumChunks */
		32,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_R8G8B8A8, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_R8G8B8A8,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_BGRA8888 */
		1,	/* ui32NumChunks */
		32,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_B8G8R8A8, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_B8G8R8A8,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_XRGB4444 */
		1,	/* ui32NumChunks */
		16,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_A4R4G4B4, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_A4R4G4B4,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_ARGB8332 */
		1,	/* ui32NumChunks */
		16,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_A8R3G3B2, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_A8R3G3B2,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_A2RGB10 */
		1,	/* ui32NumChunks */
		32,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_A2R10G10B10, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_PT1,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_A2BGR10 */
		1,	/* ui32NumChunks */
		32,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_A2R10G10B10, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_PT1,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_P8 */
		1,	/* ui32NumChunks */
		8,	/* ui32TotalBitsPerPixel */
	
		{
			{EURASIA_PDS_DOUTT0_CHANREPLICATE, EURASIA_PDS_DOUTT1_TEXFORMAT_U8, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_MONO8,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_L8 */
		1,	/* ui32NumChunks */
		8,	/* ui32TotalBitsPerPixel */
	
		{
			{EURASIA_PDS_DOUTT0_CHANREPLICATE, EURASIA_PDS_DOUTT1_TEXFORMAT_U8, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_MONO8,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_A8L8 */
		1,	/* ui32NumChunks */
		16,	/* ui32TotalBitsPerPixel */
	
		{
			{EURASIA_PDS_DOUTT0_CHANREPLICATE, EURASIA_PDS_DOUTT1_TEXFORMAT_U88, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_MONO16,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_A4L4 */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_L16 */
		1,	/* ui32NumChunks */
		16,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_U16, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_MONO16,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_L6V5U5 */
		1,	/* ui32NumChunks */
		16,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_R5SG5SB6, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_V8U8 */
		1,	/* ui32NumChunks */
		16,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_S88, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_MONO16,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_V16U16 */
		1,	/* ui32NumChunks */
		32,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_S1616, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_PT1,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_QWVU8888 */
		2,	/* ui32NumChunks */
		32,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_S88, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_S88, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_MONO16,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_XLVU8888 */
		2,	/* ui32NumChunks */
		32,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_S88, 0}, /* aui32TAGControlWords - Chunk 0 */
			{EURASIA_PDS_DOUTT0_CHANREPLICATE, EURASIA_PDS_DOUTT1_TEXFORMAT_U88, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_MONO16,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_QWVU16 */
		2,	/* ui32NumChunks */
		64,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_S1616, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_S1616, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_PT1,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_D16 */
		1,	/* ui32NumChunks */
		16,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_U16, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_MONO16,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_D24S8 */
		1,	/* ui32NumChunks */
		32,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_B8G8R8A8, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_B8G8R8A8,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_D24X8 */
		1,	/* ui32NumChunks */
		32,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_B8G8R8A8, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_B8G8R8A8,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_ABGR16 */
		2,	/* ui32NumChunks */
		64,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_U1616, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_U1616, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_PT1,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_ABGR16F */
		2,	/* ui32NumChunks */
		64,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_F1616, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_F1616, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_PT1,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_ABGR32 */
		4,	/* ui32NumChunks */
		128,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_R8G8B8A8, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_R8G8B8A8, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_R8G8B8A8, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_R8G8B8A8, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_PT1,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_ABGR32F */
		4,	/* ui32NumChunks */
		128,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_F32, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_F32, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_F32, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_F32, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_PT1,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_B10GR11 */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_GR88 */
		1,	/* ui32NumChunks */
		16,	/* ui32TotalBitsPerPixel */
	
		{
			{EURASIA_PDS_DOUTT0_CHANREPLICATE, EURASIA_PDS_DOUTT1_TEXFORMAT_U88, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_MONO16,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_BGR32 */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_GR32 */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_E5BGR9 */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* ## RESERVED1 ## */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* ## RESERVED2 ## */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* ## RESERVED3 ## */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* ## RESERVED4 ## */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* ## RESERVED5 ## */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_R8G8_B8G8 */
		1,	/* ui32NumChunks */
		16,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_YUY2, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_G8R8_G8B8 */
		1,	/* ui32NumChunks */
		16,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_UYVY, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_NV11 */
		2,	/* ui32NumChunks */
		12,	/* ui32TotalBitsPerPixel */
	
		{
			{EURASIA_PDS_DOUTT0_CHANREPLICATE, EURASIA_PDS_DOUTT1_TEXFORMAT_U8, 0}, /* aui32TAGControlWords - Chunk 0 */
			{EURASIA_PDS_DOUTT0_CHANREPLICATE, EURASIA_PDS_DOUTT1_TEXFORMAT_U88, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_MONO8,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_NV12 */
		2,	/* ui32NumChunks */
		12,	/* ui32TotalBitsPerPixel */
	
		{
			{EURASIA_PDS_DOUTT0_CHANREPLICATE, EURASIA_PDS_DOUTT1_TEXFORMAT_U8, 0}, /* aui32TAGControlWords - Chunk 0 */
			{EURASIA_PDS_DOUTT0_CHANREPLICATE, EURASIA_PDS_DOUTT1_TEXFORMAT_U88, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_MONO8,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_YUY2 */
		1,	/* ui32NumChunks */
		16,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_YUY2, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_YUV420 */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_YUV444 */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_VUY444 */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_YUYV */
		1,	/* ui32NumChunks */
		16,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_YUY2, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_YVYU */
		1,	/* ui32NumChunks */
		16,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_UYVY, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_UYVY */
		1,	/* ui32NumChunks */
		16,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_UYVY, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_VYUY */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_FOURCC_ORG_UYVY */
		1,	/* ui32NumChunks */
		16,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_UYVY, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_FOURCC_ORG_YUYV */
		1,	/* ui32NumChunks */
		16,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_YUY2, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_FOURCC_ORG_YVYU */
		1,	/* ui32NumChunks */
		16,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_YUY2, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_FOURCC_ORG_VYUY */
		1,	/* ui32NumChunks */
		16,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_UYVY, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_FOURCC_ORG_AYUV */
		1,	/* ui32NumChunks */
		32,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_R8G8B8A8, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_A32B32G32R32 */
		4,	/* ui32NumChunks */
		128,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_R8G8B8A8, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_R8G8B8A8, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_R8G8B8A8, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_R8G8B8A8, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_PT1,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_A32B32G32R32F */
		4,	/* ui32NumChunks */
		128,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_F32, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_F32, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_F32, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_F32, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_PT1,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_A32B32G32R32_UINT */
		4,	/* ui32NumChunks */
		128,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_R8G8B8A8, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_R8G8B8A8, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_R8G8B8A8, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_R8G8B8A8, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_PT1,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_A32B32G32R32_SINT */
		4,	/* ui32NumChunks */
		128,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_R8G8B8A8, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_R8G8B8A8, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_R8G8B8A8, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_R8G8B8A8, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_PT1,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_B32G32R32 */
		3,	/* ui32NumChunks */
		96,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_R8G8B8A8, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_R8G8B8A8, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_R8G8B8A8, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_PT1,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_B32G32R32F */
		3,	/* ui32NumChunks */
		96,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_F32, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_F32, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_F32, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_PT1,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_B32G32R32_UINT */
		3,	/* ui32NumChunks */
		96,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_R8G8B8A8, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_R8G8B8A8, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_R8G8B8A8, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_PT1,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_B32G32R32_SINT */
		3,	/* ui32NumChunks */
		96,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_R8G8B8A8, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_R8G8B8A8, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_R8G8B8A8, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_PT1,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_G32R32 */
		2,	/* ui32NumChunks */
		64,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_R8G8B8A8, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_R8G8B8A8, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_PT1,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_G32R32F */
		2,	/* ui32NumChunks */
		64,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_F32, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_F32, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_PT1,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_G32R32_UINT */
		2,	/* ui32NumChunks */
		64,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_R8G8B8A8, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_R8G8B8A8, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_PT1,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_G32R32_SINT */
		2,	/* ui32NumChunks */
		64,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_R8G8B8A8, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_R8G8B8A8, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_PT1,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_D32F */
		1,	/* ui32NumChunks */
		32,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_F32, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_PT1,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_R32 */
		1,	/* ui32NumChunks */
		32,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_R8G8B8A8, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_PT1,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_R32F */
		1,	/* ui32NumChunks */
		32,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_F32, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_PT1,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_R32_UINT */
		1,	/* ui32NumChunks */
		32,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_R8G8B8A8, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_PT1,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_R32_SINT */
		1,	/* ui32NumChunks */
		32,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_R8G8B8A8, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_PT1,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_A16B16G16R16 */
		2,	/* ui32NumChunks */
		64,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_U1616, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_U1616, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_PT1,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_A16B16G16R16F */
		2,	/* ui32NumChunks */
		64,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_F1616, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_F1616, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_PT1,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_A16B16G16R16_SINT */
		2,	/* ui32NumChunks */
		64,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_S1616, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_S1616, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_PT1,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_A16B16G16R16_SNORM */
		2,	/* ui32NumChunks */
		64,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_S1616, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_S1616, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_PT1,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_A16B16G16R16_UINT */
		2,	/* ui32NumChunks */
		64,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_U1616, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_U1616, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_PT1,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_A16B16G16R16_UNORM */
		2,	/* ui32NumChunks */
		64,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_U1616, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_U1616, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_PT1,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_G16R16 */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_G16R16F */
		1,	/* ui32NumChunks */
		32,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_F1616, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_PT1,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_G16R16_UINT */
		1,	/* ui32NumChunks */
		32,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_U1616, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_PT1,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_G16R16_UNORM */
		1,	/* ui32NumChunks */
		32,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_U1616, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_PT1,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_G16R16_SINT */
		1,	/* ui32NumChunks */
		32,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_S1616, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_PT1,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_G16R16_SNORM */
		1,	/* ui32NumChunks */
		32,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_S1616, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_PT1,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_R16 */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_R16F */
		1,	/* ui32NumChunks */
		16,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_F16, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_MONO16,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_R16_UINT */
		1,	/* ui32NumChunks */
		16,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_U16, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_MONO16,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_R16_UNORM */
		1,	/* ui32NumChunks */
		16,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_U16, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_MONO16,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_R16_SINT */
		1,	/* ui32NumChunks */
		16,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_S16, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_MONO16,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_R16_SNORM */
		1,	/* ui32NumChunks */
		16,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_S16, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_MONO16,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_X8R8G8B8 */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_X8R8G8B8_UNORM */
		1,	/* ui32NumChunks */
		32,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_B8G8R8A8, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_A8R8G8B8,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_X8R8G8B8_UNORM_SRGB */
		1,	/* ui32NumChunks */
		32,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_B8G8R8A8, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_A8R8G8B8,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_A8R8G8B8 */
		1,	/* ui32NumChunks */
		32,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_B8G8R8A8, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_A8R8G8B8,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_A8R8G8B8_UNORM */
		1,	/* ui32NumChunks */
		32,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_B8G8R8A8, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_A8R8G8B8,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_A8R8G8B8_UNORM_SRGB */
		1,	/* ui32NumChunks */
		32,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_B8G8R8A8, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_A8R8G8B8,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_A8B8G8R8 */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_A8B8G8R8_UINT */
		1,	/* ui32NumChunks */
		32,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_R8G8B8A8, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_R8G8B8A8,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_A8B8G8R8_UNORM */
		1,	/* ui32NumChunks */
		32,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_R8G8B8A8, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_R8G8B8A8,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_A8B8G8R8_UNORM_SRGB */
		1,	/* ui32NumChunks */
		32,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_R8G8B8A8, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_R8G8B8A8,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_A8B8G8R8_SINT */
		2,	/* ui32NumChunks */
		32,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_S88, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_S88, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_MONO16,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_A8B8G8R8_SNORM */
		2,	/* ui32NumChunks */
		32,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_S88, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_S88, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_MONO16,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_G8R8 */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_G8R8_UINT */
		1,	/* ui32NumChunks */
		16,	/* ui32TotalBitsPerPixel */
	
		{
			{EURASIA_PDS_DOUTT0_CHANREPLICATE, EURASIA_PDS_DOUTT1_TEXFORMAT_U88, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_MONO16,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_G8R8_UNORM */
		1,	/* ui32NumChunks */
		16,	/* ui32TotalBitsPerPixel */
	
		{
			{EURASIA_PDS_DOUTT0_CHANREPLICATE, EURASIA_PDS_DOUTT1_TEXFORMAT_U88, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_MONO16,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_G8R8_SINT */
		1,	/* ui32NumChunks */
		16,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_S88, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_MONO16,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_G8R8_SNORM */
		1,	/* ui32NumChunks */
		16,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_S88, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_MONO16,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_A8 */
		1,	/* ui32NumChunks */
		8,	/* ui32TotalBitsPerPixel */
	
		{
			{EURASIA_PDS_DOUTT0_CHANREPLICATE, EURASIA_PDS_DOUTT1_TEXFORMAT_U8, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_MONO8,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_R8 */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_R8_UINT */
		1,	/* ui32NumChunks */
		8,	/* ui32TotalBitsPerPixel */
	
		{
			{EURASIA_PDS_DOUTT0_CHANREPLICATE, EURASIA_PDS_DOUTT1_TEXFORMAT_U8, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_MONO8,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_R8_UNORM */
		1,	/* ui32NumChunks */
		8,	/* ui32TotalBitsPerPixel */
	
		{
			{EURASIA_PDS_DOUTT0_CHANREPLICATE, EURASIA_PDS_DOUTT1_TEXFORMAT_U8, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_MONO8,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_R8_SINT */
		1,	/* ui32NumChunks */
		8,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_S8, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_MONO8,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_R8_SNORM */
		1,	/* ui32NumChunks */
		8,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_S8, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_MONO8,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_A2B10G10R10 */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_A2B10G10R10_UNORM */
		1,	/* ui32NumChunks */
		32,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_A2R10G10B10, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_PT1,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_A2B10G10R10_UINT */
		1,	/* ui32NumChunks */
		32,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_A2R10G10B10, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_PT1,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_B10G11R11 */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_B10G11R11F */
		1,	/* ui32NumChunks */
		32,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_R8G8B8A8, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_PT1,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_X24G8R32 */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_G8R24 */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_X8R24 */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_E5B9G9R9 */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_R1 */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* ## RESERVED6 ## */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* ## RESERVED7 ## */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* ## RESERVED8 ## */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* ## RESERVED9 ## */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* ## RESERVED10 ## */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* ## RESERVED11 ## */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* ## RESERVED12 ## */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* ## RESERVED13 ## */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* ## RESERVED14 ## */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* ## RESERVED15 ## */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* ## RESERVED16 ## */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* ## RESERVED17 ## */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* ## RESERVED18 ## */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* ## RESERVED19 ## */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* ## RESERVED20 ## */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_UBYTE4 */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_SHORT4 */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_SHORT4N */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_USHORT4N */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_SHORT2N */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_SHORT2 */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_USHORT2N */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_UDEC3 */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_DEC3N */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_F16_2 */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_F16_4 */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_L_F16 */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_L_F16_REP */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_L_F16_A_F16 */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_A_F16 */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_B16G16R16F */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_L_F32 */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_A_F32 */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_L_F32_A_F32 */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_PVRTC2 */
		1,	/* ui32NumChunks */
		2,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_PVRT2BPP, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_PVRTC4 */
		1,	/* ui32NumChunks */
		4,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_PVRT4BPP, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_PVRTCII2 */
		1,	/* ui32NumChunks */
		8,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_PVRTII2BPP, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_PVRTCII4 */
		1,	/* ui32NumChunks */
		4,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_PVRTII4BPP, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_PVRTCIII */
		1,	/* ui32NumChunks */
		4,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_PVRTIII, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_PVRO8 */
		1,	/* ui32NumChunks */
		8,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_O8, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_PVRO88 */
		1,	/* ui32NumChunks */
		16,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_O88, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_PT1 */
		1,	/* ui32NumChunks */
		32,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_R8G8B8A8, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_PT1,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_PT2 */
		1,	/* ui32NumChunks */
		64,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_U1616, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_PT2,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_PT4 */
		1,	/* ui32NumChunks */
		128,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_U1616, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_PT4,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_PT8 */
		1,	/* ui32NumChunks */
		256,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_U1616, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_PT8,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_PTW */
		1,	/* ui32NumChunks */
		16,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_U16, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_PWORD,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_PTB */
		1,	/* ui32NumChunks */
		8,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_U8, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_PBYTE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_MONO8 */
		1,	/* ui32NumChunks */
		8,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_U8, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_MONO8,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_MONO16 */
		1,	/* ui32NumChunks */
		16,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_U16, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_MONO16,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_C0_YUYV */
		1,	/* ui32NumChunks */
		16,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_YUY2, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_C0_UYVY */
		1,	/* ui32NumChunks */
		16,	/* ui32TotalBitsPerPixel */
	
		{
			{0, EURASIA_PDS_DOUTT1_TEXFORMAT_UYVY, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_C0_YVYU */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_C0_VYUY */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_C1_YUYV */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_C1_UYVY */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_C1_YVYU */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_C1_VYUY */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_C0_YUV420_2P_UV */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_C0_YUV420_2P_VU */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_C0_YUV420_3P */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_C1_YUV420_2P_UV */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_C1_YUV420_2P_VU */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_C1_YUV420_3P */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_A2B10G10R10F */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_B8G8R8_SINT */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_PVRF32SIGNMASK */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_ABGR4444 */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_ABGR1555 */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_BGR565 */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_C0_4KYUV420_2P_UV */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_C0_4KYUV420_2P_VU */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_C1_4KYUV420_2P_UV */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_C1_4KYUV420_2P_VU */
		0,	/* ui32NumChunks */
		0,	/* ui32TotalBitsPerPixel */
	
		{
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE_PACKMODE_NONE,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_P208 */
		2,	/* ui32NumChunks */
		16,	/* ui32TotalBitsPerPixel */
	
		{
			{EURASIA_PDS_DOUTT0_CHANREPLICATE, EURASIA_PDS_DOUTT1_TEXFORMAT_U8, 0}, /* aui32TAGControlWords - Chunk 0 */
			{EURASIA_PDS_DOUTT0_CHANREPLICATE, EURASIA_PDS_DOUTT1_TEXFORMAT_U88, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_MONO8,	/* ui32PBEFormat */
	},
	{	/* PVRSRV_PIXEL_FORMAT_A8P8 */
		1,	/* ui32NumChunks */
		16,	/* ui32TotalBitsPerPixel */
	
		{
			{EURASIA_PDS_DOUTT0_CHANREPLICATE, EURASIA_PDS_DOUTT1_TEXFORMAT_U88, 0}, /* aui32TAGControlWords - Chunk 0 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 1 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 2 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 3 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 4 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 5 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 6 */
			{0, 0, 0}, /* aui32TAGControlWords - Chunk 7 */
		},
		EURASIA_PIXELBE2S0_PACKMODE_MONO16,	/* ui32PBEFormat */
	},
};
#endif /* _SGX535PIXFMTS_H_ */

/*****************************************************************************
 End of file (sgx535pixfmts.h)
*****************************************************************************/
