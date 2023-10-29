#pragma once

// Dumped with Dumper-7!


namespace SDK
{
	//---------------------------------------------------------------------------------------------------------------------
	// ENUMS
	//---------------------------------------------------------------------------------------------------------------------

	enum class ETargetPlatform : uint8
	{
		None = 0,
		AllPlatforms = 1,
		ETargetPlatform_MAX = 2,
	};

	enum class EMatchOperator : uint8
	{
		None = 0,
		GREAT_THAN = 1,
		LESS_THAN = 2,
		EQUAL = 3,
		EMatchOperator_MAX = 4,
	};

	enum class EMatchRule : uint8
	{
		None = 0,
		MATCH = 1,
		IGNOR4 = 2,
		EMatchRule_MAX = 3,
	};

	enum class EMonolithicPathMode : uint8
	{
		MountPath = 0,
		PackagePath = 1,
		EMonolithicPathMode_MAX = 2,
	};

	enum class EAssetRegistryRule : uint8
	{
		PATCH = 0,
		PER_CHUNK = 1,
		CUSTOM = 2,
		EAssetRegistryRule_MAX = 3,
	};

	enum class EShaderLibNameRule : uint8
	{
		VERSION_ID = 0,
		PROJECT_NAME = 1,
		CUSTOM = 2,
		EShaderLibNameRule_MAX = 3,
	};

	enum class EAssetRegistryDependencyTypeEx : uint8
	{
		None = 0,
		Soft = 1,
		Hard = 2,
		SearchableName = 4,
		SoftManage = 8,
		HardManage = 16,
		Packages = 3,
		Manage = 24,
		All = 31,
		EAssetRegistryDependencyTypeEx_MAX = 32,
	};

	enum class EPSOSaveMode : uint8
	{
		Incremental = 0,
		BoundPSOsOnly = 1,
		SortedBoundPSOs = 2,
		EPSOSaveMode_MAX = 3,
	};

	enum class ESearchCaseMode : uint8
	{
		CaseSensitive = 0,
		IgnoreCase = 1,
		ESearchCaseMode_MAX = 2,
	};


	//---------------------------------------------------------------------------------------------------------------------
	// STRUCTS
	//---------------------------------------------------------------------------------------------------------------------

	// 0x18 (0x18 - 0x0)
	// ScriptStruct HotPatcherRuntime.PakMountInfo
	struct FPakMountInfo
	{
	public:
		class FString                                Pak;                                               // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                        PakOrder;                                          // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_1097[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
	};

	// 0x18 (0x18 - 0x0)
	// ScriptStruct HotPatcherRuntime.AssetDetail
	struct FAssetDetail
	{
	public:
		class FName                                  PackagePath;                                       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                  AssetType;                                         // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                  Guid;                                              // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0x60 (0x60 - 0x0)
	// ScriptStruct HotPatcherRuntime.AssetDependenciesDetail
	struct FAssetDependenciesDetail
	{
	public:
		class FString                                ModuleCategory;                                    // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<class FString, struct FAssetDetail>     AssetDependencyDetails;                            // 0x10(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	};

	// 0x50 (0x50 - 0x0)
	// ScriptStruct HotPatcherRuntime.AssetDependenciesInfo
	struct FAssetDependenciesInfo
	{
	public:
		TMap<class FString, struct FAssetDependenciesDetail> AssetsDependenciesMap;                             // 0x0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	};

