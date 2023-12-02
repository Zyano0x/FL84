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
	 * Class UIParticleSystem.ParticleSystemWidget
	 * Size -> 0x0030 (FullSize[0x0168] - InheritedSize[0x0138])
	 */
	class UParticleSystemWidget : public UWidget
	{
	public:
		class UParticleSystem*                                     ParticleSystemTemplate;                                  // 0x0138(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReactivate;                                             // 0x0140(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bActiveSysWhenInit;                                      // 0x0141(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N0C7[0x6];                                   // 0x0142(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            WorldParticleComponent;                                  // 0x0148(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AActor*                                              WorldParticleActor;                                      // 0x0150(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HHQR[0x10];                                  // 0x0158(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetReactivate(bool bActivateAndReset);
		void ActivateParticles(bool bActive, bool bReset);
		static UClass* StaticClass();
	};

	/**
	 * Class UIParticleSystem.UIParticleComponent
	 * Size -> 0x0000 (FullSize[0x07B0] - InheritedSize[0x07B0])
	 */
	class UUIParticleComponent : public UParticleSystemComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UIParticleSystem.UIParticleActor
	 * Size -> 0x0000 (FullSize[0x0228] - InheritedSize[0x0228])
	 */
	class AUIParticleActor : public AActor
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
