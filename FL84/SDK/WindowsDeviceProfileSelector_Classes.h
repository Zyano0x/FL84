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
	 * Class WindowsDeviceProfileSelector.WindowsDeviceProfileMatchingRules
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UWindowsDeviceProfileMatchingRules : public UObject
	{
	public:
		TArray<struct FWIndowProfileMatchGPU>                      MatchProfileGPU;                                         // 0x0028(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FWIndowProfileMatchCPU>                      MatchProfileCPU;                                         // 0x0038(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
