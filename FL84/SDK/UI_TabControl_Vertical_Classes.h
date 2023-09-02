﻿#pragma once

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
	 * WidgetBlueprintGeneratedClass UI_TabControl_Vertical.UI_TabControl_Vertical_C
	 * Size -> 0x0027 (FullSize[0x0488] - InheritedSize[0x0461])
	 */
	class UUI_TabControl_Vertical_C : public UUI_TabControl_Base_C
	{
	public:
		unsigned char                                              UnknownData_NR7P[0x7];                                   // 0x0461(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0468(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Img_Line;                                                // 0x0470(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Tab_Panel;                                               // 0x0478(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarListView*                                      TabList;                                                 // 0x0480(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void SetBindWidget(class UListView** BindList);
		void SetStyle();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_UI_TabControl_Vertical(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif