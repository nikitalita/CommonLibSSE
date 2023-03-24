#pragma once

namespace RE
{
	class BSTimer
	{
	public:
		static float GetCurrentGlobalTimeMult()
		{
			REL::Relocation<float*> value{ RELOCATION_ID(511883, 388443) };
			return *value;
		}

		// members
		std::uint64_t pad00;                          // 00
		std::uint64_t lastPerformanceCount;           // 08
		float         clamp;                          // 10
		float         clampRemainder;                 // 14
		float         delta;                          // 18
		float         realTimeDelta;                  // 1C
		std::uint32_t unk20;                          // 20
		std::uint32_t unk24;                          // 24
		float         unk28;                          // 28
		std::uint32_t unk2C;                          // 2C
		std::uint32_t unk30;                          // 30
		std::uint32_t unk34;                          // 34
		std::uint8_t  unk38;                          // 38
		std::uint8_t  unk39;                          // 39
		bool          useGlobalTimeMultiplierTarget;  // 3A
		std::uint8_t  pad3B;                          // 3B
		std::uint32_t pad3C;                          // 3C
	};
	static_assert(sizeof(BSTimer) == 0x40);
}
