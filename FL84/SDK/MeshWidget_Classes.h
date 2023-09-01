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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class MeshWidget.MeshWidgetUWidget
	 * Size -> 0x0010 (FullSize[0x0148] - InheritedSize[0x0138])
	 */
	class UMeshWidgetUWidget : public UWidget
	{
	public:
		unsigned char                                              UnknownData_W8WV[0x10];                                  // 0x0138(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshWidget.ParticleWidget
	 * Size -> 0x0040 (FullSize[0x0188] - InheritedSize[0x0148])
	 */
	class UParticleWidget : public UMeshWidgetUWidget
	{
	public:
		class USlateVectorArtData*                                 TrailMeshAsset;                                          // 0x0148(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxParticleCount;                                        // 0x0150(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_866V[0x34];                                  // 0x0154(0x0034) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshWidget.MeshRectangleWidget
	 * Size -> 0x0028 (FullSize[0x0170] - InheritedSize[0x0148])
	 */
	class UMeshRectangleWidget : public UMeshWidgetUWidget
	{
	public:
		class UMaterialInterface*                                  BaseMaterial;                                            // 0x0148(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumFloat4PerInstance;                                    // 0x0150(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S87J[0x1C];                                  // 0x0154(0x001C) MISSED OFFSET (PADDING)

	public:
		void SetInstanceNum(int32_t NewNum);
		void ModifyInstanceNum(int32_t dNum);
		void InitUnitTestProvider();
		static UClass* StaticClass();
	};

	/**
	 * Class MeshWidget.TextMeshWidget
	 * Size -> 0x0030 (FullSize[0x0178] - InheritedSize[0x0148])
	 */
	class UTextMeshWidget : public UMeshWidgetUWidget
	{
	public:
		class UMaterialInterface*                                  BaseMaterial;                                            // 0x0148(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B53X[0x28];                                  // 0x0150(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshWidget.ProgressBarMeshWidget
	 * Size -> 0x0030 (FullSize[0x0178] - InheritedSize[0x0148])
	 */
	class UProgressBarMeshWidget : public UMeshWidgetUWidget
	{
	public:
		class UMaterialInterface*                                  BaseMaterial;                                            // 0x0148(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5N1N[0x28];                                  // 0x0150(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
