#pragma once

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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function UI_BlockAll.UI_BlockAll_C.Construct
	 */
	struct UUI_BlockAll_C_Construct_Params
	{	};

	/**
	 * Function UI_BlockAll.UI_BlockAll_C.Destruct
	 */
	struct UUI_BlockAll_C_Destruct_Params
	{	};

	/**
	 * Function UI_BlockAll.UI_BlockAll_C.GetModuleName
	 */
	struct UUI_BlockAll_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
