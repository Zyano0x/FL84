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
	 * Enum T_Type_Button.T_Type_Button
	 */
	enum class ET_Type_Button : uint8_t
	{
		T_Type_ButtonJoin      = 0,
		T_Type_ButtonJoin_Icon = 1,
		T_Type_ButtonJoining   = 2,
		T_Type_ButtonWatch     = 3,
		T_Type_ButtonTTypeMAX  = 4
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
