#include "RE/B/BSMouseDevice.h"

namespace RE
{
	BSMouseDevice::BSMouseDevice() :
		BSInputDevice()
	{
		backgroundMouse = false;
		device = INPUT_DEVICE::kMouse;
		const char* file = *(const char**)Offset::pMouseDefinitionFile.address();
		LoadControlsDefinitionFile(file);
	}
}