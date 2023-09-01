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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum SolarlandResUpdate.EDownloadTaskError
	 */
	enum class EDownloadTaskError : uint8_t
	{
		ConnectFailed          = 0,
		RequestHeadFailed      = 1,
		CreateFileFailed       = 2,
		DownloadFailed         = 3,
		WriteFailed            = 4,
		DeleteOldFailed        = 5,
		MoveFailed             = 6,
		CreateDownloadTaskFail = 7,
		GetPlatformFileFail    = 8,
		GetWrongJsonFormat     = 9,
		MAX                    = 10
	};

	/**
	 * Enum SolarlandResUpdate.ELoginAnnouncement
	 */
	enum class ELoginAnnouncement : uint8_t
	{
		ServerCloseAnnounce = 0,
		UpdateAnnounce      = 1,
		Unknown             = 2,
		MAX                 = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct SolarlandResUpdate.PakFileEntry
	 * Size -> 0x0038
	 */
	struct FPakFileEntry
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Hash;                                                    // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Order;                                                   // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FileSize;                                                // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Version;                                                 // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SolarlandResUpdate.GateAddress_Dep
	 * Size -> 0x0020
	 */
	struct FGateAddress_Dep
	{
	public:
		class FString                                              GateTCPAddr;                                             // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GateUDPAddr;                                             // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SolarlandResUpdate.ServerInfo_Dep
	 * Size -> 0x0050
	 */
	struct FServerInfo_Dep
	{
	public:
		TArray<struct FGateAddress_Dep>                            GateList;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      CDNList;                                                 // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LatestBuildVersion;                                      // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SourceBuildVersion;                                      // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0040(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
