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
	 * Class AkAudio.AkPortalComponent
	 * Size -> 0x00C8 (FullSize[0x03E0] - InheritedSize[0x0318])
	 */
	class UAkPortalComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_JA6B[0x4];                                   // 0x0318(0x0004) Fix Super Size
		float                                                      ObstructionRefreshInterval;                              // 0x031C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          ObstructionCollisionChannel;                             // 0x0320(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IEYZ[0xBF];                                  // 0x0321(0x00BF) MISSED OFFSET (PADDING)

	public:
		bool PortalPlacementValid();
		void OpenPortal();
		class UPrimitiveComponent* GetPrimitiveParent();
		EAkAcousticPortalState GetCurrentState();
		void ClosePortal();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAcousticPortal
	 * Size -> 0x0010 (FullSize[0x0270] - InheritedSize[0x0260])
	 */
	class AAkAcousticPortal : public AVolume
	{
	public:
		class UAkPortalComponent*                                  Portal;                                                  // 0x0260(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAkAcousticPortalState                                     InitialState;                                            // 0x0268(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bRequiresStateMigration;                                 // 0x0269(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HLE4[0x6];                                   // 0x026A(0x0006) MISSED OFFSET (PADDING)

	public:
		void OpenPortal();
		EAkAcousticPortalState GetCurrentState();
		void ClosePortal();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAudioType
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UAkAudioType : public UObject
	{
	public:
		uint32_t                                                   ShortID;                                                 // 0x0028(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZQ6W[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UObject*>                                     UserData;                                                // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAcousticTexture
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UAkAcousticTexture : public UAkAudioType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAcousticTextureSetComponent
	 * Size -> 0x0018 (FullSize[0x0330] - InheritedSize[0x0318])
	 */
	class UAkAcousticTextureSetComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_EVOM[0x8];                                   // 0x0318(0x0008) Fix Super Size
		unsigned char                                              UnknownData_X8Z0[0x10];                                  // 0x0320(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAmbientSound
	 * Size -> 0x0040 (FullSize[0x0268] - InheritedSize[0x0228])
	 */
	class AAkAmbientSound : public AActor
	{
	public:
		class UAkAudioEvent*                                       AkAudioEvent;                                            // 0x0228(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkComponent*                                        AkComponent;                                             // 0x0230(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       StopWhenOwnerIsDestroyed;                                // 0x0238(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, SimpleDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AutoPost;                                                // 0x0239(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, SimpleDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QXZ3[0x2E];                                  // 0x023A(0x002E) MISSED OFFSET (PADDING)

	public:
		void StopAmbientSound();
		void StartAmbientSound();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAndroidInitializationSettings
	 * Size -> 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
	 */
	class UAkAndroidInitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_6G4C[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettingsWithSampleRate       CommonSettings;                                          // 0x0030(0x0068) Edit, Config, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0098(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkAndroidAdvancedInitializationSettings            AdvancedSettings;                                        // 0x00C0(0x0038) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic

	public:
		void MigrateMultiCoreRendering(bool NewValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkPlatformInfo
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UAkPlatformInfo : public UObject
	{
	public:
		unsigned char                                              UnknownData_07Q4[0x48];                                  // 0x0028(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAndroidPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkAndroidPlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAssetData
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UAkAssetData : public UObject
	{
	public:
		uint32_t                                                   CachedHash;                                              // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QXYL[0x34];                                  // 0x002C(0x0034) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAssetDataWithMedia
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UAkAssetDataWithMedia : public UAkAssetData
	{
	public:
		TArray<class UAkMediaAsset*>                               MediaList;                                               // 0x0060(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAssetPlatformData
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UAkAssetPlatformData : public UObject
	{
	public:
		class UAkAssetData*                                        CurrentAssetData;                                        // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAssetBase
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class UAkAssetBase : public UAkAudioType
	{
	public:
		class UAkAssetPlatformData*                                PlatformAssetData;                                       // 0x0040(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4RA7[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAudioBank
	 * Size -> 0x00D8 (FullSize[0x0128] - InheritedSize[0x0050])
	 */
	class UAkAudioBank : public UAkAssetBase
	{
	public:
		bool                                                       AutoLoad;                                                // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1ZRS[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              LocalizedPlatformAssetDataMap[0x50];                     // 0x0058(0x0050) UNKNOWN PROPERTY: MapProperty
		unsigned char                                              LinkedAkEvents[0x50];                                    // 0x00A8(0x0050) UNKNOWN PROPERTY: SetProperty
		class UAkAssetPlatformData*                                CurrentLocalizedPlatformAssetData;                       // 0x00F8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RWB6[0x28];                                  // 0x0100(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAssetDataSwitchContainerData
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UAkAssetDataSwitchContainerData : public UObject
	{
	public:
		unsigned char                                              GroupValue[0x28];                                        // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAkGroupValue*                                       DefaultGroupValue;                                       // 0x0050(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAkMediaAsset*>                               MediaList;                                               // 0x0058(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAkAssetDataSwitchContainerData*>             Children;                                                // 0x0068(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAssetDataSwitchContainer
	 * Size -> 0x0018 (FullSize[0x0088] - InheritedSize[0x0070])
	 */
	class UAkAssetDataSwitchContainer : public UAkAssetDataWithMedia
	{
	public:
		TArray<class UAkAssetDataSwitchContainerData*>             SwitchContainers;                                        // 0x0070(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkGroupValue*                                       DefaultGroupValue;                                       // 0x0080(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAudioEventData
	 * Size -> 0x01C8 (FullSize[0x0250] - InheritedSize[0x0088])
	 */
	class UAkAudioEventData : public UAkAssetDataSwitchContainer
	{
	public:
		float                                                      MaxAttenuationRadius;                                    // 0x0088(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsInfinite;                                              // 0x008C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G85T[0x3];                                   // 0x008D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinimumDuration;                                         // 0x0090(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumDuration;                                         // 0x0094(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class UAkAssetDataSwitchContainer*>    LocalizedMedia;                                          // 0x0098(0x0050) Edit, EditConst, NativeAccessSpecifierPublic
		unsigned char                                              PostedEvents[0x50];                                      // 0x00E8(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              UserDefinedSends[0x50];                                  // 0x0138(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              PostedTriggers[0x50];                                    // 0x0188(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              GroupValues[0x50];                                       // 0x01D8(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              UnknownData_EFAO[0x28];                                  // 0x0228(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAudioEvent
	 * Size -> 0x0090 (FullSize[0x00E0] - InheritedSize[0x0050])
	 */
	class UAkAudioEvent : public UAkAssetBase
	{
	public:
		unsigned char                                              LocalizedPlatformAssetDataMap[0x50];                     // 0x0050(0x0050) UNKNOWN PROPERTY: MapProperty
		class UAkAudioBank*                                        RequiredBank;                                            // 0x00A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_17CU[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAssetPlatformData*                                CurrentLocalizedPlatformData;                            // 0x00B0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxAttenuationRadius;                                    // 0x00B8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       IsInfinite;                                              // 0x00BC(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7TRM[0x3];                                   // 0x00BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinimumDuration;                                         // 0x00C0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaximumDuration;                                         // 0x00C4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0UJY[0x18];                                  // 0x00C8(0x0018) MISSED OFFSET (PADDING)

	public:
		float GetMinimumDuration();
		float GetMaximumDuration();
		float GetMaxAttenuationRadius();
		bool GetIsInfinite();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkGameObject
	 * Size -> 0x0028 (FullSize[0x0340] - InheritedSize[0x0318])
	 */
	class UAkGameObject : public USceneComponent
	{
	public:
		class UAkAudioEvent*                                       AkAudioEvent;                                            // 0x0318(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EventName;                                               // 0x0320(0x0010) Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P3VG[0x10];                                  // 0x0330(0x0010) MISSED OFFSET (PADDING)

	public:
		void Stop();
		void SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, const class FString& RTPC);
		void PostAssociatedAkEventAsync(class UObject* WorldContextObject, int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo, int32_t* PlayingID);
		int32_t PostAssociatedAkEvent(int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources);
		void PostAkEventAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, int32_t* PlayingID, int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo);
		int32_t PostAkEvent(class UAkAudioEvent* AkEvent, int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, const class FString& in_EventName);
		void GetRTPCValue(class UAkRtpc* RTPCValue, ERTPCValueType InputValueType, float* Value, ERTPCValueType* OutputValueType, const class FString& RTPC, int32_t PlayingID);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkComponent
	 * Size -> 0x01E0 (FullSize[0x0520] - InheritedSize[0x0340])
	 */
	class UAkComponent : public UAkGameObject
	{
	public:
		ECollisionChannel                                          OcclusionCollisionChannel;                               // 0x0340(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AUK3[0x3];                                   // 0x0341(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       EnableSpotReflectors : 1;                                // 0x0344(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZEVD[0x3];                                   // 0x0345(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OuterRadius;                                             // 0x0348(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InnerRadius;                                             // 0x034C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAuxBus*                                           EarlyReflectionAuxBus;                                   // 0x0350(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              EarlyReflectionAuxBusName;                               // 0x0358(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    EarlyReflectionOrder;                                    // 0x0368(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      EarlyReflectionBusSendGain;                              // 0x036C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      EarlyReflectionMaxPathLength;                            // 0x0370(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      roomReverbAuxBusGain;                                    // 0x0374(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    diffractionMaxEdges;                                     // 0x0378(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    diffractionMaxPaths;                                     // 0x037C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      diffractionMaxPathLength;                                // 0x0380(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       DrawFirstOrderReflections : 1;                           // 0x0384(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DrawSecondOrderReflections : 1;                          // 0x0384(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DrawHigherOrderReflections : 1;                          // 0x0384(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DrawDiffraction : 1;                                     // 0x0384(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DNZ1[0x3];                                   // 0x0385(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       StopWhenOwnerDestroyed;                                  // 0x0388(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MFC5[0x3];                                   // 0x0389(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AttenuationScalingFactor;                                // 0x038C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OcclusionRefreshInterval;                                // 0x0390(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseReverbVolumes;                                       // 0x0394(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P4JK[0x16B];                                 // 0x0395(0x016B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsInDoor;                                               // 0x0500(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AutoUpdatePosition;                                      // 0x0501(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableOccObsRTPC;                                        // 0x0502(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AutoPostEvent;                                           // 0x0503(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceToListener;                                      // 0x0504(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsListeningToSelf;                                       // 0x0508(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZQ0K[0x17];                                  // 0x0509(0x0017) MISSED OFFSET (PADDING)

	public:
		void UseReverbVolumes(bool inUseReverbVolumes);
		void UseEarlyReflections(class UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const class FString& AuxBusName);
		void SetSwitch(class UAkSwitchValue* SwitchValue, const class FString& SwitchGroup, const class FString& SwitchState);
		void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed);
		void SetOutputBusVolume(float BusVolume);
		void SetListeners(TArray<class UAkComponent*> Listeners);
		void SetGameObjectRadius(float in_outerRadius, float in_innerRadius);
		void SetEarlyReflectionsVolume(float SendVolume);
		void SetEarlyReflectionsAuxBus(const class FString& AuxBusName);
		void SetAttenuationScalingFactor(float Value);
		void PostTrigger(class UAkTrigger* TriggerValue, const class FString& Trigger);
		void PostAssociatedAkEventAndWaitForEndAsync(int32_t* PlayingID, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo);
		int32_t PostAssociatedAkEventAndWaitForEnd(TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo);
		int32_t PostAkEventByName(const class FString& in_EventName);
		void PostAkEventAndWaitForEndAsync(class UAkAudioEvent* AkEvent, int32_t* PlayingID, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo);
		int32_t PostAkEventAndWaitForEnd(class UAkAudioEvent* AkEvent, const class FString& in_EventName, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo);
		class UAkRoomComponent* GetCurrentRoom();
		float GetAttenuationRadius();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAudioInputComponent
	 * Size -> 0x0030 (FullSize[0x0550] - InheritedSize[0x0520])
	 */
	class UAkAudioInputComponent : public UAkComponent
	{
	public:
		unsigned char                                              UnknownData_BCPP[0x30];                                  // 0x0520(0x0030) MISSED OFFSET (PADDING)

	public:
		int32_t PostAssociatedAudioInputEvent();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAuxBus
	 * Size -> 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
	 */
	class UAkAuxBus : public UAkAssetBase
	{
	public:
		class UAkAudioBank*                                        RequiredBank;                                            // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkCheckBox
	 * Size -> 0x0CE0 (FullSize[0x0E30] - InheritedSize[0x0150])
	 */
	class UAkCheckBox : public UContentWidget
	{
	public:
		unsigned char                                              UnknownData_2S8J[0x348];                                 // 0x0150(0x0348) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ECheckBoxState                                             CheckedState;                                            // 0x0498(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G17H[0x3];                                   // 0x0499(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      CheckedStateDelegate;                                    // 0x049C(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZHW7[0x4];                                   // 0x04AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCheckBoxStyle                                      WidgetStyle;                                             // 0x04B0(0x08A0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0D50(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsFocusable;                                             // 0x0D51(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BR33[0x6];                                   // 0x0D52(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkBoolPropertyToControl                            ThePropertyToControl;                                    // 0x0D58(0x0010) Edit, NativeAccessSpecifierPublic
		struct FAkWwiseItemToControl                               ItemToControl;                                           // 0x0D68(0x0040) Edit, Config, EditConst, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             AkOnCheckStateChanged;                                   // 0x0DA8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnItemDropped;                                           // 0x0DB8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPropertyDropped;                                       // 0x0DC8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ROTX[0x58];                                  // 0x0DD8(0x0058) MISSED OFFSET (PADDING)

	public:
		void SetIsChecked(bool InIsChecked);
		void SetCheckedState(ECheckBoxState InCheckedState);
		void SetAkItemId(const struct FGuid& ItemID);
		void SetAkBoolProperty(const class FString& ItemProperty);
		bool IsPressed();
		bool IsChecked();
		ECheckBoxState GetCheckedState();
		class FString GetAkProperty();
		struct FGuid GetAkItemId();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.DrawPortalComponent
	 * Size -> 0x0000 (FullSize[0x0540] - InheritedSize[0x0540])
	 */
	class UDrawPortalComponent : public UPrimitiveComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.DrawRoomComponent
	 * Size -> 0x0000 (FullSize[0x0540] - InheritedSize[0x0540])
	 */
	class UDrawRoomComponent : public UPrimitiveComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkFolder
	 * Size -> 0x0078 (FullSize[0x00B8] - InheritedSize[0x0040])
	 */
	class UAkFolder : public UAkAudioType
	{
	public:
		class FString                                              UnrealFolderPath;                                        // 0x0040(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              WwiseFolderPath;                                         // 0x0050(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UCR2[0x58];                                  // 0x0060(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkGameplayStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAkGameplayStatics : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_WakeupFromSuspend();
		void STATIC_UseReverbVolumes(bool inUseReverbVolumes, class AActor* Actor);
		void STATIC_UseEarlyReflections(class AActor* Actor, class UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const class FString& AuxBusName);
		void STATIC_UpdatePostedEventMultiPositions(class UAkComponent* AkComponent, TArray<struct FTransform> Positions);
		void STATIC_UpdateDopplerEffectDatas(class AActor* SoundingObj, const struct FVector& SoundingObjPos, const struct FVector& ListeningObjPos);
		void STATIC_UnloadBankByNameAsync(const class FString& BankName, const class FScriptDelegate& BankUnloadedCallback);
		void STATIC_UnloadBankByName(const class FString& BankName);
		void STATIC_UnloadBankAsync(class UAkAudioBank* Bank, const class FScriptDelegate& BankUnloadedCallback);
		void STATIC_UnloadBank(class UAkAudioBank* Bank, const class FString& BankName, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject);
		void STATIC_Suspend(bool in_bRenderAnyway);
		int32_t STATIC_StopSoundOnComponentbyname(const class FString& SoundName, class UActorComponent* Component);
		int32_t STATIC_StopSoundOnComponent(class UAkAudioEvent* AkEvent, class UActorComponent* Component);
		int32_t STATIC_StopSoundbyname(const class FString& SoundName, class AActor* Actor);
		int32_t STATIC_StopSound2Dbyname(const class FString& SoundName);
		int32_t STATIC_StopSound2D(class UAkAudioEvent* AkEvent);
		int32_t STATIC_StopSound(class UAkAudioEvent* AkEvent, class AActor* Actor);
		void STATIC_StopProfilerCapture();
		void STATIC_StopOutputCapture();
		void STATIC_StopAllAmbientSounds(class UObject* WorldContextObject);
		void STATIC_StopAll();
		void STATIC_StopActor(class AActor* Actor);
		void STATIC_StartProfilerCapture(const class FString& Filename);
		void STATIC_StartOutputCapture(const class FString& Filename);
		void STATIC_StartAllAmbientSounds(class UObject* WorldContextObject);
		class UAkComponent* STATIC_SpawnAkComponentAtLocation(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, bool AutoPost, const class FString& EventName, bool AutoDestroy);
		void STATIC_SetSwitchToListenerbyname(const class FString& SwitchGroup, const class FString& SwitchState);
		void STATIC_SetSwitchToListener(class UAkSwitchValue* SwitchValue);
		void STATIC_SetSwitchToComponentbyname(class UActorComponent* Component, const class FString& SwitchGroup, const class FString& SwitchState);
		void STATIC_SetSwitchToComponent(class UAkSwitchValue* SwitchValue, class UActorComponent* Component);
		void STATIC_SetSwitchbyname(class AActor* Actor, const class FString& SwitchGroup, const class FString& SwitchState);
		void STATIC_SetSwitch(class UAkSwitchValue* SwitchValue, class AActor* Actor, const class FName& SwitchGroup, const class FName& SwitchState);
		void STATIC_SetState(class UAkStateValue* StateValue, const class FName& StateGroup, const class FName& State);
		void STATIC_SetSpeakerAngles(TArray<float> SpeakerAngles, float HeightAngle, const class FString& DeviceShareset);
		void STATIC_SetRTPCValueToListenerbyname(const class FString& RTPC, float Value, int32_t InterpolationTimeMs);
		void STATIC_SetRTPCValueToListener(class UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs);
		void STATIC_SetRTPCValueToComponentbyname(const class FString& RTPC, float Value, int32_t InterpolationTimeMs, class UActorComponent* Component);
		void STATIC_SetRTPCValueToComponent(class UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, class UActorComponent* Component);
		void STATIC_SetRTPCValuebyname(const class FString& RTPC, float Value, int32_t InterpolationTimeMs, class AActor* Actor);
		void STATIC_SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, class AActor* Actor, const class FName& RTPC);
		void STATIC_SetReflectionsOrder(int32_t Order, bool RefreshPaths);
		void STATIC_SetPortalToPortalObstruction(class UAkPortalComponent* PortalComponent0, class UAkPortalComponent* PortalComponent1, float ObstructionValue);
		void STATIC_SetPortalObstructionAndOcclusion(class UAkPortalComponent* PortalComponent, float ObstructionValue, float OcclusionValue);
		void STATIC_SetPanningRule(EPanningRule PanRule);
		void STATIC_SetOutputBusVolume(float BusVolume, class AActor* Actor);
		void STATIC_SetOcclusionScalingFactor(float ScalingFactor);
		void STATIC_SetOcclusionRefreshInterval(float RefreshInterval, class AActor* Actor);
		void STATIC_SetMultiplePositions(class UAkComponent* GameObjectAkComponent, TArray<struct FTransform> Positions, EAkMultiPositionType MultiPositionType);
		void STATIC_SetMultipleChannelMaskEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<struct FAkChannelMask> ChannelMasks, TArray<struct FTransform> Positions, EAkMultiPositionType MultiPositionType);
		void STATIC_SetMultipleChannelEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<EAkChannelConfiguration> ChannelMasks, TArray<struct FTransform> Positions, EAkMultiPositionType MultiPositionType);
		void STATIC_SetGameObjectToPortalObstruction(class UAkComponent* GameObjectAkComponent, class UAkPortalComponent* PortalComponent, float ObstructionValue);
		void STATIC_SetCurrentAudioCultureAsync(const class FString& AudioCulture, const class FScriptDelegate& Completed);
		void STATIC_SetCurrentAudioCulture(const class FString& AudioCulture, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject);
		void STATIC_SetBusConfig(const class FString& BusName, EAkChannelConfiguration ChannelConfiguration);
		void STATIC_ReplaceMainOutput(const struct FAkOutputSettings& MainOutputSettings);
		void STATIC_PostTrigger(class UAkTrigger* TriggerValue, class AActor* Actor, const class FName& Trigger);
		void STATIC_PostEventByName(const class FString& EventName, class AActor* Actor, bool bStopWhenAttachedToDestroyed);
		int32_t STATIC_PostEventAttached(class UAkAudioEvent* AkEvent, class AActor* Actor, const class FName& AttachPointName, bool bStopWhenAttachedToDestroyed, const class FString& EventName);
		void STATIC_PostEventAtLocationByName(const class FString& EventName, const struct FVector& Location, const struct FRotator& Orientation, class UObject* WorldContextObject);
		int32_t STATIC_PostEventAtLocation(class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, const class FString& EventName, class UObject* WorldContextObject);
		int32_t STATIC_PostEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, bool bStopWhenAttachedToDestroyed, const class FString& EventName);
		void STATIC_PostAndWaitForEndOfEventAsync(class UAkAudioEvent* AkEvent, class AActor* Actor, int32_t* PlayingID, bool bStopWhenAttachedToDestroyed, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo);
		int32_t STATIC_PostAndWaitForEndOfEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, TArray<struct FAkExternalSourceInfo> ExternalSources, const class FString& EventName, const struct FLatentActionInfo& LatentInfo);
		int32_t STATIC_PlaySoundToComponentbyname(const class FString& SoundName, class UActorComponent* Component, bool bStopWhenAttachedToDestroyed);
		int32_t STATIC_PlaySoundToComponent(class UAkAudioEvent* AkEvent, class UActorComponent* Component, bool bStopWhenAttachedToDestroyed);
		int32_t STATIC_PlaySoundbyname(const class FString& SoundName, class AActor* Actor, bool bStopWhenAttachedToDestroyed);
		int32_t STATIC_PlaySoundAtLocationbyname(const class FString& SoundName, const struct FVector& Location, const struct FRotator& Orientation, class UObject* WorldContextObject);
		int32_t STATIC_PlaySoundAtLocation(class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, class UObject* WorldContextObject);
		int32_t STATIC_PlaySound2Dbyname(const class FString& SoundName, bool bStopWhenAttachedToDestroyed);
		int32_t STATIC_PlaySound2D(class UAkAudioEvent* AkEvent, bool bStopWhenAttachedToDestroyed);
		int32_t STATIC_PlaySound(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed);
		void STATIC_LoadInitBank();
		void STATIC_LoadBanks(TArray<class UAkAudioBank*> SoundBanks, bool SynchronizeSoundBanks);
		void STATIC_LoadBankByNameAsync(const class FString& BankName, const class FScriptDelegate& BankLoadedCallback);
		void STATIC_LoadBankByName(const class FString& BankName);
		void STATIC_LoadBankAsync(class UAkAudioBank* Bank, const class FScriptDelegate& BankLoadedCallback);
		void STATIC_LoadBank(class UAkAudioBank* Bank, const class FString& BankName, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject);
		bool STATIC_IsGame(class UObject* WorldContextObject);
		bool STATIC_IsEditor();
		void STATIC_GetSpeakerAngles(TArray<float>* SpeakerAngles, float* HeightAngle, const class FString& DeviceShareset);
		void STATIC_GetRTPCValue(class UAkRtpc* RTPCValue, int32_t PlayingID, ERTPCValueType InputValueType, float* Value, ERTPCValueType* OutputValueType, class AActor* Actor, const class FName& RTPC);
		float STATIC_GetOcclusionScalingFactor();
		float STATIC_GetDopplerEffectDatas(class AActor* SoundingObj, const struct FVector& SoundingObjPos, const struct FVector& ListeningObjPos, float AddDopplerIntensity, float MinusDopplerIntensity, float DeltaTime);
		class FString STATIC_GetCurrentAudioCulture();
		TArray<class FString> STATIC_GetAvailableAudioCultures();
		class UObject* STATIC_GetAkMediaAssetUserData(class UAkMediaAsset* Instance, class UClass* Type);
		class UAkComponent* STATIC_GetAkComponent(class USceneComponent* AttachToComponent, bool* ComponentCreated, const class FName& AttachPointName, const struct FVector& Location, EAttachLocation LocationType);
		class UObject* STATIC_GetAkAudioTypeUserData(class UAkAudioType* Instance, class UClass* Type);
		void STATIC_ExecuteActionOnPlayingID(EAkActionOnEventType ActionType, int32_t PlayingID, int32_t TransitionDuration, EAkCurveInterpolation FadeCurve);
		void STATIC_ExecuteActionOnEvent(class UAkAudioEvent* AkEvent, EAkActionOnEventType ActionType, class AActor* Actor, int32_t TransitionDuration, EAkCurveInterpolation FadeCurve, int32_t PlayingID);
		void STATIC_ClearDopplerEffectDatas(class AActor* SoundingObj);
		void STATIC_ClearBanks();
		void STATIC_CancelEventCallback(const class FScriptDelegate& PostEventCallback);
		void STATIC_ApplyDopplerEffectDatas(class AActor* SoundingObj, const struct FVector& ListeningObjPos, float AddDopplerIntensity, float MinusDopplerIntensity, float DeltaTime);
		void STATIC_AddOutputCaptureMarker(const class FString& MarkerText);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkCallbackInfo
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UAkCallbackInfo : public UObject
	{
	public:
		class UAkComponent*                                        AkComponent;                                             // 0x0028(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkEventCallbackInfo
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UAkEventCallbackInfo : public UAkCallbackInfo
	{
	public:
		int32_t                                                    PlayingID;                                               // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EventId;                                                 // 0x0034(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkMIDIEventCallbackInfo
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UAkMIDIEventCallbackInfo : public UAkEventCallbackInfo
	{
	public:
		unsigned char                                              UnknownData_1I0P[0x10];                                  // 0x0038(0x0010) MISSED OFFSET (PADDING)

	public:
		EAkMidiEventType GetType();
		bool GetProgramChange(struct FAkMidiProgramChange* AsProgramChange);
		bool GetPitchBend(struct FAkMidiPitchBend* AsPitchBend);
		bool GetNoteOn(struct FAkMidiNoteOnOff* AsNoteOn);
		bool GetNoteOff(struct FAkMidiNoteOnOff* AsNoteOff);
		bool GetNoteAftertouch(struct FAkMidiNoteAftertouch* AsNoteAftertouch);
		bool GetGeneric(struct FAkMidiGeneric* AsGeneric);
		bool GetChannelAftertouch(struct FAkMidiChannelAftertouch* AsChannelAftertouch);
		unsigned char GetChannel();
		bool GetCc(struct FAkMidiCc* AsCc);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkMarkerCallbackInfo
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UAkMarkerCallbackInfo : public UAkEventCallbackInfo
	{
	public:
		int32_t                                                    Identifier;                                              // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Position;                                                // 0x003C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Label;                                                   // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkDurationCallbackInfo
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UAkDurationCallbackInfo : public UAkEventCallbackInfo
	{
	public:
		float                                                      Duration;                                                // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EstimatedDuration;                                       // 0x003C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AudioNodeID;                                             // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MediaID;                                                 // 0x0044(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStreaming;                                              // 0x0048(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YMXC[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkMusicSyncCallbackInfo
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UAkMusicSyncCallbackInfo : public UAkCallbackInfo
	{
	public:
		int32_t                                                    PlayingID;                                               // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAkSegmentInfo                                      SegmentInfo;                                             // 0x0034(0x0024) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		EAkCallbackType                                            MusicSyncType;                                           // 0x0058(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YUP5[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              UserCueName;                                             // 0x0060(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkGeometryComponent
	 * Size -> 0x0190 (FullSize[0x04C0] - InheritedSize[0x0330])
	 */
	class UAkGeometryComponent : public UAkAcousticTextureSetComponent
	{
	public:
		EAkMeshType                                                MeshType;                                                // 0x0330(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XAKC[0x3];                                   // 0x0331(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LOD;                                                     // 0x0334(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeldingThreshold;                                        // 0x0338(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NMP3[0x4];                                   // 0x033C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UMaterialInterface*, struct FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride;                               // 0x0340(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FAkGeometrySurfaceOverride                          CollisionMeshSurfaceOverride;                            // 0x0390(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnableDiffraction : 1;                                  // 0x03A8(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableDiffractionOnBoundaryEdges : 1;                   // 0x03A8(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TDSY[0x7];                                   // 0x03A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              AssociatedRoom;                                          // 0x03B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O7K1[0x10];                                  // 0x03B8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkGeometryData                                     GeometryData;                                            // 0x03C8(0x0050) NativeAccessSpecifierPrivate
		TMap<int32_t, float>                                       SurfaceAreas;                                            // 0x0418(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LVBH[0x58];                                  // 0x0468(0x0058) MISSED OFFSET (PADDING)

	public:
		void UpdateGeometry();
		void SendGeometry();
		void RemoveGeometry();
		void ConvertMesh();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkGroupValue
	 * Size -> 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
	 */
	class UAkGroupValue : public UAkAudioType
	{
	public:
		unsigned char                                              MediaDependencies[0x10];                                 // 0x0040(0x0010) UNKNOWN PROPERTY: ArrayProperty
		uint32_t                                                   GroupShortID;                                            // 0x0050(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EYQ9[0x14];                                  // 0x0054(0x0014) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkHololensInitializationSettings
	 * Size -> 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
	 */
	class UAkHololensInitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_VP61[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettingsWithSampleRate       CommonSettings;                                          // 0x0030(0x0068) Edit, Config, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0098(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkHololensAdvancedInitializationSettings           AdvancedSettings;                                        // 0x00C0(0x0034) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L0CM[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (PADDING)

	public:
		void MigrateMultiCoreRendering(bool NewValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkHololensPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkHololensPlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkInitBankAssetData
	 * Size -> 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
	 */
	class UAkInitBankAssetData : public UAkAssetDataWithMedia
	{
	public:
		TArray<struct FAkPluginInfo>                               PluginInfos;                                             // 0x0070(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkInitBank
	 * Size -> 0x0020 (FullSize[0x0070] - InheritedSize[0x0050])
	 */
	class UAkInitBank : public UAkAssetBase
	{
	public:
		TArray<class FString>                                      AvailableAudioCultures;                                  // 0x0050(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DefaultLanguage;                                         // 0x0060(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkIOSInitializationSettings
	 * Size -> 0x00D8 (FullSize[0x0100] - InheritedSize[0x0028])
	 */
	class UAkIOSInitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_D3MO[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettingsWithSampleRate       CommonSettings;                                          // 0x0030(0x0068) Edit, Config, NativeAccessSpecifierPublic
		struct FAkAudioSession                                     AudioSession;                                            // 0x0098(0x000C) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E37Y[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x00A8(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkAdvancedInitializationSettings                   AdvancedSettings;                                        // 0x00D0(0x002C) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_US6S[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkIOSPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkIOSPlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkItemBoolPropertiesConv
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAkItemBoolPropertiesConv : public UBlueprintFunctionLibrary
	{
	public:
		class FText STATIC_Conv_FAkBoolPropertyToControlToText(const struct FAkBoolPropertyToControl& INAkBoolPropertyToControl);
		class FString STATIC_Conv_FAkBoolPropertyToControlToString(const struct FAkBoolPropertyToControl& INAkBoolPropertyToControl);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkItemBoolProperties
	 * Size -> 0x0040 (FullSize[0x0178] - InheritedSize[0x0138])
	 */
	class UAkItemBoolProperties : public UWidget
	{
	public:
		class FScriptMulticastDelegate                             OnSelectionChanged;                                      // 0x0138(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPropertyDragged;                                       // 0x0148(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E139[0x20];                                  // 0x0158(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetSearchText(const class FString& newText);
		class FString GetSelectedProperty();
		class FString GetSearchText();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkItemPropertiesConv
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAkItemPropertiesConv : public UBlueprintFunctionLibrary
	{
	public:
		class FText STATIC_Conv_FAkPropertyToControlToText(const struct FAkPropertyToControl& INAkPropertyToControl);
		class FString STATIC_Conv_FAkPropertyToControlToString(const struct FAkPropertyToControl& INAkPropertyToControl);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkItemProperties
	 * Size -> 0x0040 (FullSize[0x0178] - InheritedSize[0x0138])
	 */
	class UAkItemProperties : public UWidget
	{
	public:
		class FScriptMulticastDelegate                             OnSelectionChanged;                                      // 0x0138(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPropertyDragged;                                       // 0x0148(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3GPJ[0x20];                                  // 0x0158(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetSearchText(const class FString& newText);
		class FString GetSelectedProperty();
		class FString GetSearchText();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkLateReverbComponent
	 * Size -> 0x0088 (FullSize[0x03A0] - InheritedSize[0x0318])
	 */
	class UAkLateReverbComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_ZCOD[0x4];                                   // 0x0318(0x0004) Fix Super Size
		float                                                      SendLevel;                                               // 0x031C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeRate;                                                // 0x0320(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Priority;                                                // 0x0324(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AutoAssignAuxBus;                                        // 0x0328(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZVYY[0x7];                                   // 0x0329(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAuxBus*                                           AuxBus;                                                  // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AuxBusName;                                              // 0x0338(0x0010) Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U1UT[0x8];                                   // 0x0348(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAuxBus*                                           AuxBusManual;                                            // 0x0350(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9CZ1[0x48];                                  // 0x0358(0x0048) MISSED OFFSET (PADDING)

	public:
		void AssociateAkTextureSetComponent(class UAkAcousticTextureSetComponent* textureSetComponent);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkLinuxInitializationSettings
	 * Size -> 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
	 */
	class UAkLinuxInitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_JTG1[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettingsWithSampleRate       CommonSettings;                                          // 0x0030(0x0068) Edit, Config, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0098(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                        // 0x00C0(0x0030) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic

	public:
		void MigrateMultiCoreRendering(bool NewValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkLinuxPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkLinuxPlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkMacInitializationSettings
	 * Size -> 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
	 */
	class UAkMacInitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_84H6[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettingsWithSampleRate       CommonSettings;                                          // 0x0030(0x0068) Edit, Config, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0098(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                        // 0x00C0(0x0030) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic

	public:
		void MigrateMultiCoreRendering(bool NewValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkMacPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkMacPlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkMediaAssetData
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UAkMediaAssetData : public UObject
	{
	public:
		bool                                                       IsStreamed;                                              // 0x0028(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseDeviceMemory;                                         // 0x0029(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CJ4T[0x36];                                  // 0x002A(0x0036) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkMediaAsset
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UAkMediaAsset : public UObject
	{
	public:
		uint32_t                                                   ID;                                                      // 0x0028(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AutoLoad;                                                // 0x002C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5S2A[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UObject*>                                     UserData;                                                // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkMediaAssetData*                                   CurrentMediaAssetData;                                   // 0x0040(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_S1K7[0x10];                                  // 0x0048(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkLocalizedMediaAsset
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class UAkLocalizedMediaAsset : public UAkMediaAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkExternalMediaAsset
	 * Size -> 0x0060 (FullSize[0x00B8] - InheritedSize[0x0058])
	 */
	class UAkExternalMediaAsset : public UAkMediaAsset
	{
	public:
		unsigned char                                              UnknownData_A0X4[0x60];                                  // 0x0058(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkPlatformInitialisationSettingsBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAkPlatformInitialisationSettingsBase : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkPS4InitializationSettings
	 * Size -> 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
	 */
	class UAkPS4InitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_QCGW[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettings                     CommonSettings;                                          // 0x0030(0x0060) Edit, Config, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0090(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkPS4AdvancedInitializationSettings                AdvancedSettings;                                        // 0x00B8(0x0038) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic

	public:
		void MigrateMultiCoreRendering(bool NewValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkPS4PlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkPS4PlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkReverbVolume
	 * Size -> 0x0038 (FullSize[0x0298] - InheritedSize[0x0260])
	 */
	class AAkReverbVolume : public AVolume
	{
	public:
		bool                                                       bEnabled : 1;                                            // 0x0260(0x0001) BIT_FIELD Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CFX7[0x7];                                   // 0x0261(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAuxBus*                                           AuxBus;                                                  // 0x0268(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AuxBusName;                                              // 0x0270(0x0010) ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SendLevel;                                               // 0x0280(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeRate;                                                // 0x0284(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Priority;                                                // 0x0288(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KXQ8[0x4];                                   // 0x028C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkLateReverbComponent*                              LateReverbComponent;                                     // 0x0290(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkRoomComponent
	 * Size -> 0x0030 (FullSize[0x0370] - InheritedSize[0x0340])
	 */
	class UAkRoomComponent : public UAkGameObject
	{
	public:
		float                                                      Priority;                                                // 0x0340(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WallOcclusion;                                           // 0x0344(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AuxSendLevel;                                            // 0x0348(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AutoPost;                                                // 0x034C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, SimpleDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RMM6[0xB];                                   // 0x034D(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAcousticTextureSetComponent*                      GeometryComponent;                                       // 0x0358(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LGRU[0x10];                                  // 0x0360(0x0010) MISSED OFFSET (PADDING)

	public:
		class UPrimitiveComponent* GetPrimitiveParent();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkRtpc
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UAkRtpc : public UAkAudioType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkSettings
	 * Size -> 0x0290 (FullSize[0x02B8] - InheritedSize[0x0028])
	 */
	class UAkSettings : public UObject
	{
	public:
		unsigned char                                              MaxSimultaneousReverbVolumes;                            // 0x0028(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E739[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFilePath                                           WwiseProjectPath;                                        // 0x0030(0x0010) Edit, Config, NativeAccessSpecifierPublic
		struct FDirectoryPath                                      WwiseSoundDataFolder;                                    // 0x0040(0x0010) Edit, Config, NativeAccessSpecifierPublic
		bool                                                       bAutoConnectToWAAPI;                                     // 0x0050(0x0001) ZeroConstructor, Config, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          DefaultOcclusionCollisionChannel;                        // 0x0051(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          DefaultFitToGeometryCollisionChannel;                    // 0x0052(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GF9F[0x5];                                   // 0x0053(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              AkGeometryMap[0x50];                                     // 0x0058(0x0050) UNKNOWN PROPERTY: MapProperty
		float                                                      GlobalDecayAbsorption;                                   // 0x00A8(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5AL2[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              DefaultReverbAuxBus[0x28];                               // 0x00B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              EnvironmentDecayAuxBusMap[0x50];                         // 0x00D8(0x0050) UNKNOWN PROPERTY: MapProperty
		class FString                                              HFDampingName;                                           // 0x0128(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DecayEstimateName;                                       // 0x0138(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TimeToFirstReflectionName;                               // 0x0148(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              HFDampingRTPC[0x28];                                     // 0x0158(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              DecayEstimateRTPC[0x28];                                 // 0x0180(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              TimeToFirstReflectionRTPC[0x28];                         // 0x01A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		TMap<struct FGuid, struct FAkAcousticTextureParams>        AcousticTextureParamsMap;                                // 0x01D0(0x0050) Config, NativeAccessSpecifierPublic
		bool                                                       SplitSwitchContainerMedia;                               // 0x0220(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SplitMediaPerFolder;                                     // 0x0221(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseEventBasedPackaging;                                  // 0x0222(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableAutomaticAssetSynchronization;                     // 0x0223(0x0001) ZeroConstructor, Config, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3GXL[0x4];                                   // 0x0224(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CommandletCommitMessage;                                 // 0x0228(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         UnrealCultureToWwiseCulture;                             // 0x0238(0x0050) Edit, Config, NativeAccessSpecifierPublic
		bool                                                       AskedToUseNewAssetManagement;                            // 0x0288(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableMultiCoreRendering;                               // 0x0289(0x0001) ZeroConstructor, Config, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MigratedEnableMultiCoreRendering;                        // 0x028A(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       FixupRedirectorsDuringMigration;                         // 0x028B(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H7A9[0x4];                                   // 0x028C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDirectoryPath                                      WwiseWindowsInstallationPath;                            // 0x0290(0x0010) Config, Deprecated, NativeAccessSpecifierPublic
		struct FFilePath                                           WwiseMacInstallationPath;                                // 0x02A0(0x0010) Config, Deprecated, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X30R[0x8];                                   // 0x02B0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkSettingsPerUser
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UAkSettingsPerUser : public UObject
	{
	public:
		struct FDirectoryPath                                      WwiseWindowsInstallationPath;                            // 0x0028(0x0010) Edit, Config, NativeAccessSpecifierPublic
		struct FFilePath                                           WwiseMacInstallationPath;                                // 0x0038(0x0010) Edit, Config, NativeAccessSpecifierPublic
		bool                                                       EnableAutomaticAssetSynchronization;                     // 0x0048(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_72PJ[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              WaapiIPAddress;                                          // 0x0050(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   WaapiPort;                                               // 0x0060(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoConnectToWAAPI;                                     // 0x0064(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AutoSyncSelection;                                       // 0x0065(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SuppressWwiseProjectPathWarnings;                        // 0x0066(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SoundDataGenerationSkipLanguage;                         // 0x0067(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3R0Z[0x18];                                  // 0x0068(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkSlider
	 * Size -> 0x0648 (FullSize[0x0780] - InheritedSize[0x0138])
	 */
	class UAkSlider : public UWidget
	{
	public:
		float                                                      Value;                                                   // 0x0138(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ValueDelegate;                                           // 0x013C(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5H2C[0x4];                                   // 0x014C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSliderStyle                                        WidgetStyle;                                             // 0x0150(0x0560) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EOrientation                                               Orientation;                                             // 0x06B0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OCDM[0x3];                                   // 0x06B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        SliderBarColor;                                          // 0x06B4(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        SliderHandleColor;                                       // 0x06C4(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IndentHandle;                                            // 0x06D4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Locked;                                                  // 0x06D5(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M9OA[0x2];                                   // 0x06D6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StepSize;                                                // 0x06D8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsFocusable;                                             // 0x06DC(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P43Z[0x3];                                   // 0x06DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkPropertyToControl                                ThePropertyToControl;                                    // 0x06E0(0x0010) Edit, EditConst, NativeAccessSpecifierPublic
		struct FAkWwiseItemToControl                               ItemToControl;                                           // 0x06F0(0x0040) Edit, Config, EditConst, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnValueChanged;                                          // 0x0730(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnItemDropped;                                           // 0x0740(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPropertyDropped;                                       // 0x0750(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F0MY[0x20];                                  // 0x0760(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetValue(float InValue);
		void SetStepSize(float InValue);
		void SetSliderHandleColor(const struct FLinearColor& InValue);
		void SetSliderBarColor(const struct FLinearColor& InValue);
		void SetLocked(bool InValue);
		void SetIndentHandle(bool InValue);
		void SetAkSliderItemProperty(const class FString& ItemProperty);
		void SetAkSliderItemId(const struct FGuid& ItemID);
		float GetValue();
		class FString GetAkSliderItemProperty();
		struct FGuid GetAkSliderItemId();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkSpatialAudioVolume
	 * Size -> 0x0018 (FullSize[0x0278] - InheritedSize[0x0260])
	 */
	class AAkSpatialAudioVolume : public AVolume
	{
	public:
		class UAkSurfaceReflectorSetComponent*                     SurfaceReflectorSet;                                     // 0x0260(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkLateReverbComponent*                              LateReverb;                                              // 0x0268(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkRoomComponent*                                    Room;                                                    // 0x0270(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkSpotReflector
	 * Size -> 0x0028 (FullSize[0x0250] - InheritedSize[0x0228])
	 */
	class AAkSpotReflector : public AActor
	{
	public:
		class UAkAuxBus*                                           EarlyReflectionAuxBus;                                   // 0x0228(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EarlyReflectionAuxBusName;                               // 0x0230(0x0010) Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAcousticTexture*                                  AcousticTexture;                                         // 0x0240(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceScalingFactor;                                   // 0x0248(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Level;                                                   // 0x024C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkStateValue
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UAkStateValue : public UAkGroupValue
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkSurfaceReflectorSetComponent
	 * Size -> 0x0030 (FullSize[0x0360] - InheritedSize[0x0330])
	 */
	class UAkSurfaceReflectorSetComponent : public UAkAcousticTextureSetComponent
	{
	public:
		bool                                                       bEnableSurfaceReflectors : 1;                            // 0x0330(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K3N7[0x7];                                   // 0x0331(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAkPoly>                                     AcousticPolys;                                           // 0x0338(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableDiffraction : 1;                                  // 0x0348(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableDiffractionOnBoundaryEdges : 1;                   // 0x0348(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AOII[0x7];                                   // 0x0349(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              AssociatedRoom;                                          // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q9NQ[0x8];                                   // 0x0358(0x0008) MISSED OFFSET (PADDING)

	public:
		void UpdateSurfaceReflectorSet();
		void SendSurfaceReflectorSet();
		void RemoveSurfaceReflectorSet();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkSwitchInitializationSettings
	 * Size -> 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
	 */
	class UAkSwitchInitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_9HWV[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettingsWithSampleRate       CommonSettings;                                          // 0x0030(0x0068) Edit, Config, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithCommSelection           CommunicationSettings;                                   // 0x0098(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                        // 0x00C0(0x0030) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic

	public:
		void MigrateMultiCoreRendering(bool NewValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkSwitchPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkSwitchPlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkSwitchValue
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UAkSwitchValue : public UAkGroupValue
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkTrigger
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UAkTrigger : public UAkAudioType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkTVOSInitializationSettings
	 * Size -> 0x00D8 (FullSize[0x0100] - InheritedSize[0x0028])
	 */
	class UAkTVOSInitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_F6GW[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettingsWithSampleRate       CommonSettings;                                          // 0x0030(0x0068) Edit, Config, NativeAccessSpecifierPublic
		struct FAkAudioSession                                     AudioSession;                                            // 0x0098(0x000C) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_03KC[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x00A8(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkAdvancedInitializationSettings                   AdvancedSettings;                                        // 0x00D0(0x002C) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CZSX[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkTVOSPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkTVOSPlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkWaapiCalls
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAkWaapiCalls : public UBlueprintFunctionLibrary
	{
	public:
		struct FAKWaapiJsonObject STATIC_Unsubscribe(const struct FAkWaapiSubscriptionId& SubscriptionId, bool* UnsubscriptionDone);
		struct FAKWaapiJsonObject STATIC_SubscribeToWaapi(const struct FAkWaapiUri& WaapiUri, const struct FAKWaapiJsonObject& WaapiOptions, const class FScriptDelegate& Callback, struct FAkWaapiSubscriptionId* SubscriptionId, bool* SubscriptionDone);
		void STATIC_SetSubscriptionID(const struct FAkWaapiSubscriptionId& Subscription, int32_t ID);
		bool STATIC_RegisterWaapiProjectLoadedCallback(const class FScriptDelegate& Callback);
		bool STATIC_RegisterWaapiConnectionLostCallback(const class FScriptDelegate& Callback);
		int32_t STATIC_GetSubscriptionID(const struct FAkWaapiSubscriptionId& Subscription);
		class FText STATIC_Conv_FAkWaapiSubscriptionIdToText(const struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);
		class FString STATIC_Conv_FAkWaapiSubscriptionIdToString(const struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);
		struct FAKWaapiJsonObject STATIC_CallWaapi(const struct FAkWaapiUri& WaapiUri, const struct FAKWaapiJsonObject& WaapiArgs, const struct FAKWaapiJsonObject& WaapiOptions);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.SAkWaapiFieldNamesConv
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USAkWaapiFieldNamesConv : public UBlueprintFunctionLibrary
	{
	public:
		class FText STATIC_Conv_FAkWaapiFieldNamesToText(const struct FAkWaapiFieldNames& INAkWaapiFieldNames);
		class FString STATIC_Conv_FAkWaapiFieldNamesToString(const struct FAkWaapiFieldNames& INAkWaapiFieldNames);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkWaapiJsonManager
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAkWaapiJsonManager : public UBlueprintFunctionLibrary
	{
	public:
		struct FAKWaapiJsonObject STATIC_SetStringField(const struct FAkWaapiFieldNames& FieldName, const class FString& FieldValue, const struct FAKWaapiJsonObject& Target);
		struct FAKWaapiJsonObject STATIC_SetObjectField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& FieldValue, const struct FAKWaapiJsonObject& Target);
		struct FAKWaapiJsonObject STATIC_SetNumberField(const struct FAkWaapiFieldNames& FieldName, float FieldValue, const struct FAKWaapiJsonObject& Target);
		struct FAKWaapiJsonObject STATIC_SetBoolField(const struct FAkWaapiFieldNames& FieldName, bool FieldValue, const struct FAKWaapiJsonObject& Target);
		struct FAKWaapiJsonObject STATIC_SetArrayStringFields(const struct FAkWaapiFieldNames& FieldName, TArray<class FString> FieldStringValues, const struct FAKWaapiJsonObject& Target);
		struct FAKWaapiJsonObject STATIC_SetArrayObjectFields(const struct FAkWaapiFieldNames& FieldName, TArray<struct FAKWaapiJsonObject> FieldObjectValues, const struct FAKWaapiJsonObject& Target);
		class FString STATIC_GetStringField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
		struct FAKWaapiJsonObject STATIC_GetObjectField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
		float STATIC_GetNumberField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
		int32_t STATIC_GetIntegerField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
		bool STATIC_GetBoolField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
		TArray<struct FAKWaapiJsonObject> STATIC_GetArrayField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
		class FText STATIC_Conv_FAKWaapiJsonObjectToText(const struct FAKWaapiJsonObject& INAKWaapiJsonObject);
		class FString STATIC_Conv_FAKWaapiJsonObjectToString(const struct FAKWaapiJsonObject& INAKWaapiJsonObject);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkWaapiUriConv
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAkWaapiUriConv : public UBlueprintFunctionLibrary
	{
	public:
		class FText STATIC_Conv_FAkWaapiUriToText(const struct FAkWaapiUri& INAkWaapiUri);
		class FString STATIC_Conv_FAkWaapiUriToString(const struct FAkWaapiUri& INAkWaapiUri);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkWindowsInitializationSettings
	 * Size -> 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
	 */
	class UAkWindowsInitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_3XHH[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettingsWithSampleRate       CommonSettings;                                          // 0x0030(0x0068) Edit, Config, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0098(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkWindowsAdvancedInitializationSettings            AdvancedSettings;                                        // 0x00C0(0x0038) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic

	public:
		void MigrateMultiCoreRendering(bool NewValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkWin32PlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkWin32PlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkWin64PlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkWin64PlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkWindowsPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkWindowsPlatformInfo : public UAkWin64PlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkWwiseTree
	 * Size -> 0x0040 (FullSize[0x0178] - InheritedSize[0x0138])
	 */
	class UAkWwiseTree : public UWidget
	{
	public:
		class FScriptMulticastDelegate                             OnSelectionChanged;                                      // 0x0138(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnItemDragged;                                           // 0x0148(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q4J4[0x20];                                  // 0x0158(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetSearchText(const class FString& newText);
		struct FAkWwiseObjectDetails GetSelectedItem();
		class FString GetSearchText();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkWwiseTreeSelector
	 * Size -> 0x0060 (FullSize[0x0198] - InheritedSize[0x0138])
	 */
	class UAkWwiseTreeSelector : public UWidget
	{
	public:
		class FScriptMulticastDelegate                             OnSelectionChanged;                                      // 0x0138(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnItemDragged;                                           // 0x0148(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UKM2[0x40];                                  // 0x0158(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkXboxOneInitializationSettings
	 * Size -> 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
	 */
	class UAkXboxOneInitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_9K1O[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettings                     CommonSettings;                                          // 0x0030(0x0060) Edit, Config, NativeAccessSpecifierPublic
		struct FAkXboxOneApuHeapInitializationSettings             ApuHeapSettings;                                         // 0x0090(0x0008) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0098(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkXboxOneAdvancedInitializationSettings            AdvancedSettings;                                        // 0x00C0(0x0034) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X92L[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (PADDING)

	public:
		void MigrateMultiCoreRendering(bool NewValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkXboxOnePlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkXboxOnePlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AudioManager
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAudioManager : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_UnmuteWwiseAudio();
		void STATIC_SetVoiceVolume(float Volume);
		void STATIC_SetVoiceEnabled(bool Enabled);
		void STATIC_SetSwitch(const class FString& SwitchGroupName, const class FString& SwitchName, class AActor* TargetActor);
		void STATIC_SetState(const class FString& StateGroupName, const class FString& StateName);
		void STATIC_SetSoundVolume(float Volume);
		void STATIC_SetSoundEnabled(bool Enabled);
		void STATIC_SetMusicVolume(float Volume);
		void STATIC_SetMusicEnabled(bool Enabled);
		void STATIC_SetGlobalRTPC(const class FString& ParameterName, float Value, float UpdateTolerance);
		void STATIC_SetEmitterRTPC(const class FString& ParameterName, float Value, class AActor* Emitter, float UpdateTolerance);
		void STATIC_ResetRTPCValue(const class FString& ParameterName, class AActor* Emitter);
		int32_t STATIC_PlayEvent3D(class UAkAudioEvent* EventReference, class AActor* Emitter, bool StopOnDestroy, const class FString& Source);
		int32_t STATIC_PlayEvent2D(class UAkAudioEvent* EventReference);
		void STATIC_MuteWwiseAudio();
		bool STATIC_IsSwitchAt(const class FString& SwitchGroupName, const class FString& SwitchName, class AActor* TargetActor);
		bool STATIC_IsStateAt(const class FString& StateGroupName, const class FString& StateName);
		class FString STATIC_GetSwitch(const class FString& SwitchGroupName, class AActor* TargetActor);
		class FString STATIC_GetState(const class FString& StateGroupName);
		float STATIC_GetRTPCValue(const class FString& ParameterName, class AActor* Emitter);
		bool STATIC_ExecuteActionOnEvent(const class FString& EventName, class AActor* Emitter, EAkActionOnEventType ActionType, float FadeTime, int32_t PlayingID);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.BankManager
	 * Size -> 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
	 */
	class UBankManager : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_2GOF[0x70];                                  // 0x0030(0x0070) MISSED OFFSET (PADDING)

	public:
		class UBankManager* STATIC_GetInstance(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.EmitterManager
	 * Size -> 0x00D0 (FullSize[0x0100] - InheritedSize[0x0030])
	 */
	class UEmitterManager : public UWorldSubsystem
	{
	public:
		unsigned char                                              UnknownData_DOHA[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAkComponent*>                                TickableEmitters;                                        // 0x0040(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2ZDU[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkComponent*                                        SelfEmitter;                                             // 0x0058(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<class UAkComponent*, struct FCachedGameSyncData>      EmitterGameSyncDatas;                                    // 0x0060(0x0050) ContainsInstancedReference, NativeAccessSpecifierPrivate
		TMap<class AActor*, struct FEventCooldownData>             EmitterCooldownDatas;                                    // 0x00B0(0x0050) NativeAccessSpecifierPrivate

	public:
		void STATIC_SetSelfEmitter(class UAkComponent* Emitter);
		void STATIC_RemoveSelfEmitter(class UObject* WorldContextObject);
		bool STATIC_IsSelfEmitter(class UAkComponent* Emitter);
		class UAkComponent* STATIC_GetSelfEmitter(class UObject* WorldContextObject);
		class UEmitterManager* STATIC_GetInstance(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.InterpTrackAkAudioEvent
	 * Size -> 0x0018 (FullSize[0x00A8] - InheritedSize[0x0090])
	 */
	class UInterpTrackAkAudioEvent : public UInterpTrackVectorBase
	{
	public:
		TArray<struct FAkAudioEventTrackKey>                       Events;                                                  // 0x0090(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bContinueEventOnMatineeEnd : 1;                          // 0x00A0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G1B2[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.InterpTrackAkAudioRTPC
	 * Size -> 0x0018 (FullSize[0x00A8] - InheritedSize[0x0090])
	 */
	class UInterpTrackAkAudioRTPC : public UInterpTrackFloatBase
	{
	public:
		class FString                                              Param;                                                   // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPlayOnReverse : 1;                                      // 0x00A0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bContinueRTPCOnMatineeEnd : 1;                           // 0x00A0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B9AG[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.InterpTrackInstAkAudioEvent
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UInterpTrackInstAkAudioEvent : public UInterpTrackInst
	{
	public:
		float                                                      LastUpdatePosition;                                      // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L41Z[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.InterpTrackInstAkAudioRTPC
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UInterpTrackInstAkAudioRTPC : public UInterpTrackInst
	{
	public:
		float                                                      LastUpdatePosition;                                      // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_21OP[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.ListenerManager
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UListenerManager : public UWorldSubsystem
	{
	public:
		unsigned char                                              UnknownData_ALHT[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAkComponent*>                                DefaultListeners;                                        // 0x0040(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkComponent*                                        SpatialAudioListener;                                    // 0x0050(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		class UListenerManager* STATIC_GetInstance(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.MovieSceneAkAudioEventSection
	 * Size -> 0x00E8 (FullSize[0x01C8] - InheritedSize[0x00E0])
	 */
	class UMovieSceneAkAudioEventSection : public UMovieSceneSection
	{
	public:
		unsigned char                                              UnknownData_ZF4A[0x40];                                  // 0x00E0(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       Event;                                                   // 0x0120(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       RetriggerEvent;                                          // 0x0128(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UBV0[0x3];                                   // 0x0129(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ScrubTailLengthMs;                                       // 0x012C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       StopAtSectionEnd;                                        // 0x0130(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CUQA[0x7];                                   // 0x0131(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              EventName;                                               // 0x0138(0x0010) Edit, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_I41E[0x20];                                  // 0x0148(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxSourceDuration;                                       // 0x0168(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OHVY[0x4];                                   // 0x016C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MaxDurationSourceID;                                     // 0x0170(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MM1V[0x48];                                  // 0x0180(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.MovieSceneAkTrack
	 * Size -> 0x0018 (FullSize[0x0070] - InheritedSize[0x0058])
	 */
	class UMovieSceneAkTrack : public UMovieSceneTrack
	{
	public:
		TArray<class UMovieSceneSection*>                          Sections;                                                // 0x0058(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsAMasterTrack : 1;                                     // 0x0068(0x0001) BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0RPW[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.MovieSceneAkAudioEventTrack
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.MovieSceneAkAudioRTPCSection
	 * Size -> 0x0168 (FullSize[0x0248] - InheritedSize[0x00E0])
	 */
	class UMovieSceneAkAudioRTPCSection : public UMovieSceneSection
	{
	public:
		class UAkRtpc*                                             RTPC;                                                    // 0x00E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              Name;                                                    // 0x00E8(0x0010) Edit, ZeroConstructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRichCurve                                          FloatCurve;                                              // 0x00F8(0x0080) Protected, NativeAccessSpecifierProtected
		struct FMovieSceneFloatChannelSerializationHelper          FloatChannelSerializationHelper;                         // 0x0178(0x0030) Protected, NativeAccessSpecifierProtected
		struct FMovieSceneFloatChannel                             RTPCChannel;                                             // 0x01A8(0x00A0) Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.MovieSceneAkAudioRTPCTrack
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UMovieSceneAkAudioRTPCTrack : public UMovieSceneAkTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.PostEventAsync
	 * Size -> 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
	 */
	class UPostEventAsync : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DZKH[0x60];                                  // 0x0040(0x0060) MISSED OFFSET (PADDING)

	public:
		class UPostEventAsync* STATIC_PostEventAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, class AActor* Actor, int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, bool bStopWhenAttachedToDestroyed);
		void PollPostEventFuture();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.PostEventAtLocationAsync
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UPostEventAtLocationAsync : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BNPH[0x40];                                  // 0x0040(0x0040) MISSED OFFSET (PADDING)

	public:
		class UPostEventAtLocationAsync* STATIC_PostEventAtLocationAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation);
		void PollPostEventFuture();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.SpatialAudioManager
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class USpatialAudioManager : public UWorldSubsystem
	{
	public:
		class USpatialAudioManager* STATIC_GetInstance(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.WwiseDataQuery
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWwiseDataQuery : public UObject
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
