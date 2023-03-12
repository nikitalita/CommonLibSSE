#pragma once
#include "ButtonEvent.h"
#include "RE/B/BSTSingleton.h"
#include "RE/C/CharEvent.h"
#include "RE/D/DeviceConnectEvent.h"
#include "RE/K/KinectEvent.h"
#include "RE/M/MouseMoveEvent.h"
#include "RE/T/ThumbstickEvent.h"

namespace RE
{

	class BSInputEventQueue : public BSTSingletonSDM<BSInputEventQueue>
	{
	public:
		static BSInputEventQueue* GetSingleton();

		void EnqueueButtonEvent(INPUT_DEVICE device, std::uint32_t buttonId, float value, float heldDownSecs);
		void EnqueueCharEvent(std::uint32_t keycode);
		void EnqueueMouseMoveEvent(std::int32_t deltaX, std::int32_t deltaY);
		void EnqueueThumbstickEvent(std::uint32_t thumbstickId, float x, float y);
		void EnqueueDeviceConnectEvent(INPUT_DEVICE device, bool connected);
		void EnqueueKinectEvent(BSFixedString* userEvent, BSFixedString* heard);
		void Reset();

		//members
		std::uint8_t       pad000;                   // 000
		std::uint32_t      buttonEventCount;         // 004
		std::uint32_t      charEventCount;           // 008
		std::uint32_t      mouseEventsCount;         // 00C
		std::uint32_t      gamepadEventCount;        // 010
		std::uint32_t      deviceConnectEventCount;  // 014
		std::uint32_t      kinectEventsCount;        // 018
		std::uint32_t      pad01C;                   // 01C
		ButtonEvent        buttonEvents[10];         // 020
		CharEvent          charEvents[5];            // 200
		MouseMoveEvent     mouseMoveEvents[1];       // 2A0
		ThumbstickEvent    thumbstickEvents[2];      // 2D0
		DeviceConnectEvent deviceConnectEvents[1];   // 330
		KinectEvent        kinectEvents[1];          // 350
		InputEvent*        lastEvent;                // 380
		InputEvent*        currentEvent;             // 388
	};
	static_assert(sizeof(BSInputEventQueue) == 0x390);

}  // RE
