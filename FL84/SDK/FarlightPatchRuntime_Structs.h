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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct FarlightPatchRuntime.PakEntryInfo
	 * Size -> 0x0040
	 */
	struct FPakEntryInfo
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MountPoint;                                              // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    Size;                                                    // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    Offset;                                                  // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Hash;                                                    // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
