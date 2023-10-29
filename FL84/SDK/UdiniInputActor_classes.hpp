#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x230 - 0x228)
// Class UdiniInputActor.UdiniInputActorBase
class AUdiniInputActorBase : public AActor
{
public:
	uint8                                        Pad_BE1[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AUdiniInputActorBase* GetDefaultObj();

};

// 0x20 (0x250 - 0x230)
// Class UdiniInputActor.AInputStaticmeshActorRuntime
class AAInputStaticmeshActorRuntime : public AUdiniInputActorBase
{
public:
	TArray<class UStaticMeshComponent*>          InstanceComponent;                                 // 0x230(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UStaticMesh*>                   Meshs;                                             // 0x240(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AAInputStaticmeshActorRuntime* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class UdiniInputActor.CurveModel_Base
class UCurveModel_Base : public UObject
{
public:

	static class UClass* StaticClass();
	static class UCurveModel_Base* GetDefaultObj();

};

// 0x0 (0x5E0 - 0x5E0)
// Class UdiniInputActor.EditorMeshComponet
class UEditorMeshComponet : public UProceduralMeshComponent
{
public:

	static class UClass* StaticClass();
	static class UEditorMeshComponet* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class UdiniInputActor.InputDataListAsset
class UInputDataListAsset : public UObject
{
public:

	static class UClass* StaticClass();
	static class UInputDataListAsset* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class UdiniInputActor.IUdiniInputCoreInterface
class IIUdiniInputCoreInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IIUdiniInputCoreInterface* GetDefaultObj();

};

// 0xE8 (0x110 - 0x28)
// Class UdiniInputActor.UdiniDataPart
class UUdiniDataPart : public UObject
{
public:
	enum class EUdiniDataPartType                PartType;                                          // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BED[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       VertexPosition;                                    // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       VertexNormal;                                      // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLinearColor>                  VertexColors;                                      // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLinearColor>                  VertexColorsCatche;                                // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector2D>                     VertexUV;                                          // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                PointEnableDraw;                                   // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                PointDrawSize;                                     // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                PrimDrawLineThinkness;                             // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class UUdiniAttribute*>  UdiniAttributesMap;                                // 0xB0(0x50)(NativeAccessSpecifierPublic)
	uint8                                        Pad_BEE[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUdiniDataPart* GetDefaultObj();

};

// 0x20 (0x130 - 0x110)
// Class UdiniInputActor.UdiniAreaDataPart
class UUdiniAreaDataPart : public UUdiniDataPart
{
public:
	class UMaterialInstanceDynamic*              ViewTextureInstanceDynamic;                        // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            ViewTexture;                                       // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FHeightFieldData>              HeightFieldData;                                   // 0x120(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UUdiniAreaDataPart* GetDefaultObj();

};

// 0xE0 (0x108 - 0x28)
// Class UdiniInputActor.UdiniAttribute
class UUdiniAttribute : public UObject
{
public:
	class FString                                AttributeName;                                     // 0x28(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Help;                                              // 0x38(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUdiniAttributeType               AttributeType;                                     // 0x48(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUdiniAttributeClass              AttributeOwner;                                    // 0x49(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsHide;                                           // 0x4A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BF0[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AttributeCount;                                    // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AttributeTupleSize;                                // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxValue;                                          // 0x54(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinValue;                                          // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasMin;                                            // 0x5C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasMax;                                            // 0x5D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasUIMin;                                          // 0x5E(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasUIMax;                                          // 0x5F(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UIMax;                                             // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UIMin;                                             // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShowValueSize;                                     // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowAttributeValueAsDir;                           // 0x6C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowAttributeValueAsText;                          // 0x6D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableShowBackGroundValue;                         // 0x6E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BF1[0x99];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUdiniAttribute* GetDefaultObj();

};

// 0x18 (0x120 - 0x108)
// Class UdiniInputActor.UdiniAttaibutFloat
class UUdiniAttaibutFloat : public UUdiniAttribute
{
public:
	TArray<float>                                Value;                                             // 0x108(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultValue;                                      // 0x118(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BF3[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUdiniAttaibutFloat* GetDefaultObj();

};

// 0x20 (0x128 - 0x108)
// Class UdiniInputActor.UdiniAttaibutVector3
class UUdiniAttaibutVector3 : public UUdiniAttribute
{
public:
	TArray<struct FVector>                       Value;                                             // 0x108(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               DefaultValue;                                      // 0x118(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowOnlyDir;                                      // 0x124(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BF4[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUdiniAttaibutVector3* GetDefaultObj();

};

// 0x18 (0x120 - 0x108)
// Class UdiniInputActor.UdiniAttaibutVector2
class UUdiniAttaibutVector2 : public UUdiniAttribute
{
public:
	TArray<struct FVector2D>                     Value;                                             // 0x108(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             DefaultValue;                                      // 0x118(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UUdiniAttaibutVector2* GetDefaultObj();

};

// 0x28 (0x130 - 0x108)
// Class UdiniInputActor.UdiniAttaibutVector4
class UUdiniAttaibutVector4 : public UUdiniAttribute
{
public:
	TArray<struct FVector4>                      Value;                                             // 0x108(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BF6[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              DefaultValue;                                      // 0x120(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UUdiniAttaibutVector4* GetDefaultObj();

};

// 0x18 (0x120 - 0x108)
// Class UdiniInputActor.UdiniAttaibutIntBase
class UUdiniAttaibutIntBase : public UUdiniAttribute
{
public:
	TArray<int32>                                Value;                                             // 0x108(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DefaultValue;                                      // 0x118(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BF8[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUdiniAttaibutIntBase* GetDefaultObj();

};

// 0x0 (0x120 - 0x120)
// Class UdiniInputActor.UdiniAttaibutInt
class UUdiniAttaibutInt : public UUdiniAttaibutIntBase
{
public:

