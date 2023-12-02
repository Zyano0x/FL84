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
		unsigned char                                              UnknownData_C8I7[0x7];                                   // 0x0499(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnClicked;                                               // 0x04A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnReleased;                                              // 0x04B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsNonuseFrame;                                           // 0x04C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Empty;                                                   // 0x04C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		E_Type_Social                                              Social;                                                  // 0x04C2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       GenderOn;                                                // 0x04C3(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		E_Type_Gender                                              Gender;                                                  // 0x04C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TRKM[0x3];                                   // 0x04C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Size;                                                    // 0x04C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Vip;                                                     // 0x04CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		E_TabLobbyItemState                                        StateHD;                                                 // 0x04CD(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsCustom;                                                // 0x04CE(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void OnURLDownloadFinish_702130DA4684381AA4E6998480BBD7D7(bool bSuccess);
		void OnClicked_C39A39B440985C87411E2596C33BA36F();
		void OnURLDownloadFinish_23C53E1D4EA49DC9A79E278F62F900BE(bool bSuccess);
		void OnClicked_89473C7043396430FD079CA24F768C2C();
		void OnURLDownloadFinish_096FEA9745DE64C71B2C2E98FF8595A2(bool bSuccess);
		void OnClicked_2015CCF64D958974C844B2B8DCB9342D();
		void OnURLDownloadFinish_390119F64DCADC441A7103B3B7D9C77F(bool bSuccess);
		void OnClicked_E78CFA4045B945149D7853A98E5A2007();
		void OnURLDownloadFinish_CC8E505F4C832B8E84AABDB6C9F0811D(bool bSuccess);
		void OnClicked_25986DD444DD858297D0A6A2475AA22B();
		void OnURLDownloadFinish_9323F4844E1252066F3EE588909E65B1(bool bSuccess);
		void OnClicked_FE7871F64D0B78CAB9D56E801667B628();
		void OnURLDownloadFinish_574CF6BB4D7D749E5A749A8BEC070E41(bool bSuccess);
		void OnClicked_6D9CD0724B9D3B15AEE1009A08FC1449();
		void OnURLDownloadFinish_D1EAF98C4C2418553512DAA9B96E8735(bool bSuccess);
		void OnClicked_6EA6B61140005EFB08983A894F528513();
		void OnURLDownloadFinish_8289AA53403A3888034D0B90638156A2(bool bSuccess);
		void OnClicked_5517652643295B80491040BE1CD33335();
		void OnURLDownloadFinish_D3B73F964AB5B16B7F7E9E9551888913(bool bSuccess);
		void OnClicked_D5AB1124456AC126307009858FEFBF67();
		void OnURLDownloadFinish_459D68154D57943D1CF99D867ECBEE13(bool bSuccess);
		void OnClicked_B3999BC04E86AA61F3F72EAE587502BC();
		void OnURLDownloadFinish_E28118AE4EBCC837A686EF91AA8B3C76(bool bSuccess);
		void OnClicked_C271A0E343347CFF2EAAB096F5A1E151();
		void Destruct();
		void ConstructCopy();
		void SetAvatarCopy(int32_t AvatarID, const class FString& AvatarUrl);
		void RefreshByPSCopy(class ASolarPlayerState* ps, bool bWithoutGender);
		void SetVipTypeCopy(unsigned char VipType);
		void OnSolarUIOpened();
		void OnInitialized();
		void ForceShowFrameCopy(int32_t FrameID);
		void OnSolarUIClosed();
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
