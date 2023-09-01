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
	 * Class UdiniInputActor.UdiniInputActorBase
	 * Size -> 0x0008 (FullSize[0x0230] - InheritedSize[0x0228])
	 */
	class AUdiniInputActorBase : public AActor
	{
	public:
		unsigned char                                              UnknownData_WU81[0x8];                                   // 0x0228(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UdiniInputActor.AInputStaticmeshActorRuntime
	 * Size -> 0x0020 (FullSize[0x0250] - InheritedSize[0x0230])
	 */
	class AAInputStaticmeshActorRuntime : public AUdiniInputActorBase
	{
	public:
		TArray<class UStaticMeshComponent*>                        InstanceComponent;                                       // 0x0230(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UStaticMesh*>                                 Meshs;                                                   // 0x0240(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UdiniInputActor.EditorMeshComponet
	 * Size -> 0x0000 (FullSize[0x05E0] - InheritedSize[0x05E0])
	 */
	class UEditorMeshComponet : public UProceduralMeshComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UdiniInputActor.InputDataListAsset
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInputDataListAsset : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UdiniInputActor.IUdiniInputCoreInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIUdiniInputCoreInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UdiniInputActor.UdiniAttribute
	 * Size -> 0x00E0 (FullSize[0x0108] - InheritedSize[0x0028])
	 */
	class UUdiniAttribute : public UObject
	{
	public:
		class FString                                              AttributeName;                                           // 0x0028(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              help;                                                    // 0x0038(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUdiniAttributeType                                        AttributeType;                                           // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUdiniAttributeClass                                       AttributeOwner;                                          // 0x0049(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsHide;                                                 // 0x004A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7WP6[0x1];                                   // 0x004B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AttributeCount;                                          // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AttributeTupleSize;                                      // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxValue;                                                // 0x0054(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinValue;                                                // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       hasMin;                                                  // 0x005C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       hasMax;                                                  // 0x005D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       hasUIMin;                                                // 0x005E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       hasUIMax;                                                // 0x005F(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UIMax;                                                   // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UIMin;                                                   // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ShowValueSize;                                           // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShowAttributeValueAsDir;                                 // 0x006C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShowAttributeValueAsText;                                // 0x006D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableShowBackGroundValue;                               // 0x006E(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6HUC[0x99];                                  // 0x006F(0x0099) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UdiniInputActor.UdiniAttaibutFloat
	 * Size -> 0x0018 (FullSize[0x0120] - InheritedSize[0x0108])
	 */
	class UUdiniAttaibutFloat : public UUdiniAttribute
	{
	public:
		TArray<float>                                              Value;                                                   // 0x0108(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultValue;                                            // 0x0118(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V06R[0x4];                                   // 0x011C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UdiniInputActor.UdiniAttaibutVector3
	 * Size -> 0x0020 (FullSize[0x0128] - InheritedSize[0x0108])
	 */
	class UUdiniAttaibutVector3 : public UUdiniAttribute
	{
	public:
		TArray<struct FVector>                                     Value;                                                   // 0x0108(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             DefaultValue;                                            // 0x0118(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowOnlyDir;                                            // 0x0124(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3B3D[0x3];                                   // 0x0125(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UdiniInputActor.UdiniAttaibutVector2
	 * Size -> 0x0018 (FullSize[0x0120] - InheritedSize[0x0108])
	 */
	class UUdiniAttaibutVector2 : public UUdiniAttribute
	{
	public:
		TArray<struct FVector2D>                                   Value;                                                   // 0x0108(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           DefaultValue;                                            // 0x0118(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UdiniInputActor.UdiniAttaibutVector4
	 * Size -> 0x0028 (FullSize[0x0130] - InheritedSize[0x0108])
	 */
	class UUdiniAttaibutVector4 : public UUdiniAttribute
	{
	public:
		TArray<struct FVector4>                                    Value;                                                   // 0x0108(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZHQA[0x8];                                   // 0x0118(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector4                                            DefaultValue;                                            // 0x0120(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UdiniInputActor.UdiniAttaibutIntBase
	 * Size -> 0x0018 (FullSize[0x0120] - InheritedSize[0x0108])
	 */
	class UUdiniAttaibutIntBase : public UUdiniAttribute
	{
	public:
		TArray<int32_t>                                            Value;                                                   // 0x0108(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DefaultValue;                                            // 0x0118(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B2S0[0x4];                                   // 0x011C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UdiniInputActor.UdiniAttaibutInt
	 * Size -> 0x0000 (FullSize[0x0120] - InheritedSize[0x0120])
	 */
	class UUdiniAttaibutInt : public UUdiniAttaibutIntBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UdiniInputActor.UdiniAttaibutTog
	 * Size -> 0x0000 (FullSize[0x0120] - InheritedSize[0x0120])
	 */
	class UUdiniAttaibutTog : public UUdiniAttaibutIntBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UdiniInputActor.UdiniAttaibutButton
	 * Size -> 0x0000 (FullSize[0x0120] - InheritedSize[0x0120])
	 */
	class UUdiniAttaibutButton : public UUdiniAttaibutIntBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UdiniInputActor.UdiniAttaibutString
	 * Size -> 0x0020 (FullSize[0x0128] - InheritedSize[0x0108])
	 */
	class UUdiniAttaibutString : public UUdiniAttribute
	{
	public:
		TArray<class FString>                                      Value;                                                   // 0x0108(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DefaultValue;                                            // 0x0118(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UdiniInputActor.UdiniAttaibutStringChoiseList
	 * Size -> 0x0020 (FullSize[0x0148] - InheritedSize[0x0128])
	 */
	class UUdiniAttaibutStringChoiseList : public UUdiniAttaibutString
	{
	public:
		TArray<class FString>                                      ChoseListStringLable;                                    // 0x0128(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      ChoseListStringValue;                                    // 0x0138(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UdiniInputActor.UdiniAttaibutIntChoiselist
	 * Size -> 0x0020 (FullSize[0x0140] - InheritedSize[0x0120])
	 */
	class UUdiniAttaibutIntChoiselist : public UUdiniAttaibutIntBase
	{
	public:
		TArray<class FString>                                      ChoseListStringLable;                                    // 0x0120(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            ChoseListIntValue;                                       // 0x0130(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UdiniInputActor.UdiniInputVolum
	 * Size -> 0x0000 (FullSize[0x0260] - InheritedSize[0x0260])
	 */
	class AUdiniInputVolum : public AVolume
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UdiniInputActor.UdiniCollisionInputVolum
	 * Size -> 0x0000 (FullSize[0x0260] - InheritedSize[0x0260])
	 */
	class AUdiniCollisionInputVolum : public AUdiniInputVolum
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UdiniInputActor.UdiniDataPart
	 * Size -> 0x00E8 (FullSize[0x0110] - InheritedSize[0x0028])
	 */
	class UUdiniDataPart : public UObject
	{
	public:
		EUdiniDataPartType                                         PartType;                                                // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7ZQ2[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     VertexPosition;                                          // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FLinearColor>                                VertexColors;                                            // 0x0040(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FLinearColor>                                VertexColorsCatche;                                      // 0x0050(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     VertexNormal;                                            // 0x0060(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVector2D>                                   VertexUV;                                                // 0x0070(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            PointEnableDraw;                                         // 0x0080(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              PointDrawSize;                                           // 0x0090(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              PrimDrawLineThinkness;                                   // 0x00A0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class UUdiniAttribute*>                UdiniAttributesMap;                                      // 0x00B0(0x0050) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_84ZE[0x10];                                  // 0x0100(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UdiniInputActor.UdiniInputPin
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	class UUdiniInputPin : public UActorComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UdiniInputActor.UdiniInputVolumActor
	 * Size -> 0x0008 (FullSize[0x0230] - InheritedSize[0x0228])
	 */
	class AUdiniInputVolumActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_FAQ6[0x8];                                   // 0x0228(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UdiniInputActor.UdiniOutputObjectBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUdiniOutputObjectBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UdiniInputActor.UdiniInstanceOutput
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUdiniInstanceOutput : public UUdiniOutputObjectBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UdiniInputActor.UdiniInstanceToFoliageOutput
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUdiniInstanceToFoliageOutput : public UUdiniOutputObjectBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UdiniInputActor.UdiniInstanceToHierarchicalOutput
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUdiniInstanceToHierarchicalOutput : public UUdiniOutputObjectBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UdiniInputActor.UdiniInstanceToStaticmeshComponentOutput
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUdiniInstanceToStaticmeshComponentOutput : public UUdiniOutputObjectBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UdiniInputActor.UdiniLandmassOutput
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUdiniLandmassOutput : public UUdiniOutputObjectBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UdiniInputActor.UdiniMeshDataPart
	 * Size -> 0x0098 (FullSize[0x01A8] - InheritedSize[0x0110])
	 */
	class UUdiniMeshDataPart : public UUdiniDataPart
	{
	public:
		TArray<struct FOnePoly>                                    PolyArray;                                               // 0x0110(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            PrimIndex;                                               // 0x0120(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            PrimID;                                                  // 0x0130(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            PrimEnableDraw;                                          // 0x0140(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            bIsPrimHide;                                             // 0x0150(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            bIsPointHide;                                            // 0x0160(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              PrimDrawSize;                                            // 0x0170(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VJP5[0x10];                                  // 0x0180(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       GeneraProcaduralMesh;                                    // 0x0190(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsMask;                                                 // 0x0191(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DN9O[0x16];                                  // 0x0192(0x0016) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UdiniInputActor.UdiniPointDataPart
	 * Size -> 0x0000 (FullSize[0x0110] - InheritedSize[0x0110])
	 */
	class UUdiniPointDataPart : public UUdiniDataPart
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UdiniInputActor.UdiniSnapGridComponent
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	class UUdiniSnapGridComponent : public UActorComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UdiniInputActor.UdiniSopAsset
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUdiniSopAsset : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UdiniInputActor.UdiniSplineComponent
	 * Size -> 0x0020 (FullSize[0x0650] - InheritedSize[0x0630])
	 */
	class UUdiniSplineComponent : public USplineComponent
	{
	public:
		unsigned char                                              UnknownData_YMW4[0x20];                                  // 0x0630(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UdiniInputActor.UdiniSplineDataPart
	 * Size -> 0x0080 (FullSize[0x0190] - InheritedSize[0x0110])
	 */
	class UUdiniSplineDataPart : public UUdiniDataPart
	{
	public:
		TArray<struct FOneLine>                                    PolyArray;                                               // 0x0110(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            PrimID;                                                  // 0x0120(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            Curveconts;                                              // 0x0130(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            PrimEnableDraw;                                          // 0x0140(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            bIsPrimHide;                                             // 0x0150(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            bIsPointHide;                                            // 0x0160(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              PrimDrawSize;                                            // 0x0170(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FIndexCluster>                               VertexClusterIndex;                                      // 0x0180(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UdiniInputActor.UdiniSSCoreComponet
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	class UUdiniSSCoreComponet : public UActorComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UdiniInputActor.HeightFieldTexture
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UHeightFieldTexture : public UObject
	{
	public:
		float                                                      MinVisHeight;                                            // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxVisHeight;                                            // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              PixData;                                                 // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           ImageSize;                                               // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UdiniInputActor.VolumBoxShow
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	class UVolumBoxShow : public UActorComponent
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
