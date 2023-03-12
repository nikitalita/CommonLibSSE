#include "RE/B/BSWin32GamepadDevice.h"

namespace RE
{

	BSWin32GamepadDevice::BSWin32GamepadDevice() :
		BSPCGamepadDeviceDelegate(), PreviousState(), PreviousLT(0.0f), PreviousRT(0.0f), PreviousLX(0.0f), PreviousLY(0.0f), PreviousRX(0.0f), PreviousRY(0.0f), CurrentState(), CurrentLT(0.0f), CurrentRT(0.0f), CurrentLX(0.0f), CurrentLY(0.0f), CurrentRX(0.0f), CurrentRY(0.0f) {}
}