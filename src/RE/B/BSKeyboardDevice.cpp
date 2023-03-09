#include "RE/B/BSKeyboardDevice.h"
namespace RE
{
	BSKeyboardDevice::BSKeyboardDevice() :
		BSInputDevice()
	{
		device = INPUT_DEVICE::kKeyboard;
		const char* prefix = *(const char**)Offset::pKeyboardDefinitionFilePrefix.address();
		const char* locale = *(const char**)Offset::pDefaultLocale.address();
		std::string path = prefix + std::string(locale) + ".txt";
		if (!LoadControlsDefinitionFile(path.c_str())) {
			path = prefix + std::string("ENGLISH.txt");
			if (!LoadControlsDefinitionFile(path.c_str())) {
				path = prefix;
				path = path.substr(0, path.find_last_of('_')) + ".txt";
				LoadControlsDefinitionFile(path.c_str());
			}
		}
	}
}