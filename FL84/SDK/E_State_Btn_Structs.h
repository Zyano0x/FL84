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
	 * Enum E_State_Btn.E_State_Btn
	 */
	enum class E_State_Btn : uint8_t
	{
		Normal    = 0,
		hovered   = 1,
		Pressed   = 2,
		disabled  = 3,
		EStateMAX = 4
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
