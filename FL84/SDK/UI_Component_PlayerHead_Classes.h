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
	 * WidgetBlueprintGeneratedClass UI_Component_PlayerHead.UI_Component_PlayerHead_C
	 * Size -> 0x00CF (FullSize[0x04CF] - InheritedSize[0x0400])
	 */
	class UUI_Component_PlayerHead_C : public USolarUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0400(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USolarButton*                                        Btn_ShowCard;                                            // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Canvas_Frame;                                            // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarImageURL*                                      Img_Avatar;                                              // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_AvatarFrame;                                         // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_Bg;                                                  // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_BGLine;                                              // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_Empty;                                               // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_Gender;                                              // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_Gender_Bg;                                           // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_Hover;                                               // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_Social;                                              // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            Overlay_Normal;                                          // 0x0460(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Panel_FrameAnim;                                         // 0x0468(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            Size_2;                                                  // 0x0470(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            Size_3;                                                  // 0x0478(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            Size_Avatar;                                             // 0x0480(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            Size_Vip;                                                // 0x0488(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_Vip_Icon_Type_C*                                 UI_Vip;                                                  // 0x0490(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       ShowBusinessCardBtn;                                     // 0x0498(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P4VO[0x7];                                   // 0x0499(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnClicked;                                               // 0x04A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnReleased;                                              // 0x04B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsNonuseFrame;                                           // 0x04C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Empty;                                                   // 0x04C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		E_Type_Social                                              Social;                                                  // 0x04C2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       GenderOn;                                                // 0x04C3(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		E_Type_Gender                                              Gender;                                                  // 0x04C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XCWL[0x3];                                   // 0x04C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Size;                                                    // 0x04C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Vip;                                                     // 0x04CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		E_TabLobbyItemState                                        StateHD;                                                 // 0x04CD(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsCustom;                                                // 0x04CE(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void OnURLDownloadFinish_C952552C4D37C670846E6A8AEE428B09(bool bSuccess);
		void OnClicked_527D1B154D24F140D9DA5785D97F801B();
		void OnURLDownloadFinish_C34F19C843592691A9AE85BDEF5CF009(bool bSuccess);
		void OnClicked_88E313C7445ECB66ED358FBA347D09C1();
		void OnURLDownloadFinish_462E60E44124DC1B194B12AFA823DBFC(bool bSuccess);
		void OnClicked_8F76342A494D0012470F84BC01782DE4();
		void OnURLDownloadFinish_D8FF15AE437875053C3111B749A1E24F(bool bSuccess);
		void OnClicked_F180CD7F49E520599C663490F0AB82EC();
		void OnURLDownloadFinish_9278A4614991FF1CAF36258931CD4109(bool bSuccess);
		void OnClicked_2A2E6377423153BB1FB709A74F65DCDF();
		void OnURLDownloadFinish_1F70369A43AD62A4D8535296BA424D52(bool bSuccess);
		void OnClicked_EFA58478436F16F121BBB38BF9D63802();
		void OnURLDownloadFinish_8C9C7E5A43CDEA9D66F9FF8A9AFD2F1E(bool bSuccess);
		void OnClicked_BA328C0346FD9D96348B73B490B78F63();
		void OnURLDownloadFinish_BEC9C8EE4BA412DEA06E56A21BDE7C17(bool bSuccess);
		void OnClicked_09C5CDEA4F7D292ACEE5B8A850DA9C77();
		void OnURLDownloadFinish_3FC88FD649EFA95ECA8493B5CBA18C5D(bool bSuccess);
		void OnClicked_2A0EEE704DF99E44D61D85A3CBF79F7F();
		void OnURLDownloadFinish_D6384FD74168AA6839A411905C974947(bool bSuccess);
		void OnClicked_60BE132D44E33B4FEE859D8AB5B54693();
		void OnURLDownloadFinish_900DE5AE41E8B62E7ADC5C86017E55E6(bool bSuccess);
		void OnClicked_68D77842466635BEDA072EAD42F0FB59();
		void OnURLDownloadFinish_7CE7F961471903363450A2A8902F893C(bool bSuccess);
		void OnClicked_20BCA2364D03C43CD9EEBA9BAF07483A();
		void RefreshByPSCopy(class ASolarPlayerState* ps, bool bWithoutGender);
		void ForceShowFrameCopy(int32_t FrameID);
		void SetVipTypeCopy(unsigned char VipType);
		void OnSolarUIClosed();
		void OnInitialized();
		void Destruct();
		void ConstructCopy();
		void SetAvatarCopy(int32_t AvatarID, const class FString& AvatarUrl);
		void OnSolarUIOpened();
		class FString GetModuleName();
		void ForceShowFrame(int32_t FrameID);
		void RefreshByPS(class ASolarPlayerState* ps, bool bWithoutGender);
		void SetAvatarSize(bool IsCustom);
		void SetAvatar(int32_t AvatarID, const class FString& AvatarUrl);
		void SetStateHD(E_TabLobbyItemState StateHD);
		void SetDefaultSteamAvatar();
		void SetVipType(unsigned char VipType);
		struct FEventReply OnTouchMoved(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
		void SetAvatarState(bool IsCollapsed);
		void SetAvatarIcon(int32_t InAvatarID);
		void SetEmptyState(bool IsEmpty);
		void SetPlayerGender(E_Type_Gender Gender);
		void SetSocialIcon(E_Type_Social Social);
		void Update();
		void PreConstruct(bool IsDesignTime);
		void BndEvt__Btn_PlayerInfo_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__Btn_PlayerInfo_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void Construct();
		void ExecuteUbergraph_UI_Component_PlayerHead(int32_t EntryPoint);
		void OnReleased__DelegateSignature();
		void OnClicked__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
