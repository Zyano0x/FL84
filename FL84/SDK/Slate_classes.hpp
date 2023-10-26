#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3E0 (0x410 - 0x30)
// Class Slate.ButtonWidgetStyle
class UButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FButtonStyle                          ButtonStyle;                                       // 0x30(0x3E0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UButtonWidgetStyle* GetDefaultObj();

};

// 0x8A0 (0x8D0 - 0x30)
// Class Slate.CheckBoxWidgetStyle
class UCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FCheckBoxStyle                        CheckBoxStyle;                                     // 0x30(0x8A0)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCheckBoxWidgetStyle* GetDefaultObj();

};

// 0x620 (0x650 - 0x30)
// Class Slate.ComboBoxWidgetStyle
class UComboBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FComboBoxStyle                        ComboBoxStyle;                                     // 0x30(0x620)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UComboBoxWidgetStyle* GetDefaultObj();

};

// 0x5E0 (0x610 - 0x30)
// Class Slate.ComboButtonWidgetStyle
class UComboButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FComboButtonStyle                     ComboButtonStyle;                                  // 0x30(0x5E0)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UComboButtonWidgetStyle* GetDefaultObj();

};

// 0xC90 (0xCC0 - 0x30)
// Class Slate.EditableTextBoxWidgetStyle
class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FEditableTextBoxStyle                 EditableTextBoxStyle;                              // 0x30(0xC90)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UEditableTextBoxWidgetStyle* GetDefaultObj();

};

// 0x330 (0x360 - 0x30)
// Class Slate.EditableTextWidgetStyle
class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FEditableTextStyle                    EditableTextStyle;                                 // 0x30(0x330)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UEditableTextWidgetStyle* GetDefaultObj();

};

// 0x2B0 (0x2E0 - 0x30)
// Class Slate.ProgressWidgetStyle
class UProgressWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FProgressBarStyle                     ProgressBarStyle;                                  // 0x30(0x2B0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UProgressWidgetStyle* GetDefaultObj();

};

// 0x7F0 (0x820 - 0x30)
// Class Slate.ScrollBarWidgetStyle
class UScrollBarWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FScrollBarStyle                       ScrollBarStyle;                                    // 0x30(0x7F0)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UScrollBarWidgetStyle* GetDefaultObj();

};

// 0x390 (0x3C0 - 0x30)
// Class Slate.ScrollBoxWidgetStyle
class UScrollBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FScrollBoxStyle                       ScrollBoxStyle;                                    // 0x30(0x390)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UScrollBoxWidgetStyle* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class Slate.SlateSettings
class USlateSettings : public UObject
{
public:
	bool                                         bExplicitCanvasChildZOrder;                        // 0x28(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12FB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USlateSettings* GetDefaultObj();

};

// 0x4B0 (0x4E0 - 0x30)
// Class Slate.SpinBoxWidgetStyle
class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FSpinBoxStyle                         SpinBoxStyle;                                      // 0x30(0x4B0)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USpinBoxWidgetStyle* GetDefaultObj();

};

// 0x460 (0x490 - 0x30)
// Class Slate.TextBlockWidgetStyle
class UTextBlockWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FTextBlockStyle                       TextBlockStyle;                                    // 0x30(0x460)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UTextBlockWidgetStyle* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Slate.ToolMenuBase
class UToolMenuBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UToolMenuBase* GetDefaultObj();

};

}


