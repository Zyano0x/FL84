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
	 * WidgetBlueprintGeneratedClass UI_Settings_Item_Slot.UI_Settings_Item_Slot_C
	 * Size -> 0x0225 (FullSize[0x0625] - InheritedSize[0x0400])
	 */
	class UUI_Settings_Item_Slot_C : public USolarUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0400(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USolarButton*                                        Btn_Info_Mark;                                           // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarButton*                                        btn_jump;                                                // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarCheckButton*                                   Btn_Universal;                                           // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBoxGroup*                                      CheckBoxGroup_Gryo;                                      // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpinBox*                                            EditText_percent;                                        // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            Overlay_1;                                               // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Panel_CheckBox;                                          // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Panel_Common;                                            // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Panel_Jump;                                              // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Panel_SetPercent;                                        // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Panel_ToggleButton;                                      // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UProgressBar*                                        ProgressBar;                                             // 0x0460(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox;                                                 // 0x0468(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_14;                                              // 0x0470(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_15;                                              // 0x0478(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_16;                                              // 0x0480(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_17;                                              // 0x0488(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_18;                                              // 0x0490(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USlider*                                             Slider;                                                  // 0x0498(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarCheckBox*                                      SolarCheckBox_2;                                         // 0x04A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarCheckBox*                                      SolarCheckBox_3;                                         // 0x04A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarCheckBox*                                      SolarCheckBox_4;                                         // 0x04B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarCheckBox*                                      SolarCheckBox_5;                                         // 0x04B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarCheckBox*                                      SolarCheckBox_6;                                         // 0x04C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_Component_Switch_C*                              Switch_On;                                               // 0x04C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarTextBlock*                                     Text_Title;                                              // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarTextBlock*                                     Text_Universal;                                          // 0x04D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_Setting_Tips_C*                                  Tips_Marker;                                             // 0x04E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarTextBlock*                                     Txt_CheckBox_Off_2;                                      // 0x04E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarTextBlock*                                     Txt_CheckBox_Off_3;                                      // 0x04F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarTextBlock*                                     Txt_CheckBox_Off_4;                                      // 0x04F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarTextBlock*                                     Txt_CheckBox_Off_5;                                      // 0x0500(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarTextBlock*                                     Txt_CheckBox_Off_6;                                      // 0x0508(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarTextBlock*                                     Txt_CheckBox_On_2;                                       // 0x0510(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarTextBlock*                                     Txt_CheckBox_On_3;                                       // 0x0518(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarTextBlock*                                     Txt_CheckBox_On_4;                                       // 0x0520(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarTextBlock*                                     Txt_CheckBox_On_5;                                       // 0x0528(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarTextBlock*                                     Txt_CheckBox_On_6;                                       // 0x0530(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarTextBlock*                                     Txt_ReadOnly;                                            // 0x0538(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_Component_Switch_C*                              UI_Component_Switch;                                     // 0x0540(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher_1;                                        // 0x0548(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                TitleText;                                               // 0x0550(0x0018) Edit, BlueprintVisible
		bool                                                       IsLocText;                                               // 0x0568(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PTTA[0x3];                                   // 0x0569(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LocID;                                                   // 0x056C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESolarSupportLanguages                                     PreviewLang;                                             // 0x0570(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_J493[0x7];                                   // 0x0571(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateFontSizeForLang                               SetSpecialLang;                                          // 0x0578(0x0018) Edit, BlueprintVisible
		float                                                      Size;                                                    // 0x0590(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsTips;                                                  // 0x0594(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IsCheckBtn;                                              // 0x0595(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LGVN[0x2];                                   // 0x0596(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CheckBoxWidth;                                           // 0x0598(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsCheckPositionBottom;                                   // 0x059C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7YFF[0x3];                                   // 0x059D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLocLangTextParam>                           CheckGroupListData;                                      // 0x05A0(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash
		TArray<class USolarTextBlock*>                             Txt_CheckBox_OnArray;                                    // 0x05B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		TArray<class USolarTextBlock*>                             Txt_CheckBox_OffArray;                                   // 0x05C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		TArray<class USolarCheckBox*>                              SolarCheckBox_Array;                                     // 0x05D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSwitchStateChanged;                                    // 0x05E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSwitchClicked;                                         // 0x05F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnCheckBoxStateChangedEvent;                             // 0x0600(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnCheckBoxStateChangedEventEx;                           // 0x0610(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsSwitchOn;                                              // 0x0620(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsSlider;                                                // 0x0621(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IsJump;                                                  // 0x0622(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IsDisable;                                               // 0x0623(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIsDisableClick;                                         // 0x0624(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void OnClicked_90142FD84EB72170D9EFBD831F20F6F9();
		void OnStateChangedEvent_53773A0246BCBE382499AABE1F49887B(TArray<class UCheckBox*> ChildChangedArray, int32_t CheckedChildIndex);
		void OnSwitchClicked_43F1471E44666CD1F76B849C3D258B3A();
		void OnClicked_546CBDD24FE5CD75222ECC8C0A1720FD();
		void OnClicked_08BE23AC4CF248738C4A3A9B0929496D();
		void OnStateChangedEvent_C6DAC82D4B300A9CE5845386B7368300(TArray<class UCheckBox*> ChildChangedArray, int32_t CheckedChildIndex);
		void OnSwitchClicked_E46901194F0F24C1DB4BD1A8C432E6C4();
		void OnClicked_7CAF1807480A02DC1E6264B4E1D6C450();
		void OnClicked_B022D7CF4FC6D748758D2DB40A00C730();
		void OnStateChangedEvent_1CFA8E0F4F043B18768301BA9AEBF154(TArray<class UCheckBox*> ChildChangedArray, int32_t CheckedChildIndex);
		void OnSwitchClicked_E3D0E1D146CD5C60BB7F62BF20424F97();
		void OnClicked_4F55BDF445936D7685F7D1B863DA6493();
		void OnClicked_DE93A64B4084919C51A4408EE952C2C9();
		void OnStateChangedEvent_E78A58154D720ED2FA5F43B308957378(TArray<class UCheckBox*> ChildChangedArray, int32_t CheckedChildIndex);
		void OnSwitchClicked_238FF91A48BAD9D50E3BAC8D4B2A2787();
		void OnClicked_2F7D66924B7F6436C726F4ABBCA585E4();
		void OnClicked_F498C3B14067F933E8BA36BEA9D5E960();
		void OnStateChangedEvent_8AAD5FF84EFA7424D01683ADA9021E5B(TArray<class UCheckBox*> ChildChangedArray, int32_t CheckedChildIndex);
		void OnSwitchClicked_B73964DD4ED2E32770268180CED5B6C9();
		void OnClicked_1E3EF2B64617CFCB1D8F40890E80A2CB();
		void OnClicked_D1C523DF45DF445941404882957E59F0();
		void OnStateChangedEvent_B673D4AE449796C0CF5FF7A6154439E1(TArray<class UCheckBox*> ChildChangedArray, int32_t CheckedChildIndex);
		void OnSwitchClicked_29E0B5674FA72E42381C27AA941DCBEB();
		void OnClicked_9E5F014B450B1D5DB1F996A80D5E6522();
		void OnClicked_7267FB624BF119ED3A2C889FD3EF68E2();
		void OnStateChangedEvent_C31631D6446E3A9F60D63E898F74FD67(TArray<class UCheckBox*> ChildChangedArray, int32_t CheckedChildIndex);
		void OnSwitchClicked_A911A897492C967CB698A3926725F9CF();
		void OnClicked_62B1550C417733AE0C104E883B1E0FA0();
		void OnClicked_6DD658ED4FDEB76A13525EA9D1F7A9ED();
		void OnStateChangedEvent_0F154E26444946029586688C28634242(TArray<class UCheckBox*> ChildChangedArray, int32_t CheckedChildIndex);
		void OnSwitchClicked_AA4D53AE423624FFE4D430A59F19788A();
		void OnClicked_A20630404E0A7A728B19A08EAFD66CA5();
		void OnClicked_DA8161384E258C8DF35F3BA361A3CB75();
		void OnStateChangedEvent_C6F7FBBE402D7236BFD3D7B254C11180(TArray<class UCheckBox*> ChildChangedArray, int32_t CheckedChildIndex);
		void OnSwitchClicked_317E89454FD538C0685DEA9087457F1D();
		void OnClicked_45FE4AFE4081438FC5E294BFA7523467();
		void OnClicked_3EAC2DFB4D88404694AB96897FF8D040();
		void OnStateChangedEvent_2747376D4B987A763088B484EA9B6631(TArray<class UCheckBox*> ChildChangedArray, int32_t CheckedChildIndex);
		void OnSwitchClicked_647F21F2433344873E02D0865495E5E6();
		void OnClicked_40FB0A8C4BA5250C79A2A1BAAE35246A();
		void OnClicked_EE857D9045D5261509AE02BD4B8EC2A9();
		void OnStateChangedEvent_668C9A25498B6CF65C2C0398A861BF7B(TArray<class UCheckBox*> ChildChangedArray, int32_t CheckedChildIndex);
		void OnSwitchClicked_51CDA03B47844571C801309E27A13AA2();
		void OnClicked_54D7BA22436500E5FB391F9E884A31E3();
		void OnClicked_D220FDD5419455BFB2E1D5A54D738B11();
		void OnStateChangedEvent_30415C314D0A7B6CB1AC9DABC81FA039(TArray<class UCheckBox*> ChildChangedArray, int32_t CheckedChildIndex);
		void OnSwitchClicked_D8B8373A421FF8DDC48287936F95B0D0();
		void OnClicked_C7034C77481F57ACCF3F3EBE4F83C707();
		void OnClicked_03BA8CBD45C1B82BE5B3B4973C236DDE();
		void OnStateChangedEvent_80AA6E1C4C4A083329B1DDAE0819726E(TArray<class UCheckBox*> ChildChangedArray, int32_t CheckedChildIndex);
		void OnSwitchClicked_C4FDCFDE4D0C83DAC57163AC67D0BF51();
		void OnClicked_51D236CE44C3553374F887A1C0DA24B3();
		void OnClicked_135A94524D1131ACE2ECA0B7E0085726();
		void OnStateChangedEvent_C895B72D4D59B429F52302AAF08443F4(TArray<class UCheckBox*> ChildChangedArray, int32_t CheckedChildIndex);
		void OnSwitchClicked_0C7C443640873CB6FD9B229E628CAF14();
		void OnClicked_3F1962FD4B6AC20AFA70B2B9D7B518D0();
		void OnClicked_D19630FA435995EA6AA397B9FDDCACC7();
		void OnStateChangedEvent_5E3C3D034981EFC55862EC9648889F72(TArray<class UCheckBox*> ChildChangedArray, int32_t CheckedChildIndex);
		void OnSwitchClicked_4FD59BD840C81895063BF8A8C7D1BF14();
		void OnClicked_231C2038408F6C7FEC6F0EAF480DEB95();
		void OnClicked_ED2A83AE494C21D29BB505AD13191AFA();
		void OnStateChangedEvent_7C1850D144257DF60E517B83826BE55F(TArray<class UCheckBox*> ChildChangedArray, int32_t CheckedChildIndex);
		void OnSwitchClicked_393234264A958959373178AB0A0F8B20();
		void OnClicked_368F59564517E13923E6A7BC555828AF();
		void OnClicked_4E67E172478F60203B9D1D98D7166A25();
		void OnStateChangedEvent_8D6E1FE848FACC92846F98BEC19D7D1A(TArray<class UCheckBox*> ChildChangedArray, int32_t CheckedChildIndex);
		void OnSwitchClicked_3CB38B0C4CDCDDEBD5240EB8DBDC735B();
		void OnClicked_FA1F593747B99A7ABD24689905186E25();
		void OnClicked_7149F0CE437C71BE90133785F5E0C863();
		void OnStateChangedEvent_EE353C294FAB57A466F2FCA1E93E90F0(TArray<class UCheckBox*> ChildChangedArray, int32_t CheckedChildIndex);
		void OnSwitchClicked_5261F834493AA6437BB2FE81281C1F09();
		void OnClicked_41C4495440E8DBC856082CA67DC68E76();
		void OnClicked_8C2BC03842154B3D3C66D3BE6A4FE99A();
		void OnStateChangedEvent_6A8C387D489016999D758E82E364F2F7(TArray<class UCheckBox*> ChildChangedArray, int32_t CheckedChildIndex);
		void OnSwitchClicked_0B5ECEAD4968012353FEE58CA3ED25C9();
		void OnClicked_011418104BA9622350357FADF94D65AA();
		void OnClicked_EA157A6E489AA3DC61956B88DA1ECBDF();
		void OnStateChangedEvent_8E4780114C315641936B69802D905FF1(TArray<class UCheckBox*> ChildChangedArray, int32_t CheckedChildIndex);
		void OnSwitchClicked_B82639694723DFEA883A1885054187EE();
		void OnClicked_3CCDDA704DE7DDC365536A9A3A757C94();
		void OnClicked_9185CFA84D3A1587AC19D088D6B193AE();
		void OnStateChangedEvent_DE78563149275F7C08F0D7A127D708F2(TArray<class UCheckBox*> ChildChangedArray, int32_t CheckedChildIndex);
		void OnSwitchClicked_50BF116C41A63243FD7F469A0556D664();
		void OnClicked_BDDD787C4ED92E03CF8D2C8A8622C0F3();
		void OnInitialized();
		class FString GetModuleName();
		void SetDisable(bool IsDisable);
		void UpdateCheckGroupList();
		void AddItemToCheckGroupListData(const class FString& Text);
		void ClearCheckGroupListData();
		void SetSwitchInitValue(bool IsInitValue);
		void SetSwitch(bool IsOn);
		void IsSwitchOnVisible(bool* IsVisible);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__CheckBoxGroup_Gryo_K2Node_ComponentBoundEvent_1_OnCheckBoxGroupStateChangedEvent__DelegateSignature(TArray<class UCheckBox*> ChildChangedArray, int32_t CheckedChildIndex);
		void BndEvt__CheckBoxGroup_Gryo_K2Node_ComponentBoundEvent_2_OnCheckBoxGroupStateChangedEventEx__DelegateSignature(TArray<class UCheckBox*> ChildChangedArray, int32_t CheckedChildIndex, class UCheckBox* PrevCheckedChild);
		void BndEvt__UI_Component_Switch_K2Node_ComponentBoundEvent_0_OnSwitchClicked__DelegateSignature();
		void BndEvt__UI_Component_Switch_K2Node_ComponentBoundEvent_3_OnStateChanged__DelegateSignature(bool NewValue);
		void SetCheckGroupTextList(TArray<class FString> NewParam);
		void ExecuteUbergraph_UI_Settings_Item_Slot(int32_t EntryPoint);
		void OnSwitchStateChanged__DelegateSignature();
		void OnSwitchClicked__DelegateSignature();
		void OnCheckBoxStateChangedEventEx__DelegateSignature();
		void OnCheckBoxStateChangedEvent__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
