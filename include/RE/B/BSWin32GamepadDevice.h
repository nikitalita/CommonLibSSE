#pragma once

#include "RE/B/BSPCGamepadDeviceDelegate.h"

namespace RE
{
	class BSWin32GamepadDevice : public BSPCGamepadDeviceDelegate
	{
	public:
		inline static constexpr auto RTTI = RTTI_BSWin32GamepadDevice;
		inline static constexpr auto VTABLE = VTABLE_BSWin32GamepadDevice;

		struct Keys
		{
			enum Key : std::uint32_t
			{
				// button masks for wButtons
				kUp = XInput::XInputButton::XINPUT_GAMEPAD_DPAD_UP,                    // 0x0001
				kDown = XInput::XInputButton::XINPUT_GAMEPAD_DPAD_DOWN,                // 0x0002
				kLeft = XInput::XInputButton::XINPUT_GAMEPAD_DPAD_LEFT,                // 0x0004
				kRight = XInput::XInputButton::XINPUT_GAMEPAD_DPAD_RIGHT,              // 0x0008
				kStart = XInput::XInputButton::XINPUT_GAMEPAD_START,                   // 0x0010
				kBack = XInput::XInputButton::XINPUT_GAMEPAD_BACK,                     // 0x0020
				kLeftThumb = XInput::XInputButton::XINPUT_GAMEPAD_LEFT_THUMB,          // 0x0040
				kRightThumb = XInput::XInputButton::XINPUT_GAMEPAD_RIGHT_THUMB,        // 0x0080
				kLeftShoulder = XInput::XInputButton::XINPUT_GAMEPAD_LEFT_SHOULDER,    // 0x0100
				kRightShoulder = XInput::XInputButton::XINPUT_GAMEPAD_RIGHT_SHOULDER,  // 0x0200
				kA = XInput::XInputButton::XINPUT_GAMEPAD_A,                           // 0x1000
				kB = XInput::XInputButton::XINPUT_GAMEPAD_B,                           // 0x2000
				kX = XInput::XInputButton::XINPUT_GAMEPAD_X,                           // 0x4000
				kY = XInput::XInputButton::XINPUT_GAMEPAD_Y,                           // 0x8000

				// arbitrary values
				kLeftTrigger = 0x0009,
				kRightTrigger = 0x000A
			};
		};
		using Key = Keys::Key;

		struct ButtonState
		{
			bool up: 1;             // 0x0001
			bool down: 1;           // 0x0002
			bool left: 1;           // 0x0004
			bool right: 1;          // 0x0008
			bool start: 1;          // 0x0010
			bool back: 1;           // 0x0020
			bool leftThumb: 1;      // 0x0040
			bool rightThumb: 1;     // 0x0080
			bool leftShoulder: 1;   // 0x0100
			bool rightShoulder: 3;  // 0x0200, skip over 2 bits (XInput documentation says the state of these two bits are undefined)
			bool a: 1;              // 0x1000
			bool b: 1;              // 0x2000
			bool x: 1;              // 0x4000
			bool y: 1;              // 0x8000
		};

		~BSWin32GamepadDevice() override;  // 00

		// override (BSPCGamepadDeviceDelegate)
		void Initialize() override;           // 01
		void Process(float a_arg1) override;  // 02
		void Release() override;              // 03 - { return; }
		void Reset() override;                // 08 - { std::memset(&unk0D8, 0, 0x50); }
		void Unk_09(void) override;           // 09 - { return; }

		// helper functions

		/**
		 * Returns the previous ButtonState of the gamepad
		 *
		 * @return ButtonState
		 */
		ButtonState GetPreviousButtonState()
		{
			return stl::unrestricted_cast<ButtonState>(PreviousState.Gamepad.wButtons & XInput::XINPUT_BUTTON_MASK);
		};

		/**
		 * Returns the current ButtonState of the gamepad
		 *
		 * @return ButtonState
		 */
		ButtonState GetCurrentButtonState()
		{
			return stl::unrestricted_cast<ButtonState>(CurrentState.Gamepad.wButtons & XInput::XINPUT_BUTTON_MASK);
		};

		// members
		XInput::XINPUT_STATE PreviousState;  // 0D8
		float                PreviousLT;     // 0E8
		float                PreviousRT;     // 0EC
		float                PreviousLX;     // 0F0
		float                PreviousLY;     // 0F4
		float                PreviousRX;     // 0F8
		float                PreviousRY;     // 0FC
		XInput::XINPUT_STATE CurrentState;   // 100
		float                CurrentLT;      // 110
		float                CurrentRT;      // 114
		float                CurrentLX;      // 118
		float                CurrentLY;      // 11C
		float                CurrentRX;      // 120
		float                CurrentRY;      // 124

	protected:
		friend class BSGamepadDeviceHandler;
		TES_HEAP_REDEFINE_NEW();
		BSWin32GamepadDevice() :
			BSPCGamepadDeviceDelegate(), PreviousState(), PreviousLT(0.0f), PreviousRT(0.0f), PreviousLX(0.0f), PreviousLY(0.0f), PreviousRX(0.0f), PreviousRY(0.0f), CurrentState(), CurrentLT(0.0f), CurrentRT(0.0f), CurrentLX(0.0f), CurrentLY(0.0f), CurrentRX(0.0f), CurrentRY(0.0f) {}
	};
	static_assert(sizeof(BSWin32GamepadDevice) == 0x128);
}
