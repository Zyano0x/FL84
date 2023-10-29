#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xC88 (0xC90 - 0x8)
// ScriptStruct WidgetCarousel.WidgetCarouselNavigationBarStyle
struct FWidgetCarouselNavigationBarStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_D9A[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           HighlightBrush;                                    // 0x10(0xE0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                          LeftButtonStyle;                                   // 0xF0(0x3E0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                          CenterButtonStyle;                                 // 0x4D0(0x3E0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                          RightButtonStyle;                                  // 0x8B0(0x3E0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x5A8 (0x5B0 - 0x8)
// ScriptStruct WidgetCarousel.WidgetCarouselNavigationButtonStyle
struct FWidgetCarouselNavigationButtonStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_D9C[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FButtonStyle                          InnerButtonStyle;                                  // 0x10(0x3E0)(NativeAccessSpecifierPublic)
	struct FSlateBrush                           NavigationButtonLeftImage;                         // 0x3F0(0xE0)(NativeAccessSpecifierPublic)
	struct FSlateBrush                           NavigationButtonRightImage;                        // 0x4D0(0xE0)(NativeAccessSpecifierPublic)
};

}


