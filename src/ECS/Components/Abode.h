/*****************************************************************************
 * Copyright (c) 2018-2021 openblack developers
 *
 * For a complete list of all authors, please refer to contributors.md
 * Interested in contributing? Visit https://github.com/openblack/openblack
 *
 * openblack is licensed under the GNU General Public License version 3.
 *****************************************************************************/

#pragma once

namespace openblack::ecs::components
{

struct Abode
{
	/// Originally AbodeInfo
	enum class Info : int16_t
	{
		None = -1,
		CelticHut = 0,
		CelticTent = 1,
		CelticShackX = 2,
		CelticShackY = 3,
		CelticTempleX = 4,
		CelticTempleY = 5,
		CelticTotem = 6,
		CelticStoragePit = 7,
		CelticCreche = 8,
		CelticWorkshop = 9,
		CelticWonder = 10,
		CelticGraveyard = 11,
		CelticTownCentre = 12,
		CelticFootballPitch = 13,
		CelticSpellDispenser = 14,
		CelticField = 15,
		AfricanHut = 16,
		AfricanTent = 17,
		AfricanShackX = 18,
		AfricanShackY = 19,
		AfricanTempleX = 20,
		AfricanTempleY = 21,
		AfricanTotem = 22,
		AfricanStoragePit = 23,
		AfricanCreche = 24,
		AfricanWorkshop = 25,
		AfricanWonder = 26,
		AfricanGraveyard = 27,
		AfricanTownCentre = 28,
		AfricanFootballPitch = 29,
		AfricanSpellDispenser = 30,
		AfricanField = 31,
		AztecHut = 32,
		AztecTent = 33,
		AztecShackX = 34,
		AztecShackY = 35,
		AztecTempleX = 36,
		AztecTempleY = 37,
		AztecTotem = 38,
		AztecStoragePit = 39,
		AztecCreche = 40,
		AztecWorkshop = 41,
		AztecWonder = 42,
		AztecGraveyard = 43,
		AztecTownCentre = 44,
		AztecFootballPitch = 45,
		AztecSpellDispenser = 46,
		AztecField = 47,
		JapaneseHut = 48,
		JapaneseTent = 49,
		JapaneseShackX = 50,
		JapaneseShackY = 51,
		JapaneseTempleX = 52,
		JapaneseTempleY = 53,
		JapaneseTotem = 54,
		JapaneseStoragePit = 55,
		JapaneseCreche = 56,
		JapaneseWorkshop = 57,
		JapaneseWonder = 58,
		JapaneseGraveyard = 59,
		JapaneseTownCentre = 60,
		JapaneseFootballPitch = 61,
		JapaneseSpellDispenser = 62,
		JapaneseField = 63,
		IndianHut = 64,
		IndianTent = 65,
		IndianShackX = 66,
		IndianShackY = 67,
		IndianTempleX = 68,
		IndianTempleY = 69,
		IndianTotem = 70,
		IndianStoragePit = 71,
		IndianCreche = 72,
		IndianWorkshop = 73,
		IndianWonder = 74,
		IndianGraveyard = 75,
		IndianTownCentre = 76,
		IndianFootballPitch = 77,
		IndianSpellDispenser = 78,
		IndianField = 79,
		EgyptianHut = 80,
		EgyptianTent = 81,
		EgyptianShackX = 82,
		EgyptianShackY = 83,
		EgyptianTempleX = 84,
		EgyptianTempleY = 85,
		EgyptianTotem = 86,
		EgyptianStoragePit = 87,
		EgyptianCreche = 88,
		EgyptianWorkshop = 89,
		EgyptianWonder = 90,
		EgyptianGraveyard = 91,
		EgyptianTownCentre = 92,
		EgyptianFootballPitch = 93,
		EgyptianSpellDispenser = 94,
		EgyptianField = 95,
		GreekHut = 96,
		GreekTent = 97,
		GreekShackX = 98,
		GreekShackY = 99,
		GreekTempleX = 100,
		GreekTempleY = 101,
		GreekTotem = 102,
		GreekStoragePit = 103,
		GreekCreche = 104,
		GreekWorkshop = 105,
		GreekWonder = 106,
		GreekGraveyard = 107,
		GreekTownCentre = 108,
		GreekFootballPitch = 109,
		GreekSpellDispenser = 110,
		GreekField = 111,
		NorseHut = 112,
		NorseTent = 113,
		NorseShackX = 114,
		NorseShackY = 115,
		NorseTempleX = 116,
		NorseTempleY = 117,
		NorseTotem = 118,
		NorseStoragePit = 119,
		NorseCreche = 120,
		NorseWorkshop = 121,
		NorseWonder = 122,
		NorseGraveyard = 123,
		NorseTownCentre = 124,
		NorseFootballPitch = 125,
		NorseSpellDispenser = 126,
		NorseField = 127,
		TibetanHut = 128,
		TibetanTent = 129,
		TibetanShackX = 130,
		TibetanShackY = 131,
		TibetanTempleX = 132,
		TibetanTempleY = 133,
		TibetanTotem = 134,
		TibetanStoragePit = 135,
		TibetanCreche = 136,
		TibetanWorkshop = 137,
		TibetanWonder = 138,
		TibetanGraveyard = 139,
		TibetanTownCentre = 140,
		TibetanFootballPitch = 141,
		TibetanSpellDispenser = 142,
		TibetanField = 143,
		ArkDryDock = 144,
		ArkWreck = 145,
		Belltower = 146,

		_COUNT
	};

	Info type;
	uint32_t townId;
	// If a village does not have a ABODE_STORAGE_PIT then other abodes are used
	// by the villagers
	uint32_t foodAmount;
	uint32_t woodAmount;
};

} // namespace openblack::ecs::components