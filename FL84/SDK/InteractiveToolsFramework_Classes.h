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
	 * Class InteractiveToolsFramework.InputBehavior
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UInputBehavior : public UObject
	{
	public:
		unsigned char                                              UnknownData_EWLQ[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.AnyButtonInputBehavior
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UAnyButtonInputBehavior : public UInputBehavior
	{
	public:
		unsigned char                                              UnknownData_15HF[0x50];                                  // 0x0030(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.InteractiveGizmoBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInteractiveGizmoBuilder : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.AxisAngleGizmoBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAxisAngleGizmoBuilder : public UInteractiveGizmoBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.InteractiveGizmo
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UInteractiveGizmo : public UObject
	{
	public:
		unsigned char                                              UnknownData_LSOS[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInputBehaviorSet*                                   InputBehaviors;                                          // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.AxisAngleGizmo
	 * Size -> 0x00B8 (FullSize[0x00F0] - InheritedSize[0x0038])
	 */
	class UAxisAngleGizmo : public UInteractiveGizmo
	{
	public:
		unsigned char                                              UnknownData_11NG[0x10];                                  // 0x0038(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              AxisSource[0x10];                                        // 0x0048(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              AngleSource[0x10];                                       // 0x0058(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              HitTarget[0x10];                                         // 0x0068(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              StateTarget[0x10];                                       // 0x0078(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		bool                                                       bInInteraction;                                          // 0x0088(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LMQL[0x3];                                   // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             RotationOrigin;                                          // 0x008C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             RotationAxis;                                            // 0x0098(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             RotationPlaneX;                                          // 0x00A4(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             RotationPlaneY;                                          // 0x00B0(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InteractionStartPoint;                                   // 0x00BC(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InteractionCurPoint;                                     // 0x00C8(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InteractionStartAngle;                                   // 0x00D4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InteractionCurAngle;                                     // 0x00D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RLQR[0x14];                                  // 0x00DC(0x0014) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.AxisPositionGizmoBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAxisPositionGizmoBuilder : public UInteractiveGizmoBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.AxisPositionGizmo
	 * Size -> 0x00A0 (FullSize[0x00D8] - InheritedSize[0x0038])
	 */
	class UAxisPositionGizmo : public UInteractiveGizmo
	{
	public:
		unsigned char                                              UnknownData_9T0Y[0x10];                                  // 0x0038(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              AxisSource[0x10];                                        // 0x0048(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              ParameterSource[0x10];                                   // 0x0058(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              HitTarget[0x10];                                         // 0x0068(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              StateTarget[0x10];                                       // 0x0078(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		bool                                                       bEnableSignedAxis;                                       // 0x0088(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInInteraction;                                          // 0x0089(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RTO4[0x2];                                   // 0x008A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             InteractionOrigin;                                       // 0x008C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InteractionAxis;                                         // 0x0098(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InteractionStartPoint;                                   // 0x00A4(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InteractionCurPoint;                                     // 0x00B0(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InteractionStartParameter;                               // 0x00BC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InteractionCurParameter;                                 // 0x00C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ParameterSign;                                           // 0x00C4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NF18[0x10];                                  // 0x00C8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoConstantAxisSource
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UGizmoConstantAxisSource : public UObject
	{
	public:
		unsigned char                                              UnknownData_FDIH[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Origin;                                                  // 0x0030(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Direction;                                               // 0x003C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoConstantFrameAxisSource
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UGizmoConstantFrameAxisSource : public UObject
	{
	public:
		unsigned char                                              UnknownData_ACF3[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Origin;                                                  // 0x0030(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Direction;                                               // 0x003C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TangentX;                                                // 0x0048(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TangentY;                                                // 0x0054(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoWorldAxisSource
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UGizmoWorldAxisSource : public UObject
	{
	public:
		unsigned char                                              UnknownData_CNV2[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Origin;                                                  // 0x0030(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AxisIndex;                                               // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoComponentAxisSource
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UGizmoComponentAxisSource : public UObject
	{
	public:
		unsigned char                                              UnknownData_PK0K[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     Component;                                               // 0x0030(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AxisIndex;                                               // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLocalAxes;                                              // 0x003C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N8UM[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.InteractiveToolPropertySet
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UInteractiveToolPropertySet : public UObject
	{
	public:
		unsigned char                                              UnknownData_2M2R[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             CachedProperties;                                        // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsPropertySetEnabled;                                   // 0x0048(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2LH5[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.BrushBaseProperties
	 * Size -> 0x0018 (FullSize[0x0068] - InheritedSize[0x0050])
	 */
	class UBrushBaseProperties : public UInteractiveToolPropertySet
	{
	public:
		float                                                      BrushSize;                                               // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpecifyRadius;                                          // 0x0054(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GPWG[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BrushRadius;                                             // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BrushStrength;                                           // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BrushFalloffAmount;                                      // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowStrength;                                           // 0x0064(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowFalloff;                                            // 0x0065(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B4SY[0x2];                                   // 0x0066(0x0002) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.InteractiveTool
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UInteractiveTool : public UObject
	{
	public:
		unsigned char                                              UnknownData_EBYO[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInputBehaviorSet*                                   InputBehaviors;                                          // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UObject*>                                     ToolPropertyObjects;                                     // 0x0050(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FEEM[0x20];                                  // 0x0060(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.SingleSelectionTool
	 * Size -> 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
	 */
	class USingleSelectionTool : public UInteractiveTool
	{
	public:
		unsigned char                                              UnknownData_8437[0x8];                                   // 0x0080(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.MeshSurfacePointTool
	 * Size -> 0x0038 (FullSize[0x00C0] - InheritedSize[0x0088])
	 */
	class UMeshSurfacePointTool : public USingleSelectionTool
	{
	public:
		unsigned char                                              UnknownData_RPZU[0x38];                                  // 0x0088(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.BaseBrushTool
	 * Size -> 0x00F8 (FullSize[0x01B8] - InheritedSize[0x00C0])
	 */
	class UBaseBrushTool : public UMeshSurfacePointTool
	{
	public:
		class UBrushBaseProperties*                                BrushProperties;                                         // 0x00C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInBrushStroke;                                          // 0x00C8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_27HL[0x3];                                   // 0x00C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBrushStampData                                     LastBrushStamp;                                          // 0x00CC(0x00A8) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BJZX[0x14];                                  // 0x0174(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              PropertyClass[0x28];                                     // 0x0188(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		class UBrushStampIndicator*                                BrushStampIndicator;                                     // 0x01B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.BrushStampIndicatorBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBrushStampIndicatorBuilder : public UInteractiveGizmoBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.BrushStampIndicator
	 * Size -> 0x0078 (FullSize[0x00B0] - InheritedSize[0x0038])
	 */
	class UBrushStampIndicator : public UInteractiveGizmo
	{
	public:
		float                                                      BrushRadius;                                             // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BrushFalloff;                                            // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             BrushPosition;                                           // 0x0040(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             BrushNormal;                                             // 0x004C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawIndicatorLines;                                     // 0x0058(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawRadiusCircle;                                       // 0x0059(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawFalloffCircle;                                      // 0x005A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9W40[0x1];                                   // 0x005B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SampleStepCount;                                         // 0x005C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        LineColor;                                               // 0x0060(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LineThickness;                                           // 0x0070(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDepthTested;                                            // 0x0074(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawSecondaryLines;                                     // 0x0075(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TN0H[0x2];                                   // 0x0076(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SecondaryLineThickness;                                  // 0x0078(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        SecondaryLineColor;                                      // 0x007C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_32XO[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimitiveComponent*                                 AttachedComponent;                                       // 0x0090(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3QMI[0x18];                                  // 0x0098(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.ClickDragInputBehavior
	 * Size -> 0x00C0 (FullSize[0x0140] - InheritedSize[0x0080])
	 */
	class UClickDragInputBehavior : public UAnyButtonInputBehavior
	{
	public:
		unsigned char                                              UnknownData_EGBJ[0xA0];                                  // 0x0080(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bUpdateModifiersDuringDrag;                              // 0x0120(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1JW0[0x1F];                                  // 0x0121(0x001F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.LocalClickDragInputBehavior
	 * Size -> 0x0140 (FullSize[0x0280] - InheritedSize[0x0140])
	 */
	class ULocalClickDragInputBehavior : public UClickDragInputBehavior
	{
	public:
		unsigned char                                              UnknownData_V5H6[0x140];                                 // 0x0140(0x0140) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.InteractiveToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInteractiveToolBuilder : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.ClickDragToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UClickDragToolBuilder : public UInteractiveToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.ClickDragTool
	 * Size -> 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
	 */
	class UClickDragTool : public UInteractiveTool
	{
	public:
		unsigned char                                              UnknownData_RDR3[0x8];                                   // 0x0080(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.InternalToolFrameworkActor
	 * Size -> 0x0000 (FullSize[0x0228] - InheritedSize[0x0228])
	 */
	class AInternalToolFrameworkActor : public AActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoActor
	 * Size -> 0x0000 (FullSize[0x0228] - InheritedSize[0x0228])
	 */
	class AGizmoActor : public AInternalToolFrameworkActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoBaseComponent
	 * Size -> 0x0020 (FullSize[0x0560] - InheritedSize[0x0540])
	 */
	class UGizmoBaseComponent : public UPrimitiveComponent
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0540(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HoverSizeMultiplier;                                     // 0x0550(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PixelHitDistanceThreshold;                               // 0x0554(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_590P[0x8];                                   // 0x0558(0x0008) MISSED OFFSET (PADDING)

	public:
		void UpdateWorldLocalState(bool bWorldIn);
		void UpdateHoverState(bool bHoveringIn);
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoArrowComponent
	 * Size -> 0x0020 (FullSize[0x0580] - InheritedSize[0x0560])
	 */
	class UGizmoArrowComponent : public UGizmoBaseComponent
	{
	public:
		struct FVector                                             Direction;                                               // 0x0560(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Gap;                                                     // 0x056C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Length;                                                  // 0x0570(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x0574(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L95A[0x8];                                   // 0x0578(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoBoxComponent
	 * Size -> 0x0040 (FullSize[0x05A0] - InheritedSize[0x0560])
	 */
	class UGizmoBoxComponent : public UGizmoBaseComponent
	{
	public:
		struct FVector                                             Origin;                                                  // 0x0560(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GC6X[0x4];                                   // 0x056C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Rotation;                                                // 0x0570(0x0010) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Dimensions;                                              // 0x0580(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LineThickness;                                           // 0x058C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRemoveHiddenLines;                                      // 0x0590(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableAxisFlip;                                         // 0x0591(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X7X7[0xE];                                   // 0x0592(0x000E) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoCircleComponent
	 * Size -> 0x0020 (FullSize[0x0580] - InheritedSize[0x0560])
	 */
	class UGizmoCircleComponent : public UGizmoBaseComponent
	{
	public:
		struct FVector                                             Normal;                                                  // 0x0560(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x056C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x0570(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumSides;                                                // 0x0574(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bViewAligned;                                            // 0x0578(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyAllowFrontFacingHits;                               // 0x0579(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CO7B[0x6];                                   // 0x057A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoTransformSource
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGizmoTransformSource : public UInterface
	{
	public:
		void SetTransform(const struct FTransform& NewTransform);
		struct FTransform GetTransform();
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoAxisSource
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGizmoAxisSource : public UInterface
	{
	public:
		bool HasTangentVectors();
		void GetTangentVectors(struct FVector* TangentXOut, struct FVector* TangentYOut);
		struct FVector GetOrigin();
		struct FVector GetDirection();
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoClickTarget
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGizmoClickTarget : public UInterface
	{
	public:
		void UpdateHoverState(bool bHovering);
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoStateTarget
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGizmoStateTarget : public UInterface
	{
	public:
		void EndUpdate();
		void BeginUpdate();
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoFloatParameterSource
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGizmoFloatParameterSource : public UInterface
	{
	public:
		void SetParameter(float NewValue);
		float GetParameter();
		void EndModify();
		void BeginModify();
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoVec2ParameterSource
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGizmoVec2ParameterSource : public UInterface
	{
	public:
		void SetParameter(const struct FVector2D& NewValue);
		struct FVector2D GetParameter();
		void EndModify();
		void BeginModify();
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoLineHandleComponent
	 * Size -> 0x0030 (FullSize[0x0590] - InheritedSize[0x0560])
	 */
	class UGizmoLineHandleComponent : public UGizmoBaseComponent
	{
	public:
		struct FVector                                             Normal;                                                  // 0x0560(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HandleSize;                                              // 0x056C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x0570(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Direction;                                               // 0x0574(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Length;                                                  // 0x0580(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bImageScale;                                             // 0x0584(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1IF7[0xB];                                   // 0x0585(0x000B) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoRectangleComponent
	 * Size -> 0x0030 (FullSize[0x0590] - InheritedSize[0x0560])
	 */
	class UGizmoRectangleComponent : public UGizmoBaseComponent
	{
	public:
		struct FVector                                             DirectionX;                                              // 0x0560(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             DirectionY;                                              // 0x056C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OffsetX;                                                 // 0x0578(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OffsetY;                                                 // 0x057C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LengthX;                                                 // 0x0580(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LengthY;                                                 // 0x0584(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x0588(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SegmentFlags;                                            // 0x058C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H43N[0x3];                                   // 0x058D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoLambdaHitTarget
	 * Size -> 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
	 */
	class UGizmoLambdaHitTarget : public UObject
	{
	public:
		unsigned char                                              UnknownData_DEP0[0x88];                                  // 0x0028(0x0088) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoComponentHitTarget
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UGizmoComponentHitTarget : public UObject
	{
	public:
		unsigned char                                              UnknownData_QPDL[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimitiveComponent*                                 Component;                                               // 0x0030(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7UWR[0x48];                                  // 0x0038(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.InputBehaviorSet
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UInputBehaviorSet : public UObject
	{
	public:
		TArray<struct FBehaviorInfo>                               Behaviors;                                               // 0x0028(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.InputBehaviorSource
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInputBehaviorSource : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.InputRouter
	 * Size -> 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
	 */
	class UInputRouter : public UObject
	{
	public:
		bool                                                       bAutoInvalidateOnHover;                                  // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoInvalidateOnCapture;                                // 0x0029(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KB0J[0xE];                                   // 0x002A(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInputBehaviorSet*                                   ActiveInputBehaviors;                                    // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PNJT[0x70];                                  // 0x0040(0x0070) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.InteractionMechanic
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UInteractionMechanic : public UObject
	{
	public:
		unsigned char                                              UnknownData_WHUZ[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.InteractiveGizmoManager
	 * Size -> 0x0090 (FullSize[0x00B8] - InheritedSize[0x0028])
	 */
	class UInteractiveGizmoManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_IZ3L[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FActiveGizmo>                                ActiveGizmos;                                            // 0x0030(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UYZU[0x18];                                  // 0x0040(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, class UInteractiveGizmoBuilder*>       GizmoBuilders;                                           // 0x0058(0x0050) Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RQS2[0x10];                                  // 0x00A8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.ToolContextTransactionProvider
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UToolContextTransactionProvider : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.InteractiveToolManager
	 * Size -> 0x0110 (FullSize[0x0138] - InheritedSize[0x0028])
	 */
	class UInteractiveToolManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_C44I[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInteractiveTool*                                    ActiveLeftTool;                                          // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInteractiveTool*                                    ActiveRightTool;                                         // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CBCM[0x50];                                  // 0x0040(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, class UInteractiveToolBuilder*>        ToolBuilders;                                            // 0x0090(0x0050) Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LC8Q[0x58];                                  // 0x00E0(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.ToolFrameworkComponent
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UToolFrameworkComponent : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.InteractiveToolsContext
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class UInteractiveToolsContext : public UObject
	{
	public:
		unsigned char                                              UnknownData_BF0Y[0x30];                                  // 0x0028(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInputRouter*                                        InputRouter;                                             // 0x0058(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInteractiveToolManager*                             ToolManager;                                             // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInteractiveGizmoManager*                            GizmoManager;                                            // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ToolManagerClass[0x28];                                  // 0x0070(0x0028) UNKNOWN PROPERTY: SoftClassProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.IntervalGizmoActor
	 * Size -> 0x0018 (FullSize[0x0240] - InheritedSize[0x0228])
	 */
	class AIntervalGizmoActor : public AGizmoActor
	{
	public:
		class UGizmoLineHandleComponent*                           UpIntervalComponent;                                     // 0x0228(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGizmoLineHandleComponent*                           DownIntervalComponent;                                   // 0x0230(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGizmoLineHandleComponent*                           ForwardIntervalComponent;                                // 0x0238(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.IntervalGizmoBuilder
	 * Size -> 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
	 */
	class UIntervalGizmoBuilder : public UInteractiveGizmoBuilder
	{
	public:
		unsigned char                                              UnknownData_84CO[0x98];                                  // 0x0028(0x0098) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.IntervalGizmo
	 * Size -> 0x00F8 (FullSize[0x0130] - InheritedSize[0x0038])
	 */
	class UIntervalGizmo : public UInteractiveGizmo
	{
	public:
		class UGizmoTransformChangeStateTarget*                    StateTarget;                                             // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X71H[0x10];                                  // 0x0040(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTransformProxy*                                     TransformProxy;                                          // 0x0050(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UPrimitiveComponent*>                         ActiveComponents;                                        // 0x0058(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UInteractiveGizmo*>                           ActiveGizmos;                                            // 0x0068(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_B4Q6[0x18];                                  // 0x0078(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGizmoComponentAxisSource*                           AxisYSource;                                             // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGizmoComponentAxisSource*                           AxisZSource;                                             // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UP19[0x90];                                  // 0x00A0(0x0090) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoBaseFloatParameterSource
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UGizmoBaseFloatParameterSource : public UObject
	{
	public:
		unsigned char                                              UnknownData_QVMJ[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoAxisIntervalParameterSource
	 * Size -> 0x0018 (FullSize[0x0060] - InheritedSize[0x0048])
	 */
	class UGizmoAxisIntervalParameterSource : public UGizmoBaseFloatParameterSource
	{
	public:
		unsigned char                                              FloatParameterSource[0x10];                              // 0x0048(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		float                                                      MinParameter;                                            // 0x0058(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxParameter;                                            // 0x005C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.KeyAsModifierInputBehavior
	 * Size -> 0x00E0 (FullSize[0x0110] - InheritedSize[0x0030])
	 */
	class UKeyAsModifierInputBehavior : public UInputBehavior
	{
	public:
		unsigned char                                              UnknownData_2UEU[0xE0];                                  // 0x0030(0x00E0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.MeshSurfacePointToolBuilder
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UMeshSurfacePointToolBuilder : public UInteractiveToolBuilder
	{
	public:
		unsigned char                                              UnknownData_BXGV[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.MouseHoverBehavior
	 * Size -> 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
	 */
	class UMouseHoverBehavior : public UInputBehavior
	{
	public:
		unsigned char                                              UnknownData_WU11[0x68];                                  // 0x0030(0x0068) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.MultiClickSequenceInputBehavior
	 * Size -> 0x00B0 (FullSize[0x0130] - InheritedSize[0x0080])
	 */
	class UMultiClickSequenceInputBehavior : public UAnyButtonInputBehavior
	{
	public:
		unsigned char                                              UnknownData_A2D8[0xB0];                                  // 0x0080(0x00B0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.MultiSelectionTool
	 * Size -> 0x0010 (FullSize[0x0090] - InheritedSize[0x0080])
	 */
	class UMultiSelectionTool : public UInteractiveTool
	{
	public:
		unsigned char                                              UnknownData_1EW4[0x10];                                  // 0x0080(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoLocalFloatParameterSource
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class UGizmoLocalFloatParameterSource : public UGizmoBaseFloatParameterSource
	{
	public:
		float                                                      Value;                                                   // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGizmoFloatParameterChange                          LastChange;                                              // 0x004C(0x0008) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SRRX[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoBaseVec2ParameterSource
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UGizmoBaseVec2ParameterSource : public UObject
	{
	public:
		unsigned char                                              UnknownData_X4TB[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoLocalVec2ParameterSource
	 * Size -> 0x0018 (FullSize[0x0060] - InheritedSize[0x0048])
	 */
	class UGizmoLocalVec2ParameterSource : public UGizmoBaseVec2ParameterSource
	{
	public:
		struct FVector2D                                           Value;                                                   // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGizmoVec2ParameterChange                           LastChange;                                              // 0x0050(0x0010) NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoAxisTranslationParameterSource
	 * Size -> 0x00C8 (FullSize[0x0110] - InheritedSize[0x0048])
	 */
	class UGizmoAxisTranslationParameterSource : public UGizmoBaseFloatParameterSource
	{
	public:
		unsigned char                                              UnknownData_CGMI[0x48];                                  // 0x0048(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              AxisSource[0x10];                                        // 0x0090(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              TransformSource[0x10];                                   // 0x00A0(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		float                                                      Parameter;                                               // 0x00B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGizmoFloatParameterChange                          LastChange;                                              // 0x00B4(0x0008) NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             CurTranslationAxis;                                      // 0x00BC(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CurTranslationOrigin;                                    // 0x00C8(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z43L[0xC];                                   // 0x00D4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          InitialTransform;                                        // 0x00E0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoPlaneTranslationParameterSource
	 * Size -> 0x00E8 (FullSize[0x0130] - InheritedSize[0x0048])
	 */
	class UGizmoPlaneTranslationParameterSource : public UGizmoBaseVec2ParameterSource
	{
	public:
		unsigned char                                              UnknownData_MD47[0x48];                                  // 0x0048(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              AxisSource[0x10];                                        // 0x0090(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              TransformSource[0x10];                                   // 0x00A0(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		struct FVector2D                                           Parameter;                                               // 0x00B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGizmoVec2ParameterChange                           LastChange;                                              // 0x00B8(0x0010) NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             CurTranslationOrigin;                                    // 0x00C8(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CurTranslationNormal;                                    // 0x00D4(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CurTranslationAxisX;                                     // 0x00E0(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CurTranslationAxisY;                                     // 0x00EC(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OCVR[0x8];                                   // 0x00F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          InitialTransform;                                        // 0x0100(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoAxisRotationParameterSource
	 * Size -> 0x0078 (FullSize[0x00C0] - InheritedSize[0x0048])
	 */
	class UGizmoAxisRotationParameterSource : public UGizmoBaseFloatParameterSource
	{
	public:
		unsigned char                                              AxisSource[0x10];                                        // 0x0048(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              TransformSource[0x10];                                   // 0x0058(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		float                                                      Angle;                                                   // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGizmoFloatParameterChange                          LastChange;                                              // 0x006C(0x0008) NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             CurRotationAxis;                                         // 0x0074(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CurRotationOrigin;                                       // 0x0080(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_87E9[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          InitialTransform;                                        // 0x0090(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoUniformScaleParameterSource
	 * Size -> 0x00A8 (FullSize[0x00F0] - InheritedSize[0x0048])
	 */
	class UGizmoUniformScaleParameterSource : public UGizmoBaseVec2ParameterSource
	{
	public:
		unsigned char                                              AxisSource[0x10];                                        // 0x0048(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              TransformSource[0x10];                                   // 0x0058(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		float                                                      ScaleMultiplier;                                         // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Parameter;                                               // 0x006C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGizmoVec2ParameterChange                           LastChange;                                              // 0x0074(0x0010) NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             CurScaleOrigin;                                          // 0x0084(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CurScaleNormal;                                          // 0x0090(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CurScaleAxisX;                                           // 0x009C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CurScaleAxisY;                                           // 0x00A8(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LN2D[0xC];                                   // 0x00B4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          InitialTransform;                                        // 0x00C0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoAxisScaleParameterSource
	 * Size -> 0x0078 (FullSize[0x00C0] - InheritedSize[0x0048])
	 */
	class UGizmoAxisScaleParameterSource : public UGizmoBaseFloatParameterSource
	{
	public:
		unsigned char                                              AxisSource[0x10];                                        // 0x0048(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              TransformSource[0x10];                                   // 0x0058(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		float                                                      ScaleMultiplier;                                         // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Parameter;                                               // 0x006C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGizmoFloatParameterChange                          LastChange;                                              // 0x0070(0x0008) NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             CurScaleAxis;                                            // 0x0078(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CurScaleOrigin;                                          // 0x0084(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          InitialTransform;                                        // 0x0090(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoPlaneScaleParameterSource
	 * Size -> 0x00E8 (FullSize[0x0130] - InheritedSize[0x0048])
	 */
	class UGizmoPlaneScaleParameterSource : public UGizmoBaseVec2ParameterSource
	{
	public:
		unsigned char                                              UnknownData_9WJH[0x48];                                  // 0x0048(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              AxisSource[0x10];                                        // 0x0090(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              TransformSource[0x10];                                   // 0x00A0(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		float                                                      ScaleMultiplier;                                         // 0x00B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Parameter;                                               // 0x00B4(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGizmoVec2ParameterChange                           LastChange;                                              // 0x00BC(0x0010) NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             CurScaleOrigin;                                          // 0x00CC(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CurScaleNormal;                                          // 0x00D8(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CurScaleAxisX;                                           // 0x00E4(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CurScaleAxisY;                                           // 0x00F0(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C9E7[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          InitialTransform;                                        // 0x0100(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.PlanePositionGizmoBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPlanePositionGizmoBuilder : public UInteractiveGizmoBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.PlanePositionGizmo
	 * Size -> 0x00C8 (FullSize[0x0100] - InheritedSize[0x0038])
	 */
	class UPlanePositionGizmo : public UInteractiveGizmo
	{
	public:
		unsigned char                                              UnknownData_NDXX[0x10];                                  // 0x0038(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              AxisSource[0x10];                                        // 0x0048(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              ParameterSource[0x10];                                   // 0x0058(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              HitTarget[0x10];                                         // 0x0068(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              StateTarget[0x10];                                       // 0x0078(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		bool                                                       bEnableSignedAxis;                                       // 0x0088(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFlipX;                                                  // 0x0089(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFlipY;                                                  // 0x008A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInInteraction;                                          // 0x008B(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InteractionOrigin;                                       // 0x008C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InteractionNormal;                                       // 0x0098(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InteractionAxisX;                                        // 0x00A4(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InteractionAxisY;                                        // 0x00B0(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InteractionStartPoint;                                   // 0x00BC(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InteractionCurPoint;                                     // 0x00C8(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           InteractionStartParameter;                               // 0x00D4(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           InteractionCurParameter;                                 // 0x00DC(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           ParameterSigns;                                          // 0x00E4(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MQVO[0x14];                                  // 0x00EC(0x0014) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.SelectionSet
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class USelectionSet : public UObject
	{
	public:
		unsigned char                                              UnknownData_CTD8[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.MeshSelectionSet
	 * Size -> 0x0040 (FullSize[0x0080] - InheritedSize[0x0040])
	 */
	class UMeshSelectionSet : public USelectionSet
	{
	public:
		TArray<int32_t>                                            Vertices;                                                // 0x0040(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            Edges;                                                   // 0x0050(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            Faces;                                                   // 0x0060(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            Groups;                                                  // 0x0070(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.SingleClickInputBehavior
	 * Size -> 0x00B0 (FullSize[0x0130] - InheritedSize[0x0080])
	 */
	class USingleClickInputBehavior : public UAnyButtonInputBehavior
	{
	public:
		unsigned char                                              UnknownData_YC8W[0x40];                                  // 0x0080(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       HitTestOnRelease;                                        // 0x00C0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6NHL[0x6F];                                  // 0x00C1(0x006F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.SingleClickToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USingleClickToolBuilder : public UInteractiveToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.SingleClickTool
	 * Size -> 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
	 */
	class USingleClickTool : public UInteractiveTool
	{
	public:
		unsigned char                                              UnknownData_R84A[0x8];                                   // 0x0080(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoNilStateTarget
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UGizmoNilStateTarget : public UObject
	{
	public:
		unsigned char                                              UnknownData_UPY1[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoLambdaStateTarget
	 * Size -> 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
	 */
	class UGizmoLambdaStateTarget : public UObject
	{
	public:
		unsigned char                                              UnknownData_31VN[0x88];                                  // 0x0028(0x0088) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoObjectModifyStateTarget
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UGizmoObjectModifyStateTarget : public UObject
	{
	public:
		unsigned char                                              UnknownData_GHWR[0x30];                                  // 0x0028(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoTransformChangeStateTarget
	 * Size -> 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
	 */
	class UGizmoTransformChangeStateTarget : public UObject
	{
	public:
		unsigned char                                              UnknownData_A5JK[0x28];                                  // 0x0028(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              TransactionManager[0x10];                                // 0x0050(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              UnknownData_1380[0x80];                                  // 0x0060(0x0080) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.TransformGizmoActor
	 * Size -> 0x0080 (FullSize[0x02A8] - InheritedSize[0x0228])
	 */
	class ATransformGizmoActor : public AGizmoActor
	{
	public:
		class UPrimitiveComponent*                                 TranslateX;                                              // 0x0228(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 TranslateY;                                              // 0x0230(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 TranslateZ;                                              // 0x0238(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 TranslateYZ;                                             // 0x0240(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 TranslateXZ;                                             // 0x0248(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 TranslateXY;                                             // 0x0250(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 RotateX;                                                 // 0x0258(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 RotateY;                                                 // 0x0260(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 RotateZ;                                                 // 0x0268(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 UniformScale;                                            // 0x0270(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 AxisScaleX;                                              // 0x0278(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 AxisScaleY;                                              // 0x0280(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 AxisScaleZ;                                              // 0x0288(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 PlaneScaleYZ;                                            // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 PlaneScaleXZ;                                            // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 PlaneScaleXY;                                            // 0x02A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.TransformGizmoBuilder
	 * Size -> 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
	 */
	class UTransformGizmoBuilder : public UInteractiveGizmoBuilder
	{
	public:
		unsigned char                                              UnknownData_26DV[0x98];                                  // 0x0028(0x0098) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.TransformGizmo
	 * Size -> 0x0148 (FullSize[0x0180] - InheritedSize[0x0038])
	 */
	class UTransformGizmo : public UInteractiveGizmo
	{
	public:
		unsigned char                                              UnknownData_CC3T[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTransformProxy*                                     ActiveTarget;                                            // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSnapToWorldGrid;                                        // 0x0048(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseContextCoordinateSystem;                             // 0x0049(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_91VV[0x2];                                   // 0x004A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EToolContextCoordinateSystem                               CurrentCoordinateSystem;                                 // 0x004C(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RWBO[0x3];                                   // 0x004D(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_7GTJ[0x90];                                  // 0x0050(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPrimitiveComponent*>                         ActiveComponents;                                        // 0x00E0(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UPrimitiveComponent*>                         NonuniformScaleComponents;                               // 0x00F0(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UInteractiveGizmo*>                           ActiveGizmos;                                            // 0x0100(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MA2O[0x10];                                  // 0x0110(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGizmoConstantFrameAxisSource*                       CameraAxisSource;                                        // 0x0120(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGizmoComponentAxisSource*                           AxisXSource;                                             // 0x0128(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGizmoComponentAxisSource*                           AxisYSource;                                             // 0x0130(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGizmoComponentAxisSource*                           AxisZSource;                                             // 0x0138(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGizmoComponentAxisSource*                           UnitAxisXSource;                                         // 0x0140(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGizmoComponentAxisSource*                           UnitAxisYSource;                                         // 0x0148(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGizmoComponentAxisSource*                           UnitAxisZSource;                                         // 0x0150(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGizmoTransformChangeStateTarget*                    StateTarget;                                             // 0x0158(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGizmoScaledTransformSource*                         ScaledTransformSource;                                   // 0x0160(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3C7C[0x18];                                  // 0x0168(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.TransformProxy
	 * Size -> 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
	 */
	class UTransformProxy : public UObject
	{
	public:
		unsigned char                                              UnknownData_9BJP[0x48];                                  // 0x0028(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bRotatePerObject;                                        // 0x0070(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSetPivotMode;                                           // 0x0071(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CCUB[0x1E];                                  // 0x0072(0x001E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          SharedTransform;                                         // 0x0090(0x0030) IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FTransform                                          InitialSharedTransform;                                  // 0x00C0(0x0030) IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoBaseTransformSource
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UGizmoBaseTransformSource : public UObject
	{
	public:
		unsigned char                                              UnknownData_57JS[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoComponentWorldTransformSource
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class UGizmoComponentWorldTransformSource : public UGizmoBaseTransformSource
	{
	public:
		class USceneComponent*                                     Component;                                               // 0x0048(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bModifyComponentOnTransform;                             // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JTY4[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoScaledTransformSource
	 * Size -> 0x0098 (FullSize[0x00E0] - InheritedSize[0x0048])
	 */
	class UGizmoScaledTransformSource : public UGizmoBaseTransformSource
	{
	public:
		unsigned char                                              ChildTransformSource[0x10];                              // 0x0048(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              UnknownData_BUIJ[0x88];                                  // 0x0058(0x0088) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class InteractiveToolsFramework.GizmoTransformProxyTransformSource
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UGizmoTransformProxyTransformSource : public UGizmoBaseTransformSource
	{
	public:
		class UTransformProxy*                                     Proxy;                                                   // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
