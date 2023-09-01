#pragma once

/**
 * Name: FL84
 * Version: 1.14.4.6.511026
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
