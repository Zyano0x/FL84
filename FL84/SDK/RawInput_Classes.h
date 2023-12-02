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
	 * Class RawInput.RawInputFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URawInputFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		TArray<struct FRegisteredDeviceInfo> STATIC_GetRegisteredDevices();
		static UClass* StaticClass();
	};

	/**
	 * Class RawInput.RawInputSettings
	 * Size -> 0x0060 (FullSize[0x0098] - InheritedSize[0x0038])
	 */
	class URawInputSettings : public UDeveloperSettings
	{
	public:
		TArray<struct FRawInputDeviceConfiguration>                DeviceConfigurations;                                    // 0x0038(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRegisterDefaultDevice;                                  // 0x0048(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5KR0[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRawInputDeadzoneConfiguration                      LeftStickDeadzone;                                       // 0x0050(0x0018) Edit, Config, NativeAccessSpecifierPublic
		struct FRawInputDeadzoneConfiguration                      RightStickDeadzone;                                      // 0x0068(0x0018) Edit, Config, NativeAccessSpecifierPublic
		struct FRawInputDeadzoneConfiguration                      TriggerDeadzone;                                         // 0x0080(0x0018) Edit, Config, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
