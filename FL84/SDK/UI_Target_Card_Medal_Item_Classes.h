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
	 * WidgetBlueprintGeneratedClass UI_Target_Card_Medal_Item.UI_Target_Card_Medal_Item_C
	 * Size -> 0x0040 (FullSize[0x0440] - InheritedSize[0x0400])
	 */
	class UUI_Target_Card_Medal_Item_C : public USolarUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0400(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USolarButton*                                        Btn_Press;                                               // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_Bg;                                                  // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              img_Medal;                                               // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bLargeMedal;                                             // 0x0420(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_H8OO[0x7];                                   // 0x0421(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             MedalIcon;                                               // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bSmallMedal;                                             // 0x0430(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GJCQ[0x7];                                   // 0x0431(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          Medal;                                                   // 0x0438(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void BPCalLuaInitDataCopy(int32_t ID, int32_t Type, int32_t Level);
		void Destruct();
		void OnInitialized();
		class FString GetModuleName();
		void BPCalLuaInitData(int32_t ID, int32_t Type, int32_t Level);
		void SetSmallIcon(class UTexture2D* NewParam, bool NewParam1);
		void SetLargeIcon(class UTexture2D* NewParam1, bool NewParam);
		void PreConstruct(bool IsDesignTime);
		void ChangeTargetCardMedalView(int32_t ID, int32_t Type, int32_t Level);
		void ExecuteUbergraph_UI_Target_Card_Medal_Item(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
