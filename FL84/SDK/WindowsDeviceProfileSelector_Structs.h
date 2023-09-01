#pragma once

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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct WindowsDeviceProfileSelector.WindowsProfileMatchItem
	 * Size -> 0x0010
	 */
	struct FWindowsProfileMatchItem
	{
	public:
		class FString                                              PrimaryGPUBrand;                                         // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WindowsDeviceProfileSelector.WIndowProfileMatch
	 * Size -> 0x0020
	 */
	struct FWIndowProfileMatch
	{
	public:
		class FString                                              Profile;                                                 // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWindowsProfileMatchItem                            Match;                                                   // 0x0010(0x0010) NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
