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
	 * WidgetBlueprintGeneratedClass UI_Component_Slider.UI_Component_Slider_C
	 * Size -> 0x0121 (FullSize[0x0521] - InheritedSize[0x0400])
	 */
	class UUI_Component_Slider_C : public USolarUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0400(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             Btn_Add;                                                 // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_Max;                                                 // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_Min;                                                 // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_Minus;                                               // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarCheckBox*                                      CheckBox;                                                // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image;                                                   // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_2;                                                 // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_3;                                                 // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_105;                                               // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              img_Minus;                                               // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              img_Plus;                                                // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_Tick_Master;                                         // 0x0460(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Panel_AllBtn;                                            // 0x0468(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Panel_Btn;                                               // 0x0470(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Panel_Slider;                                            // 0x0478(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Panel_Title;                                             // 0x0480(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Panel_Txt;                                               // 0x0488(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UProgressBar*                                        ProgressBar;                                             // 0x0490(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScaleBox*                                           ScaleBox_1;                                              // 0x0498(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScaleBox*                                           ScaleBox_2;                                              // 0x04A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USlider*                                             Slider;                                                  // 0x04A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarTextBlock*                                     Text_High;                                               // 0x04B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarTextBlock*                                     Text_Low;                                                // 0x04B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      Title;                                                   // 0x04C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarTextBlock*                                     Txt_Max;                                                 // 0x04C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarTextBlock*                                     Txt_Min;                                                 // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_Percent;                                             // 0x04D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarTextBlock*                                     Txt_Title;                                               // 0x04E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       IsOnlySlider;                                            // 0x04E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K90H[0x3];                                   // 0x04E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LocID;                                                   // 0x04EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              TitleTxt;                                                // 0x04F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		bool                                                       LocID_On;                                                // 0x0500(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Switch_On;                                               // 0x0501(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Btns_On;                                                 // 0x0502(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Title_On;                                                // 0x0503(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Detail_On;                                               // 0x0504(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       MinBtn;                                                  // 0x0505(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       MaxBtn;                                                  // 0x0506(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C9DY[0x1];                                   // 0x0507(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnTitleCheckStateChanged;                                // 0x0508(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      SliderPositionX;                                         // 0x0518(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ProgressValue;                                           // 0x051C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Disabled;                                                // 0x0520(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void OnValueChanged_46EC07A048C508BDA50723989F513ECD(float Value);
		void OnClicked_4581E77F444E59C46212D4B044AB0775();
		void OnClicked_F303ADD54EA2116D13C199926C7E4221();
		void OnClicked_7082D3B7429F3A0D25444695B106240C();
		void OnClicked_F12A398B4E7B3FCC5B81498B30B0EF9E();
		void OnValueChanged_ED8F60BD47E45F40238E47A2FD20494B(float Value);
		void OnClicked_D4201935475E85B728EC0D8BDB37081F();
		void OnClicked_D955AA2C4F18DCC35FBBF7B631787AFE();
		void OnClicked_F24A0149401ED22C1DE599AA8F133AA1();
		void OnClicked_A1224F4244C698726DAB569395D07141();
		void OnValueChanged_99C11D344F66C6B0908AEDA35EB8CF84(float Value);
		void OnClicked_58C72EC344D160438E66F2B2126FA46A();
		void OnClicked_55981774465774D02F7155919E947C42();
		void OnClicked_3386FF144C9D8145FC8CC5BF5BA22EB5();
		void OnClicked_30DCA3B445EF8B4A88190D8ACA4DACFA();
		void OnValueChanged_7668AE4944FB733595F69884E51E925A(float Value);
		void OnClicked_3FBEFDFD434FE0146B74FAB600EB4BE5();
		void OnClicked_6F5F6407423A22046233A9A3B636061C();
		void OnClicked_E6C8853646AEB37B69B3A9B69523B5F8();
		void OnClicked_B5158C494D580B04C3D83F880BDD9781();
		void OnValueChanged_565CF23B40FFB2CFB88C668F3BC8BB8D(float Value);
		void OnClicked_B0C02A0840A75A949FECA88DB6322EDE();
		void OnClicked_D3D0B1334A100EB28309BC937106284B();
		void OnClicked_A2B663C84E85E28ECAC069900DB55203();
		void OnClicked_AA481A8D4714BD25ADCFC78523054BBC();
		void OnValueChanged_A18BD8BD43E0C4251FD4DCA72FCAFA19(float Value);
		void OnClicked_3DDDC11B4367F3BF21E2C6A21AF5312B();
		void OnClicked_71D49EEC4DFD212783606D8283EA6EF2();
		void OnClicked_FC35435847A64486FED92ABB2680D3E9();
		void OnClicked_65FF18C84394FA71DF6E94BB38A85DF4();
		void OnValueChanged_DA10EC74497F33DBA716C38293CAE3C0(float Value);
		void OnClicked_DB3DCD394C092940701370AA0185E977();
		void OnClicked_645E7C1B4C3C06EF4C15DE9DC50DBF77();
		void OnClicked_EC34F5AD48E0AB33CA03FC963D730ED9();
		void OnClicked_4228790E4AE33AC14F6912B0EF8DD3E6();
		void OnValueChanged_5425448D4B2A767AF92F34A10D4A5898(float Value);
		void OnClicked_2EA995ED43370B41FF5250A4339C46FD();
		void OnClicked_FC70BB7341D0501A741C738A5F64C868();
		void OnClicked_D5D00F9E47A2ECB6C5EFDD9AE658CB9C();
		void OnClicked_12CF846D472B5F2BD7D85B942D094948();
		void OnValueChanged_899F293743279BBC8BD11988E4D28CD7(float Value);
		void OnClicked_CFB64EF844CD37F19CC005B97AD6F5F4();
		void OnClicked_20FF6B2E422D0C31A67A109AA55CB583();
		void OnClicked_51646745492111369CB37C84E09D0DF3();
		void OnClicked_86770DAC47A4C7F2532334AF9E13CEC6();
		void ConstructCopy();
		class FString GetModuleName();
		void SetDisabled(bool NewParam);
		float Get_ProgressBar_Percent_1();
		void SetOnlySlider();
		void SetTitleIsChecked(bool IsChecked);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
		void BndEvt__CheckBox_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BP_RefreshSliderUI(float Value);
		void BndEvt__Btn_Add_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Btn_Max_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Btn_Min_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Btn_Minus_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
		void OnLocalLangChangedEx(const class FString& InLang);
		void ExecuteUbergraph_UI_Component_Slider(int32_t EntryPoint);
		void OnTitleCheckStateChanged__DelegateSignature(bool IsChecked);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
