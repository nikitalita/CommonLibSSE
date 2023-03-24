#pragma once

#include "RE/P/PlayerInputHandler.h"

namespace RE
{
	struct ShoutHandler : public PlayerInputHandler
	{
	public:
		inline static constexpr auto RTTI = RTTI_ShoutHandler;

		~ShoutHandler() override;  // 00

		// override (PlayerInputHandler)
		bool CanProcess(InputEvent* a_event) override;                                  // 01
		void ProcessButton(ButtonEvent* a_event, PlayerControlsData* a_data) override;  // 04

		// members
		bool          failedShout;      // 10
		bool          registeredPress;  // 11
		std::byte     pad12[6];         // 12
		BSFixedString shoutName;        // 18
	};
	static_assert(sizeof(ShoutHandler) == 0x20);
}