	static class UClass* StaticClass();
	static class UUdiniAttaibutInt* GetDefaultObj();

};

// 0x0 (0x120 - 0x120)
// Class UdiniInputActor.UdiniAttaibutTog
class UUdiniAttaibutTog : public UUdiniAttaibutIntBase
{
public:

	static class UClass* StaticClass();
	static class UUdiniAttaibutTog* GetDefaultObj();

};

// 0x0 (0x120 - 0x120)
// Class UdiniInputActor.UdiniAttaibutButton
class UUdiniAttaibutButton : public UUdiniAttaibutIntBase
{
public:

	static class UClass* StaticClass();
	static class UUdiniAttaibutButton* GetDefaultObj();

};

// 0x20 (0x128 - 0x108)
// Class UdiniInputActor.UdiniAttaibutString
class UUdiniAttaibutString : public UUdiniAttribute
{
public:
	TArray<class FString>                        Value;                                             // 0x108(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DefaultValue;                                      // 0x118(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UUdiniAttaibutString* GetDefaultObj();

};

// 0x38 (0x160 - 0x128)
// Class UdiniInputActor.UdiniAttaibutStringChoiseList
class UUdiniAttaibutStringChoiseList : public UUdiniAttaibutString
{
public:
	TArray<class FString>                        ChoseListStringLable;                              // 0x128(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        ChoseListStringValue;                              // 0x138(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLinearColor>                  ChoseListStringColors;                             // 0x148(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsHeightFieldAtt;                                 // 0x158(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsBitMask;                                        // 0x159(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BFA[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUdiniAttaibutStringChoiseList* GetDefaultObj();

};

// 0x20 (0x140 - 0x120)
// Class UdiniInputActor.UdiniAttaibutIntChoiselist
class UUdiniAttaibutIntChoiselist : public UUdiniAttaibutIntBase
{
public:
	TArray<class FString>                        ChoseListStringLable;                              // 0x120(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                ChoseListIntValue;                                 // 0x130(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UUdiniAttaibutIntChoiselist* GetDefaultObj();

};

// 0x0 (0x260 - 0x260)
// Class UdiniInputActor.UdiniInputVolum
class AUdiniInputVolum : public AVolume
{
public:

	static class UClass* StaticClass();
	static class AUdiniInputVolum* GetDefaultObj();

};

// 0x0 (0x260 - 0x260)
// Class UdiniInputActor.UdiniCollisionInputVolum
class AUdiniCollisionInputVolum : public AUdiniInputVolum
{
public:

	static class UClass* StaticClass();
	static class AUdiniCollisionInputVolum* GetDefaultObj();

};

// 0x8 (0x360 - 0x358)
// Class UdiniInputActor.UdiniDecalComponent
class UUdiniDecalComponent : public UDecalComponent
{
public:
	uint8                                        Pad_BFC[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUdiniDecalComponent* GetDefaultObj();

};

// 0x0 (0xB0 - 0xB0)
// Class UdiniInputActor.UdiniInputPin
class UUdiniInputPin : public UActorComponent
{
public:

