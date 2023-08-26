#pragma once

/**
 * Name: FL84
 * Version: 1.14.4.5.503427
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
	 * Enum E_Item_Quality.E_Item_Quality
	 */
	enum class E_Item_Quality : uint8_t
	{
		N        = 0,
		R        = 1,
		SR       = 2,
		SSR      = 3,
		SSR01    = 4,
		UR       = 5,
		EItemMAX = 6
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
