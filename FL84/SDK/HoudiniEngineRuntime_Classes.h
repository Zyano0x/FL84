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
	 * Class HoudiniEngineRuntime.HoudiniAssetActor
	 * Size -> 0x0008 (FullSize[0x0230] - InheritedSize[0x0228])
	 */
	class AHoudiniAssetActor : public AActor
	{
	public:
		class UHoudiniAssetComponent*                              HoudiniAssetComponent;                                   // 0x0228(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HiddenHoudiniAssetActor
	 * Size -> 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
	 */
	class AHiddenHoudiniAssetActor : public AHoudiniAssetActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniAsset
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UHoudiniAsset : public UObject
	{
	public:
		class FString                                              AssetFileName;                                           // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      AssetBytes;                                              // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint32_t                                                   AssetBytesCount;                                         // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAssetLimitedCommercial;                                 // 0x004C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAssetNonCommercial;                                     // 0x004D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAssetExpanded;                                          // 0x004E(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OJOO[0x1];                                   // 0x004F(0x0001) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniAssetComponent
	 * Size -> 0x05A0 (FullSize[0x0AE0] - InheritedSize[0x0540])
	 */
	class UHoudiniAssetComponent : public UPrimitiveComponent
	{
	public:
		unsigned char                                              UnknownData_72FV[0x8];                                   // 0x0540(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHoudiniInputLandscapeTransferParams                LandscapeTransferParams;                                 // 0x0548(0x00C8) Edit, NativeAccessSpecifierPublic
		TArray<struct FDirectoryPath>                              Directories;                                             // 0x0610(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHoudiniAsset*                                       HoudiniAsset;                                            // 0x0620(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCookOnParameterChange;                                  // 0x0628(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUploadTransformsToHoudiniEngine;                        // 0x0629(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCookOnTransformChange;                                  // 0x062A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCookOnAssetInputCook;                                   // 0x062B(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOutputless;                                             // 0x062C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOutputTemplateGeos;                                     // 0x062D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseOutputNodes;                                         // 0x062E(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G6KO[0x1];                                   // 0x062F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDirectoryPath                                      TemporaryCookFolder;                                     // 0x0630(0x0010) NativeAccessSpecifierPublic
		struct FDirectoryPath                                      BakeFolder;                                              // 0x0640(0x0010) NativeAccessSpecifierPublic
		EHoudiniStaticMeshMethod                                   StaticMeshMethod;                                        // 0x0650(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KC3P[0x7];                                   // 0x0651(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHoudiniStaticMeshGenerationProperties              StaticMeshGenerationProperties;                          // 0x0658(0x0180) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FMeshBuildSettings                                  StaticMeshBuildSettings;                                 // 0x07D8(0x0030) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bOverrideGlobalProxyStaticMeshSettings;                  // 0x0808(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableProxyStaticMeshOverride;                          // 0x0809(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableProxyStaticMeshRefinementByTimerOverride;         // 0x080A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2ZS9[0x1];                                   // 0x080B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ProxyMeshAutoRefineTimeoutSecondsOverride;               // 0x080C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride;  // 0x0810(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride;   // 0x0811(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AP7F[0x2];                                   // 0x0812(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AssetId;                                                 // 0x0814(0x0004) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<int32_t>                                            NodeIdsToCook;                                           // 0x0818(0x0010) ZeroConstructor, Transient, DuplicateTransient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TMap<int32_t, int32_t>                                     OutputNodeCookCounts;                                    // 0x0828(0x0050) Transient, DuplicateTransient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              DownstreamHoudiniAssets[0x50];                           // 0x0878(0x0050) UNKNOWN PROPERTY: SetProperty
		struct FGuid                                               ComponentGUID;                                           // 0x08C8(0x0010) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGuid                                               HapiGUID;                                                // 0x08D8(0x0010) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              HapiAssetName;                                           // 0x08E8(0x0010) ZeroConstructor, DuplicateTransient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EHoudiniAssetState                                         AssetState;                                              // 0x08F8(0x0001) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EHoudiniAssetState                                         DebugLastAssetState;                                     // 0x08F9(0x0001) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EHoudiniAssetStateResult                                   AssetStateResult;                                        // 0x08FA(0x0001) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5B5F[0x5];                                   // 0x08FB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          LastComponentTransform;                                  // 0x0900(0x0030) DuplicateTransient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		uint32_t                                                   SubAssetIndex;                                           // 0x0930(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    AssetCookCount;                                          // 0x0934(0x0004) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasBeenLoaded;                                          // 0x0938(0x0001) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasBeenDuplicated;                                      // 0x0939(0x0001) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPendingDelete;                                          // 0x093A(0x0001) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRecookRequested;                                        // 0x093B(0x0001) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRebuildRequested;                                       // 0x093C(0x0001) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableCooking;                                          // 0x093D(0x0001) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bForceNeedUpdate;                                        // 0x093E(0x0001) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bLastCookSuccess;                                        // 0x093F(0x0001) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bParameterDefinitionUpdateNeeded;                        // 0x0940(0x0001) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bBlueprintStructureModified;                             // 0x0941(0x0001) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bBlueprintModified;                                      // 0x0942(0x0001) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_P5UY[0x5];                                   // 0x0943(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UHoudiniParameter*>                           Parameters;                                              // 0x0948(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UHoudiniInput*>                               Inputs;                                                  // 0x0958(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UHoudiniOutput*>                              Outputs;                                                 // 0x0968(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FHoudiniBakedOutput>                         BakedOutputs;                                            // 0x0978(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<TWeakObjectPtr<class AActor>>                       UntrackedOutputs;                                        // 0x0988(0x0010) ZeroConstructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UHoudiniHandleComponent*>                     HandleComponents;                                        // 0x0998(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasComponentTransformChanged;                           // 0x09A8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bFullyLoaded;                                            // 0x09A9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_I8ZG[0x6];                                   // 0x09AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHoudiniPDGAssetLink*                                PDGAssetLink;                                            // 0x09B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTimerHandle                                        RefineMeshesTimer;                                       // 0x09B8(0x0008) NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_00KL[0x18];                                  // 0x09C0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bNoProxyMeshNextCookRequested;                           // 0x09D8(0x0001) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FR7E[0x7];                                   // 0x09D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UObject*, int32_t>                              InputPresets;                                            // 0x09E0(0x0050) Transient, DuplicateTransient, Protected, NativeAccessSpecifierProtected
		bool                                                       bBakeAfterNextCook;                                      // 0x0A30(0x0001) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_P81S[0x7F];                                  // 0x0A31(0x007F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bCachedIsPreview;                                        // 0x0AB0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YIW0[0xF];                                   // 0x0AB1(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastTickTime;                                            // 0x0AC0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LS9B[0x18];                                  // 0x0AC8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniAssetBlueprintComponent
	 * Size -> 0x0100 (FullSize[0x0BE0] - InheritedSize[0x0AE0])
	 */
	class UHoudiniAssetBlueprintComponent : public UHoudiniAssetComponent
	{
	public:
		unsigned char                                              UnknownData_XVUA[0x48];                                  // 0x0AE0(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       FauxBPProperty;                                          // 0x0B28(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHoudiniAssetChanged;                                    // 0x0B29(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUpdatedFromTemplate;                                    // 0x0B2A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsInBlueprintEditor;                                    // 0x0B2B(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCanDeleteHoudiniNodes;                                  // 0x0B2C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasRegisteredComponentTemplate;                         // 0x0B2D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BQ0L[0xA];                                   // 0x0B2E(0x000A) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<struct FHoudiniOutputObjectIdentifier, struct FGuid>  CachedOutputNodes;                                       // 0x0B38(0x0050) Protected, NativeAccessSpecifierProtected
		TMap<struct FGuid, struct FGuid>                           CachedInputNodes;                                        // 0x0B88(0x0050) Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_L45W[0x8];                                   // 0x0BD8(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetToggleValueAt(const class FString& Name, bool Value, int32_t Index);
		void SetFloatParameter(const class FString& Name, float Value, int32_t Index);
		bool HasParameter(const class FString& Name);
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniAssetParameter
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UHoudiniAssetParameter : public UObject
	{
	public:
		unsigned char                                              UnknownData_CXLY[0x58];                                  // 0x0028(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniAssetParameterButton
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UHoudiniAssetParameterButton : public UHoudiniAssetParameter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniAssetParameterChoice
	 * Size -> 0x0038 (FullSize[0x00B8] - InheritedSize[0x0080])
	 */
	class UHoudiniAssetParameterChoice : public UHoudiniAssetParameter
	{
	public:
		unsigned char                                              UnknownData_TG8Q[0x38];                                  // 0x0080(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniAssetParameterColor
	 * Size -> 0x0010 (FullSize[0x0090] - InheritedSize[0x0080])
	 */
	class UHoudiniAssetParameterColor : public UHoudiniAssetParameter
	{
	public:
		unsigned char                                              UnknownData_CLMM[0x10];                                  // 0x0080(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniAssetParameterFile
	 * Size -> 0x0028 (FullSize[0x00A8] - InheritedSize[0x0080])
	 */
	class UHoudiniAssetParameterFile : public UHoudiniAssetParameter
	{
	public:
		unsigned char                                              UnknownData_NY9E[0x28];                                  // 0x0080(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniAssetParameterFloat
	 * Size -> 0x0038 (FullSize[0x00B8] - InheritedSize[0x0080])
	 */
	class UHoudiniAssetParameterFloat : public UHoudiniAssetParameter
	{
	public:
		unsigned char                                              UnknownData_N36M[0x38];                                  // 0x0080(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniAssetParameterFolder
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UHoudiniAssetParameterFolder : public UHoudiniAssetParameter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniAssetParameterFolderList
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UHoudiniAssetParameterFolderList : public UHoudiniAssetParameter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniAssetParameterInt
	 * Size -> 0x0030 (FullSize[0x00B0] - InheritedSize[0x0080])
	 */
	class UHoudiniAssetParameterInt : public UHoudiniAssetParameter
	{
	public:
		unsigned char                                              UnknownData_2512[0x30];                                  // 0x0080(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniAssetParameterLabel
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UHoudiniAssetParameterLabel : public UHoudiniAssetParameter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniAssetParameterMultiparm
	 * Size -> 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
	 */
	class UHoudiniAssetParameterMultiparm : public UHoudiniAssetParameter
	{
	public:
		unsigned char                                              UnknownData_GS9X[0x8];                                   // 0x0080(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniAssetParameterRamp
	 * Size -> 0x0018 (FullSize[0x0098] - InheritedSize[0x0080])
	 */
	class UHoudiniAssetParameterRamp : public UHoudiniAssetParameter
	{
	public:
		unsigned char                                              UnknownData_B5B6[0x18];                                  // 0x0080(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniAssetParameterSeparator
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UHoudiniAssetParameterSeparator : public UHoudiniAssetParameter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniAssetParameterString
	 * Size -> 0x0010 (FullSize[0x0090] - InheritedSize[0x0080])
	 */
	class UHoudiniAssetParameterString : public UHoudiniAssetParameter
	{
	public:
		unsigned char                                              UnknownData_UWET[0x10];                                  // 0x0080(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniAssetParameterToggle
	 * Size -> 0x0010 (FullSize[0x0090] - InheritedSize[0x0080])
	 */
	class UHoudiniAssetParameterToggle : public UHoudiniAssetParameter
	{
	public:
		unsigned char                                              UnknownData_PECL[0x10];                                  // 0x0080(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniAssetComponentMaterials_V1
	 * Size -> 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
	 */
	class UHoudiniAssetComponentMaterials_V1 : public UObject
	{
	public:
		unsigned char                                              UnknownData_CH7T[0xA0];                                  // 0x0028(0x00A0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniHandleComponent_V1
	 * Size -> 0x0098 (FullSize[0x03B0] - InheritedSize[0x0318])
	 */
	class UHoudiniHandleComponent_V1 : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_UG8J[0x8];                                   // 0x0318(0x0008) Fix Super Size
		unsigned char                                              UnknownData_PRXE[0x90];                                  // 0x0320(0x0090) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniSplineComponent_V1
	 * Size -> 0x00F8 (FullSize[0x0410] - InheritedSize[0x0318])
	 */
	class UHoudiniSplineComponent_V1 : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_8B5T[0x8];                                   // 0x0318(0x0008) Fix Super Size
		unsigned char                                              UnknownData_VUIU[0xF0];                                  // 0x0320(0x00F0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniAssetInput
	 * Size -> 0x0120 (FullSize[0x01A0] - InheritedSize[0x0080])
	 */
	class UHoudiniAssetInput : public UHoudiniAssetParameter
	{
	public:
		unsigned char                                              UnknownData_5IZK[0x120];                                 // 0x0080(0x0120) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniAssetInstanceInput
	 * Size -> 0x00E0 (FullSize[0x0160] - InheritedSize[0x0080])
	 */
	class UHoudiniAssetInstanceInput : public UHoudiniAssetParameter
	{
	public:
		unsigned char                                              UnknownData_KF3M[0xE0];                                  // 0x0080(0x00E0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniAssetInstanceInputField
	 * Size -> 0x0168 (FullSize[0x0190] - InheritedSize[0x0028])
	 */
	class UHoudiniAssetInstanceInputField : public UObject
	{
	public:
		unsigned char                                              UnknownData_KI0R[0x168];                                 // 0x0028(0x0168) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniAssetComponent_V1
	 * Size -> 0x04F0 (FullSize[0x0A30] - InheritedSize[0x0540])
	 */
	class UHoudiniAssetComponent_V1 : public UPrimitiveComponent
	{
	public:
		bool                                                       bGeneratedDoubleSidedGeometry : 1;                       // 0x0540(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L979[0x7];                                   // 0x0541(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPhysicalMaterial*                                   GeneratedPhysMaterial;                                   // 0x0548(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBodyInstance                                       DefaultBodyInstance;                                     // 0x0550(0x0130) Edit, NativeAccessSpecifierPublic
		ECollisionTraceFlag                                        GeneratedCollisionTraceFlag;                             // 0x0680(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1UVC[0x3];                                   // 0x0681(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    GeneratedLightMapResolution;                             // 0x0684(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GeneratedDistanceFieldResolutionScale;                   // 0x0688(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWalkableSlopeOverride                              GeneratedWalkableSlopeOverride;                          // 0x068C(0x0010) Edit, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		int32_t                                                    GeneratedLightMapCoordinateIndex;                        // 0x069C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGeneratedUseMaximumStreamingTexelRatio : 1;             // 0x06A0(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_49RQ[0x3];                                   // 0x06A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GeneratedStreamingDistanceMultiplier;                    // 0x06A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFoliageType_InstancedStaticMesh*                    GeneratedFoliageDefaultSettings;                         // 0x06A8(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAssetUserData*>                              GeneratedAssetUserData;                                  // 0x06B0(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                BakeFolder;                                              // 0x06C0(0x0018) NativeAccessSpecifierPublic
		class FText                                                TempCookFolder;                                          // 0x06D8(0x0018) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M89E[0x340];                                 // 0x06F0(0x0340) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniInstancedActorComponent_V1
	 * Size -> 0x0018 (FullSize[0x0330] - InheritedSize[0x0318])
	 */
	class UHoudiniInstancedActorComponent_V1 : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_MMFB[0x8];                                   // 0x0318(0x0008) Fix Super Size
		unsigned char                                              UnknownData_FMV8[0x10];                                  // 0x0320(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniMeshSplitInstancerComponent_V1
	 * Size -> 0x0028 (FullSize[0x0340] - InheritedSize[0x0318])
	 */
	class UHoudiniMeshSplitInstancerComponent_V1 : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_67XQ[0x8];                                   // 0x0318(0x0008) Fix Super Size
		unsigned char                                              UnknownData_W42B[0x20];                                  // 0x0320(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniEngineCopyPropertiesInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHoudiniEngineCopyPropertiesInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniHandleParameter
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UHoudiniHandleParameter : public UObject
	{
	public:
		class UHoudiniParameter*                                   AssetParameter;                                          // 0x0028(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TupleIndex;                                              // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H9EO[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniHandleComponent
	 * Size -> 0x0038 (FullSize[0x0350] - InheritedSize[0x0318])
	 */
	class UHoudiniHandleComponent : public USceneComponent
	{
	public:
		TArray<class UHoudiniHandleParameter*>                     XformParms;                                              // 0x0318(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHoudiniHandleParameter*                             RSTParm;                                                 // 0x0328(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHoudiniHandleParameter*                             RotOrderParm;                                            // 0x0330(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHoudiniHandleType                                         HandleType;                                              // 0x0338(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UDSE[0x7];                                   // 0x0339(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              HandleName;                                              // 0x0340(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniInput
	 * Size -> 0x0250 (FullSize[0x0278] - InheritedSize[0x0028])
	 */
	class UHoudiniInput : public UObject
	{
	public:
		class FString                                              Name;                                                    // 0x0028(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              Label;                                                   // 0x0038(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EHoudiniInputType                                          Type;                                                    // 0x0048(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EHoudiniInputType                                          PreviousType;                                            // 0x0049(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VPBU[0x2];                                   // 0x004A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AssetNodeId;                                             // 0x004C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    InputNodeId;                                             // 0x0050(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NonTransactional, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    InputIndex;                                              // 0x0054(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ParmId;                                                  // 0x0058(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NonTransactional, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsObjectPathParameter;                                  // 0x005C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MG4E[0x3];                                   // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            CreatedDataNodeIds;                                      // 0x0060(0x0010) ZeroConstructor, Transient, DuplicateTransient, NonTransactional, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasChanged;                                             // 0x0070(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bNeedsToTriggerUpdate;                                   // 0x0071(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RPXD[0x2];                                   // 0x0072(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBox                                                CachedBounds;                                            // 0x0074(0x001C) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		class FString                                              help;                                                    // 0x0090(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EHoudiniXformType                                          KeepWorldTransform;                                      // 0x00A0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPackBeforeMerge;                                        // 0x00A1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bImportAsReference;                                      // 0x00A2(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bImportAsReferenceRotScaleEnabled;                       // 0x00A3(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bImportAsReferenceBboxEnabled;                           // 0x00A4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bImportAsReferenceMaterialEnabled;                       // 0x00A5(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bExportLODs;                                             // 0x00A6(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bExportSockets;                                          // 0x00A7(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bExportColliders;                                        // 0x00A8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bExportMaterialParameters;                               // 0x00A9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCookOnCurveChanged;                                     // 0x00AA(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FRF3[0x5];                                   // 0x00AB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UHoudiniInputObject*>                         GeometryInputObjects;                                    // 0x00B0(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bStaticMeshChanged;                                      // 0x00C0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_E406[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UHoudiniInputObject*>                         AssetInputObjects;                                       // 0x00C8(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bInputAssetConnectedInHoudini;                           // 0x00D8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9VIZ[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UHoudiniInputObject*>                         CurveInputObjects;                                       // 0x00E0(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DefaultCurveOffset;                                      // 0x00F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAddRotAndScaleAttributesOnCurves;                       // 0x00F4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUseLegacyInputCurves;                                   // 0x00F5(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3Q1W[0x2];                                   // 0x00F6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UHoudiniInputObject*>                         LandscapeInputObjects;                                   // 0x00F8(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bLandscapeHasExportTypeChanged;                          // 0x0108(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Y1V4[0x7];                                   // 0x0109(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UHoudiniInputObject*>                         LandscapeSplinesInputObjects;                            // 0x0110(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UHoudiniInputObject*>                         FoliageInputObjects;                                     // 0x0120(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UHoudiniInputObject*>                         WorldSMCInputObjects;                                    // 0x0130(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UHoudiniInputObject*>                         PointCloudInputObjects;                                  // 0x0140(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UHoudiniInputObject*>                         WorldInputObjects;                                       // 0x0150(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UHoudiniInputObject*>                         TextureInputObjects;                                     // 0x0160(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class AActor*>                                      WorldInputBoundSelectorObjects;                          // 0x0170(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsWorldInputBoundSelector;                              // 0x0180(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bWorldInputBoundSelectorAutoUpdate;                      // 0x0181(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JBQY[0x2];                                   // 0x0182(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UnrealSplineResolution;                                  // 0x0184(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UHoudiniInputObject*>                         SkeletalInputObjects;                                    // 0x0188(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UHoudiniInputObject*>                         GeometryCollectionInputObjects;                          // 0x0198(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              LandscapeSelectedComponents[0x50];                       // 0x01A8(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              InputNodesPendingDelete[0x50];                           // 0x01F8(0x0050) UNKNOWN PROPERTY: SetProperty
		TArray<class UHoudiniInputHoudiniSplineComponent*>         LastInsertedInputs;                                      // 0x0248(0x0010) ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UHoudiniInputObject*>                         LastUndoDeletedInputs;                                   // 0x0258(0x0010) ZeroConstructor, Transient, DuplicateTransient, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUpdateInputLandscape;                                   // 0x0268(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHoudiniLandscapeExportType                                LandscapeExportType;                                     // 0x0269(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLandscapeExportSelectionOnly;                           // 0x026A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLandscapeAutoSelectComponent;                           // 0x026B(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLandscapeExportMaterials;                               // 0x026C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLandscapeExportLighting;                                // 0x026D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLandscapeExportNormalizedUVs;                           // 0x026E(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLandscapeExportTileUVs;                                 // 0x026F(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanDeleteHoudiniNodes;                                  // 0x0270(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoSelectInputType;                                    // 0x0271(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableSMCWorldFilter;                                   // 0x0272(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsIncludeStaticMesh;                                    // 0x0273(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNeedSendModelMaterial;                                  // 0x0274(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNeedSendDataTableModel;                                 // 0x0275(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNeedSendFoliageInstanceCustomData;                      // 0x0276(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C21V[0x1];                                   // 0x0277(0x0001) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniInputObject
	 * Size -> 0x00C0 (FullSize[0x00E8] - InheritedSize[0x0028])
	 */
	class UHoudiniInputObject : public UObject
	{
	public:
		unsigned char                                              InputObject[0x28];                                       // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FTransform                                          Transform;                                               // 0x0050(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EHoudiniInputObjectType                                    Type;                                                    // 0x0080(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZIW4[0x3];                                   // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    InputNodeId;                                             // 0x0084(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InputObjectNodeId;                                       // 0x0088(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               Guid;                                                    // 0x008C(0x0010) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6T9H[0x2C];                                  // 0x009C(0x002C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bHasChanged;                                             // 0x00C8(0x0001) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bNeedsToTriggerUpdate;                                   // 0x00C9(0x0001) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bTransformChanged;                                       // 0x00CA(0x0001) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bImportAsReference;                                      // 0x00CB(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bImportAsReferenceRotScaleEnabled;                       // 0x00CC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bImportAsReferenceBboxEnabled;                           // 0x00CD(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bImportAsReferenceMaterialEnabled;                       // 0x00CE(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9058[0x1];                                   // 0x00CF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      MaterialReferences;                                      // 0x00D0(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCanDeleteHoudiniNodes;                                  // 0x00E0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_R20K[0x7];                                   // 0x00E1(0x0007) Fix size for supers

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniInputStaticMesh
	 * Size -> 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
	 */
	class UHoudiniInputStaticMesh : public UHoudiniInputObject
	{
	public:
		unsigned char                                              UnknownData_TOR0[0x8];                                   // 0x00E8(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniInputTexture
	 * Size -> 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
	 */
	class UHoudiniInputTexture : public UHoudiniInputObject
	{
	public:
		unsigned char                                              UnknownData_JGUN[0x8];                                   // 0x00E8(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniInputSkeletalMesh
	 * Size -> 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
	 */
	class UHoudiniInputSkeletalMesh : public UHoudiniInputObject
	{
	public:
		unsigned char                                              UnknownData_6UPT[0x8];                                   // 0x00E8(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniInputGeometryCollection
	 * Size -> 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
	 */
	class UHoudiniInputGeometryCollection : public UHoudiniInputObject
	{
	public:
		unsigned char                                              UnknownData_7FT7[0x8];                                   // 0x00E8(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniInputSceneComponent
	 * Size -> 0x0038 (FullSize[0x0120] - InheritedSize[0x00E8])
	 */
	class UHoudiniInputSceneComponent : public UHoudiniInputObject
	{
	public:
		unsigned char                                              UnknownData_8T6H[0x8];                                   // 0x00E8(0x0008) Fix Super Size
		struct FTransform                                          ActorTransform;                                          // 0x00F0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniInputMeshComponent
	 * Size -> 0x0028 (FullSize[0x0148] - InheritedSize[0x0120])
	 */
	class UHoudiniInputMeshComponent : public UHoudiniInputSceneComponent
	{
	public:
		unsigned char                                              StaticMesh[0x28];                                        // 0x0120(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniInputInstancedMeshComponent
	 * Size -> 0x0018 (FullSize[0x0160] - InheritedSize[0x0148])
	 */
	class UHoudiniInputInstancedMeshComponent : public UHoudiniInputMeshComponent
	{
	public:
		TArray<struct FTransform>                                  InstanceTransforms;                                      // 0x0148(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QFMU[0x8];                                   // 0x0158(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniInputLandscapeSplineComponent
	 * Size -> 0x0020 (FullSize[0x0140] - InheritedSize[0x0120])
	 */
	class UHoudiniInputLandscapeSplineComponent : public UHoudiniInputSceneComponent
	{
	public:
		int32_t                                                    NumberOfSplineControlPoints;                             // 0x0120(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SplineLength;                                            // 0x0124(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SplineResolution;                                        // 0x0128(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SplineClosed;                                            // 0x012C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D2AS[0x3];                                   // 0x012D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTransform>                                  SplineControlPoints;                                     // 0x0130(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniInputSplineComponent
	 * Size -> 0x0020 (FullSize[0x0140] - InheritedSize[0x0120])
	 */
	class UHoudiniInputSplineComponent : public UHoudiniInputSceneComponent
	{
	public:
		int32_t                                                    NumberOfSplineControlPoints;                             // 0x0120(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SplineLength;                                            // 0x0124(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SplineResolution;                                        // 0x0128(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SplineClosed;                                            // 0x012C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NPKX[0x3];                                   // 0x012D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTransform>                                  SplineControlPoints;                                     // 0x0130(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniInputGeometryCollectionComponent
	 * Size -> 0x0000 (FullSize[0x0120] - InheritedSize[0x0120])
	 */
	class UHoudiniInputGeometryCollectionComponent : public UHoudiniInputSceneComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniInputSkeletalMeshComponent
	 * Size -> 0x0000 (FullSize[0x0120] - InheritedSize[0x0120])
	 */
	class UHoudiniInputSkeletalMeshComponent : public UHoudiniInputSceneComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniInputHoudiniSplineComponent
	 * Size -> 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
	 */
	class UHoudiniInputHoudiniSplineComponent : public UHoudiniInputObject
	{
	public:
		unsigned char                                              UnknownData_1VMD[0x8];                                   // 0x00E8(0x0008) Fix Super Size
		class UHoudiniSplineComponent*                             CachedComponent;                                         // 0x00F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LNMR[0x8];                                   // 0x00F8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniInputCameraComponent
	 * Size -> 0x0020 (FullSize[0x0140] - InheritedSize[0x0120])
	 */
	class UHoudiniInputCameraComponent : public UHoudiniInputSceneComponent
	{
	public:
		float                                                      FOV;                                                     // 0x0120(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AspectRatio;                                             // 0x0124(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsOrthographic;                                         // 0x0128(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3MRA[0x3];                                   // 0x0129(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OrthoWidth;                                              // 0x012C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OrthoNearClipPlane;                                      // 0x0130(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OrthoFarClipPlane;                                       // 0x0134(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2NLW[0x8];                                   // 0x0138(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniInputHoudiniAsset
	 * Size -> 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
	 */
	class UHoudiniInputHoudiniAsset : public UHoudiniInputObject
	{
	public:
		unsigned char                                              UnknownData_90XO[0x8];                                   // 0x00E8(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniInputActor
	 * Size -> 0x0068 (FullSize[0x0150] - InheritedSize[0x00E8])
	 */
	class UHoudiniInputActor : public UHoudiniInputObject
	{
	public:
		TArray<class UHoudiniInputSceneComponent*>                 ActorComponents;                                         // 0x00E8(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              ActorSceneComponents[0x50];                              // 0x00F8(0x0050) UNKNOWN PROPERTY: SetProperty
		int32_t                                                    LastUpdateNumComponentsAdded;                            // 0x0148(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    LastUpdateNumComponentsRemoved;                          // 0x014C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniInputLandscape
	 * Size -> 0x0100 (FullSize[0x0250] - InheritedSize[0x0150])
	 */
	class UHoudiniInputLandscape : public UHoudiniInputActor
	{
	public:
		struct FTransform                                          CachedInputLandscapeTraqnsform;                          // 0x0150(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    CachedNumLandscapeComponents;                            // 0x0180(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4V6D[0x4];                                   // 0x0184(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHoudiniInputLandscapeTransferParams                TransferParams;                                          // 0x0188(0x00C8) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniInputInstancedFoliage
	 * Size -> 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
	 */
	class UHoudiniInputInstancedFoliage : public UHoudiniInputObject
	{
	public:
		unsigned char                                              UnknownData_I77K[0x8];                                   // 0x00E8(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniInputBrush
	 * Size -> 0x0020 (FullSize[0x0170] - InheritedSize[0x0150])
	 */
	class UHoudiniInputBrush : public UHoudiniInputActor
	{
	public:
		TArray<struct FHoudiniBrushInfo>                           BrushesInfo;                                             // 0x0150(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UModel*                                              CombinedModel;                                           // 0x0160(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIgnoreInputObject;                                      // 0x0168(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EBrushType                                                 CachedInputBrushType;                                    // 0x0169(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2G0J[0x6];                                   // 0x016A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniInputDataTable
	 * Size -> 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
	 */
	class UHoudiniInputDataTable : public UHoudiniInputObject
	{
	public:
		unsigned char                                              UnknownData_K92E[0x8];                                   // 0x00E8(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniInputFoliageType_InstancedStaticMesh
	 * Size -> 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
	 */
	class UHoudiniInputFoliageType_InstancedStaticMesh : public UHoudiniInputStaticMesh
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniInputBlueprint
	 * Size -> 0x0068 (FullSize[0x0150] - InheritedSize[0x00E8])
	 */
	class UHoudiniInputBlueprint : public UHoudiniInputObject
	{
	public:
		TArray<class UHoudiniInputSceneComponent*>                 BPComponents;                                            // 0x00E8(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              BPSceneComponents[0x50];                                 // 0x00F8(0x0050) UNKNOWN PROPERTY: SetProperty
		int32_t                                                    LastUpdateNumComponentsAdded;                            // 0x0148(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    LastUpdateNumComponentsRemoved;                          // 0x014C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniInstancedActorComponent
	 * Size -> 0x0018 (FullSize[0x0330] - InheritedSize[0x0318])
	 */
	class UHoudiniInstancedActorComponent : public USceneComponent
	{
	public:
		class UObject*                                             InstancedObject;                                         // 0x0318(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class AActor*>                                      InstancedActors;                                         // 0x0320(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniMeshSplitInstancerComponent
	 * Size -> 0x0028 (FullSize[0x0340] - InheritedSize[0x0318])
	 */
	class UHoudiniMeshSplitInstancerComponent : public USceneComponent
	{
	public:
		TArray<class UStaticMeshComponent*>                        Instances;                                               // 0x0318(0x0010) Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UMaterialInterface*>                          OverrideMaterials;                                       // 0x0328(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStaticMesh*                                         InstancedMesh;                                           // 0x0338(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniLandscapePtr
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UHoudiniLandscapePtr : public UObject
	{
	public:
		unsigned char                                              LandscapeSoftPtr[0x28];                                  // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		EHoudiniLandscapeOutputBakeType                            BakeType;                                                // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D3SK[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                EditLayerName;                                           // 0x0054(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EZYI[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniLandscapeEditLayer
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UHoudiniLandscapeEditLayer : public UObject
	{
	public:
		unsigned char                                              LandscapeSoftPtr[0x28];                                  // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FString                                              LayerName;                                               // 0x0050(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniOutput
	 * Size -> 0x0188 (FullSize[0x01B0] - InheritedSize[0x0028])
	 */
	class UHoudiniOutput : public UObject
	{
	public:
		EHoudiniOutputType                                         Type;                                                    // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4T0U[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FHoudiniGeoPartObject>                       HoudiniGeoPartObjects;                                   // 0x0030(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TMap<struct FHoudiniOutputObjectIdentifier, struct FHoudiniOutputObject> OutputObjects;                                           // 0x0040(0x0050) DuplicateTransient, Protected, NativeAccessSpecifierProtected
		TMap<struct FHoudiniOutputObjectIdentifier, struct FHoudiniInstancedOutput> InstancedOutputs;                                        // 0x0090(0x0050) Protected, NativeAccessSpecifierProtected
		TMap<class FString, class UMaterialInterface*>             AssignementMaterials;                                    // 0x00E0(0x0050) Protected, NativeAccessSpecifierProtected
		TMap<class FString, class UMaterialInterface*>             ReplacementMaterials;                                    // 0x0130(0x0050) Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0AH7[0x4];                                   // 0x0180(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bLandscapeWorldComposition;                              // 0x0184(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ANCV[0x3];                                   // 0x0185(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      HoudiniCreatedSocketActors;                              // 0x0188(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class AActor*>                                      HoudiniAttachedSocketActors;                             // 0x0198(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsEditableNode;                                         // 0x01A8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bHasEditableNodeBuilt;                                   // 0x01A9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsUpdating;                                             // 0x01AA(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bCanDeleteHoudiniNodes;                                  // 0x01AB(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Z509[0x4];                                   // 0x01AC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniParameter
	 * Size -> 0x00E0 (FullSize[0x0108] - InheritedSize[0x0028])
	 */
	class UHoudiniParameter : public UObject
	{
	public:
		class FString                                              Name;                                                    // 0x0028(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              Label;                                                   // 0x0038(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EHoudiniParameterType                                      ParmType;                                                // 0x0048(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_U55O[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   TupleSize;                                               // 0x004C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NodeId;                                                  // 0x0050(0x0004) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ParmId;                                                  // 0x0054(0x0004) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ParentParmId;                                            // 0x0058(0x0004) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ChildIndex;                                              // 0x005C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsVisible;                                              // 0x0060(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsParentFolderVisible;                                  // 0x0061(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsDisabled;                                             // 0x0062(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasChanged;                                             // 0x0063(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bNeedsToTriggerUpdate;                                   // 0x0064(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsDefault;                                              // 0x0065(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsSpare;                                                // 0x0066(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bJoinNext;                                               // 0x0067(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsChildOfMultiParm;                                     // 0x0068(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsDirectChildOfMultiParm;                               // 0x0069(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPendingRevertToDefault;                                 // 0x006A(0x0001) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SJ1A[0x5];                                   // 0x006B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            TuplePendingRevertToDefault;                             // 0x0070(0x0010) ZeroConstructor, DuplicateTransient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              help;                                                    // 0x0080(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		uint32_t                                                   TagCount;                                                // 0x0090(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ValueIndex;                                              // 0x0094(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasExpression;                                          // 0x0098(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bShowExpression;                                         // 0x0099(0x0001) ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VUNA[0x6];                                   // 0x009A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ParamExpression;                                         // 0x00A0(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TMap<class FString, class FString>                         Tags;                                                    // 0x00B0(0x0050) Protected, NativeAccessSpecifierProtected
		bool                                                       bAutoUpdate;                                             // 0x0100(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SJPO[0x7];                                   // 0x0101(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniParameterButton
	 * Size -> 0x0000 (FullSize[0x0108] - InheritedSize[0x0108])
	 */
	class UHoudiniParameterButton : public UHoudiniParameter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniParameterButtonStrip
	 * Size -> 0x0028 (FullSize[0x0130] - InheritedSize[0x0108])
	 */
	class UHoudiniParameterButtonStrip : public UHoudiniParameter
	{
	public:
		int32_t                                                    count;                                                   // 0x0108(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HECY[0x4];                                   // 0x010C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      Labels;                                                  // 0x0110(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            Values;                                                  // 0x0120(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniParameterChoice
	 * Size -> 0x0070 (FullSize[0x0178] - InheritedSize[0x0108])
	 */
	class UHoudiniParameterChoice : public UHoudiniParameter
	{
	public:
		int32_t                                                    IntValue;                                                // 0x0108(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    DefaultIntValue;                                         // 0x010C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              StringValue;                                             // 0x0110(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              DefaultStringValue;                                      // 0x0120(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class FString>                                      StringChoiceValues;                                      // 0x0130(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class FString>                                      StringChoiceLabels;                                      // 0x0140(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_P4LC[0x10];                                  // 0x0150(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsChildOfRamp;                                          // 0x0160(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_M21I[0x7];                                   // 0x0161(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            IntValuesArray;                                          // 0x0168(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniParameterColor
	 * Size -> 0x0028 (FullSize[0x0130] - InheritedSize[0x0108])
	 */
	class UHoudiniParameterColor : public UHoudiniParameter
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0108(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        DefaultColor;                                            // 0x0118(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsChildOfRamp;                                          // 0x0128(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CYO9[0x7];                                   // 0x0129(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniParameterFile
	 * Size -> 0x0038 (FullSize[0x0140] - InheritedSize[0x0108])
	 */
	class UHoudiniParameterFile : public UHoudiniParameter
	{
	public:
		TArray<class FString>                                      Values;                                                  // 0x0108(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class FString>                                      DefaultValues;                                           // 0x0118(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              Filters;                                                 // 0x0128(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsReadOnly;                                             // 0x0138(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EDEF[0x7];                                   // 0x0139(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniParameterFloat
	 * Size -> 0x0050 (FullSize[0x0158] - InheritedSize[0x0108])
	 */
	class UHoudiniParameterFloat : public UHoudiniParameter
	{
	public:
		TArray<float>                                              Values;                                                  // 0x0108(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<float>                                              DefaultValues;                                           // 0x0118(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              Unit;                                                    // 0x0128(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bNoSwap;                                                 // 0x0138(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasMin;                                                 // 0x0139(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasMax;                                                 // 0x013A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasUIMin;                                               // 0x013B(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasUIMax;                                               // 0x013C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsLogarithmic;                                          // 0x013D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CHX1[0x2];                                   // 0x013E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Min;                                                     // 0x0140(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Max;                                                     // 0x0144(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      UIMin;                                                   // 0x0148(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      UIMax;                                                   // 0x014C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsChildOfRamp;                                          // 0x0150(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1581[0x7];                                   // 0x0151(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniParameterFolder
	 * Size -> 0x0010 (FullSize[0x0118] - InheritedSize[0x0108])
	 */
	class UHoudiniParameterFolder : public UHoudiniParameter
	{
	public:
		EHoudiniFolderParameterType                                FolderType;                                              // 0x0108(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bExpanded;                                               // 0x0109(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bChosen;                                                 // 0x010A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DZT3[0x1];                                   // 0x010B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ChildCounter;                                            // 0x010C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsContentShown;                                         // 0x0110(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8S5R[0x7];                                   // 0x0111(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniParameterFolderList
	 * Size -> 0x0018 (FullSize[0x0120] - InheritedSize[0x0108])
	 */
	class UHoudiniParameterFolderList : public UHoudiniParameter
	{
	public:
		bool                                                       bIsTabMenu;                                              // 0x0108(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsTabsShown;                                            // 0x0109(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TZSV[0x6];                                   // 0x010A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UHoudiniParameterFolder*>                     TabFolders;                                              // 0x0110(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniParameterInt
	 * Size -> 0x0048 (FullSize[0x0150] - InheritedSize[0x0108])
	 */
	class UHoudiniParameterInt : public UHoudiniParameter
	{
	public:
		TArray<int32_t>                                            Values;                                                  // 0x0108(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<int32_t>                                            DefaultValues;                                           // 0x0118(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              Unit;                                                    // 0x0128(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasMin;                                                 // 0x0138(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasMax;                                                 // 0x0139(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasUIMin;                                               // 0x013A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasUIMax;                                               // 0x013B(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsLogarithmic;                                          // 0x013C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JSU0[0x3];                                   // 0x013D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Min;                                                     // 0x0140(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    Max;                                                     // 0x0144(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    UIMin;                                                   // 0x0148(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    UIMax;                                                   // 0x014C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniParameterLabel
	 * Size -> 0x0010 (FullSize[0x0118] - InheritedSize[0x0108])
	 */
	class UHoudiniParameterLabel : public UHoudiniParameter
	{
	public:
		TArray<class FString>                                      LabelStrings;                                            // 0x0108(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniParameterMultiParm
	 * Size -> 0x0048 (FullSize[0x0150] - InheritedSize[0x0108])
	 */
	class UHoudiniParameterMultiParm : public UHoudiniParameter
	{
	public:
		bool                                                       bIsShown;                                                // 0x0108(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_18IP[0x3];                                   // 0x0109(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Value;                                                   // 0x010C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TemplateName;                                            // 0x0110(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MultiparmValue;                                          // 0x0120(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MultiParmInstanceNum;                                    // 0x0124(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MultiParmInstanceLength;                                 // 0x0128(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MultiParmInstanceCount;                                  // 0x012C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   InstanceStartOffset;                                     // 0x0130(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YGHW[0x4];                                   // 0x0134(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EHoudiniMultiParmModificationType>                  MultiParmInstanceLastModifyArray;                        // 0x0138(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DefaultInstanceCount;                                    // 0x0148(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_98BE[0x4];                                   // 0x014C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniParameterOperatorPath
	 * Size -> 0x0008 (FullSize[0x0110] - InheritedSize[0x0108])
	 */
	class UHoudiniParameterOperatorPath : public UHoudiniParameter
	{
	public:
		TWeakObjectPtr<class UHoudiniInput>                        HoudiniInput;                                            // 0x0108(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniParameterRampModificationEvent
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UHoudiniParameterRampModificationEvent : public UObject
	{
	public:
		bool                                                       bIsInsertEvent;                                          // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsFloatRamp;                                            // 0x0029(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZVH9[0x2];                                   // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DeleteInstanceIndex;                                     // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InsertPosition;                                          // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InsertFloat;                                             // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        InsertColor;                                             // 0x0038(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHoudiniRampInterpolationType                              InsertInterpolation;                                     // 0x0048(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T3IJ[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniParameterRampFloatPoint
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UHoudiniParameterRampFloatPoint : public UObject
	{
	public:
		float                                                      Position;                                                // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHoudiniRampInterpolationType                              Interpolation;                                           // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VLD9[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    InstanceIndex;                                           // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHoudiniParameterFloat*                              PositionParentParm;                                      // 0x0038(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHoudiniParameterFloat*                              ValueParentParm;                                         // 0x0040(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHoudiniParameterChoice*                             InterpolationParentParm;                                 // 0x0048(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniParameterRampColorPoint
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UHoudiniParameterRampColorPoint : public UObject
	{
	public:
		float                                                      Position;                                                // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Value;                                                   // 0x002C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHoudiniRampInterpolationType                              Interpolation;                                           // 0x003C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L774[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    InstanceIndex;                                           // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TWF0[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHoudiniParameterFloat*                              PositionParentParm;                                      // 0x0048(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHoudiniParameterColor*                              ValueParentParm;                                         // 0x0050(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHoudiniParameterChoice*                             InterpolationParentParm;                                 // 0x0058(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniParameterRampFloat
	 * Size -> 0x0068 (FullSize[0x01B8] - InheritedSize[0x0150])
	 */
	class UHoudiniParameterRampFloat : public UHoudiniParameterMultiParm
	{
	public:
		TArray<class UHoudiniParameterRampFloatPoint*>             Points;                                                  // 0x0150(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UHoudiniParameterRampFloatPoint*>             CachedPoints;                                            // 0x0160(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              DefaultPositions;                                        // 0x0170(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              DefaultValues;                                           // 0x0180(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            DefaultChoices;                                          // 0x0190(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumDefaultPoints;                                        // 0x01A0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCaching;                                                // 0x01A4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EX4N[0x3];                                   // 0x01A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UHoudiniParameterRampModificationEvent*>      ModificationEvents;                                      // 0x01A8(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniParameterRampColor
	 * Size -> 0x0070 (FullSize[0x01C0] - InheritedSize[0x0150])
	 */
	class UHoudiniParameterRampColor : public UHoudiniParameterMultiParm
	{
	public:
		TArray<class UHoudiniParameterRampColorPoint*>             Points;                                                  // 0x0150(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCaching;                                                // 0x0160(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YA53[0x7];                                   // 0x0161(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UHoudiniParameterRampColorPoint*>             CachedPoints;                                            // 0x0168(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              DefaultPositions;                                        // 0x0178(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FLinearColor>                                DefaultValues;                                           // 0x0188(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            DefaultChoices;                                          // 0x0198(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumDefaultPoints;                                        // 0x01A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WDBA[0x4];                                   // 0x01AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UHoudiniParameterRampModificationEvent*>      ModificationEvents;                                      // 0x01B0(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniParameterSeparator
	 * Size -> 0x0000 (FullSize[0x0108] - InheritedSize[0x0108])
	 */
	class UHoudiniParameterSeparator : public UHoudiniParameter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniParameterString
	 * Size -> 0x0038 (FullSize[0x0140] - InheritedSize[0x0108])
	 */
	class UHoudiniParameterString : public UHoudiniParameter
	{
	public:
		TArray<class FString>                                      Values;                                                  // 0x0108(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class FString>                                      DefaultValues;                                           // 0x0118(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UObject*>                                     ChosenAssets;                                            // 0x0128(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsAssetRef;                                             // 0x0138(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_B9ZV[0x7];                                   // 0x0139(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniParameterToggle
	 * Size -> 0x0020 (FullSize[0x0128] - InheritedSize[0x0108])
	 */
	class UHoudiniParameterToggle : public UHoudiniParameter
	{
	public:
		TArray<int32_t>                                            Values;                                                  // 0x0108(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<int32_t>                                            DefaultValues;                                           // 0x0118(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.TOPNode
	 * Size -> 0x03F8 (FullSize[0x0420] - InheritedSize[0x0028])
	 */
	class UTOPNode : public UObject
	{
	public:
		int32_t                                                    NodeId;                                                  // 0x0028(0x0004) ZeroConstructor, Transient, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1A2X[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              NodeName;                                                // 0x0030(0x0010) ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              NodePath;                                                // 0x0040(0x0010) ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ParentName;                                              // 0x0050(0x0010) ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             WorkResultParent;                                        // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FTOPWorkResult>                              WorkResult;                                              // 0x0068(0x0010) ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHidden;                                                 // 0x0078(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoLoad;                                               // 0x0079(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPDGNodeState                                              NodeState;                                               // 0x007A(0x0001) ZeroConstructor, Transient, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCachedHaveNotLoadedWorkResults;                         // 0x007B(0x0001) ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCachedHaveLoadedWorkResults;                            // 0x007C(0x0001) ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasChildNodes;                                          // 0x007D(0x0001) ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M28S[0x2];                                   // 0x007E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ClearedLandscapeLayers[0x50];                            // 0x0080(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              UnknownData_9IQL[0x80];                                  // 0x00D0(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bShow;                                                   // 0x0150(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LHIH[0x7];                                   // 0x0151(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, struct FHoudiniPDGWorkResultObjectBakedOutput> BakedWorkResultObjectOutputs;                            // 0x0158(0x0050) Protected, NativeAccessSpecifierProtected
		struct FWorkItemTally                                      WorkItemTally;                                           // 0x01A8(0x0238) Transient, NonTransactional, Protected, NativeAccessSpecifierProtected
		struct FAggregatedWorkItemTally                            AggregatedWorkItemTally;                                 // 0x03E0(0x0028) Transient, NonTransactional, Protected, NativeAccessSpecifierProtected
		bool                                                       bHasReceivedCookCompleteEvent;                           // 0x0408(0x0001) ZeroConstructor, Transient, IsPlainOldData, NonTransactional, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_37CE[0x7];                                   // 0x0409(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FOutputActorOwner                                   OutputActorOwner;                                        // 0x0410(0x0010) NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.TOPNetwork
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class UTOPNetwork : public UObject
	{
	public:
		int32_t                                                    NodeId;                                                  // 0x0028(0x0004) ZeroConstructor, Transient, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5K99[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              NodeName;                                                // 0x0030(0x0010) ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              NodePath;                                                // 0x0040(0x0010) ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UTOPNode*>                                    AllTOPNodes;                                             // 0x0050(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SelectedTOPIndex;                                        // 0x0060(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KUWW[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ParentName;                                              // 0x0068(0x0010) ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowResults;                                            // 0x0078(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoLoadResults;                                        // 0x0079(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H5OG[0x1E];                                  // 0x007A(0x001E) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniPDGAssetLink
	 * Size -> 0x0108 (FullSize[0x0130] - InheritedSize[0x0028])
	 */
	class UHoudiniPDGAssetLink : public UObject
	{
	public:
		class FString                                              AssetName;                                               // 0x0028(0x0010) ZeroConstructor, DuplicateTransient, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AssetNodePath;                                           // 0x0038(0x0010) ZeroConstructor, DuplicateTransient, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AssetId;                                                 // 0x0048(0x0004) ZeroConstructor, DuplicateTransient, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CFDF[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UTOPNetwork*>                                 AllTOPNetworks;                                          // 0x0050(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SelectedTOPNetworkIndex;                                 // 0x0060(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPDGLinkState                                              LinkState;                                               // 0x0064(0x0001) ZeroConstructor, Transient, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoCook;                                               // 0x0065(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseTOPNodeFilter;                                       // 0x0066(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseTOPOutputFilter;                                     // 0x0067(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TOPNodeFilter;                                           // 0x0068(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TOPOutputFilter;                                         // 0x0078(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumWorkItems;                                            // 0x0088(0x0004) ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YU3W[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAggregatedWorkItemTally                            WorkItemTally;                                           // 0x0090(0x0028) Transient, NonTransactional, NativeAccessSpecifierPublic
		class FString                                              OutputCachePath;                                         // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNeedsUIRefresh;                                         // 0x00C8(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EBPM[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              OutputParentActor;                                       // 0x00D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDirectoryPath                                      BakeFolder;                                              // 0x00D8(0x0010) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VF0Y[0x48];                                  // 0x00E8(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniRuntimeSettings
	 * Size -> 0x02B0 (FullSize[0x02D8] - InheritedSize[0x0028])
	 */
	class UHoudiniRuntimeSettings : public UObject
	{
	public:
		EHoudiniRuntimeSettingsSessionType                         SessionType;                                             // 0x0028(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_99O9[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ServerHost;                                              // 0x0030(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ServerPort;                                              // 0x0040(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z7S0[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ServerPipeName;                                          // 0x0048(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStartAutomaticServer;                                   // 0x0058(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_49BI[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AutomaticServerTimeout;                                  // 0x005C(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSyncWithHoudiniCook;                                    // 0x0060(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCookUsingHoudiniTime;                                   // 0x0061(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSyncViewport;                                           // 0x0062(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSyncHoudiniViewport;                                    // 0x0063(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSyncUnrealViewport;                                     // 0x0064(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowMultiAssetDialog;                                   // 0x0065(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreferHdaMemoryCopyOverHdaSourceFile;                   // 0x0066(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPauseCookingOnStart;                                    // 0x0067(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisplaySlateCookingNotifications;                       // 0x0068(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R84Q[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DefaultTemporaryCookFolder;                              // 0x0070(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DefaultBakeFolder;                                       // 0x0080(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableTheReferenceCountedInputSystem;                   // 0x0090(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MarshallingLandscapesUseDefaultUnrealScaling;            // 0x0091(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MarshallingLandscapesUseFullResolution;                  // 0x0092(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MarshallingLandscapesForceMinMaxValues;                  // 0x0093(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MarshallingLandscapesForcedMinValue;                     // 0x0094(0x0004) Edit, ZeroConstructor, Config, EditConst, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MarshallingLandscapesForcedMaxValue;                     // 0x0098(0x0004) Edit, ZeroConstructor, Config, EditConst, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAddRotAndScaleAttributesOnCurves;                       // 0x009C(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseLegacyInputCurves;                                   // 0x009D(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JFQD[0x2];                                   // 0x009E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MarshallingSplineResolution;                             // 0x00A0(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableProxyStaticMesh;                                  // 0x00A4(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowDefaultMesh;                                        // 0x00A5(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableProxyStaticMeshRefinementByTimer;                 // 0x00A6(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0JII[0x1];                                   // 0x00A7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ProxyMeshAutoRefineTimeoutSeconds;                       // 0x00A8(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableProxyStaticMeshRefinementOnPreSaveWorld;          // 0x00AC(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableProxyStaticMeshRefinementOnPreBeginPIE;           // 0x00AD(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2UGH[0x2];                                   // 0x00AE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bDoubleSidedGeometry : 1;                                // 0x00B0(0x0001) BIT_FIELD Edit, Config, GlobalConfig, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4B18[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPhysicalMaterial*                                   PhysMaterial;                                            // 0x00B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBodyInstance                                       DefaultBodyInstance;                                     // 0x00C0(0x0130) Edit, Config, GlobalConfig, NativeAccessSpecifierPublic
		ECollisionTraceFlag                                        CollisionTraceFlag;                                      // 0x01F0(0x0001) Edit, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AFVT[0x3];                                   // 0x01F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LightMapResolution;                                      // 0x01F4(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LpvBiasMultiplier;                                       // 0x01F8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GeneratedDistanceFieldResolutionScale;                   // 0x01FC(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWalkableSlopeOverride                              WalkableSlopeOverride;                                   // 0x0200(0x0010) Edit, Config, GlobalConfig, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		int32_t                                                    LightMapCoordinateIndex;                                 // 0x0210(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseMaximumStreamingTexelRatio : 1;                      // 0x0214(0x0001) BIT_FIELD Edit, Config, GlobalConfig, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SUSW[0x3];                                   // 0x0215(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StreamingDistanceMultiplier;                             // 0x0218(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MDB0[0x4];                                   // 0x021C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFoliageType_InstancedStaticMesh*                    FoliageDefaultSettings;                                  // 0x0220(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAssetUserData*>                              AssetUserData;                                           // 0x0228(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseFullPrecisionUVs;                                    // 0x0238(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GVRC[0x3];                                   // 0x0239(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SrcLightmapIndex;                                        // 0x023C(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DstLightmapIndex;                                        // 0x0240(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinLightmapResolution;                                   // 0x0244(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRemoveDegenerates;                                      // 0x0248(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHoudiniRuntimeSettingsRecomputeFlag                       GenerateLightmapUVsFlag;                                 // 0x0249(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHoudiniRuntimeSettingsRecomputeFlag                       RecomputeNormalsFlag;                                    // 0x024A(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHoudiniRuntimeSettingsRecomputeFlag                       RecomputeTangentsFlag;                                   // 0x024B(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseMikkTSpace;                                          // 0x024C(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBuildAdjacencyBuffer;                                   // 0x024D(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bComputeWeightedNormals : 1;                             // 0x024E(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBuildReversedIndexBuffer : 1;                           // 0x024E(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseHighPrecisionTangentBasis : 1;                       // 0x024E(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3DVK[0x1];                                   // 0x024F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DistanceFieldResolutionScale;                            // 0x0250(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGenerateDistanceFieldAsIfTwoSided : 1;                  // 0x0254(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportFaceRemap : 1;                                   // 0x0254(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPDGAsyncCommandletImportEnabled;                        // 0x0255(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableBackwardCompatibility;                            // 0x0256(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutomaticLegacyHDARebuild;                              // 0x0257(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCustomHoudiniLocation;                               // 0x0258(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_64SS[0x7];                                   // 0x0259(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDirectoryPath                                      CustomHoudiniLocation;                                   // 0x0260(0x0010) Edit, Config, EditConst, GlobalConfig, NativeAccessSpecifierPublic
		EHoudiniExecutableType                                     HoudiniExecutable;                                       // 0x0270(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2R45[0x3];                                   // 0x0271(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CookingThreadStackSize;                                  // 0x0274(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              HoudiniEnvironmentFiles;                                 // 0x0278(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SyncNetDiscPath;                                         // 0x0288(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OtlSearchPath;                                           // 0x0298(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DsoSearchPath;                                           // 0x02A8(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ImageDsoSearchPath;                                      // 0x02B8(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AudioDsoSearchPath;                                      // 0x02C8(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniSplineComponent
	 * Size -> 0x02A8 (FullSize[0x05C0] - InheritedSize[0x0318])
	 */
	class UHoudiniSplineComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_64FO[0x8];                                   // 0x0318(0x0008) Fix Super Size
		TArray<struct FTransform>                                  CurvePoints;                                             // 0x0320(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     DisplayPoints;                                           // 0x0330(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            DisplayPointIndexDivider;                                // 0x0340(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              HoudiniSplineName;                                       // 0x0350(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClosed;                                                 // 0x0360(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReversed;                                               // 0x0361(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZC7K[0x2];                                   // 0x0362(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CurveOrder;                                              // 0x0364(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsHoudiniSplineVisible;                                 // 0x0368(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHoudiniCurveType                                          CurveType;                                               // 0x0369(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHoudiniCurveMethod                                        CurveMethod;                                             // 0x036A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHoudiniCurveBreakpointParameterization                    CurveBreakpointParameterization;                         // 0x036B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsOutputCurve;                                          // 0x036C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCookOnCurveChanged;                                     // 0x036D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsLegacyInputCurve;                                     // 0x036E(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OLDC[0x231];                                 // 0x036F(0x0231) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bHasChanged;                                             // 0x05A0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bNeedsToTriggerUpdate;                                   // 0x05A1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsInputCurve;                                           // 0x05A2(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsEditableOutputCurve;                                  // 0x05A3(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    NodeId;                                                  // 0x05A4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              PartName;                                                // 0x05A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4NYW[0x8];                                   // 0x05B8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniStaticMesh
	 * Size -> 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
	 */
	class UHoudiniStaticMesh : public UObject
	{
	public:
		bool                                                       bHasNormals;                                             // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasTangents;                                            // 0x0029(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasColors;                                              // 0x002A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EHVE[0x1];                                   // 0x002B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   NumUVLayers;                                             // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasPerFaceMaterials;                                    // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RBC0[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     VertexPositions;                                         // 0x0038(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected, CPF_SkipSerialization
		TArray<struct FIntVector>                                  TriangleIndices;                                         // 0x0048(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected, CPF_SkipSerialization
		TArray<struct FColor>                                      VertexInstanceColors;                                    // 0x0058(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected, CPF_SkipSerialization
		TArray<struct FVector>                                     VertexInstanceNormals;                                   // 0x0068(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected, CPF_SkipSerialization
		TArray<struct FVector>                                     VertexInstanceUTangents;                                 // 0x0078(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected, CPF_SkipSerialization
		TArray<struct FVector>                                     VertexInstanceVTangents;                                 // 0x0088(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected, CPF_SkipSerialization
		TArray<struct FVector2D>                                   VertexInstanceUVs;                                       // 0x0098(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected, CPF_SkipSerialization
		TArray<int32_t>                                            MaterialIDsPerTriangle;                                  // 0x00A8(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected, CPF_SkipSerialization
		TArray<struct FStaticMaterial>                             StaticMaterials;                                         // 0x00B8(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetVertexPosition(uint32_t InVertexIndex, const struct FVector& InPosition);
		void SetTriangleVertexVTangent(uint32_t InTriangleIndex, unsigned char InTriangleVertexIndex, const struct FVector& InVTangent);
		void SetTriangleVertexUV(uint32_t InTriangleIndex, unsigned char InTriangleVertexIndex, unsigned char InUVLayer, const struct FVector2D& InUV);
		void SetTriangleVertexUTangent(uint32_t InTriangleIndex, unsigned char InTriangleVertexIndex, const struct FVector& InUTangent);
		void SetTriangleVertexNormal(uint32_t InTriangleIndex, unsigned char InTriangleVertexIndex, const struct FVector& InNormal);
		void SetTriangleVertexIndices(uint32_t InTriangleIndex, const struct FIntVector& InTriangleVertexIndices);
		void SetTriangleVertexColor(uint32_t InTriangleIndex, unsigned char InTriangleVertexIndex, const struct FColor& InColor);
		void SetTriangleMaterialID(uint32_t InTriangleIndex, int32_t InMaterialID);
		void SetStaticMaterial(uint32_t InMaterialIndex, const struct FStaticMaterial& InStaticMaterial);
		void SetNumUVLayers(uint32_t InNumUVLayers);
		void SetNumStaticMaterials(uint32_t InNumStaticMaterials);
		void SetHasTangents(bool bInHasTangents);
		void SetHasPerFaceMaterials(bool bInHasPerFaceMaterials);
		void SetHasNormals(bool bInHasNormals);
		void SetHasColors(bool bInHasColors);
		void Optimize();
		bool IsValid(bool bInSkipVertexIndicesCheck);
		void Initialize(uint32_t InNumVertices, uint32_t InNumTriangles, uint32_t InNumUVLayers, uint32_t InInitialNumStaticMaterials, bool bInHasNormals, bool bInHasTangents, bool bInHasColors, bool bInHasPerFaceMaterials);
		bool HasTangents();
		bool HasPerFaceMaterials();
		bool HasNormals();
		bool HasColors();
		TArray<struct FVector> GetVertexPositions();
		TArray<struct FVector> GetVertexInstanceVTangents();
		TArray<struct FVector2D> GetVertexInstanceUVs();
		TArray<struct FVector> GetVertexInstanceUTangents();
		TArray<struct FVector> GetVertexInstanceNormals();
		TArray<struct FColor> GetVertexInstanceColors();
		TArray<struct FIntVector> GetTriangleIndices();
		TArray<struct FStaticMaterial> GetStaticMaterials();
		uint32_t GetNumVertices();
		uint32_t GetNumVertexInstances();
		uint32_t GetNumUVLayers();
		uint32_t GetNumTriangles();
		uint32_t GetNumStaticMaterials();
		int32_t GetMaterialIndex(const class FName& InMaterialSlotName);
		TArray<int32_t> GetMaterialIDsPerTriangle();
		class UMaterialInterface* GetMaterial(int32_t InMaterialIndex);
		void CalculateTangents(bool bInComputeWeightedNormals);
		void CalculateNormals(bool bInComputeWeightedNormals);
		struct FBox CalcBounds();
		uint32_t AddStaticMaterial(const struct FStaticMaterial& InStaticMaterial);
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniStaticMeshComponent
	 * Size -> 0x0028 (FullSize[0x05A0] - InheritedSize[0x0578])
	 */
	class UHoudiniStaticMeshComponent : public UMeshComponent
	{
	public:
		class UHoudiniStaticMesh*                                  Mesh;                                                    // 0x0578(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FBox                                                LocalBounds;                                             // 0x0580(0x001C) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bHoudiniIconVisible;                                     // 0x059C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LL17[0x3];                                   // 0x059D(0x0003) MISSED OFFSET (PADDING)

	public:
		void SetMesh(class UHoudiniStaticMesh* InMesh);
		void SetHoudiniIconVisible(bool bInHoudiniIconVisible);
		void NotifyMeshUpdated();
		bool IsHoudiniIconVisible();
		class UHoudiniStaticMesh* GetMesh();
		static UClass* StaticClass();
	};

	/**
	 * Class HoudiniEngineRuntime.HoudiniAssetStateEvents
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHoudiniAssetStateEvents : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
