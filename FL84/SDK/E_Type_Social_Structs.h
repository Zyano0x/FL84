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
	 * Enum E_Type_Social.E_Type_Social
	 */
	enum class E_Type_Social : uint8_t
	{
		None     = 0,
		Twitter  = 1,
		Facebook = 2,
		ETypeMAX = 3
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
