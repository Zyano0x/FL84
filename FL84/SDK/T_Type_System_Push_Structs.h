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
	 * Enum T_Type_System_Push.T_Type_System_Push
	 */
	enum class ET_Type_System_Push : uint8_t
	{
		T_Type_System_PushRecruit        = 0,
		T_Type_System_PushRoom           = 1,
		T_Type_System_PushElimination1   = 2,
		T_Type_System_PushElimination2   = 3,
		T_Type_System_PushBO1            = 4,
		T_Type_System_PushPoints         = 5,
		T_Type_System_PushTTypeSystemMAX = 6
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
