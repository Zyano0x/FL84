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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass UI_Component_PlayerName.UI_Component_PlayerName_C
	 * Size -> 0x0340 (FullSize[0x0688] - InheritedSize[0x0348])
	 */
	class UUI_Component_PlayerName_C : public UUIComponentPlayerName
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0348(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USolarTextBlock*                                     Txt_PlayerName;                                          // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FS_VIP_TxtInfo                                      DefaultTxtInfo;                                          // 0x0358(0x0088) Edit, BlueprintVisible
		E_Type_PlayerName_Vip_Color                                VIP_State;                                               // 0x03E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Q0VX[0x7];                                   // 0x03E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<E_Type_PlayerName_Vip_Color, struct FS_VIP_TxtInfo>   VIP_TxtInfos;                                            // 0x03E8(0x0050) Edit, BlueprintVisible
		bool                                                       Cheater;                                                 // 0x0438(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2SQN[0x7];                                   // 0x0439(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FS_VIP_TxtInfo                                      CheatTxtInfo;                                            // 0x0440(0x0088) Edit, BlueprintVisible
		bool                                                       Killed;                                                  // 0x04C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AJTP[0x7];                                   // 0x04C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FS_VIP_TxtInfo                                      KilledTxtInfo;                                           // 0x04D0(0x0088) Edit, BlueprintVisible
		bool                                                       bSpecialSelf;                                            // 0x0558(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WOF6[0x7];                                   // 0x0559(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FS_VIP_TxtInfo                                      SpecialSelfTxtInfo;                                      // 0x0560(0x0088) Edit, BlueprintVisible
		struct FS_VIP_TxtInfo                                      CurTxtInfo;                                              // 0x05E8(0x0088) Edit, BlueprintVisible
		class FText                                                DefaultText;                                             // 0x0670(0x0018) Edit, BlueprintVisible

	public:
		void SetIsKilled(bool IsKilled);
		void SetIsCheater(bool bCheater);
		void SetVipStyle(E_Type_PlayerName_Vip_Color VIP_Type);
		void SetPlayerNameAndStyle(const class FString& NickName, bool bCheat, E_Type_PlayerName_Vip_Color VIP_Type, bool bKilled);
		void SetPlayerName(const class FString& NickName);
		void SetDefaultStyle(bool bSpecialSelf);
		void SetNameStyle(bool bCheater, E_Type_PlayerName_Vip_Color VIP_State, bool bKilled);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void ReSize();
		void UpdatePlayerNameAndStyle(const class FString& NickName, unsigned char VipType, bool bCheat, bool bKilled);
		void SetText(const class FString& Content);
		void SetTextColorAndOpacity(const struct FSlateColor& InColor);
		void SetStyle(unsigned char VipType, bool bCheat, bool bKilled);
		void SetDeath(bool bDeath);
		void SetVip(unsigned char VipType);
		void SetCheater(bool bCheat);
		void ExecuteUbergraph_UI_Component_PlayerName(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
