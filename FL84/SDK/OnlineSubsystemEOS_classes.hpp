#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// Class OnlineSubsystemEOS.EOSArtifactSettings
class UEOSArtifactSettings : public UDataAsset
{
public:

	static class UClass* StaticClass();
	static class UEOSArtifactSettings* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class OnlineSubsystemEOS.EOSSettings
class UEOSSettings : public UObject
{
public:
	class FString                                CacheDir;                                          // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DefaultArtifactName;                               // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TickBudgetInMilliseconds;                          // 0x48(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableOverlay;                                    // 0x4C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableSocialOverlay;                              // 0x4D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldEnforceBeingLaunchedByEGS;                  // 0x4E(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FB1[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        TitleStorageTags;                                  // 0x50(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TitleStorageReadChunkLength;                       // 0x60(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FB2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FArtifactSettings>             Artifacts;                                         // 0x68(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseEAS;                                           // 0x78(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseEOSConnect;                                    // 0x79(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMirrorStatsToEOS;                                 // 0x7A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMirrorAchievementsToEOS;                          // 0x7B(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseEOSSessions;                                   // 0x7C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMirrorPresenceToEAS;                              // 0x7D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FB4[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEOSSettings* GetDefaultObj();

};

// 0x8 (0x1BB8 - 0x1BB0)
// Class OnlineSubsystemEOS.NetConnectionEOS
class UNetConnectionEOS : public UIpConnection
{
public:
	uint8                                        Pad_FB8[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNetConnectionEOS* GetDefaultObj();

};

// 0x8 (0x7D0 - 0x7C8)
// Class OnlineSubsystemEOS.NetDriverEOS
class UNetDriverEOS : public UIpNetDriver
{
public:
	bool                                         bIsPassthrough;                                    // 0x7C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsUsingP2PSockets;                                // 0x7C9(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FBA[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNetDriverEOS* GetDefaultObj();

};

}


