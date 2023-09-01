#pragma once

/**
 * Name: FL84
 * Version: 1.14.4.6.511026
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
	 * Enum E_Type_Btn.E_Type_Btn
	 */
	enum class E_Type_Btn : uint8_t
	{
		MainBtn          = 0,
		SecondaryBtn     = 1,
		ShopBtn          = 2,
		StrongBtn        = 3,
		WeakBtn          = 4,
		LeagueBtn        = 5,
		ThirdlyBtn       = 6,
		ThirdlyStrongBtn = 7,
		ETypeMAX         = 8
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
