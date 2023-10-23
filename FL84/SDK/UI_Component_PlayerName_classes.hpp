#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x340 (0x688 - 0x348)
// WidgetBlueprintGeneratedClass UI_Component_PlayerName.UI_Component_PlayerName_C
class UUI_Component_PlayerName_C : public UUIComponentPlayerName
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USolarTextBlock*                       Txt_PlayerName;                                    // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FS_VIP_TxtInfo                        DefaultTxtInfo;                                    // 0x358(0x88)(Edit, BlueprintVisible)
	enum class E_Type_PlayerName_Vip_Color       VIP_State;                                         // 0x3E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2079[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class E_Type_PlayerName_Vip_Color, struct FS_VIP_TxtInfo> VIP_TxtInfos;                                      // 0x3E8(0x50)(Edit, BlueprintVisible)
	bool                                         Cheater;                                           // 0x438(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_207A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_VIP_TxtInfo                        CheatTxtInfo;                                      // 0x440(0x88)(Edit, BlueprintVisible)
	bool                                         Killed;                                            // 0x4C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_207C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_VIP_TxtInfo                        KilledTxtInfo;                                     // 0x4D0(0x88)(Edit, BlueprintVisible)
	bool                                         bSpecialSelf;                                      // 0x558(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_207D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_VIP_TxtInfo                        SpecialSelfTxtInfo;                                // 0x560(0x88)(Edit, BlueprintVisible)
	struct FS_VIP_TxtInfo                        CurTxtInfo;                                        // 0x5E8(0x88)(Edit, BlueprintVisible)
	class FText                                  DefaultText;                                       // 0x670(0x18)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UUI_Component_PlayerName_C* GetDefaultObj();

	void SetIsKilled(bool IsKilled);
	void SetIsCheater(bool bCheater);
	void SetVipStyle(enum class E_Type_PlayerName_Vip_Color VIP_Type);
	void SetPlayerNameAndStyle(const class FString& NickName, bool bCheat, enum class E_Type_PlayerName_Vip_Color VIP_Type, bool bKilled);
	void SetPlayerName(const class FString& NickName, class FText CallFunc_Conv_StringToText_ReturnValue);
	void SetDefaultStyle(bool bSpecialSelf);
	void SetNameStyle(bool bCheater, enum class E_Type_PlayerName_Vip_Color VIP_State, bool bKilled, const struct FS_VIP_TxtInfo& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ReSize();
	void UpdatePlayerNameAndStyle(const class FString& NickName, uint8 VipType, bool bCheat, bool bKilled);
	void SetText(const class FString& Content);
	void SetTextColorAndOpacity(const struct FSlateColor& InColor);
	void SetStyle(uint8 VipType, bool bCheat, bool bKilled);
	void SetDeath(bool bDeath);
	void SetVip(uint8 VipType);
	void SetCheater(bool bCheat);
	void ExecuteUbergraph_UI_Component_PlayerName(int32 EntryPoint, bool K2Node_Event_bCheat, bool K2Node_Event_IsDesignTime, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const class FString& K2Node_Event_NickName, uint8 K2Node_Event_VipType_2, bool K2Node_Event_bCheat_2, bool K2Node_Event_bKilled_1, const class FString& K2Node_Event_Content, uint8 CallFunc_GetValidValue_ReturnValue, const struct FSlateColor& K2Node_Event_InColor, bool CallFunc_EqualEqual_ByteByte_ReturnValue, uint8 K2Node_Event_VipType_1, bool K2Node_Event_bCheat_1, bool K2Node_Event_bKilled, uint8 CallFunc_GetValidValue_ReturnValue_1, bool K2Node_Event_bDeath, uint8 K2Node_Event_VipType, uint8 CallFunc_GetValidValue_ReturnValue_2);
};

}


