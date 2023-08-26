#pragma once

/**
 * Name: FL84
 * Version: 1.14.4.5.503427
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct WidgetCarousel.WidgetCarouselNavigationBarStyle
	 * Size -> 0x08C0 (FullSize[0x08C8] - InheritedSize[0x0008])
	 */
	struct FWidgetCarouselNavigationBarStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         HighlightBrush;                                          // 0x0008(0x0098) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FButtonStyle                                        LeftButtonStyle;                                         // 0x00A0(0x02B8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FButtonStyle                                        CenterButtonStyle;                                       // 0x0358(0x02B8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FButtonStyle                                        RightButtonStyle;                                        // 0x0610(0x02B8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WidgetCarousel.WidgetCarouselNavigationButtonStyle
	 * Size -> 0x03E8 (FullSize[0x03F0] - InheritedSize[0x0008])
	 */
	struct FWidgetCarouselNavigationButtonStyle : public FSlateWidgetStyle
	{
	public:
		struct FButtonStyle                                        InnerButtonStyle;                                        // 0x0008(0x02B8) NativeAccessSpecifierPublic
		struct FSlateBrush                                         NavigationButtonLeftImage;                               // 0x02C0(0x0098) NativeAccessSpecifierPublic
		struct FSlateBrush                                         NavigationButtonRightImage;                              // 0x0358(0x0098) NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
