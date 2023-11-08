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
	 * WidgetBlueprintGeneratedClass UI_Component_Option.UI_Component_Option_C
	 * Size -> 0x0080 (FullSize[0x04A0] - InheritedSize[0x0420])
	 */
	class UUI_Component_Option_C : public USolarCheckButtonWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0420(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCanvasPanel*                                        Panel_Disabled;                                          // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarCheckBox*                                      SolarCheckBox_Option;                                    // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarTextBlock*                                     Txt_Option;                                              // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       UseText;                                                 // 0x0440(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TBKH[0x7];                                   // 0x0441(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Text;                                                    // 0x0448(0x0018) Edit, BlueprintVisible
		int32_t                                                    TextID;                                                  // 0x0460(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESolarSupportLanguages                                     TextPreviewLang;                                         // 0x0464(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_O7BJ[0x3];                                   // 0x0465(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateFontSizeForLang                               SpecialLangFont;                                         // 0x0468(0x0018) Edit, BlueprintVisible
		bool                                                       Disabled;                                                // 0x0480(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2D9C[0x7];                                   // 0x0481(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnOptionCheckStateChanged;                               // 0x0488(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bCustomClicked;                                          // 0x0498(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PPJP[0x3];                                   // 0x0499(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    OptionType;                                              // 0x049C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnOptionCheckStateChanged_9A6B4BE94F44D01EA93D5DA4624713A7(bool bIsChecked);
		void OnOptionCheckStateChanged_B328F02F4D38A5B647A2E39787D6B7FF(bool bIsChecked);
		void OnOptionCheckStateChanged_9410E4A247228C5C49827BBCB14E2F8E(bool bIsChecked);
		void OnOptionCheckStateChanged_FA9C8D9547DBE6A88F9B008052A3A8F2(bool bIsChecked);
		void OnOptionCheckStateChanged_CB75551744375AA1F10E42BA80552C2D(bool bIsChecked);
		void OnOptionCheckStateChanged_563BDE8042B07315554FDFBACB5B34C0(bool bIsChecked);
		void OnOptionCheckStateChanged_58DD3A144447CA56A8D3D0BB3C0E96B3(bool bIsChecked);
		void OnOptionCheckStateChanged_241856C14251641959B442A242BB16DF(bool bIsChecked);
		void OnOptionCheckStateChanged_FFF6BFC44164C7E9BB54E29BEA41BB00(bool bIsChecked);
		void OnOptionCheckStateChanged_EB8E49B04D2E1BCA16F4A7B14DC06E0E(bool bIsChecked);
		void OnOptionCheckStateChanged_7A5354184CB86F39B9BB22A8BB302BB6(bool bIsChecked);
		void OnOptionCheckStateChanged_7D33A1964244100AB7A8EE839CB9DF57(bool bIsChecked);
		void OnOptionCheckStateChanged_545873B847E43044ECC1EF82C9DE4D19(bool bIsChecked);
		void OnOptionCheckStateChanged_1A195F374F5A412A3B09D8923CE756E8(bool bIsChecked);
		void OnOptionCheckStateChanged_E302B92447022AA409C54C923E7C6D2B(bool bIsChecked);
		void OnOptionCheckStateChanged_2CB75A24451DA86183EEF890EC617A37(bool bIsChecked);
		void OnOptionCheckStateChanged_16615A6C46179D8D081BA3B4BD6CBCAF(bool bIsChecked);
		void OnOptionCheckStateChanged_7FC40CD94BF5573EA8FE1EAFB3A6984E(bool bIsChecked);
		void OnOptionCheckStateChanged_8FD5EC384AA352EBFEBA4CAD76C5B7D3(bool bIsChecked);
		void OnOptionCheckStateChanged_4F392349457ACE3D7EDDA1A1C082FD9F(bool bIsChecked);
		void OnOptionCheckStateChanged_289C7E364397D7F650914CAC981898A9(bool bIsChecked);
		void OnOptionCheckStateChanged_C112F03F427767A2788DA1A0FE605606(bool bIsChecked);
		void OnOptionCheckStateChanged_DF420A9E4B45097267D13D98A919C953(bool bIsChecked);
		void OnOptionCheckStateChanged_9DC424E34EF40B9FAD27AB858826B030(bool bIsChecked);
		void OnOptionCheckStateChanged_BB87C8CB47862B834D7D7EA7A1BAE46E(bool bIsChecked);
		void OnOptionCheckStateChanged_1F1F21924CE0158CCCB2CAB6A8254E87(bool bIsChecked);
		void OnOptionCheckStateChanged_97D911D0485E145BC64B9297E882FA94(bool bIsChecked);
		void OnOptionCheckStateChanged_0DCE3F114B791D029F41D49DB6BAC76F(bool bIsChecked);
		void OnOptionCheckStateChanged_D40A14D2430221C01DBFD0A0878F1F7B(bool bIsChecked);
		void OnOptionCheckStateChanged_2724956F48653905D41603B52BECEC30(bool bIsChecked);
		void OnOptionCheckStateChanged_D447F5A24B62D71D46994289C5598458(bool bIsChecked);
		void OnOptionCheckStateChanged_798D852A424B61AC82077FB7944401B5(bool bIsChecked);
		void OnOptionCheckStateChanged_22ADF35D4CF0A42E85F380BB2A2BA19A(bool bIsChecked);
		void OnOptionCheckStateChanged_C7C4F4504CB52C9FBCF1958FA053BB6F(bool bIsChecked);
		void OnOptionCheckStateChanged_45AFCA9240BC296EB19AAF8E680F27FA(bool bIsChecked);
		void OnOptionCheckStateChanged_0AB0C0C542F59F00C7976FAB557AD0EA(bool bIsChecked);
		void OnOptionCheckStateChanged_D8E380FA4A27DCAAFE9644946A3A1ABC(bool bIsChecked);
		void OnOptionCheckStateChanged_F61DE4D8430D6B944A602A88E4CED181(bool bIsChecked);
		void OnOptionCheckStateChanged_53DDDC2D4B20E99735FB509238BD592C(bool bIsChecked);
		void OnOptionCheckStateChanged_AE6E0CB44CBB8D36A0948188849F30ED(bool bIsChecked);
		void OnOptionCheckStateChanged_8337630244C3BEA704B5EA8CE4DD9129(bool bIsChecked);
		void OnOptionCheckStateChanged_988C1CD949B02F0868DF0D83010774F8(bool bIsChecked);
		void OnOptionCheckStateChanged_B317BE5944263C460C0713AEA3FC4726(bool bIsChecked);
		void OnOptionCheckStateChanged_4D31E5324F7DFEADA5553C91904E937C(bool bIsChecked);
		void OnOptionCheckStateChanged_74E7477D42BB3BDD62EB3FA41E4A3D5A(bool bIsChecked);
		void OnOptionCheckStateChanged_3F8524AE42F6FB96D4512E9C4EF86DF3(bool bIsChecked);
		void OnOptionCheckStateChanged_E14485434CEE8D481629E3B7C581F139(bool bIsChecked);
		void OnOptionCheckStateChanged_591CA196437EA24DD8822C9F76BA9579(bool bIsChecked);
		void OnOptionCheckStateChanged_7A43709E40803CA915CD1FA136279C39(bool bIsChecked);
		void OnOptionCheckStateChanged_5CE1700C4E4283E01F1A0C946A08F351(bool bIsChecked);
		void OnOptionCheckStateChanged_3337739D44A0FDCFB13358961C192BAE(bool bIsChecked);
		void OnOptionCheckStateChanged_46751CA94728720ADC1B39AE583C13DE(bool bIsChecked);
		void OnOptionCheckStateChanged_1B446CBA4389FADF8004B2B31EFE7836(bool bIsChecked);
		void OnOptionCheckStateChanged_3D1527334FA05CDF1DE7078F10D8469D(bool bIsChecked);
		void OnOptionCheckStateChanged_06EB5AB9464B617A78FDB8AFB0F31419(bool bIsChecked);
		void OnOptionCheckStateChanged_312F9DDE49154D799B94BC9024181B3A(bool bIsChecked);
		void OnOptionCheckStateChanged_0CAC9195468EACDEA9C86B9280903567(bool bIsChecked);
		void OnOptionCheckStateChanged_41FF20FE43BB2F86469F7C9E84E59E6E(bool bIsChecked);
		void OnOptionCheckStateChanged_F4BEEA8D43E2BDF07229C7B867684386(bool bIsChecked);
		void OnOptionCheckStateChanged_0AD2890D408D00890C470E929C29D23F(bool bIsChecked);
		void OnOptionCheckStateChanged_2EDC41D14187E999487EC39FBBCC3F3F(bool bIsChecked);
		void OnOptionCheckStateChanged_C17C4DEC488CFEBBEE16EB9FD5D0E60D(bool bIsChecked);
		void OnOptionCheckStateChanged_676A50E34720596B53628FAC58034798(bool bIsChecked);
		void OnOptionCheckStateChanged_820A811B4FC9EDAA8CF6D2A481A43B59(bool bIsChecked);
		void OnOptionCheckStateChanged_FAF71C534CC1ADA36CE4CF9823238C14(bool bIsChecked);
		void OnOptionCheckStateChanged_279D3E3C4FC4AF5BCF0B968DC376B0E3(bool bIsChecked);
		void OnOptionCheckStateChanged_223707904685E5F80F2C0994906F5C93(bool bIsChecked);
		void OnOptionCheckStateChanged_1C612CDA4E0BF6FA9252FFBEEFD46687(bool bIsChecked);
		void OnOptionCheckStateChanged_254C5AF843053A5F936D69BE046EEB23(bool bIsChecked);
		void OnOptionCheckStateChanged_C06C367E40D46F2972785D8B3B0E82C9(bool bIsChecked);
		void OnOptionCheckStateChanged_28ED924E417D8BCC11EB03A1BF125CD4(bool bIsChecked);
		void OnOptionCheckStateChanged_BCA4D0E945C13C8143E7439857AA7097(bool bIsChecked);
		void OnOptionCheckStateChanged_4FD7288641A9573A2975058B941AD815(bool bIsChecked);
		void OnOptionCheckStateChanged_BFEDB1734A016E3842C529B0CF8BB2A4(bool bIsChecked);
		void OnOptionCheckStateChanged_017109A14906765B631320A4E22DE20A(bool bIsChecked);
		void OnOptionCheckStateChanged_A1D9A7694044E5592C57DAADABA5B218(bool bIsChecked);
		void OnOptionCheckStateChanged_F9537E3F4181C5AD0AF1B483608DD3A6(bool bIsChecked);
		void OnOptionCheckStateChanged_593FB78648DC2DE6E780FE9A6B49881B(bool bIsChecked);
		void OnOptionCheckStateChanged_F6B9FA9341DCFA2003C555A7B44B7B26(bool bIsChecked);
		void OnOptionCheckStateChanged_9B02F0AC4D63F3B2C154758DD091BEC9(bool bIsChecked);
		void OnOptionCheckStateChanged_0D03C270454AE681EAC77592541F7E6D(bool bIsChecked);
		void OnOptionCheckStateChanged_DDAB824948585873B7A2B8A31A2EB49C(bool bIsChecked);
		void OnOptionCheckStateChanged_05B81C5A4226DACCC82016A2BE10BE6F(bool bIsChecked);
		void OnOptionCheckStateChanged_8CEA3BDE430E680C0C7483B966C56D43(bool bIsChecked);
		void OnOptionCheckStateChanged_64B70EBD4746DE3F6359608450F2FF1B(bool bIsChecked);
		void OnOptionCheckStateChanged_3B3D975F46B17B8771B4A2934A09D0AD(bool bIsChecked);
		void OnOptionCheckStateChanged_E0C344544C006D1128A7A4BFEEBCE362(bool bIsChecked);
		void OnOptionCheckStateChanged_3CFBD2724417EEDE2E075584BDAB2861(bool bIsChecked);
		void OnOptionCheckStateChanged_9937F37F4329B47327011E953C01724D(bool bIsChecked);
		void OnOptionCheckStateChanged_1A298E7843861DED8606D6BB48CCD029(bool bIsChecked);
		void OnOptionCheckStateChanged_6DEB32664EE0B923ACFCCF9D0FFF1EE7(bool bIsChecked);
		void OnOptionCheckStateChanged_6C8C27DA4DD48D3018A14F8A8E414FAA(bool bIsChecked);
		void OnOptionCheckStateChanged_70CDA4944D9D93006021A299AA4CE414(bool bIsChecked);
		void OnOptionCheckStateChanged_DEAB9B2E4CA9071B85A7D09A46BD5392(bool bIsChecked);
		void OnOptionCheckStateChanged_436FF5DF40BCAB05F597F780E83674B7(bool bIsChecked);
		void OnOptionCheckStateChanged_30D2ACF74CD45F1C5FEFE0BB0C9139EB(bool bIsChecked);
		void OnOptionCheckStateChanged_C1498FDC46254BA9168E38B955AB7E3A(bool bIsChecked);
		void OnOptionCheckStateChanged_B85BF14F46EAB6E434543BBAF589A771(bool bIsChecked);
		void OnOptionCheckStateChanged_C8D6CD194D94321BDF5E12ACF5871B49(bool bIsChecked);
		void OnOptionCheckStateChanged_A4DDCA8840C160DB196700B4F8FD232B(bool bIsChecked);
		void OnOptionCheckStateChanged_85244A4E46C6145BDD5B1995EBBBE28D(bool bIsChecked);
		void OnOptionCheckStateChanged_5BAC156843C2214860E4019B36C324D1(bool bIsChecked);
		void OnOptionCheckStateChanged_48C9CC2E400F4D4987247DBD5050F2D0(bool bIsChecked);
		void OnOptionCheckStateChanged_C7DE17714F2192BC5E033D820749A090(bool bIsChecked);
		void OnOptionCheckStateChanged_77B720824715EB87A2AC64922ED3D153(bool bIsChecked);
		void OnOptionCheckStateChanged_FAD1E69644C241FA67CEF18243D87A17(bool bIsChecked);
		void OnOptionCheckStateChanged_CAA66F294462F5B97247078B1564B4FF(bool bIsChecked);
		void OnOptionCheckStateChanged_3F80BAA04F6E9B1B8E1116BCA2B8A3F3(bool bIsChecked);
		void OnOptionCheckStateChanged_3E3B44ED4D8CAB332A38498C2A93CA25(bool bIsChecked);
		void OnOptionCheckStateChanged_5CA9E2234D73F9B5D380B9BA2CA0568B(bool bIsChecked);
		void OnOptionCheckStateChanged_763D2DDD4D0A306298EA98B394898017(bool bIsChecked);
		void OnOptionCheckStateChanged_D66A68F94BB6D2BF8E50BBAC08E19FD1(bool bIsChecked);
		void OnOptionCheckStateChanged_24D3BCF2457AA3C228EB4DA0CF9A8F73(bool bIsChecked);
		void OnOptionCheckStateChanged_A533369F40F9149F89C38B94EF87B16D(bool bIsChecked);
		void OnOptionCheckStateChanged_6F8CC7484992FACCBBCDA6B5D77C4DFC(bool bIsChecked);
		void OnInitialized();
		void OnListItemObjectSetCopy(class UObject* ListItemObject);
		class FString GetModuleName();
		void SetTextID(int32_t LocTextID);
		void SetText(const class FString& NewParam);
		void SetEnabled(bool Enabled);
		void SetOptionType(int32_t OptionType);
		void ManualOptionSetIsChecked(bool bIsChecked);
		void BP_OnEntryReleased();
		void BP_OnItemExpansionChanged(bool bIsExpanded);
		void BP_OnItemSelectionChanged(bool bIsSelected);
		void OnListItemObjectSet(class UObject* ListItemObject);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__SolarCheckBox_Option_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void OnSelected(bool bSelected);
		void SetDisbaled(bool Disabled);
		void RefreshOptionTxtUI();
		void ExecuteUbergraph_UI_Component_Option(int32_t EntryPoint);
		void OnOptionCheckStateChanged__DelegateSignature(bool bIsChecked);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
