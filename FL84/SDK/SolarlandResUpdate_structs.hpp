#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EDownloadTaskError : uint8
{
	ConnectFailed                  = 0,
	RequestHeadFailed              = 1,
	CreateFileFailed               = 2,
	DownloadFailed                 = 3,
	WriteFailed                    = 4,
	DeleteOldFailed                = 5,
	MoveFailed                     = 6,
	CreateDownloadTaskFail         = 7,
	GetPlatformFileFail            = 8,
	GetWrongJsonFormat             = 9,
	EDownloadTaskError_MAX         = 10,
};

enum class ELoginAnnouncement : uint8
{
	ServerCloseAnnounce            = 0,
	UpdateAnnounce                 = 1,
	Unknown                        = 2,
	ELoginAnnouncement_MAX         = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct SolarlandResUpdate.GateAddress_Dep
struct FGateAddress_Dep
{
public:
	class FString                                GateTCPAddr;                                       // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GateUDPAddr;                                       // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct SolarlandResUpdate.ServerInfo_Dep
struct FServerInfo_Dep
{
public:
	TArray<struct FGateAddress_Dep>              GateList;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        CDNList;                                           // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LatestBuildVersion;                                // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SourceBuildVersion;                                // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct SolarlandResUpdate.PakFileEntry
struct FPakFileEntry
{
public:
	class FString                                Filename;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Hash;                                              // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Order;                                             // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FileSize;                                          // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Version;                                           // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


