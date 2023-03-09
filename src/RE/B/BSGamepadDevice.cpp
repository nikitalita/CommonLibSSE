//
// Created by Nikita on 3/8/2023.
//

#include "RE/B/BSGamepadDevice.h"

namespace RE
{
	BSGamepadDevice::BSGamepadDevice() :
		BSInputDevice(), connected(false), listeningForInput(false), userIndex(-1)
	{
		device = INPUT_DEVICE::kGamepad;
		const char* file = *(const char**)Offset::pGamepadDefinitionFile.address();
		LoadControlsDefinitionFile(file);
	}
}