	static class UClass* StaticClass();
	static class UUdiniInputPin* GetDefaultObj();

};

// 0x8 (0x230 - 0x228)
// Class UdiniInputActor.UdiniInputVolumActor
class AUdiniInputVolumActor : public AActor
{
public:
	uint8                                        Pad_BFE[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AUdiniInputVolumActor* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class UdiniInputActor.UdiniOutputObjectBase
class UUdiniOutputObjectBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UUdiniOutputObjectBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class UdiniInputActor.UdiniInstanceOutput
class UUdiniInstanceOutput : public UUdiniOutputObjectBase
{
public:

	static class UClass* StaticClass();
	static class UUdiniInstanceOutput* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class UdiniInputActor.UdiniInstanceToFoliageOutput
class UUdiniInstanceToFoliageOutput : public UUdiniOutputObjectBase
{
public:

	static class UClass* StaticClass();
	static class UUdiniInstanceToFoliageOutput* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class UdiniInputActor.UdiniInstanceToHierarchicalOutput
class UUdiniInstanceToHierarchicalOutput : public UUdiniOutputObjectBase
{
public:

	static class UClass* StaticClass();
	static class UUdiniInstanceToHierarchicalOutput* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class UdiniInputActor.UdiniInstanceToStaticmeshComponentOutput
class UUdiniInstanceToStaticmeshComponentOutput : public UUdiniOutputObjectBase
{
public:

	static class UClass* StaticClass();
	static class UUdiniInstanceToStaticmeshComponentOutput* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class UdiniInputActor.UdiniLandmassOutput
class UUdiniLandmassOutput : public UUdiniOutputObjectBase
{
public:

	static class UClass* StaticClass();
	static class UUdiniLandmassOutput* GetDefaultObj();

};

// 0x98 (0x1A8 - 0x110)
// Class UdiniInputActor.UdiniMeshDataPart
class UUdiniMeshDataPart : public UUdiniDataPart
{
public:
	TArray<struct FOnePoly>                      PolyArray;                                         // 0x110(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                PrimIndex;                                         // 0x120(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                PrimID;                                            // 0x130(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                PrimEnableDraw;                                    // 0x140(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                bIsPrimHide;                                       // 0x150(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                bIsPointHide;                                      // 0x160(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                PrimDrawSize;                                      // 0x170(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C03[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         GeneraProcaduralMesh;                              // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMask;                                           // 0x191(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C05[0x16];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUdiniMeshDataPart* GetDefaultObj();

};

// 0x0 (0x110 - 0x110)
// Class UdiniInputActor.UdiniPointDataPart
class UUdiniPointDataPart : public UUdiniDataPart
{
public:

	static class UClass* StaticClass();
	static class UUdiniPointDataPart* GetDefaultObj();

};

// 0x0 (0xB0 - 0xB0)
// Class UdiniInputActor.UdiniSnapGridComponent
class UUdiniSnapGridComponent : public UActorComponent
{
public:

	static class UClass* StaticClass();
	static class UUdiniSnapGridComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class UdiniInputActor.UdiniSopAsset
class UUdiniSopAsset : public UObject
{
public:

	static class UClass* StaticClass();
	static class UUdiniSopAsset* GetDefaultObj();

};

// 0x0 (0x630 - 0x630)
// Class UdiniInputActor.UdiniSplineComponent_Base
class UUdiniSplineComponent_Base : public USplineComponent
{
public:

	static class UClass* StaticClass();
	static class UUdiniSplineComponent_Base* GetDefaultObj();

};

// 0x20 (0x650 - 0x630)
// Class UdiniInputActor.UdiniSplineComponent
class UUdiniSplineComponent : public UUdiniSplineComponent_Base
{
public:
	uint8                                        Pad_C08[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUdiniSplineComponent* GetDefaultObj();

};

// 0x80 (0x190 - 0x110)
// Class UdiniInputActor.UdiniSplineDataPart
class UUdiniSplineDataPart : public UUdiniDataPart
{
public:
	TArray<struct FOneLine>                      PolyArray;                                         // 0x110(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                PrimID;                                            // 0x120(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                Curveconts;                                        // 0x130(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                PrimEnableDraw;                                    // 0x140(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                bIsPrimHide;                                       // 0x150(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                bIsPointHide;                                      // 0x160(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                PrimDrawSize;                                      // 0x170(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FIndexCluster>                 VertexClusterIndex;                                // 0x180(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UUdiniSplineDataPart* GetDefaultObj();

};

// 0x0 (0xB0 - 0xB0)
// Class UdiniInputActor.UdiniSSCoreComponet
class UUdiniSSCoreComponet : public UActorComponent
{
public:

	static class UClass* StaticClass();
	static class UUdiniSSCoreComponet* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class UdiniInputActor.HeightFieldTexture
class UHeightFieldTexture : public UObject
{
public:
	float                                        MinVisHeight;                                      // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxVisHeight;                                      // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                PixData;                                           // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ImageSize;                                         // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UHeightFieldTexture* GetDefaultObj();

};

// 0x0 (0xB0 - 0xB0)
// Class UdiniInputActor.VolumBoxShow
class UVolumBoxShow : public UActorComponent
{
public:

	static class UClass* StaticClass();
	static class UVolumBoxShow* GetDefaultObj();

};

}


