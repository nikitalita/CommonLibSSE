#include "RE/B/BSPCOrbisGamepadDevice.h"

namespace RE
{

	BSPCOrbisGamepadDevice::BSPCOrbisGamepadDevice() :
		BSPCGamepadDeviceDelegate(), previousHIDState(), previousLT(), previousRT(), previousLX(), previousLY(), previousRX(), previousRY(), currentHIDState(), currentLT(), currentRT(), currentLX(), currentLY(), currentRX(), currentRY()
	{
	}
}