﻿#pragma once

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
	 * Function UI_AvatarFrame_S08.UI_AvatarFrame_S08_C.GetModuleName
	 */
	struct UUI_AvatarFrame_S08_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_AvatarFrame_S08.UI_AvatarFrame_S08_C.SetAvatarIcon
	 */
	struct UUI_AvatarFrame_S08_C_SetAvatarIcon_Params
	{
	public:
		int32_t                                                    InAvatarID;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_AvatarFrame_S08.UI_AvatarFrame_S08_C.SetEmptyState
	 */
	struct UUI_AvatarFrame_S08_C_SetEmptyState_Params
	{
	public:
		bool                                                       IsEmpty;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_AvatarFrame_S08.UI_AvatarFrame_S08_C.SetPlayerGender
	 */
	struct UUI_AvatarFrame_S08_C_SetPlayerGender_Params
	{
	public:
		E_Type_Gender                                              Gender;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_AvatarFrame_S08.UI_AvatarFrame_S08_C.SetSocialIcon
	 */
	struct UUI_AvatarFrame_S08_C_SetSocialIcon_Params
	{
	public:
		E_Type_Social                                              Social;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_AvatarFrame_S08.UI_AvatarFrame_S08_C.PreConstruct
	 */
	struct UUI_AvatarFrame_S08_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_AvatarFrame_S08.UI_AvatarFrame_S08_C.Construct
	 */
	struct UUI_AvatarFrame_S08_C_Construct_Params
	{	};

	/**
	 * Function UI_AvatarFrame_S08.UI_AvatarFrame_S08_C.Update
	 */
	struct UUI_AvatarFrame_S08_C_Update_Params
	{	};

	/**
	 * Function UI_AvatarFrame_S08.UI_AvatarFrame_S08_C.ExecuteUbergraph_UI_AvatarFrame_S08
	 */
	struct UUI_AvatarFrame_S08_C_ExecuteUbergraph_UI_AvatarFrame_S08_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NEA1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_AvatarFrame_S08.UI_AvatarFrame_S08_C.On Released__DelegateSignature
	 */
	struct UUI_AvatarFrame_S08_C_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function UI_AvatarFrame_S08.UI_AvatarFrame_S08_C.On Clicked__DelegateSignature
	 */
	struct UUI_AvatarFrame_S08_C_OnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif