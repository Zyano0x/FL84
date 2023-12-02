#pragma once

/**
 * Name: FL84
 * Version: 1.15.1.6
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
	 * Function I_PickableItem.I_PickableItem_C.iPickupItem
	 */
	struct UI_PickableItem_C_iPickupItem_Params
	{
	public:
		class ABP_PlayerState_Framework_C*                         Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function I_PickableItem.I_PickableItem_C.iDiscardItem
	 */
	struct UI_PickableItem_C_iDiscardItem_Params
	{
	public:
		class ABP_PlayerState_Framework_C*                         Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
