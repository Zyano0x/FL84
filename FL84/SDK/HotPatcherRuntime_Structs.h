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
	 * Enum HotPatcherRuntime.ETargetPlatform
	 */
	enum class ETargetPlatform : uint8_t
	{
		None = 0,
		AllPlatforms = 1,
		MAX = 2
	};

	/**
	 * Enum HotPatcherRuntime.EMatchOperator
	 */
	enum class EMatchOperator : uint8_t
	{
		None = 0,
		GREAT_THAN = 1,
		LESS_THAN = 2,
		EQUAL = 3,
		MAX = 4
	};

	/**
	 * Enum HotPatcherRuntime.EMatchRule
	 */
	enum class EMatchRule : uint8_t
	{
		None = 0,
		MATCH = 1,
		IGNOR4 = 2,
		MAX = 3
	};

	/**
	 * Enum HotPatcherRuntime.EMonolithicPathMode
	 */
	enum class EMonolithicPathMode : uint8_t
	{
		MountPath = 0,
		PackagePath = 1,
		MAX = 2
	};

	/**
	 * Enum HotPatcherRuntime.EAssetRegistryRule
	 */
	enum class EAssetRegistryRule : uint8_t
	{
		PATCH = 0,
		PER_CHUNK = 1,
		CUSTOM = 2,
		MAX = 3
	};

	/**
	 * Enum HotPatcherRuntime.EShaderLibNameRule
	 */
	enum class EShaderLibNameRule : uint8_t
	{
		VERSION_ID = 0,
		PROJECT_NAME = 1,
		CUSTOM = 2,
		MAX = 3
	};

	/**
	 * Enum HotPatcherRuntime.EAssetRegistryDependencyTypeEx
	 */
	enum class EAssetRegistryDependencyTypeEx : uint8_t
	{
		None = 0,
		Soft = 1,
		Hard = 2,
		SearchableName = 3,
		SoftManage = 4,
		HardManage = 5,
		Packages = 6,
		Manage = 7,
		All = 8,
		MAX = 9
	};

	/**
	 * Enum HotPatcherRuntime.EPSOSaveMode
	 */
	enum class EPSOSaveMode : uint8_t
	{
		Incremental = 0,
		BoundPSOsOnly = 1,
		SortedBoundPSOs = 2,
		MAX = 3
	};

	/**
	 * Enum HotPatcherRuntime.ESearchCaseMode
	 */
	enum class ESearchCaseMode : uint8_t
	{
		CaseSensitive = 0,
		IgnoreCase = 1,
		MAX = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct HotPatcherRuntime.PakMountInfo
	 * Size -> 0x0018
	 */
	struct FPakMountInfo
	{
	public:
		class FString                                              Pak;                                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PakOrder;                                                // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XSQM[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HotPatcherRuntime.AssetDetail
	 * Size -> 0x0018
	 */
	struct FAssetDetail
	{
	public:
		class FName                                                PackagePath;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AssetType;                                               // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Guid;                                                    // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HotPatcherRuntime.AssetDependenciesDetail
	 * Size -> 0x0060
	 */
	struct FAssetDependenciesDetail
	{
	public:
		class FString                                              ModuleCategory;                                          // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, struct FAssetDetail>                   AssetDependencyDetails;                                  // 0x0010(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HotPatcherRuntime.AssetDependenciesInfo
	 * Size -> 0x0050
	 */
	struct FAssetDependenciesInfo
	{
	public:
		TMap<class FString, struct FAssetDependenciesDetail>       AssetsDependenciesMap;                                   // 0x0000(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HotPatcherRuntime.PakEncryptSettings
	 * Size -> 0x0018
	 */
	struct FPakEncryptSettings
	{
	public:
		bool                                                       bUseDefaultCryptoIni;                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HM21[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFilePath                                           CryptoKeys;                                              // 0x0008(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HotPatcherRuntime.PlatformBasePak
	 * Size -> 0x0018
	 */
	struct FPlatformBasePak
	{
	public:
		ETargetPlatform                                            Platform;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0QIG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFilePath>                                   Paks;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HotPatcherRuntime.MatchRule
	 * Size -> 0x0028
	 */
	struct FMatchRule
	{
	public:
		EMatchRule                                                 Rule;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMatchOperator                                             Operator;                                                // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FIGK[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Size;                                                    // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      Formaters;                                               // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      AssetTypes;                                              // 0x0018(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HotPatcherRuntime.BinariesPatchConfig
	 * Size -> 0x0050
	 */
	struct FBinariesPatchConfig
	{
	public:
		EBinariesPatchFeature                                      BinariesPatchType;                                       // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RDZY[0x17];                                  // 0x0001(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPakEncryptSettings                                 EncryptSettings;                                         // 0x0018(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FPlatformBasePak>                            BaseVersionPaks;                                         // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FMatchRule>                                  MatchRules;                                              // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HotPatcherRuntime.ChunkAssetDescribe
	 * Size -> 0x0148
	 */
	struct FChunkAssetDescribe
	{
	public:
		unsigned char                                              UnknownData_SM1E[0x148];                                 // 0x0000(0x0148) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HotPatcherRuntime.ChunkPakCommand
	 * Size -> 0x0040
	 */
	struct FChunkPakCommand
	{
	public:
		unsigned char                                              UnknownData_4BDY[0x40];                                  // 0x0000(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HotPatcherRuntime.PatcherSpecifyAsset
	 * Size -> 0x0030
	 */
	struct FPatcherSpecifyAsset
	{
	public:
		struct FSoftObjectPath                                     Asset;                                                   // 0x0000(0x0018) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAnalysisAssetDependencies;                              // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IGTQ[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EAssetRegistryDependencyTypeEx>                     AssetRegistryDependencyTypes;                            // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HotPatcherRuntime.ExternFileInfo
	 * Size -> 0x0038
	 */
	struct FExternFileInfo
	{
	public:
		struct FFilePath                                           FilePath;                                                // 0x0000(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              MountPath;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FileHash;                                                // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RIIC[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HotPatcherRuntime.ExternDirectoryInfo
	 * Size -> 0x0020
	 */
	struct FExternDirectoryInfo
	{
	public:
		struct FDirectoryPath                                      DirectoryPath;                                           // 0x0000(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              MountPoint;                                              // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HotPatcherRuntime.PlatformExternAssets
	 * Size -> 0x0028
	 */
	struct FPlatformExternAssets
	{
	public:
		ETargetPlatform                                            TargetPlatform;                                          // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SFKV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FExternFileInfo>                             AddExternFileToPak;                                      // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FExternDirectoryInfo>                        AddExternDirectoryToPak;                                 // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HotPatcherRuntime.PakInternalInfo
	 * Size -> 0x0006
	 */
	struct FPakInternalInfo
	{
	public:
		unsigned char                                              UnknownData_9BVR[0x3];                                   // 0x0000(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIncludeEngineIni;                                       // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludePluginIni;                                       // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeProjectIni;                                      // 0x0005(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HotPatcherRuntime.ChunkInfo
	 * Size -> 0x0088
	 */
	struct FChunkInfo
	{
	public:
		class FString                                              ChunkName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMonolithic;                                             // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMonolithicPathMode                                        MonolithicPathMode;                                      // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStorageUnrealPakList;                                   // 0x0012(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStorageIoStorePakList;                                  // 0x0013(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WWYA[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDirectoryPath>                              AssetIncludeFilters;                                     // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FDirectoryPath>                              AssetIgnoreFilters;                                      // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAnalysisFilterDependencies;                             // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KXDO[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EAssetRegistryDependencyTypeEx>                     AssetRegistryDependencyTypes;                            // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPatcherSpecifyAsset>                        IncludeSpecifyAssets;                                    // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPlatformExternAssets>                       AddExternAssetsToPlatform;                               // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPakInternalInfo                                    InternalFiles;                                           // 0x0070(0x0006) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H41Y[0x12];                                  // 0x0076(0x0012) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HotPatcherRuntime.PakCommand
	 * Size -> 0x0058
	 */
	struct FPakCommand
	{
	public:
		class FString                                              ChunkName;                                               // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MountPath;                                               // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AssetPackage;                                            // 0x0020(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      PakCommands;                                             // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      IoStoreCommands;                                         // 0x0040(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PT53[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HotPatcherRuntime.PakFileProxy
	 * Size -> 0x0068
	 */
	struct FPakFileProxy
	{
	public:
		class FString                                              ChunkStoreName;                                          // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETargetPlatform                                            Platform;                                                // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QHLA[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StorageDirectory;                                        // 0x0018(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PakCommandSavePath;                                      // 0x0028(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PakSavePath;                                             // 0x0038(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPakCommand>                                 PakCommands;                                             // 0x0048(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      IoStoreCommands;                                         // 0x0058(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HotPatcherRuntime.CookerConfig
	 * Size -> 0x0088
	 */
	struct FCookerConfig
	{
	public:
		class FString                                              EngineBin;                                               // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ProjectPath;                                             // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EngineParams;                                            // 0x0020(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      CookPlatforms;                                           // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCookAllMap;                                             // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UN1X[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      CookMaps;                                                // 0x0048(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      CookFilter;                                              // 0x0058(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      CookSettings;                                            // 0x0068(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              options;                                                 // 0x0078(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HotPatcherRuntime.PatcherEntitySettingBase
	 * Size -> 0x0008
	 */
	struct FPatcherEntitySettingBase
	{
	public:
		unsigned char                                              UnknownData_5MNN[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HotPatcherRuntime.HotPatcherSettingBase
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FHotPatcherSettingBase : public FPatcherEntitySettingBase
	{
	public:
		bool                                                       bStorageConfig;                                          // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P061[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDirectoryPath                                      SavePath;                                                // 0x0010(0x0010) Edit, NativeAccessSpecifierPublic
		bool                                                       bStandaloneMode;                                         // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GQEQ[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      AdditionalCommandletArgs;                                // 0x0028(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HotPatcherRuntime.CookShaderOptions
	 * Size -> 0x0028
	 */
	struct FCookShaderOptions
	{
	public:
		bool                                                       bSharedShaderLibrary;                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNativeShader;                                           // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B8U0[0x1];                                   // 0x0002(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EShaderLibNameRule                                         ShaderNameRule;                                          // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9GA7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CustomShaderName;                                        // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ShderLibMountPointRegular;                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HotPatcherRuntime.AssetRegistryOptions
	 * Size -> 0x0030
	 */
	struct FAssetRegistryOptions
	{
	public:
		bool                                                       bSerializeAssetRegistry;                                 // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U06I[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AssetRegistryMountPointRegular;                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAssetRegistryRule                                         AssetRegistryRule;                                       // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCustomAssetRegistryName;                                // 0x0019(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K9JY[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AssetRegistryNameRegular;                                // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HotPatcherRuntime.IoStorePlatformContainers
	 * Size -> 0x0038
	 */
	struct FIoStorePlatformContainers
	{
	public:
		struct FDirectoryPath                                      BasePackageStagedRootDir;                                // 0x0000(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bGenerateDiffPatch;                                      // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6XHS[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFilePath                                           GlobalContainersOverride;                                // 0x0018(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FFilePath                                           PatchSourceOverride;                                     // 0x0028(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HotPatcherRuntime.IoStoreSettings
	 * Size -> 0x0080
	 */
	struct FIoStoreSettings
	{
	public:
		bool                                                       bIoStore;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowBulkDataInIoStore;                                 // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SETJ[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      IoStorePakListOptions;                                   // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      IoStoreCommandletOptions;                                // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<ETargetPlatform, struct FIoStorePlatformContainers>   PlatformContainers;                                      // 0x0028(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bStoragePakList;                                         // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStorageBulkDataInfo;                                    // 0x0079(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X879[0x6];                                   // 0x007A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HotPatcherRuntime.UnrealPakSettings
	 * Size -> 0x0028
	 */
	struct FUnrealPakSettings
	{
	public:
		TArray<class FString>                                      UnrealPakListOptions;                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      UnrealCommandletOptions;                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStoragePakList;                                         // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1O80[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HotPatcherRuntime.ReplaceText
	 * Size -> 0x0028
	 */
	struct FReplaceText
	{
	public:
		class FString                                              From;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              To;                                                      // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESearchCaseMode                                            SearchCase;                                              // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LMBC[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HotPatcherRuntime.ExportPatchSettings
	 * Size -> 0x02F0 (FullSize[0x0328] - InheritedSize[0x0038])
	 */
	struct FExportPatchSettings : public FHotPatcherSettingBase
	{
	public:
		bool                                                       bByBaseVersion;                                          // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3SQH[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFilePath                                           BaseVersion;                                             // 0x0040(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              VersionId;                                               // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBinariesPatch;                                          // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KAAO[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBinariesPatchConfig                                BinariesPatchConfig;                                     // 0x0068(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FDirectoryPath>                              AssetIncludeFilters;                                     // 0x00B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FDirectoryPath>                              AssetIgnoreFilters;                                      // 0x00C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceSkipContent;                                       // 0x00D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FT4L[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDirectoryPath>                              ForceSkipContentRules;                                   // 0x00E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FSoftObjectPath>                             ForceSkipAssets;                                         // 0x00F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeHasRefAssetsOnly;                                // 0x0100(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAnalysisFilterDependencies;                             // 0x0101(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAnalysisDiffAssetDependenciesOnly;                      // 0x0102(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S81R[0x5];                                   // 0x0103(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EAssetRegistryDependencyTypeEx>                     AssetRegistryDependencyTypes;                            // 0x0108(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPatcherSpecifyAsset>                        IncludeSpecifyAssets;                                    // 0x0118(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRecursiveWidgetTree;                                    // 0x0128(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPackageTracker;                                         // 0x0129(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QEZX[0x4];                                   // 0x012A(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIncludeEngineIni;                                       // 0x012E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludePluginIni;                                       // 0x012F(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeProjectIni;                                      // 0x0130(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableExternFilesDiff;                                  // 0x0131(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ISQI[0x6];                                   // 0x0132(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      IgnoreDeletionModulesAsset;                              // 0x0138(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VSJQ[0x20];                                  // 0x0148(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPlatformExternAssets>                       AddExternAssetsToPlatform;                               // 0x0168(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QNU8[0x18];                                  // 0x0178(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bEnableChunk;                                            // 0x0190(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCreateDefaultChunk;                                     // 0x0191(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WPKQ[0x6];                                   // 0x0192(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FChunkInfo>                                  ChunkInfos;                                              // 0x0198(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCookPatchAssets;                                        // 0x01A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9HQE[0x7];                                   // 0x01A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCookShaderOptions                                  CookShaderOptions;                                       // 0x01B0(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FAssetRegistryOptions                               SerializeAssetRegistryOptions;                           // 0x01D8(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FIoStoreSettings                                    IoStoreSettings;                                         // 0x0208(0x0080) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FUnrealPakSettings                                  UnrealPakSettings;                                       // 0x0288(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<class FString>                                      DefaultPakListOptions;                                   // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      DefaultCommandletOptions;                                // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPakEncryptSettings                                 EncryptSettings;                                         // 0x02D0(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FReplaceText>                                ReplacePakListTexts;                                     // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<ETargetPlatform>                                    PakTargetPlatforms;                                      // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCustomPakNameRegular;                                   // 0x0308(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y9PM[0x7];                                   // 0x0309(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PakNameRegular;                                          // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStorageNewRelease;                                      // 0x0320(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStoragePakFileInfo;                                     // 0x0321(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreDeleatedAssetsInfo;                               // 0x0322(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStorageDeletedAssetsToNewReleaseJson;                   // 0x0323(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStorageDiffAnalysisResults;                             // 0x0324(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBackupMetadata;                                         // 0x0325(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SWCU[0x1];                                   // 0x0326(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bEnableProfiling;                                        // 0x0327(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HotPatcherRuntime.PlatformPakListFiles
	 * Size -> 0x0038
	 */
	struct FPlatformPakListFiles
	{
	public:
		ETargetPlatform                                            TargetPlatform;                                          // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VB1V[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFilePath>                                   PakResponseFiles;                                        // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FFilePath>                                   PakFiles;                                                // 0x0018(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AESKey;                                                  // 0x0028(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HotPatcherRuntime.ExportReleaseSettings
	 * Size -> 0x00C8 (FullSize[0x0100] - InheritedSize[0x0038])
	 */
	struct FExportReleaseSettings : public FHotPatcherSettingBase
	{
	public:
		class FString                                              VersionId;                                               // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ByPakList;                                               // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3AEG[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPlatformPakListFiles>                       PlatformsPakListFiles;                                   // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FDirectoryPath>                              AssetIncludeFilters;                                     // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FDirectoryPath>                              AssetIgnoreFilters;                                      // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAnalysisFilterDependencies;                             // 0x0080(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RAMH[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EAssetRegistryDependencyTypeEx>                     AssetRegistryDependencyTypes;                            // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeHasRefAssetsOnly;                                // 0x0098(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_01L2[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPatcherSpecifyAsset>                        IncludeSpecifyAssets;                                    // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FQKO[0x20];                                  // 0x00B0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPlatformExternAssets>                       AddExternAssetsToPlatform;                               // 0x00D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBackupMetadata;                                         // 0x00E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBackupProjectConfig;                                    // 0x00E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3X84[0x6];                                   // 0x00E2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<ETargetPlatform>                                    BackupMetadataPlatforms;                                 // 0x00E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNoShaderCompile;                                        // 0x00F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y8MO[0x7];                                   // 0x00F9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HotPatcherRuntime.HotPatcherAssetDependency
	 * Size -> 0x0038
	 */
	struct FHotPatcherAssetDependency
	{
	public:
		struct FAssetDetail                                        Asset;                                                   // 0x0000(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FAssetDetail>                                AssetReference;                                          // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAssetDetail>                                AssetDependency;                                         // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HotPatcherRuntime.HotPatcherVersion
	 * Size -> 0x0118
	 */
	struct FHotPatcherVersion
	{
	public:
		class FString                                              VersionId;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              BaseVersionId;                                           // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Date;                                                    // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NSVR[0x48];                                  // 0x0030(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAssetDependenciesInfo                              AssetInfo;                                               // 0x0078(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TMap<ETargetPlatform, struct FPlatformExternAssets>        PlatformAssets;                                          // 0x00C8(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HotPatcherRuntime.PackageInfo
	 * Size -> 0x0020
	 */
	struct FPackageInfo
	{
	public:
		class FString                                              AssetName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AssetGuid;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HotPatcherRuntime.EncryptionKeyEntry
	 * Size -> 0x0030
	 */
	struct FEncryptionKeyEntry
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Guid;                                                    // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Key;                                                     // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HotPatcherRuntime.SignKeyItem
	 * Size -> 0x0020
	 */
	struct FSignKeyItem
	{
	public:
		class FString                                              Exponent;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Modulus;                                                 // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HotPatcherRuntime.SignKeyEntry
	 * Size -> 0x0040
	 */
	struct FSignKeyEntry
	{
	public:
		struct FSignKeyItem                                        PublicKey;                                               // 0x0000(0x0020) NativeAccessSpecifierPublic
		struct FSignKeyItem                                        PrivateKey;                                              // 0x0020(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HotPatcherRuntime.PakEncryptionKeys
	 * Size -> 0x0088
	 */
	struct FPakEncryptionKeys
	{
	public:
		struct FEncryptionKeyEntry                                 EncryptionKey;                                           // 0x0000(0x0030) NativeAccessSpecifierPublic
		TArray<struct FEncryptionKeyEntry>                         SecondaryEncryptionKeys;                                 // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnablePakIndexEncryption;                               // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnablePakIniEncryption;                                 // 0x0041(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnablePakUAssetEncryption;                              // 0x0042(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnablePakFullAssetEncryption;                           // 0x0043(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDataCryptoRequired;                                     // 0x0044(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PakEncryptionRequired;                                   // 0x0045(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PakSigningRequired;                                      // 0x0046(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnablePakSigning;                                       // 0x0047(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSignKeyEntry                                       SigningKey;                                              // 0x0048(0x0040) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HotPatcherRuntime.PakFileInfo
	 * Size -> 0x0028
	 */
	struct FPakFileInfo
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Hash;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FileSize;                                                // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4RFO[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HotPatcherRuntime.PakFileArray
	 * Size -> 0x0010
	 */
	struct FPakFileArray
	{
	public:
		TArray<struct FPakFileInfo>                                PakFileInfos;                                            // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HotPatcherRuntime.PakFilesMap
	 * Size -> 0x0050
	 */
	struct FPakFilesMap
	{
	public:
		TMap<class FString, struct FPakFileArray>                  PakFilesMap;                                             // 0x0000(0x0050) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HotPatcherRuntime.PakVersion
	 * Size -> 0x0040
	 */
	struct FPakVersion
	{
	public:
		class FString                                              VersionId;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              BaseVersionId;                                           // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Date;                                                    // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CheckCode;                                               // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HotPatcherRuntime.PatchVersionAssetDiff
	 * Size -> 0x00F0
	 */
	struct FPatchVersionAssetDiff
	{
	public:
		struct FAssetDependenciesInfo                              AddAssetDependInfo;                                      // 0x0000(0x0050) Edit, NativeAccessSpecifierPublic
		struct FAssetDependenciesInfo                              ModifyAssetDependInfo;                                   // 0x0050(0x0050) Edit, NativeAccessSpecifierPublic
		struct FAssetDependenciesInfo                              DeleteAssetDependInfo;                                   // 0x00A0(0x0050) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HotPatcherRuntime.PatchVersionExternDiff
	 * Size -> 0x0038
	 */
	struct FPatchVersionExternDiff
	{
	public:
		ETargetPlatform                                            Platform;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4JEA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FExternFileInfo>                             AddExternalFiles;                                        // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FExternFileInfo>                             ModifyExternalFiles;                                     // 0x0018(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FExternFileInfo>                             DeleteExternalFiles;                                     // 0x0028(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HotPatcherRuntime.PatchVersionDiff
	 * Size -> 0x0140
	 */
	struct FPatchVersionDiff
	{
	public:
		struct FPatchVersionAssetDiff                              AssetDiffInfo;                                           // 0x0000(0x00F0) Edit, NativeAccessSpecifierPublic
		TMap<ETargetPlatform, struct FPatchVersionExternDiff>      PlatformExternDiffInfo;                                  // 0x00F0(0x0050) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HotPatcherRuntime.PlatformExternFiles
	 * Size -> 0x0018
	 */
	struct FPlatformExternFiles
	{
	public:
		ETargetPlatform                                            Platform;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CSU6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FExternFileInfo>                             ExternFiles;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HotPatcherRuntime.HotPatcherContext
	 * Size -> 0x0058
	 */
	struct FHotPatcherContext
	{
	public:
		unsigned char                                              UnknownData_8C9K[0x40];                                  // 0x0000(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UScopedSlowTaskContext* UnrealPakSlowTask;                                       // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_30R7[0x10];                                  // 0x0048(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HotPatcherRuntime.HotPatcherReleaseContext
	 * Size -> 0x0118 (FullSize[0x0170] - InheritedSize[0x0058])
	 */
	struct FHotPatcherReleaseContext : public FHotPatcherContext
	{
	public:
		struct FHotPatcherVersion                                  NewReleaseVersion;                                       // 0x0058(0x0118) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HotPatcherRuntime.HotPatcherPatchContext
	 * Size -> 0x0588 (FullSize[0x05E0] - InheritedSize[0x0058])
	 */
	struct FHotPatcherPatchContext : public FHotPatcherContext
	{
	public:
		unsigned char                                              UnknownData_TKMO[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHotPatcherVersion                                  BaseVersion;                                             // 0x0060(0x0118) Edit, NativeAccessSpecifierPublic
		struct FHotPatcherVersion                                  CurrentVersion;                                          // 0x0178(0x0118) Edit, NativeAccessSpecifierPublic
		struct FPatchVersionDiff                                   VersionDiff;                                             // 0x0290(0x0140) Edit, NativeAccessSpecifierPublic
		struct FHotPatcherVersion                                  NewReleaseVersion;                                       // 0x03D0(0x0118) Edit, NativeAccessSpecifierPublic
		struct FChunkInfo                                          NewVersionChunk;                                         // 0x04E8(0x0088) Edit, NativeAccessSpecifierPublic
		TArray<struct FChunkInfo>                                  PakChunks;                                               // 0x0570(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPakCommand>                                 AdditionalFileToPak;                                     // 0x0580(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PFA2[0x50];                                  // 0x0590(0x0050) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
