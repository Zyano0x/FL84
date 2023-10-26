#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ERawDataAction : uint8
{
	Default                        = 0,
	UTF8String                     = 1,
	ReverseDecryptString           = 2,
	Texture2DDynamic               = 3,
	ERawDataAction_MAX             = 4,
};

enum class EDownloaderFailedType : uint8
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
	RequestTimeOut                 = 10,
	RequestInvalid                 = 11,
	ResponseInvalid                = 12,
	RequestCanceled                = 13,
	ResponseNoContent              = 14,
	TaskHasCompleted               = 15,
	FileIODownloadFailed           = 16,
	EDownloaderFailedType_MAX      = 17,
};

enum class EServerInfoState : uint8
{
	ESIS_NotReady                  = 0,
	ESIS_Downloading               = 1,
	ESIS_Ready                     = 2,
	ESIS_Failed                    = 3,
	ESIS_OutOfDate                 = 4,
	ESIS_MAX                       = 5,
};

enum class EDownloaderState : uint8
{
	NotStart                       = 0,
	Downloading                    = 1,
	Pausing                        = 2,
	Completed                      = 3,
	EDownloaderState_MAX           = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x48 - 0x0)
// ScriptStruct DownloaderTool.DownloaderResponse
struct FDownloaderResponse
{
public:
	class FString                                URL;                                               // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ErrorCode;                                         // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                Data;                                              // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ContentLength;                                     // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DataLength;                                        // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        Timestamp;                                         // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERawDataAction                    RawDataAction;                                     // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5AB[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct DownloaderTool.DownloaderTaskInfo
struct FDownloaderTaskInfo
{
public:
	class FString                                URL;                                               // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                JsonRequestStr;                                    // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCompleted;                                        // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        CompleteTimeStamp;                                 // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsingResumeTrans;                                 // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceRedownload;                                  // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSaveToCache;                                      // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B2[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                FileDirectory;                                     // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Filename;                                          // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FileExtension;                                     // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERawDataAction                    RawDataAction;                                     // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B3[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}


