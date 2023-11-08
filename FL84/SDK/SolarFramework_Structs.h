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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum SolarFramework.EScope
	 */
	enum class EScope : uint8_t
	{
		None       = 0,
		Login      = 1,
		Lobby      = 2,
		Battle     = 3,
		Settlement = 4,
		Game       = 5,
		Global     = 6,
		MAX        = 7
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct SolarFramework.SolarConfigEntry
	 * Size -> 0x0030
	 */
	struct FSolarConfigEntry
	{
	public:
		unsigned char                                              ContainerPath[0x28];                                     // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		EScope                                                     Scope;                                                   // 0x0028(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2RNI[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