	// 0x18 (0x18 - 0x0)
	// ScriptStruct HotPatcherRuntime.PakEncryptSettings
	struct FPakEncryptSettings
	{
	public:
		bool                                         bUseDefaultCryptoIni;                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_1098[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		struct FFilePath                             CryptoKeys;                                        // 0x8(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	};

	// 0x18 (0x18 - 0x0)
	// ScriptStruct HotPatcherRuntime.PlatformBasePak
	struct FPlatformBasePak
	{
	public:
		enum class ETargetPlatform                   Platform;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_1099[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		TArray<struct FFilePath>                     Paks;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0x28 (0x28 - 0x0)
	// ScriptStruct HotPatcherRuntime.MatchRule
	struct FMatchRule
	{
	public:
		enum class EMatchRule                        Rule;                                              // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		enum class EMatchOperator                    Operator;                                          // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_109A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		float                                        Size;                                              // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                        Formaters;                                         // 0x8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                        AssetTypes;                                        // 0x18(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0x50 (0x50 - 0x0)
	// ScriptStruct HotPatcherRuntime.BinariesPatchConfig
	struct FBinariesPatchConfig
	{
	public:
		enum class EBinariesPatchFeature             BinariesPatchType;                                 // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_109B[0x17];                                    // Fixing Size After Last Property  [ Dumper-7 ]
		struct FPakEncryptSettings                   EncryptSettings;                                   // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		TArray<struct FPlatformBasePak>              BaseVersionPaks;                                   // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FMatchRule>                    MatchRules;                                        // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0x148 (0x148 - 0x0)
	// ScriptStruct HotPatcherRuntime.ChunkAssetDescribe
	struct FChunkAssetDescribe
	{
	public:
		uint8                                        Pad_109C[0x148];                                   // Fixing Size Of Struct [ Dumper-7 ]
	};

	// 0x40 (0x40 - 0x0)
	// ScriptStruct HotPatcherRuntime.ChunkPakCommand
	struct FChunkPakCommand
	{
	public:
		uint8                                        Pad_109D[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]
	};

	// 0x38 (0x38 - 0x0)
	// ScriptStruct HotPatcherRuntime.ExternFileInfo
	struct FExternFileInfo
	{
	public:
		struct FFilePath                             FilePath;                                          // 0x0(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		class FString                                MountPath;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                FileHash;                                          // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_109E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
	};

	// 0x20 (0x20 - 0x0)
	// ScriptStruct HotPatcherRuntime.ExternDirectoryInfo
	struct FExternDirectoryInfo
	{
	public:
		struct FDirectoryPath                        DirectoryPath;                                     // 0x0(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		class FString                                MountPoint;                                        // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0x28 (0x28 - 0x0)
	// ScriptStruct HotPatcherRuntime.PlatformExternAssets
	struct FPlatformExternAssets
	{
	public:
		enum class ETargetPlatform                   TargetPlatform;                                    // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_109F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		TArray<struct FExternFileInfo>               AddExternFileToPak;                                // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FExternDirectoryInfo>          AddExternDirectoryToPak;                           // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0x30 (0x30 - 0x0)
	// ScriptStruct HotPatcherRuntime.PatcherSpecifyAsset
	struct FPatcherSpecifyAsset
	{
	public:
		struct FSoftObjectPath                       Asset;                                             // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bAnalysisAssetDependencies;                        // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_10A0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		TArray<enum class EAssetRegistryDependencyTypeEx> AssetRegistryDependencyTypes;                      // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0x6 (0x6 - 0x0)
	// ScriptStruct HotPatcherRuntime.PakInternalInfo
	struct FPakInternalInfo
	{
	public:
		uint8                                        Pad_10A1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		bool                                         bIncludeEngineIni;                                 // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bIncludePluginIni;                                 // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bIncludeProjectIni;                                // 0x5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0x88 (0x88 - 0x0)
	// ScriptStruct HotPatcherRuntime.ChunkInfo
	struct FChunkInfo
	{
	public:
		class FString                                ChunkName;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bMonolithic;                                       // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		enum class EMonolithicPathMode               MonolithicPathMode;                                // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bStorageUnrealPakList;                             // 0x12(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bStorageIoStorePakList;                            // 0x13(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_10A2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		TArray<struct FDirectoryPath>                AssetIncludeFilters;                               // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FDirectoryPath>                AssetIgnoreFilters;                                // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bAnalysisFilterDependencies;                       // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_10A3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		TArray<enum class EAssetRegistryDependencyTypeEx> AssetRegistryDependencyTypes;                      // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FPatcherSpecifyAsset>          IncludeSpecifyAssets;                              // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FPlatformExternAssets>         AddExternAssetsToPlatform;                         // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPakInternalInfo                      InternalFiles;                                     // 0x70(0x6)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
		uint8                                        Pad_10A4[0x12];                                    // Fixing Size Of Struct [ Dumper-7 ]
	};

	// 0x58 (0x58 - 0x0)
	// ScriptStruct HotPatcherRuntime.PakCommand
	struct FPakCommand
	{
	public:
		class FString                                ChunkName;                                         // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                MountPath;                                         // 0x10(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                AssetPackage;                                      // 0x20(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                        PakCommands;                                       // 0x30(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                        IoStoreCommands;                                   // 0x40(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_10A5[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
	};

	// 0x68 (0x68 - 0x0)
	// ScriptStruct HotPatcherRuntime.PakFileProxy
	struct FPakFileProxy
	{
	public:
		class FString                                ChunkStoreName;                                    // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		enum class ETargetPlatform                   Platform;                                          // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_10A6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		class FString                                StorageDirectory;                                  // 0x18(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                PakCommandSavePath;                                // 0x28(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                PakSavePath;                                       // 0x38(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FPakCommand>                   PakCommands;                                       // 0x48(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                        IoStoreCommands;                                   // 0x58(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0x88 (0x88 - 0x0)
	// ScriptStruct HotPatcherRuntime.CookerConfig
	struct FCookerConfig
	{
	public:
		class FString                                EngineBin;                                         // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                ProjectPath;                                       // 0x10(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                EngineParams;                                      // 0x20(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                        CookPlatforms;                                     // 0x30(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bCookAllMap;                                       // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_10A7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		TArray<class FString>                        CookMaps;                                          // 0x48(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                        CookFilter;                                        // 0x58(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                        CookSettings;                                      // 0x68(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                Options;                                           // 0x78(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0x8 (0x8 - 0x0)
	// ScriptStruct HotPatcherRuntime.PatcherEntitySettingBase
	struct FPatcherEntitySettingBase
	{
	public:
		uint8                                        Pad_10A8[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
	};

	// 0x30 (0x38 - 0x8)
	// ScriptStruct HotPatcherRuntime.HotPatcherSettingBase
	struct FHotPatcherSettingBase : public FPatcherEntitySettingBase
	{
	public:
		bool                                         bStorageConfig;                                    // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_10A9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		struct FDirectoryPath                        SavePath;                                          // 0x10(0x10)(Edit, NativeAccessSpecifierPublic)
		bool                                         bStandaloneMode;                                   // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_10AB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		TArray<class FString>                        AdditionalCommandletArgs;                          // 0x28(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0x30 (0x30 - 0x0)
	// ScriptStruct HotPatcherRuntime.AssetRegistryOptions
	struct FAssetRegistryOptions
	{
	public:
		bool                                         bSerializeAssetRegistry;                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_10AD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		class FString                                AssetRegistryMountPointRegular;                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		enum class EAssetRegistryRule                AssetRegistryRule;                                 // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bCustomAssetRegistryName;                          // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_10AE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		class FString                                AssetRegistryNameRegular;                          // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0x28 (0x28 - 0x0)
	// ScriptStruct HotPatcherRuntime.CookShaderOptions
	struct FCookShaderOptions
	{
	public:
		bool                                         bSharedShaderLibrary;                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bNativeShader;                                     // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_10AF[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		enum class EShaderLibNameRule                ShaderNameRule;                                    // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_10B0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		class FString                                CustomShaderName;                                  // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                ShderLibMountPointRegular;                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0x38 (0x38 - 0x0)
	// ScriptStruct HotPatcherRuntime.IoStorePlatformContainers
	struct FIoStorePlatformContainers
	{
	public:
		struct FDirectoryPath                        BasePackageStagedRootDir;                          // 0x0(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		bool                                         bGenerateDiffPatch;                                // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_10B1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		struct FFilePath                             GlobalContainersOverride;                          // 0x18(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		struct FFilePath                             PatchSourceOverride;                               // 0x28(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	};

	// 0x80 (0x80 - 0x0)
	// ScriptStruct HotPatcherRuntime.IoStoreSettings
	struct FIoStoreSettings
	{
	public:
		bool                                         bIoStore;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bAllowBulkDataInIoStore;                           // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_10B2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		TArray<class FString>                        IoStorePakListOptions;                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                        IoStoreCommandletOptions;                          // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<enum class ETargetPlatform, struct FIoStorePlatformContainers> PlatformContainers;                                // 0x28(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		bool                                         bStoragePakList;                                   // 0x78(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bStorageBulkDataInfo;                              // 0x79(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_10B3[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
	};

	// 0x28 (0x28 - 0x0)
	// ScriptStruct HotPatcherRuntime.UnrealPakSettings
	struct FUnrealPakSettings
	{
	public:
		TArray<class FString>                        UnrealPakListOptions;                              // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                        UnrealCommandletOptions;                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bStoragePakList;                                   // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_10B4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
	};

	// 0x28 (0x28 - 0x0)
	// ScriptStruct HotPatcherRuntime.ReplaceText
	struct FReplaceText
	{
	public:
		class FString                                From;                                              // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                To;                                                // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		enum class ESearchCaseMode                   SearchCase;                                        // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_10B5[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
	};

	// 0x2F0 (0x328 - 0x38)
	// ScriptStruct HotPatcherRuntime.ExportPatchSettings
	struct FExportPatchSettings : public FHotPatcherSettingBase
	{
	public:
		bool                                         bByBaseVersion;                                    // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_10B6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		struct FFilePath                             BaseVersion;                                       // 0x40(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		class FString                                VersionId;                                         // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bBinariesPatch;                                    // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_10B7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		struct FBinariesPatchConfig                  BinariesPatchConfig;                               // 0x68(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		TArray<struct FDirectoryPath>                AssetIncludeFilters;                               // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FDirectoryPath>                AssetIgnoreFilters;                                // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bForceSkipContent;                                 // 0xD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_10B8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		TArray<struct FDirectoryPath>                ForceSkipContentRules;                             // 0xE0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FSoftObjectPath>               ForceSkipAssets;                                   // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bIncludeHasRefAssetsOnly;                          // 0x100(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bAnalysisFilterDependencies;                       // 0x101(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bAnalysisDiffAssetDependenciesOnly;                // 0x102(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_10BA[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		TArray<enum class EAssetRegistryDependencyTypeEx> AssetRegistryDependencyTypes;                      // 0x108(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FPatcherSpecifyAsset>          IncludeSpecifyAssets;                              // 0x118(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bRecursiveWidgetTree;                              // 0x128(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bPackageTracker;                                   // 0x129(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_10BB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		bool                                         bIncludeEngineIni;                                 // 0x12E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bIncludePluginIni;                                 // 0x12F(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bIncludeProjectIni;                                // 0x130(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bEnableExternFilesDiff;                            // 0x131(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_10BC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		TArray<class FString>                        IgnoreDeletionModulesAsset;                        // 0x138(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_10BD[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
		TArray<struct FPlatformExternAssets>         AddExternAssetsToPlatform;                         // 0x168(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_10BE[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
		bool                                         bEnableChunk;                                      // 0x190(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bCreateDefaultChunk;                               // 0x191(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_10BF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		TArray<struct FChunkInfo>                    ChunkInfos;                                        // 0x198(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bCookPatchAssets;                                  // 0x1A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_10C0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		struct FCookShaderOptions                    CookShaderOptions;                                 // 0x1B0(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		struct FAssetRegistryOptions                 SerializeAssetRegistryOptions;                     // 0x1D8(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		struct FIoStoreSettings                      IoStoreSettings;                                   // 0x208(0x80)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		struct FUnrealPakSettings                    UnrealPakSettings;                                 // 0x288(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		TArray<class FString>                        DefaultPakListOptions;                             // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                        DefaultCommandletOptions;                          // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPakEncryptSettings                   EncryptSettings;                                   // 0x2D0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		TArray<struct FReplaceText>                  ReplacePakListTexts;                               // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<enum class ETargetPlatform>           PakTargetPlatforms;                                // 0x2F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bCustomPakNameRegular;                             // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_10C2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		class FString                                PakNameRegular;                                    // 0x310(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bStorageNewRelease;                                // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bStoragePakFileInfo;                               // 0x321(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bIgnoreDeleatedAssetsInfo;                         // 0x322(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bStorageDeletedAssetsToNewReleaseJson;             // 0x323(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bStorageDiffAnalysisResults;                       // 0x324(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bBackupMetadata;                                   // 0x325(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_10C3[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		bool                                         bEnableProfiling;                                  // 0x327(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0x38 (0x38 - 0x0)
	// ScriptStruct HotPatcherRuntime.PlatformPakListFiles
	struct FPlatformPakListFiles
	{
	public:
		enum class ETargetPlatform                   TargetPlatform;                                    // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_10C4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		TArray<struct FFilePath>                     PakResponseFiles;                                  // 0x8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FFilePath>                     PakFiles;                                          // 0x18(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                AESKey;                                            // 0x28(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0xC8 (0x100 - 0x38)
	// ScriptStruct HotPatcherRuntime.ExportReleaseSettings
	struct FExportReleaseSettings : public FHotPatcherSettingBase
	{
	public:
		class FString                                VersionId;                                         // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         ByPakList;                                         // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_10C5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		TArray<struct FPlatformPakListFiles>         PlatformsPakListFiles;                             // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FDirectoryPath>                AssetIncludeFilters;                               // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FDirectoryPath>                AssetIgnoreFilters;                                // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bAnalysisFilterDependencies;                       // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_10C6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		TArray<enum class EAssetRegistryDependencyTypeEx> AssetRegistryDependencyTypes;                      // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bIncludeHasRefAssetsOnly;                          // 0x98(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_10C7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		TArray<struct FPatcherSpecifyAsset>          IncludeSpecifyAssets;                              // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_10C8[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
		TArray<struct FPlatformExternAssets>         AddExternAssetsToPlatform;                         // 0xD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bBackupMetadata;                                   // 0xE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bBackupProjectConfig;                              // 0xE1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_10C9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		TArray<enum class ETargetPlatform>           BackupMetadataPlatforms;                           // 0xE8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bNoShaderCompile;                                  // 0xF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_10CA[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
	};

	// 0x38 (0x38 - 0x0)
	// ScriptStruct HotPatcherRuntime.HotPatcherAssetDependency
	struct FHotPatcherAssetDependency
	{
	public:
		struct FAssetDetail                          Asset;                                             // 0x0(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
		TArray<struct FAssetDetail>                  AssetReference;                                    // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FAssetDetail>                  AssetDependency;                                   // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0x118 (0x118 - 0x0)
	// ScriptStruct HotPatcherRuntime.HotPatcherVersion
	struct FHotPatcherVersion
	{
	public:
		class FString                                VersionId;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                BaseVersionId;                                     // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                Date;                                              // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_10CB[0x48];                                    // Fixing Size After Last Property  [ Dumper-7 ]
		struct FAssetDependenciesInfo                AssetInfo;                                         // 0x78(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		TMap<enum class ETargetPlatform, struct FPlatformExternAssets> PlatformAssets;                                    // 0xC8(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	};

	// 0x20 (0x20 - 0x0)
	// ScriptStruct HotPatcherRuntime.PackageInfo
	struct FPackageInfo
	{
	public:
		class FString                                AssetName;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                AssetGuid;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0x30 (0x30 - 0x0)
	// ScriptStruct HotPatcherRuntime.EncryptionKeyEntry
	struct FEncryptionKeyEntry
	{
	public:
		class FString                                Name;                                              // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                Guid;                                              // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                Key;                                               // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0x20 (0x20 - 0x0)
	// ScriptStruct HotPatcherRuntime.SignKeyItem
	struct FSignKeyItem
	{
	public:
		class FString                                Exponent;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                Modulus;                                           // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0x40 (0x40 - 0x0)
	// ScriptStruct HotPatcherRuntime.SignKeyEntry
	struct FSignKeyEntry
	{
	public:
		struct FSignKeyItem                          PublicKey;                                         // 0x0(0x20)(NativeAccessSpecifierPublic)
		struct FSignKeyItem                          PrivateKey;                                        // 0x20(0x20)(NativeAccessSpecifierPublic)
	};

	// 0x88 (0x88 - 0x0)
	// ScriptStruct HotPatcherRuntime.PakEncryptionKeys
	struct FPakEncryptionKeys
	{
	public:
		struct FEncryptionKeyEntry                   EncryptionKey;                                     // 0x0(0x30)(NativeAccessSpecifierPublic)
		TArray<struct FEncryptionKeyEntry>           SecondaryEncryptionKeys;                           // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bEnablePakIndexEncryption;                         // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bEnablePakIniEncryption;                           // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bEnablePakUAssetEncryption;                        // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bEnablePakFullAssetEncryption;                     // 0x43(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bDataCryptoRequired;                               // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         PakEncryptionRequired;                             // 0x45(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         PakSigningRequired;                                // 0x46(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         bEnablePakSigning;                                 // 0x47(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSignKeyEntry                         SigningKey;                                        // 0x48(0x40)(NativeAccessSpecifierPublic)
	};

	// 0x28 (0x28 - 0x0)
	// ScriptStruct HotPatcherRuntime.PakFileInfo
	struct FPakFileInfo
	{
	public:
		class FString                                Filename;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                Hash;                                              // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                        FileSize;                                          // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_10CE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
	};

	// 0x10 (0x10 - 0x0)
	// ScriptStruct HotPatcherRuntime.PakFileArray
	struct FPakFileArray
	{
	public:
		TArray<struct FPakFileInfo>                  PakFileInfos;                                      // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0x50 (0x50 - 0x0)
	// ScriptStruct HotPatcherRuntime.PakFilesMap
	struct FPakFilesMap
	{
	public:
		TMap<class FString, struct FPakFileArray>    PakFilesMap;                                       // 0x0(0x50)(NativeAccessSpecifierPublic)
	};

	// 0x40 (0x40 - 0x0)
	// ScriptStruct HotPatcherRuntime.PakVersion
	struct FPakVersion
	{
	public:
		class FString                                VersionId;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                BaseVersionId;                                     // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                Date;                                              // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                CheckCode;                                         // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0xF0 (0xF0 - 0x0)
	// ScriptStruct HotPatcherRuntime.PatchVersionAssetDiff
	struct FPatchVersionAssetDiff
	{
	public:
		struct FAssetDependenciesInfo                AddAssetDependInfo;                                // 0x0(0x50)(Edit, NativeAccessSpecifierPublic)
		struct FAssetDependenciesInfo                ModifyAssetDependInfo;                             // 0x50(0x50)(Edit, NativeAccessSpecifierPublic)
		struct FAssetDependenciesInfo                DeleteAssetDependInfo;                             // 0xA0(0x50)(Edit, NativeAccessSpecifierPublic)
	};

	// 0x38 (0x38 - 0x0)
	// ScriptStruct HotPatcherRuntime.PatchVersionExternDiff
	struct FPatchVersionExternDiff
	{
	public:
		enum class ETargetPlatform                   Platform;                                          // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_10CF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		TArray<struct FExternFileInfo>               AddExternalFiles;                                  // 0x8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FExternFileInfo>               ModifyExternalFiles;                               // 0x18(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FExternFileInfo>               DeleteExternalFiles;                               // 0x28(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0x140 (0x140 - 0x0)
	// ScriptStruct HotPatcherRuntime.PatchVersionDiff
	struct FPatchVersionDiff
	{
	public:
		struct FPatchVersionAssetDiff                AssetDiffInfo;                                     // 0x0(0xF0)(Edit, NativeAccessSpecifierPublic)
		TMap<enum class ETargetPlatform, struct FPatchVersionExternDiff> PlatformExternDiffInfo;                            // 0xF0(0x50)(Edit, NativeAccessSpecifierPublic)
	};

	// 0x18 (0x18 - 0x0)
	// ScriptStruct HotPatcherRuntime.PlatformExternFiles
	struct FPlatformExternFiles
	{
	public:
		enum class ETargetPlatform                   Platform;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_10D0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		TArray<struct FExternFileInfo>               ExternFiles;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// 0x58 (0x58 - 0x0)
	// ScriptStruct HotPatcherRuntime.HotPatcherContext
	struct FHotPatcherContext
	{
	public:
		uint8                                        Pad_10D1[0x40];                                    // Fixing Size After Last Property  [ Dumper-7 ]
		class UScopedSlowTaskContext* UnrealPakSlowTask;                                 // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_10D2[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
	};

	// 0x118 (0x170 - 0x58)
	// ScriptStruct HotPatcherRuntime.HotPatcherReleaseContext
	struct FHotPatcherReleaseContext : public FHotPatcherContext
	{
	public:
		struct FHotPatcherVersion                    NewReleaseVersion;                                 // 0x58(0x118)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	};

	// 0x588 (0x5E0 - 0x58)
	// ScriptStruct HotPatcherRuntime.HotPatcherPatchContext
	struct FHotPatcherPatchContext : public FHotPatcherContext
	{
	public:
		uint8                                        Pad_10D3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		struct FHotPatcherVersion                    BaseVersion;                                       // 0x60(0x118)(Edit, NativeAccessSpecifierPublic)
		struct FHotPatcherVersion                    CurrentVersion;                                    // 0x178(0x118)(Edit, NativeAccessSpecifierPublic)
		struct FPatchVersionDiff                     VersionDiff;                                       // 0x290(0x140)(Edit, NativeAccessSpecifierPublic)
		struct FHotPatcherVersion                    NewReleaseVersion;                                 // 0x3D0(0x118)(Edit, NativeAccessSpecifierPublic)
		struct FChunkInfo                            NewVersionChunk;                                   // 0x4E8(0x88)(Edit, NativeAccessSpecifierPublic)
		TArray<struct FChunkInfo>                    PakChunks;                                         // 0x570(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FPakCommand>                   AdditionalFileToPak;                               // 0x580(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_10D4[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]
	};

}


