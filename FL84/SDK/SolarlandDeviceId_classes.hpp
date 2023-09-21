#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x48 - 0x38)
// Class SolarlandDeviceId.SolarlandDeviceInfoSettings
class USolarlandDeviceInfoSettings : public UDeveloperSettings
{
public:
	class FString                                UserName;                                          // 0x38(0x10)(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USolarlandDeviceInfoSettings* GetDefaultObj();

	class USolarlandDeviceInfoSettings* GetInstance();
};

}


