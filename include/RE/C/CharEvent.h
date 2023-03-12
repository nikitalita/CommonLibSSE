#pragma once

#include "RE/I/InputEvent.h"

namespace RE
{

	class CharEvent : public InputEvent
	{
		inline static constexpr auto RTTI = RTTI_CharEvent;

	public:
		~CharEvent() override;  // 00

		// members
		std::uint32_t keycode; // 18
		std::uint32_t pad1C;
	};
	static_assert(sizeof(CharEvent) == 0x20);

}
