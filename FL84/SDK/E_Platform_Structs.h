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
	 * Enum E_Platform.E_Platform
	 */
	enum class E_Platform : uint8_t
	{
		None    = 0,
		Pc      = 1,
		Phone   = 2,
		Console = 3,
		Other   = 4,
		EMAX    = 5
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
