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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct WidgetCarousel.WidgetCarouselNavigationBarStyle
	 * Size -> 0x0C88 (FullSize[0x0C90] - InheritedSize[0x0008])
	 */
	struct FWidgetCarouselNavigationBarStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_79B9[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         HighlightBrush;                                          // 0x0010(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FButtonStyle                                        LeftButtonStyle;                                         // 0x00F0(0x03E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FButtonStyle                                        CenterButtonStyle;                                       // 0x04D0(0x03E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FButtonStyle                                        RightButtonStyle;                                        // 0x08B0(0x03E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WidgetCarousel.WidgetCarouselNavigationButtonStyle
	 * Size -> 0x05A8 (FullSize[0x05B0] - InheritedSize[0x0008])
	 */
	struct FWidgetCarouselNavigationButtonStyle : public FSlateWidgetStyle
	{
	public:
		unsigned char                                              UnknownData_SKT4[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FButtonStyle                                        InnerButtonStyle;                                        // 0x0010(0x03E0) NativeAccessSpecifierPublic
		struct FSlateBrush                                         NavigationButtonLeftImage;                               // 0x03F0(0x00E0) NativeAccessSpecifierPublic
		struct FSlateBrush                                         NavigationButtonRightImage;                              // 0x04D0(0x00E0) NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
