﻿#pragma once

/**
 * Name: FL84
 * Version: 1.14.4.5.503427
 */

#define PROCESS_EVENTS_INDEX 0x42
#define CREATE_DEFAULT_OBJECT_INDEX 0x00
#define POST_RENDER_INDEX 0x39 || 0x63 || 0x87 || 0x88
#define GET_BONE_MATRIX_OFFSET 0x3853A50
#define GET_VIEW_POINT_OFFSET 0x39F9830
#define GET_PLAYER_VIEW_POINT_OFFSET 0x3B6B8E0

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#include "Global_Structs.h"
#include "Global_Classes.h"
#include "Global_Params.h"

