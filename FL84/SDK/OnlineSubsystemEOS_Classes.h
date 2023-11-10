#pragma once

/**
 * Name: FL84
 * Version: 15.1
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
	 * Class OnlineSubsystemEOS.EOSArtifactSettings
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEOSArtifactSettings : public UDataAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemEOS.EOSSettings
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UEOSSettings : public UObject
	{
	public:
		class FString                                              CacheDir;                                                // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DefaultArtifactName;                                     // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TickBudgetInMilliseconds;                                // 0x0048(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableOverlay;                                          // 0x004C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableSocialOverlay;                                    // 0x004D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldEnforceBeingLaunchedByEGS;                        // 0x004E(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_773S[0x1];                                   // 0x004F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      TitleStorageTags;                                        // 0x0050(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TitleStorageReadChunkLength;                             // 0x0060(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A9M1[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FArtifactSettings>                           Artifacts;                                               // 0x0068(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseEAS;                                                 // 0x0078(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseEOSConnect;                                          // 0x0079(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMirrorStatsToEOS;                                       // 0x007A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMirrorAchievementsToEOS;                                // 0x007B(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseEOSSessions;                                         // 0x007C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMirrorPresenceToEAS;                                    // 0x007D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SM9I[0x2];                                   // 0x007E(0x0002) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemEOS.NetConnectionEOS
	 * Size -> 0x0008 (FullSize[0x1BB8] - InheritedSize[0x1BB0])
	 */
	class UNetConnectionEOS : public UIpConnection
	{
	public:
		unsigned char                                              UnknownData_AWP0[0x8];                                   // 0x1BB0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemEOS.NetDriverEOS
	 * Size -> 0x0008 (FullSize[0x07D0] - InheritedSize[0x07C8])
	 */
	class UNetDriverEOS : public UIpNetDriver
	{
	public:
		bool                                                       bIsPassthrough;                                          // 0x07C8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsUsingP2PSockets;                                      // 0x07C9(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EBU1[0x6];                                   // 0x07CA(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
