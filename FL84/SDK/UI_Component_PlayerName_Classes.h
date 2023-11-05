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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass UI_Component_PlayerName.UI_Component_PlayerName_C
	 * Size -> 0x0340 (FullSize[0x0740] - InheritedSize[0x0400])
	 */
	class UUI_Component_PlayerName_C : public UUIComponentPlayerName
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0400(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USolarTextBlock*                                     Txt_PlayerName;                                          // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FS_VIP_TxtInfo                                      DefaultTxtInfo;                                          // 0x0410(0x0088) Edit, BlueprintVisible, HasGetValueTypeHash
		E_Type_PlayerName_Vip_Color                                VIP_State;                                               // 0x0498(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0NVN[0x7];                                   // 0x0499(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<E_Type_PlayerName_Vip_Color, struct FS_VIP_TxtInfo>   VIP_TxtInfos;                                            // 0x04A0(0x0050) Edit, BlueprintVisible
		bool                                                       Cheater;                                                 // 0x04F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SM4B[0x7];                                   // 0x04F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FS_VIP_TxtInfo                                      CheatTxtInfo;                                            // 0x04F8(0x0088) Edit, BlueprintVisible, HasGetValueTypeHash
		bool                                                       Killed;                                                  // 0x0580(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AL0G[0x7];                                   // 0x0581(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FS_VIP_TxtInfo                                      KilledTxtInfo;                                           // 0x0588(0x0088) Edit, BlueprintVisible, HasGetValueTypeHash
		bool                                                       bSpecialSelf;                                            // 0x0610(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FYLX[0x7];                                   // 0x0611(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FS_VIP_TxtInfo                                      SpecialSelfTxtInfo;                                      // 0x0618(0x0088) Edit, BlueprintVisible, HasGetValueTypeHash
		struct FS_VIP_TxtInfo                                      CurTxtInfo;                                              // 0x06A0(0x0088) Edit, BlueprintVisible, HasGetValueTypeHash
		class FText                                                DefaultText;                                             // 0x0728(0x0018) Edit, BlueprintVisible

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
