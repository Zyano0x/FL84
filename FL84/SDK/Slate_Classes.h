#pragma once

/**
 * Name: FL84
 * Version: 1.15.1.6
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
	 * Class Slate.ButtonWidgetStyle
	 * Size -> 0x03E0 (FullSize[0x0410] - InheritedSize[0x0030])
	 */
	class UButtonWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FButtonStyle                                        ButtonStyle;                                             // 0x0030(0x03E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Slate.CheckBoxWidgetStyle
	 * Size -> 0x08A0 (FullSize[0x08D0] - InheritedSize[0x0030])
	 */
	class UCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FCheckBoxStyle                                      CheckBoxStyle;                                           // 0x0030(0x08A0) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Slate.ComboBoxWidgetStyle
	 * Size -> 0x0620 (FullSize[0x0650] - InheritedSize[0x0030])
	 */
	class UComboBoxWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FComboBoxStyle                                      ComboBoxStyle;                                           // 0x0030(0x0620) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Slate.ComboButtonWidgetStyle
	 * Size -> 0x05E0 (FullSize[0x0610] - InheritedSize[0x0030])
	 */
	class UComboButtonWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FComboButtonStyle                                   ComboButtonStyle;                                        // 0x0030(0x05E0) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Slate.EditableTextBoxWidgetStyle
	 * Size -> 0x0C90 (FullSize[0x0CC0] - InheritedSize[0x0030])
	 */
	class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FEditableTextBoxStyle                               EditableTextBoxStyle;                                    // 0x0030(0x0C90) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Slate.EditableTextWidgetStyle
	 * Size -> 0x0330 (FullSize[0x0360] - InheritedSize[0x0030])
	 */
	class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FEditableTextStyle                                  EditableTextStyle;                                       // 0x0030(0x0330) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Slate.ProgressWidgetStyle
	 * Size -> 0x02B0 (FullSize[0x02E0] - InheritedSize[0x0030])
	 */
	class UProgressWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FProgressBarStyle                                   ProgressBarStyle;                                        // 0x0030(0x02B0) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Slate.ScrollBarWidgetStyle
	 * Size -> 0x07F0 (FullSize[0x0820] - InheritedSize[0x0030])
	 */
	class UScrollBarWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FScrollBarStyle                                     ScrollBarStyle;                                          // 0x0030(0x07F0) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Slate.ScrollBoxWidgetStyle
	 * Size -> 0x0390 (FullSize[0x03C0] - InheritedSize[0x0030])
	 */
	class UScrollBoxWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FScrollBoxStyle                                     ScrollBoxStyle;                                          // 0x0030(0x0390) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Slate.SlateSettings
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class USlateSettings : public UObject
	{
	public:
		bool                                                       bExplicitCanvasChildZOrder;                              // 0x0028(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HC9J[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Slate.SpinBoxWidgetStyle
	 * Size -> 0x04B0 (FullSize[0x04E0] - InheritedSize[0x0030])
	 */
	class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FSpinBoxStyle                                       SpinBoxStyle;                                            // 0x0030(0x04B0) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Slate.TextBlockWidgetStyle
	 * Size -> 0x0460 (FullSize[0x0490] - InheritedSize[0x0030])
	 */
	class UTextBlockWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FTextBlockStyle                                     TextBlockStyle;                                          // 0x0030(0x0460) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Slate.ToolMenuBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UToolMenuBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
