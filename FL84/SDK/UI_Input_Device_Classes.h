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
	 * WidgetBlueprintGeneratedClass UI_Input_Device.UI_Input_Device_C
	 * Size -> 0x0020 (FullSize[0x0420] - InheritedSize[0x0400])
	 */
	class UUI_Input_Device_C : public UUIInputDevice
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0400(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Img_Icon;                                                // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            Size_Icon;                                               // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		ECommonInputType                                           E_InputDevice;                                           // 0x0418(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       UseIcon;                                                 // 0x0419(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CL6R[0x2];                                   // 0x041A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Size;                                                    // 0x041C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetBlendPlatform(bool UseIcon);
		void SetSizeState();
		void PreConstruct(bool IsDesignTime);
		void UpdateInputType(ECommonInputType InputDevice);
		void ExecuteUbergraph_UI_Input_Device(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
