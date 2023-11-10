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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum SlateCore.EUINavigation
	 */
	enum class EUINavigation : uint8_t
	{
		Left     = 0,
		Right    = 1,
		Up       = 2,
		Down     = 3,
		Next     = 4,
		Previous = 5,
		Num      = 6,
		Invalid  = 7,
		MAX      = 8
	};

	/**
	 * Enum SlateCore.ECheckBoxState
	 */
	enum class ECheckBoxState : uint8_t
	{
		Unchecked    = 0,
		Checked      = 1,
		Undetermined = 2,
		MAX          = 3
	};

	/**
	 * Enum SlateCore.EWidgetClipping
	 */
	enum class EWidgetClipping : uint8_t
	{
		Inherit                         = 0,
		ClipToBounds                    = 1,
		ClipToBoundsWithoutIntersecting = 2,
		ClipToBoundsAlways              = 3,
		OnDemand                        = 4,
		MAX                             = 5
	};

	/**
	 * Enum SlateCore.ESlateBrushImageType
	 */
	enum class ESlateBrushImageType : uint8_t
	{
		NoImage   = 0,
		FullColor = 1,
		Linear    = 2,
		Vector    = 3,
		MAX       = 4
	};

	/**
	 * Enum SlateCore.ESlateBrushMirrorType
	 */
	enum class ESlateBrushMirrorType : uint8_t
	{
		NoMirror   = 0,
		Horizontal = 1,
		Vertical   = 2,
		Both       = 3,
		MAX        = 4
	};

	/**
	 * Enum SlateCore.ESlateBrushTileType
	 */
	enum class ESlateBrushTileType : uint8_t
	{
		NoTile     = 0,
		Horizontal = 1,
		Vertical   = 2,
		Both       = 3,
		MAX        = 4
	};

	/**
	 * Enum SlateCore.ESlateBrushDrawType
	 */
	enum class ESlateBrushDrawType : uint8_t
	{
		NoDrawType = 0,
		Box        = 1,
		Border     = 2,
		Image      = 3,
		RoundedBox = 4,
		MAX        = 5
	};

	/**
	 * Enum SlateCore.ESlateBrushRoundingType
	 */
	enum class ESlateBrushRoundingType : uint8_t
	{
		FixedRadius      = 0,
		HalfHeightRadius = 1,
		MAX              = 2
	};

	/**
	 * Enum SlateCore.ESlateColorStylingMode
	 */
	enum class ESlateColorStylingMode : uint8_t
	{
		UseColor_Specified          = 0,
		UseColor_Specified_Link     = 1,
		UseColor_Foreground         = 2,
		UseColor_Foreground_Subdued = 3,
		UseColor_MAX                = 4
	};

	/**
	 * Enum SlateCore.EUINavigationRule
	 */
	enum class EUINavigationRule : uint8_t
	{
		Escape         = 0,
		Explicit       = 1,
		Wrap           = 2,
		Stop           = 3,
		Custom         = 4,
		CustomBoundary = 5,
		Invalid        = 6,
		MAX            = 7
	};

	/**
	 * Enum SlateCore.ESlateDetailMode
	 */
	enum class ESlateDetailMode : uint8_t
	{
		Stale_Low    = 0,
		Stale_Medium = 1,
		Stale_High   = 2,
		Stale_MAX    = 3
	};

	/**
	 * Enum SlateCore.EFlowDirectionPreference
	 */
	enum class EFlowDirectionPreference : uint8_t
	{
		Inherit     = 0,
		Culture     = 1,
		LeftToRight = 2,
		RightToLeft = 3,
		MAX         = 4
	};

	/**
	 * Enum SlateCore.EColorVisionDeficiency
	 */
	enum class EColorVisionDeficiency : uint8_t
	{
		NormalVision = 0,
		Deuteranope  = 1,
		Protanope    = 2,
		Tritanope    = 3,
		MAX          = 4
	};

	/**
	 * Enum SlateCore.ESelectInfo
	 */
	enum class ESelectInfo : uint8_t
	{
		OnKeyPress   = 0,
		OnNavigation = 1,
		OnMouseClick = 2,
		Direct       = 3,
		MAX          = 4
	};

	/**
	 * Enum SlateCore.ETextCommit
	 */
	enum class ETextCommit : uint8_t
	{
		Default          = 0,
		OnEnter          = 1,
		OnUserMovedFocus = 2,
		OnCleared        = 3,
		MAX              = 4
	};

	/**
	 * Enum SlateCore.ETextShapingMethod
	 */
	enum class ETextShapingMethod : uint8_t
	{
		Auto        = 0,
		KerningOnly = 1,
		FullShaping = 2,
		MAX         = 3
	};

	/**
	 * Enum SlateCore.EHorizontalAlignment
	 */
	enum class EHorizontalAlignment : uint8_t
	{
		HAlign_Fill   = 0,
		HAlign_Left   = 1,
		HAlign_Center = 2,
		HAlign_Right  = 3,
		HAlign_MAX    = 4
	};

	/**
	 * Enum SlateCore.EVerticalAlignment
	 */
	enum class EVerticalAlignment : uint8_t
	{
		VAlign_Fill   = 0,
		VAlign_Top    = 1,
		VAlign_Center = 2,
		VAlign_Bottom = 3,
		VAlign_MAX    = 4
	};

	/**
	 * Enum SlateCore.EFontLayoutMethod
	 */
	enum class EFontLayoutMethod : uint8_t
	{
		Metrics     = 0,
		BoundingBox = 1,
		MAX         = 2
	};

	/**
	 * Enum SlateCore.EFontLoadingPolicy
	 */
	enum class EFontLoadingPolicy : uint8_t
	{
		LazyLoad = 0,
		Stream   = 1,
		Inline   = 2,
		MAX      = 3
	};

	/**
	 * Enum SlateCore.EFontHinting
	 */
	enum class EFontHinting : uint8_t
	{
		Default    = 0,
		Auto       = 1,
		AutoLight  = 2,
		Monochrome = 3,
		None       = 4,
		MAX        = 5
	};

	/**
	 * Enum SlateCore.EFocusCause
	 */
	enum class EFocusCause : uint8_t
	{
		Mouse                = 0,
		Navigation           = 1,
		SetDirectly          = 2,
		Cleared              = 3,
		OtherWidgetLostFocus = 4,
		WindowActivate       = 5,
		MAX                  = 6
	};

	/**
	 * Enum SlateCore.ESlateDebuggingFocusEvent
	 */
	enum class ESlateDebuggingFocusEvent : uint8_t
	{
		FocusChanging = 0,
		FocusLost     = 1,
		FocusReceived = 2,
		MAX           = 3
	};

	/**
	 * Enum SlateCore.ESlateDebuggingNavigationMethod
	 */
	enum class ESlateDebuggingNavigationMethod : uint8_t
	{
		Unknown               = 0,
		Explicit              = 1,
		CustomDelegateBound   = 2,
		CustomDelegateUnbound = 3,
		NextOrPrevious        = 4,
		HitTestGrid           = 5,
		MAX                   = 6
	};

	/**
	 * Enum SlateCore.ESlateDebuggingStateChangeEvent
	 */
	enum class ESlateDebuggingStateChangeEvent : uint8_t
	{
		MouseCaptureGained = 0,
		MouseCaptureLost   = 1,
		MAX                = 2
	};

	/**
	 * Enum SlateCore.ESlateDebuggingInputEvent
	 */
	enum class ESlateDebuggingInputEvent : uint8_t
	{
		MouseMove              = 0,
		MouseEnter             = 1,
		MouseLeave             = 2,
		PreviewMouseButtonDown = 3,
		MouseButtonDown        = 4,
		MouseButtonUp          = 5,
		MouseButtonDoubleClick = 6,
		MouseWheel             = 7,
		TouchStart             = 8,
		TouchEnd               = 9,
		TouchForceChanged      = 10,
		TouchFirstMove         = 11,
		TouchMoved             = 12,
		DragDetected           = 13,
		DragEnter              = 14,
		DragLeave              = 15,
		DragOver               = 16,
		DragDrop               = 17,
		DropMessage            = 18,
		PreviewKeyDown         = 19,
		KeyDown                = 20,
		KeyUp                  = 21,
		KeyChar                = 22,
		AnalogInput            = 23,
		TouchGesture           = 24,
		MotionDetected         = 25,
		MAX                    = 26
	};

	/**
	 * Enum SlateCore.EScrollDirection
	 */
	enum class EScrollDirection : uint8_t
	{
		Scroll_Down = 0,
		Scroll_Up   = 1,
		Scroll_MAX  = 2
	};

	/**
	 * Enum SlateCore.EOrientation
	 */
	enum class EOrientation : uint8_t
	{
		Orient_Horizontal = 0,
		Orient_Vertical   = 1,
		Orient_MAX        = 2
	};

	/**
	 * Enum SlateCore.EMenuPlacement
	 */
	enum class EMenuPlacement : uint8_t
	{
		MenuPlacement_BelowAnchor         = 0,
		MenuPlacement_CenteredBelowAnchor = 1,
		MenuPlacement_BelowRightAnchor    = 2,
		MenuPlacement_ComboBox            = 3,
		MenuPlacement_ComboBoxRight       = 4,
		MenuPlacement_MenuRight           = 5,
		MenuPlacement_AboveAnchor         = 6,
		MenuPlacement_CenteredAboveAnchor = 7,
		MenuPlacement_AboveRightAnchor    = 8,
		MenuPlacement_MenuLeft            = 9,
		MenuPlacement_Center              = 10,
		MenuPlacement_RightLeftCenter     = 11,
		MenuPlacement_MatchBottomLeft     = 12,
		MenuPlacement_MAX                 = 13
	};

	/**
	 * Enum SlateCore.ENavigationGenesis
	 */
	enum class ENavigationGenesis : uint8_t
	{
		Keyboard   = 0,
		Controller = 1,
		User       = 2,
		MAX        = 3
	};

	/**
	 * Enum SlateCore.ENavigationSource
	 */
	enum class ENavigationSource : uint8_t
	{
		FocusedWidget     = 0,
		WidgetUnderCursor = 1,
		MAX               = 2
	};

	/**
	 * Enum SlateCore.EUINavigationAction
	 */
	enum class EUINavigationAction : uint8_t
	{
		Accept  = 0,
		Back    = 1,
		Num     = 2,
		Invalid = 3,
		MAX     = 4
	};

	/**
	 * Enum SlateCore.EButtonPressMethod
	 */
	enum class EButtonPressMethod : uint8_t
	{
		DownAndUp     = 0,
		ButtonPress   = 1,
		ButtonRelease = 2,
		MAX           = 3
	};

	/**
	 * Enum SlateCore.EButtonTouchMethod
	 */
	enum class EButtonTouchMethod : uint8_t
	{
		DownAndUp  = 0,
		Down       = 1,
		PreciseTap = 2,
		MAX        = 3
	};

	/**
	 * Enum SlateCore.EButtonClickMethod
	 */
	enum class EButtonClickMethod : uint8_t
	{
		DownAndUp    = 0,
		MouseDown    = 1,
		MouseUp      = 2,
		PreciseClick = 3,
		MAX          = 4
	};

	/**
	 * Enum SlateCore.ESlateCheckBoxType
	 */
	enum class ESlateCheckBoxType : uint8_t
	{
		CheckBox     = 0,
		ToggleButton = 1,
		MAX          = 2
	};

	/**
	 * Enum SlateCore.ESlateParentWindowSearchMethod
	 */
	enum class ESlateParentWindowSearchMethod : uint8_t
	{
		ActiveWindow = 0,
		MainWindow   = 1,
		MAX          = 2
	};

	/**
	 * Enum SlateCore.EConsumeMouseWheel
	 */
	enum class EConsumeMouseWheel : uint8_t
	{
		WhenScrollingPossible = 0,
		Always                = 1,
		Never                 = 2,
		MAX                   = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct SlateCore.Geometry
	 * Size -> 0x0038
	 */
	struct FGeometry
	{
	public:
		unsigned char                                              UnknownData_TKMS[0x38];                                  // 0x0000(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.Margin
	 * Size -> 0x0010
	 */
	struct FMargin
	{
	public:
		float                                                      Left;                                                    // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Top;                                                     // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Right;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Bottom;                                                  // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.SlateColor
	 * Size -> 0x0028
	 */
	struct FSlateColor
	{
	public:
		struct FLinearColor                                        SpecifiedColor;                                          // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ESlateColorStylingMode                                     ColorUseRule;                                            // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BUIB[0x17];                                  // 0x0011(0x0017) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.SlateBrushOutlineSettings
	 * Size -> 0x0040
	 */
	struct FSlateBrushOutlineSettings
	{
	public:
		struct FVector4                                            CornerRadii;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateColor                                         Color;                                                   // 0x0010(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      Width;                                                   // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESlateBrushRoundingType                                    RoundingType;                                            // 0x003C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseBrushTransparency;                                   // 0x003D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CU5B[0x2];                                   // 0x003E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.SlateBrush
	 * Size -> 0x00E0
	 */
	struct FSlateBrush
	{
	public:
		unsigned char                                              UnknownData_9QI7[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           ImageSize;                                               // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLockRatio;                                              // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_99IB[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           LockedSize;                                              // 0x001C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsePixelMargin;                                         // 0x0024(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3UEX[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                             Margin;                                                  // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateColor                                         TintColor;                                               // 0x0038(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrushOutlineSettings                          OutlineSettings;                                         // 0x0060(0x0040) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class UObject*                                             ResourceObject;                                          // 0x00A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                ResourceName;                                            // 0x00A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FBox2D                                              UVRegion;                                                // 0x00B0(0x0014) ZeroConstructor, NoDestructor, Protected, NativeAccessSpecifierProtected
		ESlateBrushDrawType                                        DrawAs;                                                  // 0x00C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESlateBrushTileType                                        Tiling;                                                  // 0x00C5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESlateBrushMirrorType                                      Mirroring;                                               // 0x00C6(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESlateBrushImageType                                       ImageType;                                               // 0x00C7(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AGVA[0x10];                                  // 0x00C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsDynamicallyLoaded : 1;                                // 0x00D8(0x0001) BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasUObject : 1;                                         // 0x00D8(0x0001) BIT_FIELD Deprecated, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_J2Y1[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.InputEvent
	 * Size -> 0x0018
	 */
	struct FInputEvent
	{
	public:
		unsigned char                                              UnknownData_6ORM[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.PointerEvent
	 * Size -> 0x0058 (FullSize[0x0070] - InheritedSize[0x0018])
	 */
	struct FPointerEvent : public FInputEvent
	{
	public:
		unsigned char                                              UnknownData_A29I[0x58];                                  // 0x0018(0x0058) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.CharacterEvent
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FCharacterEvent : public FInputEvent
	{
	public:
		unsigned char                                              UnknownData_4772[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.KeyEvent
	 * Size -> 0x0020 (FullSize[0x0038] - InheritedSize[0x0018])
	 */
	struct FKeyEvent : public FInputEvent
	{
	public:
		unsigned char                                              UnknownData_1XOW[0x20];                                  // 0x0018(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.NavigationEvent
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FNavigationEvent : public FInputEvent
	{
	public:
		unsigned char                                              UnknownData_K4JR[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.AnalogInputEvent
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	struct FAnalogInputEvent : public FKeyEvent
	{
	public:
		unsigned char                                              UnknownData_HN2D[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.FontOutlineSettings
	 * Size -> 0x0028
	 */
	struct FFontOutlineSettings
	{
	public:
		int32_t                                                    OutlineSize;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OutlineBlur;                                             // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSeparateFillAlpha;                                      // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyOutlineToDropShadows;                              // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F5L1[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             OutlineMaterial;                                         // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        OutlineColor;                                            // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.SlateFontInfo
	 * Size -> 0x0060
	 */
	struct FSlateFontInfo
	{
	public:
		class UObject*                                             FontObject;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             FontMaterial;                                            // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFontOutlineSettings                                OutlineSettings;                                         // 0x0010(0x0028) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FVBE[0x10];                                  // 0x0038(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                TypefaceFontName;                                        // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Size;                                                    // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LetterSpacing;                                           // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WL3F[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.SlateWidgetStyle
	 * Size -> 0x0008
	 */
	struct FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_7CHO[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.TableRowStyle
	 * Size -> 0x0C98 (FullSize[0x0CA0] - InheritedSize[0x0008])
	 */
	struct FTableRowStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_KPUJ[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         SelectorFocusedBrush;                                    // 0x0010(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ActiveHoveredBrush;                                      // 0x00F0(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ActiveBrush;                                             // 0x01D0(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         InactiveHoveredBrush;                                    // 0x02B0(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         InactiveBrush;                                           // 0x0390(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         EvenRowBackgroundHoveredBrush;                           // 0x0470(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         EvenRowBackgroundBrush;                                  // 0x0550(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         OddRowBackgroundHoveredBrush;                            // 0x0630(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         OddRowBackgroundBrush;                                   // 0x0710(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateColor                                         TextColor;                                               // 0x07F0(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateColor                                         SelectedTextColor;                                       // 0x0818(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         DropIndicator_Above;                                     // 0x0840(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         DropIndicator_Onto;                                      // 0x0920(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         DropIndicator_Below;                                     // 0x0A00(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ActiveHighlightedBrush;                                  // 0x0AE0(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         InactiveHighlightedBrush;                                // 0x0BC0(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.SlateSound
	 * Size -> 0x0018
	 */
	struct FSlateSound
	{
	public:
		class UObject*                                             ResourceObject;                                          // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_V5O4[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.ButtonStyle
	 * Size -> 0x03D8 (FullSize[0x03E0] - InheritedSize[0x0008])
	 */
	struct FButtonStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_YTEO[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         Normal;                                                  // 0x0010(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         Hovered;                                                 // 0x00F0(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         Pressed;                                                 // 0x01D0(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         Disabled;                                                // 0x02B0(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FMargin                                             NormalPadding;                                           // 0x0390(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMargin                                             PressedPadding;                                          // 0x03A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateSound                                         PressedSlateSound;                                       // 0x03B0(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateSound                                         HoveredSlateSound;                                       // 0x03C8(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.ComboButtonStyle
	 * Size -> 0x05D8 (FullSize[0x05E0] - InheritedSize[0x0008])
	 */
	struct FComboButtonStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_E7GP[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FButtonStyle                                        ButtonStyle;                                             // 0x0010(0x03E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         DownArrowImage;                                          // 0x03F0(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FVector2D                                           ShadowOffset;                                            // 0x04D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ShadowColorAndOpacity;                                   // 0x04D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5E53[0x8];                                   // 0x04E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         MenuBorderBrush;                                         // 0x04F0(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FMargin                                             MenuBorderPadding;                                       // 0x05D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.ComboBoxStyle
	 * Size -> 0x0618 (FullSize[0x0620] - InheritedSize[0x0008])
	 */
	struct FComboBoxStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_8YUE[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FComboButtonStyle                                   ComboButtonStyle;                                        // 0x0010(0x05E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateSound                                         PressedSlateSound;                                       // 0x05F0(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateSound                                         SelectionChangeSlateSound;                               // 0x0608(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.EditableTextStyle
	 * Size -> 0x0328 (FullSize[0x0330] - InheritedSize[0x0008])
	 */
	struct FEditableTextStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateFontInfo                                      Font;                                                    // 0x0008(0x0060) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateColor                                         ColorAndOpacity;                                         // 0x0068(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         BackgroundImageSelected;                                 // 0x0090(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         BackgroundImageComposing;                                // 0x0170(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         CaretImage;                                              // 0x0250(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.ScrollBarStyle
	 * Size -> 0x07E8 (FullSize[0x07F0] - InheritedSize[0x0008])
	 */
	struct FScrollBarStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_DDL8[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         HorizontalBackgroundImage;                               // 0x0010(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         VerticalBackgroundImage;                                 // 0x00F0(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         VerticalTopSlotImage;                                    // 0x01D0(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         HorizontalTopSlotImage;                                  // 0x02B0(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         VerticalBottomSlotImage;                                 // 0x0390(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         HorizontalBottomSlotImage;                               // 0x0470(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         NormalThumbImage;                                        // 0x0550(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         HoveredThumbImage;                                       // 0x0630(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         DraggedThumbImage;                                       // 0x0710(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.EditableTextBoxStyle
	 * Size -> 0x0C88 (FullSize[0x0C90] - InheritedSize[0x0008])
	 */
	struct FEditableTextBoxStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_F9LF[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         BackgroundImageNormal;                                   // 0x0010(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         BackgroundImageHovered;                                  // 0x00F0(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         BackgroundImageFocused;                                  // 0x01D0(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         BackgroundImageReadOnly;                                 // 0x02B0(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FMargin                                             Padding;                                                 // 0x0390(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateFontInfo                                      Font;                                                    // 0x03A0(0x0060) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateColor                                         ForegroundColor;                                         // 0x0400(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateColor                                         BackgroundColor;                                         // 0x0428(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateColor                                         ReadOnlyForegroundColor;                                 // 0x0450(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FMargin                                             HScrollBarPadding;                                       // 0x0478(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMargin                                             VScrollBarPadding;                                       // 0x0488(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KUZ5[0x8];                                   // 0x0498(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FScrollBarStyle                                     ScrollBarStyle;                                          // 0x04A0(0x07F0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.TextBlockStyle
	 * Size -> 0x0458 (FullSize[0x0460] - InheritedSize[0x0008])
	 */
	struct FTextBlockStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateFontInfo                                      Font;                                                    // 0x0008(0x0060) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateColor                                         ColorAndOpacity;                                         // 0x0068(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FVector2D                                           ShadowOffset;                                            // 0x0090(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ShadowColorAndOpacity;                                   // 0x0098(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateColor                                         SelectedBackgroundColor;                                 // 0x00A8(0x0028) Edit, NativeAccessSpecifierPublic
		struct FLinearColor                                        HighlightColor;                                          // 0x00D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateBrush                                         HighlightShape;                                          // 0x00E0(0x00E0) Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FSlateBrush                                         StrikeBrush;                                             // 0x01C0(0x00E0) Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FSlateBrush                                         UnderlineBrush;                                          // 0x02A0(0x00E0) Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FSlateBrush                                         BackgroundBrush;                                         // 0x0380(0x00E0) Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.SpinBoxStyle
	 * Size -> 0x04A8 (FullSize[0x04B0] - InheritedSize[0x0008])
	 */
	struct FSpinBoxStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_ZLZT[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         BackgroundBrush;                                         // 0x0010(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         HoveredBackgroundBrush;                                  // 0x00F0(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ActiveFillBrush;                                         // 0x01D0(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         InactiveFillBrush;                                       // 0x02B0(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ArrowsImage;                                             // 0x0390(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateColor                                         ForegroundColor;                                         // 0x0470(0x0028) NativeAccessSpecifierPublic
		struct FMargin                                             TextPadding;                                             // 0x0498(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U4L6[0x8];                                   // 0x04A8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.FocusEvent
	 * Size -> 0x0008
	 */
	struct FFocusEvent
	{
	public:
		unsigned char                                              UnknownData_2GW8[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.MotionEvent
	 * Size -> 0x0030 (FullSize[0x0048] - InheritedSize[0x0018])
	 */
	struct FMotionEvent : public FInputEvent
	{
	public:
		unsigned char                                              UnknownData_G953[0x30];                                  // 0x0018(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.HyperlinkStyle
	 * Size -> 0x0858 (FullSize[0x0860] - InheritedSize[0x0008])
	 */
	struct FHyperlinkStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_OCFQ[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FButtonStyle                                        UnderlineStyle;                                          // 0x0010(0x03E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FTextBlockStyle                                     TextStyle;                                               // 0x03F0(0x0460) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FMargin                                             Padding;                                                 // 0x0850(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.FontData
	 * Size -> 0x0020
	 */
	struct FFontData
	{
	public:
		class FString                                              FontFilename;                                            // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EFontHinting                                               Hinting;                                                 // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EFontLoadingPolicy                                         LoadingPolicy;                                           // 0x0011(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_APGS[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SubFaceIndex;                                            // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UObject*                                             FontFaceAsset;                                           // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct SlateCore.TypefaceEntry
	 * Size -> 0x0028
	 */
	struct FTypefaceEntry
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFontData                                           Font;                                                    // 0x0008(0x0020) HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.Typeface
	 * Size -> 0x0010
	 */
	struct FTypeface
	{
	public:
		TArray<struct FTypefaceEntry>                              Fonts;                                                   // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.CompositeFallbackFont
	 * Size -> 0x0018
	 */
	struct FCompositeFallbackFont
	{
	public:
		struct FTypeface                                           Typeface;                                                // 0x0000(0x0010) NativeAccessSpecifierPublic
		float                                                      ScalingFactor;                                           // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QB1G[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.CompositeSubFont
	 * Size -> 0x0020 (FullSize[0x0038] - InheritedSize[0x0018])
	 */
	struct FCompositeSubFont : public FCompositeFallbackFont
	{
	public:
		TArray<struct FInt32Range>                                 CharacterRanges;                                         // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Cultures;                                                // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.CompositeFont
	 * Size -> 0x0038
	 */
	struct FCompositeFont
	{
	public:
		struct FTypeface                                           DefaultTypeface;                                         // 0x0000(0x0010) NativeAccessSpecifierPublic
		struct FCompositeFallbackFont                              FallbackTypeface;                                        // 0x0010(0x0018) NativeAccessSpecifierPublic
		TArray<struct FCompositeSubFont>                           SubTypefaces;                                            // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.CaptureLostEvent
	 * Size -> 0x0008
	 */
	struct FCaptureLostEvent
	{
	public:
		unsigned char                                              UnknownData_HATD[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.WindowStyle
	 * Size -> 0x1A68 (FullSize[0x1A70] - InheritedSize[0x0008])
	 */
	struct FWindowStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_1KMV[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FButtonStyle                                        MinimizeButtonStyle;                                     // 0x0010(0x03E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FButtonStyle                                        MaximizeButtonStyle;                                     // 0x03F0(0x03E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FButtonStyle                                        RestoreButtonStyle;                                      // 0x07D0(0x03E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FButtonStyle                                        CloseButtonStyle;                                        // 0x0BB0(0x03E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FTextBlockStyle                                     TitleTextStyle;                                          // 0x0F90(0x0460) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ActiveTitleBrush;                                        // 0x13F0(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         InactiveTitleBrush;                                      // 0x14D0(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         FlashTitleBrush;                                         // 0x15B0(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateColor                                         BackgroundColor;                                         // 0x1690(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3CTL[0x8];                                   // 0x16B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         OutlineBrush;                                            // 0x16C0(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateColor                                         OutlineColor;                                            // 0x17A0(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I72V[0x8];                                   // 0x17C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         BorderBrush;                                             // 0x17D0(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         BackgroundBrush;                                         // 0x18B0(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ChildBackgroundBrush;                                    // 0x1990(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.ScrollBorderStyle
	 * Size -> 0x01C8 (FullSize[0x01D0] - InheritedSize[0x0008])
	 */
	struct FScrollBorderStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_8ZXX[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         TopShadowBrush;                                          // 0x0010(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         BottomShadowBrush;                                       // 0x00F0(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.ScrollBoxStyle
	 * Size -> 0x0388 (FullSize[0x0390] - InheritedSize[0x0008])
	 */
	struct FScrollBoxStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_GWGE[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         TopShadowBrush;                                          // 0x0010(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         BottomShadowBrush;                                       // 0x00F0(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         LeftShadowBrush;                                         // 0x01D0(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         RightShadowBrush;                                        // 0x02B0(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.DockTabStyle
	 * Size -> 0x0B28 (FullSize[0x0B30] - InheritedSize[0x0008])
	 */
	struct FDockTabStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_HC57[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FButtonStyle                                        CloseButtonStyle;                                        // 0x0010(0x03E0) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         NormalBrush;                                             // 0x03F0(0x00E0) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ActiveBrush;                                             // 0x04D0(0x00E0) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ColorOverlayTabBrush;                                    // 0x05B0(0x00E0) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ColorOverlayIconBrush;                                   // 0x0690(0x00E0) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ForegroundBrush;                                         // 0x0770(0x00E0) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         HoveredBrush;                                            // 0x0850(0x00E0) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ContentAreaBrush;                                        // 0x0930(0x00E0) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         TabWellBrush;                                            // 0x0A10(0x00E0) Edit, NativeAccessSpecifierPublic
		struct FMargin                                             TabPadding;                                              // 0x0AF0(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      OverlapWidth;                                            // 0x0B00(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JJOX[0x4];                                   // 0x0B04(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         FlashColor;                                              // 0x0B08(0x0028) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.TableColumnHeaderStyle
	 * Size -> 0x07E8 (FullSize[0x07F0] - InheritedSize[0x0008])
	 */
	struct FTableColumnHeaderStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_5X58[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         SortPrimaryAscendingImage;                               // 0x0010(0x00E0) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         SortPrimaryDescendingImage;                              // 0x00F0(0x00E0) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         SortSecondaryAscendingImage;                             // 0x01D0(0x00E0) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         SortSecondaryDescendingImage;                            // 0x02B0(0x00E0) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         NormalBrush;                                             // 0x0390(0x00E0) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         HoveredBrush;                                            // 0x0470(0x00E0) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         MenuDropdownImage;                                       // 0x0550(0x00E0) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         MenuDropdownNormalBorderBrush;                           // 0x0630(0x00E0) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         MenuDropdownHoveredBorderBrush;                          // 0x0710(0x00E0) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.SplitterStyle
	 * Size -> 0x01C8 (FullSize[0x01D0] - InheritedSize[0x0008])
	 */
	struct FSplitterStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_06JE[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         HandleNormalBrush;                                       // 0x0010(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         HandleHighlightBrush;                                    // 0x00F0(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.HeaderRowStyle
	 * Size -> 0x12C8 (FullSize[0x12D0] - InheritedSize[0x0008])
	 */
	struct FHeaderRowStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_PD36[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTableColumnHeaderStyle                             ColumnStyle;                                             // 0x0010(0x07F0) Edit, NativeAccessSpecifierPublic
		struct FTableColumnHeaderStyle                             LastColumnStyle;                                         // 0x0800(0x07F0) Edit, NativeAccessSpecifierPublic
		struct FSplitterStyle                                      ColumnSplitterStyle;                                     // 0x0FF0(0x01D0) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         BackgroundBrush;                                         // 0x11C0(0x00E0) Edit, NativeAccessSpecifierPublic
		struct FSlateColor                                         ForegroundColor;                                         // 0x12A0(0x0028) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZAH9[0x8];                                   // 0x12C8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.InlineTextImageStyle
	 * Size -> 0x00F8 (FullSize[0x0100] - InheritedSize[0x0008])
	 */
	struct FInlineTextImageStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_3ZHL[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         Image;                                                   // 0x0010(0x00E0) Edit, NativeAccessSpecifierPublic
		int16_t                                                    Baseline;                                                // 0x00F0(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GNLU[0xE];                                   // 0x00F2(0x000E) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.SliderStyle
	 * Size -> 0x0558 (FullSize[0x0560] - InheritedSize[0x0008])
	 */
	struct FSliderStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_BE8Z[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         NormalBarImage;                                          // 0x0010(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         HoveredBarImage;                                         // 0x00F0(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         DisabledBarImage;                                        // 0x01D0(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         NormalThumbImage;                                        // 0x02B0(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         HoveredThumbImage;                                       // 0x0390(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         DisabledThumbImage;                                      // 0x0470(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      BarThickness;                                            // 0x0550(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EYEQ[0xC];                                   // 0x0554(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.VolumeControlStyle
	 * Size -> 0x09C8 (FullSize[0x09D0] - InheritedSize[0x0008])
	 */
	struct FVolumeControlStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_RFJ3[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSliderStyle                                        SliderStyle;                                             // 0x0010(0x0560) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         HighVolumeImage;                                         // 0x0570(0x00E0) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         MidVolumeImage;                                          // 0x0650(0x00E0) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         LowVolumeImage;                                          // 0x0730(0x00E0) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         NoVolumeImage;                                           // 0x0810(0x00E0) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         MutedImage;                                              // 0x08F0(0x00E0) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.SearchBoxStyle
	 * Size -> 0x1098 (FullSize[0x10A0] - InheritedSize[0x0008])
	 */
	struct FSearchBoxStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_T2RZ[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEditableTextBoxStyle                               TextBoxStyle;                                            // 0x0010(0x0C90) Edit, NativeAccessSpecifierPublic
		struct FSlateFontInfo                                      ActiveFontInfo;                                          // 0x0CA0(0x0060) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateBrush                                         UpArrowImage;                                            // 0x0D00(0x00E0) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         DownArrowImage;                                          // 0x0DE0(0x00E0) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         GlassImage;                                              // 0x0EC0(0x00E0) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ClearImage;                                              // 0x0FA0(0x00E0) Edit, NativeAccessSpecifierPublic
		struct FMargin                                             ImagePadding;                                            // 0x1080(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bLeftAlignButtons;                                       // 0x1090(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DH6S[0xF];                                   // 0x1091(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.ExpandableAreaStyle
	 * Size -> 0x01D8 (FullSize[0x01E0] - InheritedSize[0x0008])
	 */
	struct FExpandableAreaStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_2YXP[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         CollapsedImage;                                          // 0x0010(0x00E0) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ExpandedImage;                                           // 0x00F0(0x00E0) Edit, NativeAccessSpecifierPublic
		float                                                      RolloutAnimationSeconds;                                 // 0x01D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z3L0[0xC];                                   // 0x01D4(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SlateCore.ProgressBarStyle
	 * Size -> 0x02A8 (FullSize[0x02B0] - InheritedSize[0x0008])
	 */
	struct FProgressBarStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_QSS6[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         BackgroundImage;                                         // 0x0010(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         FillImage;                                               // 0x00F0(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         MarqueeImage;                                            // 0x01D0(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.InlineEditableTextBlockStyle
	 * Size -> 0x10F8 (FullSize[0x1100] - InheritedSize[0x0008])
	 */
	struct FInlineEditableTextBlockStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_OCC2[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEditableTextBoxStyle                               EditableTextBoxStyle;                                    // 0x0010(0x0C90) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FTextBlockStyle                                     TextStyle;                                               // 0x0CA0(0x0460) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SlateCore.CheckBoxStyle
	 * Size -> 0x0898 (FullSize[0x08A0] - InheritedSize[0x0008])
	 */
	struct FCheckBoxStyle : public FSlateWidgetStyle
	{
	public:
		ESlateCheckBoxType                                         CheckBoxType;                                            // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FC7Q[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         UncheckedImage;                                          // 0x0010(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         UncheckedHoveredImage;                                   // 0x00F0(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         UncheckedPressedImage;                                   // 0x01D0(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         CheckedImage;                                            // 0x02B0(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         CheckedHoveredImage;                                     // 0x0390(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         CheckedPressedImage;                                     // 0x0470(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         UndeterminedImage;                                       // 0x0550(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         UndeterminedHoveredImage;                                // 0x0630(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         UndeterminedPressedImage;                                // 0x0710(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FMargin                                             Padding;                                                 // 0x07F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateColor                                         ForegroundColor;                                         // 0x0800(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateColor                                         BorderBackgroundColor;                                   // 0x0828(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateSound                                         CheckedSlateSound;                                       // 0x0850(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateSound                                         UncheckedSlateSound;                                     // 0x0868(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateSound                                         HoveredSlateSound;                                       // 0x0880(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LKDD[0x8];                                   // 0x0898(0x0008) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
