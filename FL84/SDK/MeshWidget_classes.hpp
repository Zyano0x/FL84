#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x148 - 0x138)
// Class MeshWidget.MeshWidgetUWidget
class UMeshWidgetUWidget : public UWidget
{
public:
	uint8                                        Pad_B8E[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshWidgetUWidget* GetDefaultObj();

};

// 0x40 (0x188 - 0x148)
// Class MeshWidget.ParticleWidget
class UParticleWidget : public UMeshWidgetUWidget
{
public:
	class USlateVectorArtData*                   TrailMeshAsset;                                    // 0x148(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxParticleCount;                                  // 0x150(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B93[0x34];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UParticleWidget* GetDefaultObj();

};

// 0x28 (0x170 - 0x148)
// Class MeshWidget.MeshRectangleWidget
class UMeshRectangleWidget : public UMeshWidgetUWidget
{
public:
	class UMaterialInterface*                    BaseMaterial;                                      // 0x148(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumFloat4PerInstance;                              // 0x150(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B99[0x1C];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshRectangleWidget* GetDefaultObj();

	void SetInstanceNum(int32 NewNum);
	void ModifyInstanceNum(int32 DNum);
	void InitUnitTestProvider();
};

// 0x30 (0x178 - 0x148)
// Class MeshWidget.TextMeshWidget
class UTextMeshWidget : public UMeshWidgetUWidget
{
public:
	class UMaterialInterface*                    BaseMaterial;                                      // 0x148(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B9B[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTextMeshWidget* GetDefaultObj();

};

// 0x30 (0x178 - 0x148)
// Class MeshWidget.ProgressBarMeshWidget
class UProgressBarMeshWidget : public UMeshWidgetUWidget
{
public:
	class UMaterialInterface*                    BaseMaterial;                                      // 0x148(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B9C[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UProgressBarMeshWidget* GetDefaultObj();

};

}


