#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x168 - 0x138)
// Class UIParticleSystem.ParticleSystemWidget
class UParticleSystemWidget : public UWidget
{
public:
	class UParticleSystem*                       ParticleSystemTemplate;                            // 0x138(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReactivate;                                       // 0x140(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bActiveSysWhenInit;                                // 0x141(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AD[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              WorldParticleComponent;                            // 0x148(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AActor*                                WorldParticleActor;                                // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2AE[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UParticleSystemWidget* GetDefaultObj();

	void SetReactivate(bool bActivateAndReset);
	void ActivateParticles(bool bActive, bool bReset);
};

// 0x0 (0x7B0 - 0x7B0)
// Class UIParticleSystem.UIParticleComponent
class UUIParticleComponent : public UParticleSystemComponent
{
public:

	static class UClass* StaticClass();
	static class UUIParticleComponent* GetDefaultObj();

};

// 0x0 (0x228 - 0x228)
// Class UIParticleSystem.UIParticleActor
class AUIParticleActor : public AActor
{
public:

	static class UClass* StaticClass();
	static class AUIParticleActor* GetDefaultObj();

};

}


