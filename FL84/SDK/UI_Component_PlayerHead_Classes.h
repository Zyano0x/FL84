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
		unsigned char                                              UnknownData_PG4F[0x7];                                   // 0x0499(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnClicked;                                               // 0x04A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnReleased;                                              // 0x04B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsNonuseFrame;                                           // 0x04C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Empty;                                                   // 0x04C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		E_Type_Social                                              Social;                                                  // 0x04C2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       GenderOn;                                                // 0x04C3(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		E_Type_Gender                                              Gender;                                                  // 0x04C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_I7S6[0x3];                                   // 0x04C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Size;                                                    // 0x04C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Vip;                                                     // 0x04CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		E_TabLobbyItemState                                        StateHD;                                                 // 0x04CD(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsCustom;                                                // 0x04CE(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void OnURLDownloadFinish_7A8697F34EA1E8C06CBB8FBB5ECF380E(bool bSuccess);
		void OnClicked_8717011F4CE7571EA4340F9D0C6C089F();
		void OnURLDownloadFinish_F6C6DC1047A3A91371FF92B890D1409E(bool bSuccess);
		void OnClicked_BF83E40A4E707638676FF38AEC12AA11();
		void OnURLDownloadFinish_705FD930463F40B5822F0989EC1E6F6A(bool bSuccess);
		void OnClicked_CAE10ECE4C68D093911FE48FAEE43CC4();
		void OnURLDownloadFinish_9DC070F2474BE0E1A02DC2ACBEC1D802(bool bSuccess);
		void OnClicked_D3B98BE247E87105BEB0849EA853D45F();
		void OnURLDownloadFinish_0BAD618E42E6678AB79DF59AB396797A(bool bSuccess);
		void OnClicked_0039CCB549DE922400464C8B8FA902A9();
		void OnURLDownloadFinish_C0C9179741E61F11C00DEF89641A046F(bool bSuccess);
		void OnClicked_E7F890B74CA05479555642848EF30FBA();
		void OnURLDownloadFinish_A614FEA1431CA9F2B27A88891CD1F204(bool bSuccess);
		void OnClicked_136C318D407DC082F5DA29B6FCA613F1();
		void OnURLDownloadFinish_4520C16141B9903FFFFE5FBE2E4128AC(bool bSuccess);
		void OnClicked_0D6797B3454F5A4DB896F499AD3CB0D3();
		void OnURLDownloadFinish_26FFDE8948ABA4568CA869BEA087A98E(bool bSuccess);
		void OnClicked_6806A63746BF0468DE2BE9AE40533007();
		void OnURLDownloadFinish_6E30732349046FA41634DD8143EDC308(bool bSuccess);
		void OnClicked_0518350A4C5226EEC81C4596B7F56076();
		void OnURLDownloadFinish_75E1F28E4231CEE4152E9985E405123F(bool bSuccess);
		void OnClicked_C60C853449AF54579D4B9FA4453D280A();
		void OnURLDownloadFinish_5C8A211842C5DEA8B9A16D9E4022926E(bool bSuccess);
		void OnClicked_5442F93C4FBEAADB8B5981AFC72AB7A6();
		void RefreshByPSCopy(class ASolarPlayerState* ps, bool bWithoutGender);
		void SetVipTypeCopy(unsigned char VipType);
		void ConstructCopy();
		void SetAvatarCopy(int32_t AvatarID, const class FString& AvatarUrl);
		void OnInitialized();
		void ForceShowFrameCopy(int32_t FrameID);
		void OnSolarUIClosed();
		void Destruct();
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
