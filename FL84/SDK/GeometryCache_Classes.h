﻿#pragma once

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
	 * Class GeometryCache.GeometryCache
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UGeometryCache : public UObject
	{
	public:
		unsigned char                                              UnknownData_SDQX[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInterface*>                          Materials;                                               // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UGeometryCacheTrack*>                         Tracks;                                                  // 0x0040(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8MLE[0x10];                                  // 0x0050(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    StartFrame;                                              // 0x0060(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    EndFrame;                                                // 0x0064(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCache.GeometryCacheActor
	 * Size -> 0x0008 (FullSize[0x0230] - InheritedSize[0x0228])
	 */
	class AGeometryCacheActor : public AActor
	{
	public:
		class UGeometryCacheComponent*                             GeometryCacheComponent;                                  // 0x0228(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		class UGeometryCacheComponent* GetGeometryCacheComponent();
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCache.GeometryCacheCodecBase
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UGeometryCacheCodecBase : public UObject
	{
	public:
		TArray<int32_t>                                            TopologyRanges;                                          // 0x0028(0x0010) Edit, ZeroConstructor, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCache.GeometryCacheCodecRaw
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UGeometryCacheCodecRaw : public UGeometryCacheCodecBase
	{
	public:
		int32_t                                                    DummyProperty;                                           // 0x0038(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HZ5X[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCache.GeometryCacheCodecV1
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UGeometryCacheCodecV1 : public UGeometryCacheCodecBase
	{
	public:
		unsigned char                                              UnknownData_9GIQ[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCache.GeometryCacheComponent
	 * Size -> 0x0058 (FullSize[0x05D0] - InheritedSize[0x0578])
	 */
	class UGeometryCacheComponent : public UMeshComponent
	{
	public:
		class UGeometryCache*                                      GeometryCache;                                           // 0x0578(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRunning;                                                // 0x0580(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bLooping;                                                // 0x0581(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TQ0F[0x2];                                   // 0x0582(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StartTimeOffset;                                         // 0x0584(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PlaybackSpeed;                                           // 0x0588(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumTracks;                                               // 0x058C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ElapsedTime;                                             // 0x0590(0x0004) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2L5C[0x30];                                  // 0x0594(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Duration;                                                // 0x05C4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bManualTick;                                             // 0x05C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_I4AL[0x7];                                   // 0x05C9(0x0007) MISSED OFFSET (PADDING)

	public:
		void TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping);
		void Stop();
		void SetStartTimeOffset(float NewStartTimeOffset);
		void SetPlaybackSpeed(float NewPlaybackSpeed);
		void SetLooping(bool bNewLooping);
		bool SetGeometryCache(class UGeometryCache* NewGeomCache);
		void PlayReversedFromEnd();
		void PlayReversed();
		void PlayFromStart();
		void Play();
		void Pause();
		bool IsPlayingReversed();
		bool IsPlaying();
		bool IsLooping();
		float GetStartTimeOffset();
		float GetPlaybackSpeed();
		float GetPlaybackDirection();
		int32_t GetNumberOfFrames();
		float GetDuration();
		float GetAnimationTime();
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCache.GeometryCacheTrack
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UGeometryCacheTrack : public UObject
	{
	public:
		float                                                      Duration;                                                // 0x0028(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_C5MO[0x2C];                                  // 0x002C(0x002C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
	 * Size -> 0x0028 (FullSize[0x0080] - InheritedSize[0x0058])
	 */
	class UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
	{
	public:
		uint32_t                                                   NumMeshSamples;                                          // 0x0058(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EFP5[0x24];                                  // 0x005C(0x0024) MISSED OFFSET (PADDING)

	public:
		void AddMeshSample(const struct FGeometryCacheMeshData& MeshData, float SampleTime);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCache.GeometryCacheTrackStreamable
	 * Size -> 0x0078 (FullSize[0x00D0] - InheritedSize[0x0058])
	 */
	class UGeometryCacheTrackStreamable : public UGeometryCacheTrack
	{
	public:
		class UGeometryCacheCodecBase*                             Codec;                                                   // 0x0058(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7PK4[0x68];                                  // 0x0060(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StartSampleTime;                                         // 0x00C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EC60[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCache.GeometryCacheTrack_TransformAnimation
	 * Size -> 0x00A8 (FullSize[0x0100] - InheritedSize[0x0058])
	 */
	class UGeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack
	{
	public:
		unsigned char                                              UnknownData_199K[0xA8];                                  // 0x0058(0x00A8) MISSED OFFSET (PADDING)

	public:
		void SetMesh(const struct FGeometryCacheMeshData& NewMeshData);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
	 * Size -> 0x00A8 (FullSize[0x0100] - InheritedSize[0x0058])
	 */
	class UGeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack
	{
	public:
		unsigned char                                              UnknownData_6J62[0xA8];                                  // 0x0058(0x00A8) MISSED OFFSET (PADDING)

	public:
		void SetMesh(const struct FGeometryCacheMeshData& NewMeshData);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif