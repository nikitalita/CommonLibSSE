#include "RE/B/BSInputDeviceFactory.h"
#include "RE/B/BSPCGamepadDeviceHandler.h"
#include "RE/B/BSWin32KeyboardDevice.h"
#include "RE/B/BSWin32MouseDevice.h"
#include "RE/B/BSWin32VirtualKeyboardDevice.h"
#include "RE/T/TLSData.h"

namespace RE
{
	BSIInputDevice* BSInputDeviceFactory::CreateInputDevice(INPUT_DEVICE a_deviceType)
	{
// TODO: Figure out a way to get this to work without having to create proxies for the virtual functions of every input device
//		auto lastTask = GetStaticTLSData()->taskFlag;
//		GetStaticTLSData()->taskFlag = 89;
//		BSIInputDevice* device;
//		switch (a_deviceType) {
//		case INPUT_DEVICE::kKeyboard:
//			device = new BSWin32KeyboardDevice();
//			break;
//		case INPUT_DEVICE::kMouse:
//			device = new BSWin32MouseDevice();
//			break;
//		case INPUT_DEVICE::kGamepad:
//			device = new BSPCGamepadDeviceHandler();
//			break;
//		case INPUT_DEVICE::kVirtualKeyboard:
//			device = new BSWin32VirtualKeyboardDevice();
//			break;
//		default:
//			device = nullptr;
//			break;
//		}
//		GetStaticTLSData()->taskFlag = lastTask;
//		return device;
		using func_t = decltype(&BSInputDeviceFactory::CreateInputDevice);
		REL::Relocation<func_t> func{ RELOCATION_ID(67431, 68738) };
		return func(a_deviceType);
	}

	void BSInputDeviceFactory::DestroyInputDevice(BSIInputDevice* a_device)
	{
		delete a_device;
	}
}