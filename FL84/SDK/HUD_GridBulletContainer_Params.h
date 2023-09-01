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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function HUD_GridBulletContainer.HUD_GridBulletContainer_C.ReceiveUpdateMaxAmmoEvent
	 */
	struct UHUD_GridBulletContainer_C_ReceiveUpdateMaxAmmoEvent_Params
	{
	public:
		int32_t                                                    InMaxAmmo;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_GridBulletContainer.HUD_GridBulletContainer_C.Construct
	 */
	struct UHUD_GridBulletContainer_C_Construct_Params
	{	};

	/**
	 * Function HUD_GridBulletContainer.HUD_GridBulletContainer_C.ExecuteUbergraph_HUD_GridBulletContainer
	 */
	struct UHUD_GridBulletContainer_C_ExecuteUbergraph_HUD_GridBulletContainer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
