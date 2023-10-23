#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class RawInput.RawInputFunctionLibrary
class URawInputFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class URawInputFunctionLibrary* GetDefaultObj();

	TArray<struct FRegisteredDeviceInfo> GetRegisteredDevices();
};

// 0x60 (0x98 - 0x38)
// Class RawInput.RawInputSettings
class URawInputSettings : public UDeveloperSettings
{
public:
	TArray<struct FRawInputDeviceConfiguration>  DeviceConfigurations;                              // 0x38(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRegisterDefaultDevice;                            // 0x48(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRawInputDeadzoneConfiguration        LeftStickDeadzone;                                 // 0x50(0x18)(Edit, Config, NativeAccessSpecifierPublic)
	struct FRawInputDeadzoneConfiguration        RightStickDeadzone;                                // 0x68(0x18)(Edit, Config, NativeAccessSpecifierPublic)
	struct FRawInputDeadzoneConfiguration        TriggerDeadzone;                                   // 0x80(0x18)(Edit, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URawInputSettings* GetDefaultObj();

};

}


