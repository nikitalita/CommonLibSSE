#pragma once
#include "RE/B/BSTSingleton.h"

namespace RE
{

	class MenuCursor : public BSTSingletonSDM<MenuCursor>
	{
	public:
		[[nodiscard]] static MenuCursor* GetSingleton()
		{
			REL::Relocation<MenuCursor**> singleton{ Offset::MenuCursor::Singleton };
			return *singleton;
		}

		void SetCursorVisibility(bool a_visible);

		// members
		std::uint8_t  pad01;              // 01
		std::uint16_t pad02;              // 02
		float         cursorPosX;         // 04
		float         cursorPosY;         // 08
		float         safeZoneX;          // 0C
		float         safeZoneY;          // 10
		float         screenWidthX;       // 14
		float         screenWidthY;       // 18
		float         cursorSensitivity;  // 1C
		float         unk20;              // 20
		float         unk24;              // 24
		float         defaultMouseSpeed;  // 28
		std::int32_t  showCursorCount;    // 2C
	};

	static_assert(sizeof(MenuCursor) == 0x30);
	// TODO: These functions:
	// (1.5.97 addresses)
	//	MenuCursor::sub_140ED32A0	                    140ED32A0
	//	MenuCursor::sub_140ED2F40	                    140ED2F40
	//	MenuCursor::sub_140ED2E50	                    140ED2E50
	//  MenuCursor::Init_140EC1D80	                    140EC1D80
	//  MenuCursor::ProcessMouseMoveEvent_140ED2F90	    140ED2F90
	//  MenuCursor::ProcessThumbstickEvent_140ED3120    140ED3120
}
