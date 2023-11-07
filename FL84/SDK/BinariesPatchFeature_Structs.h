﻿#pragma once

/**
 * Name: FL84
 * Version: 15.1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum BinariesPatchFeature.EBinariesPatchFeature
	 */
	enum class EBinariesPatchFeature : uint8_t
	{
		None  = 0,
		Count = 1,
		MAX   = 2
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif