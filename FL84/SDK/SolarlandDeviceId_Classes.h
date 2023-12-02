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
	 * Class SolarlandDeviceId.SolarlandDeviceInfoSettings
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class USolarlandDeviceInfoSettings : public UDeveloperSettings
	{
	public:
		class FString                                              UserName;                                                // 0x0038(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		class USolarlandDeviceInfoSettings* STATIC_GetInstance();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
