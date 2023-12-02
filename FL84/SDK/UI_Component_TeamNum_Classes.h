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
	 * WidgetBlueprintGeneratedClass UI_Component_TeamNum.UI_Component_TeamNum_C
	 * Size -> 0x0078 (FullSize[0x0478] - InheritedSize[0x0400])
	 */
	class UUI_Component_TeamNum_C : public USolarUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0400(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USolarImage*                                         Img_TeamNum;                                             // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_1;                                               // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		E_Type_TeamNum                                             TeamNum;                                                 // 0x0418(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JFMX[0x3];                                   // 0x0419(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Size;                                                    // 0x041C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSlateColor                                         DefaultColor;                                            // 0x0420(0x0028) Edit, BlueprintVisible
		bool                                                       Selected;                                                // 0x0448(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9ANB[0x7];                                   // 0x0449(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         DefaultColor_Seleted;                                    // 0x0450(0x0028) Edit, BlueprintVisible

	public:
		void OnShow();
		void OnSolarUIOpened();
		void OnInitialized();
		void OnSolarUIClosed();
		class FString GetModuleName();
		void SetTeamNum(E_Type_TeamNum Index);
		void SetSelected(bool Selected);
		void SetColor(const struct FLinearColor& InColorAndOpacity);
		void SetType();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_UI_Component_TeamNum(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
