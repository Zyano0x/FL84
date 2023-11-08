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
		unsigned char                                              UnknownData_OA1J[0x7];                                   // 0x0499(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnClicked;                                               // 0x04A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnReleased;                                              // 0x04B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsNonuseFrame;                                           // 0x04C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Empty;                                                   // 0x04C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		E_Type_Social                                              Social;                                                  // 0x04C2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       GenderOn;                                                // 0x04C3(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		E_Type_Gender                                              Gender;                                                  // 0x04C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HMC8[0x3];                                   // 0x04C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Size;                                                    // 0x04C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Vip;                                                     // 0x04CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		E_TabLobbyItemState                                        StateHD;                                                 // 0x04CD(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsCustom;                                                // 0x04CE(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void OnURLDownloadFinish_840E607E48716F5C26BEACAC213F0AB9(bool bSuccess);
		void OnClicked_8C16112C476CA60AA45A2898B33B3EC0();
		void OnURLDownloadFinish_E1347CB94C95B398B0B107B30B606A0F(bool bSuccess);
		void OnClicked_7C63ED5341D48D894DC01CB1EA450F2E();
		void OnURLDownloadFinish_B71006564FE431CA03CF138E753E96F9(bool bSuccess);
		void OnClicked_D9EBE6AD4EBDA97BBC4ADEAF15BC5640();
		void OnURLDownloadFinish_524AEA4A40DFBF844E7AFFB9522573FA(bool bSuccess);
		void OnClicked_C36263C54CDF829F60B63D95DA78162B();
		void OnURLDownloadFinish_A2128E4049A80A40562D7A9E4842D8A1(bool bSuccess);
		void OnClicked_4615C9964BD48EE3087B72B1AEE55A9B();
		void OnURLDownloadFinish_83CA2BF84E5D53861742DABD488CB07A(bool bSuccess);
		void OnClicked_AB626E5540B54DC4D82655889086BBD9();
		void OnURLDownloadFinish_0BD8260B4E23EC088FE2E88E54221FF4(bool bSuccess);
		void OnClicked_5B5BCDD04D55005825D9399C46126FBF();
		void OnURLDownloadFinish_8D45F32D4B7ABBA9213ADAAAAF0C2EDB(bool bSuccess);
		void OnClicked_7C58640F4601E4E49BED2493A553F5C7();
		void OnURLDownloadFinish_0E7F8BC1452F38D3F21B9A952FC2702D(bool bSuccess);
		void OnClicked_43A76DC645292C1551CDE5B00357B197();
		void OnURLDownloadFinish_72DC0FDB40091489E714F289DBF6AC34(bool bSuccess);
		void OnClicked_3B89A263444AEC7A319120B0145E7D88();
		void OnURLDownloadFinish_2F4B9BFC4481959170224891D6703F39(bool bSuccess);
		void OnClicked_455F932D4FEB483FC4E2DD8A125A5FD6();
		void OnURLDownloadFinish_D79CD6B44A6A6319E5326E94788374CD(bool bSuccess);
		void OnClicked_339229C444121CB5EC9F19B52833E4D6();
		void OnInitialized();
		void SetAvatarCopy(int32_t AvatarID, const class FString& AvatarUrl);
		void SetVipTypeCopy(unsigned char VipType);
		void OnSolarUIOpened();
		void OnSolarUIClosed();
		void Destruct();
		void ForceShowFrameCopy(int32_t FrameID);
		void ConstructCopy();
		void RefreshByPSCopy(class ASolarPlayerState* ps, bool bWithoutGender);
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
