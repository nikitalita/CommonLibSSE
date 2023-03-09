#include "RE/B/BSInputDevice.h"

namespace RE
{
	bool BSInputDevice::IsKeyboard() const
	{
		return device == INPUT_DEVICE::kKeyboard;
	}

	bool BSInputDevice::IsMouse() const
	{
		return device == INPUT_DEVICE::kMouse;
	}

	bool BSInputDevice::IsGamepad() const
	{
		return device == INPUT_DEVICE::kGamepad;
	}

	bool BSInputDevice::IsPressed(std::uint32_t a_keyCode) const
	{
		auto it = deviceButtons.find(a_keyCode);
		return (it != deviceButtons.end()) && (it->second->heldDownSecs > 0.0);
	}

	BSInputDevice::BSInputDevice(): BSIInputDevice(), deviceButtons(), buttonNameIDMap()
	{
		device = INPUT_DEVICE::kNone;
	}

	bool BSInputDevice::LoadControlsDefinitionFile(const char* a_fileName)
	{
		using func_t = decltype(&BSInputDevice::LoadControlsDefinitionFile);
		REL::Relocation<func_t> func{ RELOCATION_ID(67438, 68745) };
		return func(this, a_fileName);
	}

	void BSInputDevice::ResetButtonMaps()
	{
		buttonNameIDMap.clear();
		deviceButtons.clear();
	}
	void BSInputDevice::SetButtonState(std::uint32_t a_buttonId, float timeSinceLastPoll, bool buttonWasPressed, bool buttonIsPressed)
	{
		using func_t = decltype(&BSInputDevice::SetButtonState);
		REL::Relocation<func_t> func{ RELOCATION_ID(67441, 68748) };
		return func(this, a_buttonId, timeSinceLastPoll, buttonWasPressed, buttonIsPressed);
	}
}
