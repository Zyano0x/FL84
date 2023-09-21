#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// Class InteractiveToolsFramework.InputBehavior
class UInputBehavior : public UObject
{
public:
	uint8                                        Pad_165B[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInputBehavior* GetDefaultObj();

};

// 0x50 (0x80 - 0x30)
// Class InteractiveToolsFramework.AnyButtonInputBehavior
class UAnyButtonInputBehavior : public UInputBehavior
{
public:
	uint8                                        Pad_165D[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAnyButtonInputBehavior* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.InteractiveGizmoBuilder
class UInteractiveGizmoBuilder : public UObject
{
public:

	static class UClass* StaticClass();
	static class UInteractiveGizmoBuilder* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.AxisAngleGizmoBuilder
class UAxisAngleGizmoBuilder : public UInteractiveGizmoBuilder
{
public:

	static class UClass* StaticClass();
	static class UAxisAngleGizmoBuilder* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class InteractiveToolsFramework.InteractiveGizmo
class UInteractiveGizmo : public UObject
{
public:
	uint8                                        Pad_1662[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputBehaviorSet*                     InputBehaviors;                                    // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UInteractiveGizmo* GetDefaultObj();

};

// 0xB8 (0xF0 - 0x38)
// Class InteractiveToolsFramework.AxisAngleGizmo
class UAxisAngleGizmo : public UInteractiveGizmo
{
public:
	uint8                                        Pad_1663[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IGizmoAxisSource>     AxisSource;                                        // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TScriptInterface<class IGizmoFloatParameterSource> AngleSource;                                       // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TScriptInterface<class IGizmoClickTarget>    HitTarget;                                         // 0x68(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TScriptInterface<class IGizmoStateTarget>    StateTarget;                                       // 0x78(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bInInteraction;                                    // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1664[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RotationOrigin;                                    // 0x8C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RotationAxis;                                      // 0x98(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RotationPlaneX;                                    // 0xA4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RotationPlaneY;                                    // 0xB0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InteractionStartPoint;                             // 0xBC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InteractionCurPoint;                               // 0xC8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InteractionStartAngle;                             // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InteractionCurAngle;                               // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1667[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAxisAngleGizmo* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.AxisPositionGizmoBuilder
class UAxisPositionGizmoBuilder : public UInteractiveGizmoBuilder
{
public:

	static class UClass* StaticClass();
	static class UAxisPositionGizmoBuilder* GetDefaultObj();

};

// 0xA0 (0xD8 - 0x38)
// Class InteractiveToolsFramework.AxisPositionGizmo
class UAxisPositionGizmo : public UInteractiveGizmo
{
public:
	uint8                                        Pad_1669[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IGizmoAxisSource>     AxisSource;                                        // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TScriptInterface<class IGizmoFloatParameterSource> ParameterSource;                                   // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TScriptInterface<class IGizmoClickTarget>    HitTarget;                                         // 0x68(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TScriptInterface<class IGizmoStateTarget>    StateTarget;                                       // 0x78(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bEnableSignedAxis;                                 // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInInteraction;                                    // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_166B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               InteractionOrigin;                                 // 0x8C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InteractionAxis;                                   // 0x98(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InteractionStartPoint;                             // 0xA4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InteractionCurPoint;                               // 0xB0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InteractionStartParameter;                         // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InteractionCurParameter;                           // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ParameterSign;                                     // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1670[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAxisPositionGizmo* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class InteractiveToolsFramework.GizmoConstantAxisSource
class UGizmoConstantAxisSource : public UObject
{
public:
	uint8                                        Pad_1672[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Origin;                                            // 0x30(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Direction;                                         // 0x3C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGizmoConstantAxisSource* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class InteractiveToolsFramework.GizmoConstantFrameAxisSource
class UGizmoConstantFrameAxisSource : public UObject
{
public:
	uint8                                        Pad_1674[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Origin;                                            // 0x30(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Direction;                                         // 0x3C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TangentX;                                          // 0x48(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TangentY;                                          // 0x54(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGizmoConstantFrameAxisSource* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class InteractiveToolsFramework.GizmoWorldAxisSource
class UGizmoWorldAxisSource : public UObject
{
public:
	uint8                                        Pad_1677[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Origin;                                            // 0x30(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AxisIndex;                                         // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGizmoWorldAxisSource* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class InteractiveToolsFramework.GizmoComponentAxisSource
class UGizmoComponentAxisSource : public UObject
{
public:
	uint8                                        Pad_167B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       Component;                                         // 0x30(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AxisIndex;                                         // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLocalAxes;                                        // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_167C[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGizmoComponentAxisSource* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class InteractiveToolsFramework.InteractiveToolPropertySet
class UInteractiveToolPropertySet : public UObject
{
public:
	uint8                                        Pad_167F[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CachedProperties;                                  // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsPropertySetEnabled;                             // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1680[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInteractiveToolPropertySet* GetDefaultObj();

};

// 0x18 (0x68 - 0x50)
// Class InteractiveToolsFramework.BrushBaseProperties
class UBrushBaseProperties : public UInteractiveToolPropertySet
{
public:
	float                                        BrushSize;                                         // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSpecifyRadius;                                    // 0x54(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1681[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BrushRadius;                                       // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BrushStrength;                                     // 0x5C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BrushFalloffAmount;                                // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowStrength;                                     // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowFalloff;                                      // 0x65(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1682[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBrushBaseProperties* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class InteractiveToolsFramework.InteractiveTool
class UInteractiveTool : public UObject
{
public:
	uint8                                        Pad_1684[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputBehaviorSet*                     InputBehaviors;                                    // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UObject*>                       ToolPropertyObjects;                               // 0x50(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1685[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInteractiveTool* GetDefaultObj();

};

// 0x8 (0x88 - 0x80)
// Class InteractiveToolsFramework.SingleSelectionTool
class USingleSelectionTool : public UInteractiveTool
{
public:
	uint8                                        Pad_1687[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USingleSelectionTool* GetDefaultObj();

};

// 0x38 (0xC0 - 0x88)
// Class InteractiveToolsFramework.MeshSurfacePointTool
class UMeshSurfacePointTool : public USingleSelectionTool
{
public:
	uint8                                        Pad_1688[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshSurfacePointTool* GetDefaultObj();

};

// 0xF8 (0x1B8 - 0xC0)
// Class InteractiveToolsFramework.BaseBrushTool
class UBaseBrushTool : public UMeshSurfacePointTool
{
public:
	class UBrushBaseProperties*                  BrushProperties;                                   // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInBrushStroke;                                    // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_168A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBrushStampData                       LastBrushStamp;                                    // 0xCC(0xA8)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_168B[0x14];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UBrushBaseProperties>    PropertyClass;                                     // 0x188(0x28)(Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBrushStampIndicator*                  BrushStampIndicator;                               // 0x1B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UBaseBrushTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.BrushStampIndicatorBuilder
class UBrushStampIndicatorBuilder : public UInteractiveGizmoBuilder
{
public:

	static class UClass* StaticClass();
	static class UBrushStampIndicatorBuilder* GetDefaultObj();

};

// 0x78 (0xB0 - 0x38)
// Class InteractiveToolsFramework.BrushStampIndicator
class UBrushStampIndicator : public UInteractiveGizmo
{
public:
	float                                        BrushRadius;                                       // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BrushFalloff;                                      // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               BrushPosition;                                     // 0x40(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               BrushNormal;                                       // 0x4C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawIndicatorLines;                               // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawRadiusCircle;                                 // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawFalloffCircle;                                // 0x5A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1693[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SampleStepCount;                                   // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          LineColor;                                         // 0x60(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LineThickness;                                     // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDepthTested;                                      // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawSecondaryLines;                               // 0x75(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1694[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SecondaryLineThickness;                            // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SecondaryLineColor;                                // 0x7C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1695[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   AttachedComponent;                                 // 0x90(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1696[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBrushStampIndicator* GetDefaultObj();

};

// 0xC0 (0x140 - 0x80)
// Class InteractiveToolsFramework.ClickDragInputBehavior
class UClickDragInputBehavior : public UAnyButtonInputBehavior
{
public:
	uint8                                        Pad_169A[0xA0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bUpdateModifiersDuringDrag;                        // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_169B[0x1F];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UClickDragInputBehavior* GetDefaultObj();

};

// 0x140 (0x280 - 0x140)
// Class InteractiveToolsFramework.LocalClickDragInputBehavior
class ULocalClickDragInputBehavior : public UClickDragInputBehavior
{
public:
	uint8                                        Pad_16A1[0x140];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULocalClickDragInputBehavior* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.InteractiveToolBuilder
class UInteractiveToolBuilder : public UObject
{
public:

	static class UClass* StaticClass();
	static class UInteractiveToolBuilder* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.ClickDragToolBuilder
class UClickDragToolBuilder : public UInteractiveToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UClickDragToolBuilder* GetDefaultObj();

};

// 0x8 (0x88 - 0x80)
// Class InteractiveToolsFramework.ClickDragTool
class UClickDragTool : public UInteractiveTool
{
public:
	uint8                                        Pad_16AA[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UClickDragTool* GetDefaultObj();

};

// 0x0 (0x228 - 0x228)
// Class InteractiveToolsFramework.InternalToolFrameworkActor
class AInternalToolFrameworkActor : public AActor
{
public:

	static class UClass* StaticClass();
	static class AInternalToolFrameworkActor* GetDefaultObj();

};

// 0x0 (0x228 - 0x228)
// Class InteractiveToolsFramework.GizmoActor
class AGizmoActor : public AInternalToolFrameworkActor
{
public:

	static class UClass* StaticClass();
	static class AGizmoActor* GetDefaultObj();

};

// 0x20 (0x560 - 0x540)
// Class InteractiveToolsFramework.GizmoBaseComponent
class UGizmoBaseComponent : public UPrimitiveComponent
{
public:
	struct FLinearColor                          Color;                                             // 0x540(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HoverSizeMultiplier;                               // 0x550(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PixelHitDistanceThreshold;                         // 0x554(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16B1[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGizmoBaseComponent* GetDefaultObj();

	void UpdateWorldLocalState(bool bWorldIn);
	void UpdateHoverState(bool bHoveringIn);
};

// 0x20 (0x580 - 0x560)
// Class InteractiveToolsFramework.GizmoArrowComponent
class UGizmoArrowComponent : public UGizmoBaseComponent
{
public:
	struct FVector                               Direction;                                         // 0x560(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Gap;                                               // 0x56C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Length;                                            // 0x570(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x574(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16B4[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGizmoArrowComponent* GetDefaultObj();

};

// 0x40 (0x5A0 - 0x560)
// Class InteractiveToolsFramework.GizmoBoxComponent
class UGizmoBoxComponent : public UGizmoBaseComponent
{
public:
	struct FVector                               Origin;                                            // 0x560(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16B8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Rotation;                                          // 0x570(0x10)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Dimensions;                                        // 0x580(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LineThickness;                                     // 0x58C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRemoveHiddenLines;                                // 0x590(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableAxisFlip;                                   // 0x591(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16BA[0xE];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGizmoBoxComponent* GetDefaultObj();

};

// 0x20 (0x580 - 0x560)
// Class InteractiveToolsFramework.GizmoCircleComponent
class UGizmoCircleComponent : public UGizmoBaseComponent
{
public:
	struct FVector                               Normal;                                            // 0x560(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x56C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x570(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumSides;                                          // 0x574(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bViewAligned;                                      // 0x578(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyAllowFrontFacingHits;                         // 0x579(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16C0[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGizmoCircleComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.GizmoTransformSource
class IGizmoTransformSource : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGizmoTransformSource* GetDefaultObj();

	void SetTransform(struct FTransform& NewTransform);
	struct FTransform GetTransform();
};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.GizmoAxisSource
class IGizmoAxisSource : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGizmoAxisSource* GetDefaultObj();

	bool HasTangentVectors();
	void GetTangentVectors(struct FVector* TangentXOut, struct FVector* TangentYOut);
	struct FVector GetOrigin();
	struct FVector GetDirection();
};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.GizmoClickTarget
class IGizmoClickTarget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGizmoClickTarget* GetDefaultObj();

	void UpdateHoverState(bool bHovering);
};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.GizmoStateTarget
class IGizmoStateTarget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGizmoStateTarget* GetDefaultObj();

	void EndUpdate();
	void BeginUpdate();
};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.GizmoFloatParameterSource
class IGizmoFloatParameterSource : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGizmoFloatParameterSource* GetDefaultObj();

	void SetParameter(float NewValue);
	float GetParameter();
	void EndModify();
	void BeginModify();
};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.GizmoVec2ParameterSource
class IGizmoVec2ParameterSource : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGizmoVec2ParameterSource* GetDefaultObj();

	void SetParameter(struct FVector2D& NewValue);
	struct FVector2D GetParameter();
	void EndModify();
	void BeginModify();
};

// 0x30 (0x590 - 0x560)
// Class InteractiveToolsFramework.GizmoLineHandleComponent
class UGizmoLineHandleComponent : public UGizmoBaseComponent
{
public:
	struct FVector                               Normal;                                            // 0x560(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HandleSize;                                        // 0x56C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x570(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Direction;                                         // 0x574(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Length;                                            // 0x580(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bImageScale;                                       // 0x584(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16EA[0xB];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGizmoLineHandleComponent* GetDefaultObj();

};

// 0x30 (0x590 - 0x560)
// Class InteractiveToolsFramework.GizmoRectangleComponent
class UGizmoRectangleComponent : public UGizmoBaseComponent
{
public:
	struct FVector                               DirectionX;                                        // 0x560(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               DirectionY;                                        // 0x56C(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OffsetX;                                           // 0x578(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OffsetY;                                           // 0x57C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LengthX;                                           // 0x580(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LengthY;                                           // 0x584(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x588(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SegmentFlags;                                      // 0x58C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16F1[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGizmoRectangleComponent* GetDefaultObj();

};

// 0x88 (0xB0 - 0x28)
// Class InteractiveToolsFramework.GizmoLambdaHitTarget
class UGizmoLambdaHitTarget : public UObject
{
public:
	uint8                                        Pad_16F4[0x88];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGizmoLambdaHitTarget* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class InteractiveToolsFramework.GizmoComponentHitTarget
class UGizmoComponentHitTarget : public UObject
{
public:
	uint8                                        Pad_16F6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   Component;                                         // 0x30(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16F7[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGizmoComponentHitTarget* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class InteractiveToolsFramework.InputBehaviorSet
class UInputBehaviorSet : public UObject
{
public:
	TArray<struct FBehaviorInfo>                 Behaviors;                                         // 0x28(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UInputBehaviorSet* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.InputBehaviorSource
class IInputBehaviorSource : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInputBehaviorSource* GetDefaultObj();

};

// 0x88 (0xB0 - 0x28)
// Class InteractiveToolsFramework.InputRouter
class UInputRouter : public UObject
{
public:
	bool                                         bAutoInvalidateOnHover;                            // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoInvalidateOnCapture;                          // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16FF[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputBehaviorSet*                     ActiveInputBehaviors;                              // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1700[0x70];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInputRouter* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class InteractiveToolsFramework.InteractionMechanic
class UInteractionMechanic : public UObject
{
public:
	uint8                                        Pad_1701[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInteractionMechanic* GetDefaultObj();

};

// 0x90 (0xB8 - 0x28)
// Class InteractiveToolsFramework.InteractiveGizmoManager
class UInteractiveGizmoManager : public UObject
{
public:
	uint8                                        Pad_1702[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FActiveGizmo>                  ActiveGizmos;                                      // 0x30(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1703[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, class UInteractiveGizmoBuilder*> GizmoBuilders;                                     // 0x58(0x50)(Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1704[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInteractiveGizmoManager* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.ToolContextTransactionProvider
class IToolContextTransactionProvider : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IToolContextTransactionProvider* GetDefaultObj();

};

// 0x110 (0x138 - 0x28)
// Class InteractiveToolsFramework.InteractiveToolManager
class UInteractiveToolManager : public UObject
{
public:
	uint8                                        Pad_1705[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInteractiveTool*                      ActiveLeftTool;                                    // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInteractiveTool*                      ActiveRightTool;                                   // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1706[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, class UInteractiveToolBuilder*> ToolBuilders;                                      // 0x90(0x50)(Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1707[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInteractiveToolManager* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.ToolFrameworkComponent
class IToolFrameworkComponent : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IToolFrameworkComponent* GetDefaultObj();

};

// 0x70 (0x98 - 0x28)
// Class InteractiveToolsFramework.InteractiveToolsContext
class UInteractiveToolsContext : public UObject
{
public:
	uint8                                        Pad_1708[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputRouter*                          InputRouter;                                       // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInteractiveToolManager*               ToolManager;                                       // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInteractiveGizmoManager*              GizmoManager;                                      // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UInteractiveToolManager> ToolManagerClass;                                  // 0x70(0x28)(Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UInteractiveToolsContext* GetDefaultObj();

};

// 0x18 (0x240 - 0x228)
// Class InteractiveToolsFramework.IntervalGizmoActor
class AIntervalGizmoActor : public AGizmoActor
{
public:
	class UGizmoLineHandleComponent*             UpIntervalComponent;                               // 0x228(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGizmoLineHandleComponent*             DownIntervalComponent;                             // 0x230(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGizmoLineHandleComponent*             ForwardIntervalComponent;                          // 0x238(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AIntervalGizmoActor* GetDefaultObj();

};

// 0x98 (0xC0 - 0x28)
// Class InteractiveToolsFramework.IntervalGizmoBuilder
class UIntervalGizmoBuilder : public UInteractiveGizmoBuilder
{
public:
	uint8                                        Pad_170D[0x98];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UIntervalGizmoBuilder* GetDefaultObj();

};

// 0xF8 (0x130 - 0x38)
// Class InteractiveToolsFramework.IntervalGizmo
class UIntervalGizmo : public UInteractiveGizmo
{
public:
	class UGizmoTransformChangeStateTarget*      StateTarget;                                       // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1710[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UTransformProxy*                       TransformProxy;                                    // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UPrimitiveComponent*>           ActiveComponents;                                  // 0x58(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UInteractiveGizmo*>             ActiveGizmos;                                      // 0x68(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1715[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UGizmoComponentAxisSource*             AxisYSource;                                       // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoComponentAxisSource*             AxisZSource;                                       // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1716[0x90];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UIntervalGizmo* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class InteractiveToolsFramework.GizmoBaseFloatParameterSource
class UGizmoBaseFloatParameterSource : public UObject
{
public:
	uint8                                        Pad_1718[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGizmoBaseFloatParameterSource* GetDefaultObj();

};

// 0x18 (0x60 - 0x48)
// Class InteractiveToolsFramework.GizmoAxisIntervalParameterSource
class UGizmoAxisIntervalParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	TScriptInterface<class IGizmoFloatParameterSource> FloatParameterSource;                              // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	float                                        MinParameter;                                      // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxParameter;                                      // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGizmoAxisIntervalParameterSource* GetDefaultObj();

};

// 0xE0 (0x110 - 0x30)
// Class InteractiveToolsFramework.KeyAsModifierInputBehavior
class UKeyAsModifierInputBehavior : public UInputBehavior
{
public:
	uint8                                        Pad_171B[0xE0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UKeyAsModifierInputBehavior* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class InteractiveToolsFramework.MeshSurfacePointToolBuilder
class UMeshSurfacePointToolBuilder : public UInteractiveToolBuilder
{
public:
	uint8                                        Pad_171D[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshSurfacePointToolBuilder* GetDefaultObj();

};

// 0x68 (0x98 - 0x30)
// Class InteractiveToolsFramework.MouseHoverBehavior
class UMouseHoverBehavior : public UInputBehavior
{
public:
	uint8                                        Pad_171E[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMouseHoverBehavior* GetDefaultObj();

};

// 0xB0 (0x130 - 0x80)
// Class InteractiveToolsFramework.MultiClickSequenceInputBehavior
class UMultiClickSequenceInputBehavior : public UAnyButtonInputBehavior
{
public:
	uint8                                        Pad_171F[0xB0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMultiClickSequenceInputBehavior* GetDefaultObj();

};

// 0x10 (0x90 - 0x80)
// Class InteractiveToolsFramework.MultiSelectionTool
class UMultiSelectionTool : public UInteractiveTool
{
public:
	uint8                                        Pad_1722[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMultiSelectionTool* GetDefaultObj();

};

// 0x10 (0x58 - 0x48)
// Class InteractiveToolsFramework.GizmoLocalFloatParameterSource
class UGizmoLocalFloatParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	float                                        Value;                                             // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGizmoFloatParameterChange            LastChange;                                        // 0x4C(0x8)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1723[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGizmoLocalFloatParameterSource* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class InteractiveToolsFramework.GizmoBaseVec2ParameterSource
class UGizmoBaseVec2ParameterSource : public UObject
{
public:
	uint8                                        Pad_1724[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGizmoBaseVec2ParameterSource* GetDefaultObj();

};

// 0x18 (0x60 - 0x48)
// Class InteractiveToolsFramework.GizmoLocalVec2ParameterSource
class UGizmoLocalVec2ParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
	struct FVector2D                             Value;                                             // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGizmoVec2ParameterChange             LastChange;                                        // 0x50(0x10)(NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGizmoLocalVec2ParameterSource* GetDefaultObj();

};

// 0xC8 (0x110 - 0x48)
// Class InteractiveToolsFramework.GizmoAxisTranslationParameterSource
class UGizmoAxisTranslationParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	uint8                                        Pad_1726[0x48];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IGizmoAxisSource>     AxisSource;                                        // 0x90(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TScriptInterface<class IGizmoTransformSource> TransformSource;                                   // 0xA0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	float                                        Parameter;                                         // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGizmoFloatParameterChange            LastChange;                                        // 0xB4(0x8)(NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               CurTranslationAxis;                                // 0xBC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CurTranslationOrigin;                              // 0xC8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1727[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InitialTransform;                                  // 0xE0(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGizmoAxisTranslationParameterSource* GetDefaultObj();

};

// 0xE8 (0x130 - 0x48)
// Class InteractiveToolsFramework.GizmoPlaneTranslationParameterSource
class UGizmoPlaneTranslationParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
	uint8                                        Pad_1728[0x48];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IGizmoAxisSource>     AxisSource;                                        // 0x90(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TScriptInterface<class IGizmoTransformSource> TransformSource;                                   // 0xA0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FVector2D                             Parameter;                                         // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGizmoVec2ParameterChange             LastChange;                                        // 0xB8(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               CurTranslationOrigin;                              // 0xC8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CurTranslationNormal;                              // 0xD4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CurTranslationAxisX;                               // 0xE0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CurTranslationAxisY;                               // 0xEC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_172D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InitialTransform;                                  // 0x100(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGizmoPlaneTranslationParameterSource* GetDefaultObj();

};

// 0x78 (0xC0 - 0x48)
// Class InteractiveToolsFramework.GizmoAxisRotationParameterSource
class UGizmoAxisRotationParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	TScriptInterface<class IGizmoAxisSource>     AxisSource;                                        // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TScriptInterface<class IGizmoTransformSource> TransformSource;                                   // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	float                                        Angle;                                             // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGizmoFloatParameterChange            LastChange;                                        // 0x6C(0x8)(NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               CurRotationAxis;                                   // 0x74(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CurRotationOrigin;                                 // 0x80(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1733[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InitialTransform;                                  // 0x90(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGizmoAxisRotationParameterSource* GetDefaultObj();

};

// 0xA8 (0xF0 - 0x48)
// Class InteractiveToolsFramework.GizmoUniformScaleParameterSource
class UGizmoUniformScaleParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
	TScriptInterface<class IGizmoAxisSource>     AxisSource;                                        // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TScriptInterface<class IGizmoTransformSource> TransformSource;                                   // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	float                                        ScaleMultiplier;                                   // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Parameter;                                         // 0x6C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGizmoVec2ParameterChange             LastChange;                                        // 0x74(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               CurScaleOrigin;                                    // 0x84(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CurScaleNormal;                                    // 0x90(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CurScaleAxisX;                                     // 0x9C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CurScaleAxisY;                                     // 0xA8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1737[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InitialTransform;                                  // 0xC0(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGizmoUniformScaleParameterSource* GetDefaultObj();

};

// 0x78 (0xC0 - 0x48)
// Class InteractiveToolsFramework.GizmoAxisScaleParameterSource
class UGizmoAxisScaleParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	TScriptInterface<class IGizmoAxisSource>     AxisSource;                                        // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TScriptInterface<class IGizmoTransformSource> TransformSource;                                   // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	float                                        ScaleMultiplier;                                   // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Parameter;                                         // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGizmoFloatParameterChange            LastChange;                                        // 0x70(0x8)(NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               CurScaleAxis;                                      // 0x78(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CurScaleOrigin;                                    // 0x84(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            InitialTransform;                                  // 0x90(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGizmoAxisScaleParameterSource* GetDefaultObj();

};

// 0xE8 (0x130 - 0x48)
// Class InteractiveToolsFramework.GizmoPlaneScaleParameterSource
class UGizmoPlaneScaleParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
	uint8                                        Pad_173B[0x48];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IGizmoAxisSource>     AxisSource;                                        // 0x90(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TScriptInterface<class IGizmoTransformSource> TransformSource;                                   // 0xA0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	float                                        ScaleMultiplier;                                   // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Parameter;                                         // 0xB4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGizmoVec2ParameterChange             LastChange;                                        // 0xBC(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               CurScaleOrigin;                                    // 0xCC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CurScaleNormal;                                    // 0xD8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CurScaleAxisX;                                     // 0xE4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CurScaleAxisY;                                     // 0xF0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_173E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InitialTransform;                                  // 0x100(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGizmoPlaneScaleParameterSource* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.PlanePositionGizmoBuilder
class UPlanePositionGizmoBuilder : public UInteractiveGizmoBuilder
{
public:

	static class UClass* StaticClass();
	static class UPlanePositionGizmoBuilder* GetDefaultObj();

};

// 0xC8 (0x100 - 0x38)
// Class InteractiveToolsFramework.PlanePositionGizmo
class UPlanePositionGizmo : public UInteractiveGizmo
{
public:
	uint8                                        Pad_1741[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IGizmoAxisSource>     AxisSource;                                        // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TScriptInterface<class IGizmoVec2ParameterSource> ParameterSource;                                   // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TScriptInterface<class IGizmoClickTarget>    HitTarget;                                         // 0x68(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TScriptInterface<class IGizmoStateTarget>    StateTarget;                                       // 0x78(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bEnableSignedAxis;                                 // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFlipX;                                            // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFlipY;                                            // 0x8A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInInteraction;                                    // 0x8B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InteractionOrigin;                                 // 0x8C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InteractionNormal;                                 // 0x98(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InteractionAxisX;                                  // 0xA4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InteractionAxisY;                                  // 0xB0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InteractionStartPoint;                             // 0xBC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InteractionCurPoint;                               // 0xC8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             InteractionStartParameter;                         // 0xD4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             InteractionCurParameter;                           // 0xDC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ParameterSigns;                                    // 0xE4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1743[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPlanePositionGizmo* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class InteractiveToolsFramework.SelectionSet
class USelectionSet : public UObject
{
public:
	uint8                                        Pad_1745[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USelectionSet* GetDefaultObj();

};

// 0x40 (0x80 - 0x40)
// Class InteractiveToolsFramework.MeshSelectionSet
class UMeshSelectionSet : public USelectionSet
{
public:
	TArray<int32>                                Vertices;                                          // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                Edges;                                             // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                Faces;                                             // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                Groups;                                            // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMeshSelectionSet* GetDefaultObj();

};

// 0xB0 (0x130 - 0x80)
// Class InteractiveToolsFramework.SingleClickInputBehavior
class USingleClickInputBehavior : public UAnyButtonInputBehavior
{
public:
	uint8                                        Pad_1746[0x40];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         HitTestOnRelease;                                  // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1747[0x6F];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USingleClickInputBehavior* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.SingleClickToolBuilder
class USingleClickToolBuilder : public UInteractiveToolBuilder
{
public:

	static class UClass* StaticClass();
	static class USingleClickToolBuilder* GetDefaultObj();

};

// 0x8 (0x88 - 0x80)
// Class InteractiveToolsFramework.SingleClickTool
class USingleClickTool : public UInteractiveTool
{
public:
	uint8                                        Pad_1748[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USingleClickTool* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class InteractiveToolsFramework.GizmoNilStateTarget
class UGizmoNilStateTarget : public UObject
{
public:
	uint8                                        Pad_1749[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGizmoNilStateTarget* GetDefaultObj();

};

// 0x88 (0xB0 - 0x28)
// Class InteractiveToolsFramework.GizmoLambdaStateTarget
class UGizmoLambdaStateTarget : public UObject
{
public:
	uint8                                        Pad_174B[0x88];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGizmoLambdaStateTarget* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class InteractiveToolsFramework.GizmoObjectModifyStateTarget
class UGizmoObjectModifyStateTarget : public UObject
{
public:
	uint8                                        Pad_174C[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGizmoObjectModifyStateTarget* GetDefaultObj();

};

// 0xB8 (0xE0 - 0x28)
// Class InteractiveToolsFramework.GizmoTransformChangeStateTarget
class UGizmoTransformChangeStateTarget : public UObject
{
public:
	uint8                                        Pad_1750[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IToolContextTransactionProvider> TransactionManager;                                // 0x50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_1752[0x80];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGizmoTransformChangeStateTarget* GetDefaultObj();

};

// 0x80 (0x2A8 - 0x228)
// Class InteractiveToolsFramework.TransformGizmoActor
class ATransformGizmoActor : public AGizmoActor
{
public:
	class UPrimitiveComponent*                   TranslateX;                                        // 0x228(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   TranslateY;                                        // 0x230(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   TranslateZ;                                        // 0x238(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   TranslateYZ;                                       // 0x240(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   TranslateXZ;                                       // 0x248(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   TranslateXY;                                       // 0x250(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   RotateX;                                           // 0x258(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   RotateY;                                           // 0x260(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   RotateZ;                                           // 0x268(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   UniformScale;                                      // 0x270(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   AxisScaleX;                                        // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   AxisScaleY;                                        // 0x280(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   AxisScaleZ;                                        // 0x288(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   PlaneScaleYZ;                                      // 0x290(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   PlaneScaleXZ;                                      // 0x298(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   PlaneScaleXY;                                      // 0x2A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ATransformGizmoActor* GetDefaultObj();

};

// 0x98 (0xC0 - 0x28)
// Class InteractiveToolsFramework.TransformGizmoBuilder
class UTransformGizmoBuilder : public UInteractiveGizmoBuilder
{
public:
	uint8                                        Pad_1757[0x98];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTransformGizmoBuilder* GetDefaultObj();

};

// 0x148 (0x180 - 0x38)
// Class InteractiveToolsFramework.TransformGizmo
class UTransformGizmo : public UInteractiveGizmo
{
public:
	uint8                                        Pad_175A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTransformProxy*                       ActiveTarget;                                      // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSnapToWorldGrid;                                  // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseContextCoordinateSystem;                       // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_175C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EToolContextCoordinateSystem      CurrentCoordinateSystem;                           // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_175E[0x90];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPrimitiveComponent*>           ActiveComponents;                                  // 0xE0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UPrimitiveComponent*>           NonuniformScaleComponents;                         // 0xF0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UInteractiveGizmo*>             ActiveGizmos;                                      // 0x100(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_175F[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UGizmoConstantFrameAxisSource*         CameraAxisSource;                                  // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoComponentAxisSource*             AxisXSource;                                       // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoComponentAxisSource*             AxisYSource;                                       // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoComponentAxisSource*             AxisZSource;                                       // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoComponentAxisSource*             UnitAxisXSource;                                   // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoComponentAxisSource*             UnitAxisYSource;                                   // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoComponentAxisSource*             UnitAxisZSource;                                   // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoTransformChangeStateTarget*      StateTarget;                                       // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoScaledTransformSource*           ScaledTransformSource;                             // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1763[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTransformGizmo* GetDefaultObj();

};

// 0xC8 (0xF0 - 0x28)
// Class InteractiveToolsFramework.TransformProxy
class UTransformProxy : public UObject
{
public:
	uint8                                        Pad_1767[0x48];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bRotatePerObject;                                  // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetPivotMode;                                     // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1769[0x1E];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            SharedTransform;                                   // 0x90(0x30)(IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FTransform                            InitialSharedTransform;                            // 0xC0(0x30)(IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UTransformProxy* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class InteractiveToolsFramework.GizmoBaseTransformSource
class UGizmoBaseTransformSource : public UObject
{
public:
	uint8                                        Pad_176D[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGizmoBaseTransformSource* GetDefaultObj();

};

// 0x10 (0x58 - 0x48)
// Class InteractiveToolsFramework.GizmoComponentWorldTransformSource
class UGizmoComponentWorldTransformSource : public UGizmoBaseTransformSource
{
public:
	class USceneComponent*                       Component;                                         // 0x48(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bModifyComponentOnTransform;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1770[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGizmoComponentWorldTransformSource* GetDefaultObj();

};

// 0x98 (0xE0 - 0x48)
// Class InteractiveToolsFramework.GizmoScaledTransformSource
class UGizmoScaledTransformSource : public UGizmoBaseTransformSource
{
public:
	TScriptInterface<class IGizmoTransformSource> ChildTransformSource;                              // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_1771[0x88];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGizmoScaledTransformSource* GetDefaultObj();

};

// 0x8 (0x50 - 0x48)
// Class InteractiveToolsFramework.GizmoTransformProxyTransformSource
class UGizmoTransformProxyTransformSource : public UGizmoBaseTransformSource
{
public:
	class UTransformProxy*                       Proxy;                                             // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGizmoTransformProxyTransformSource* GetDefaultObj();

};

}


