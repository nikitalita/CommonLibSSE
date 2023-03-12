#include "RE/B/BSDirectInputManager.h"
#include "RE/Offsets.h"

namespace RE
{
	BSDirectInputManager* BSDirectInputManager::GetSingleton()
	{
		REL::Relocation<BSDirectInputManager**> singleton{ Offset::BSDirectInputManager::Singleton };
		return *singleton;
	}
	DirectInput8::IDirectInputDevice8A* BSDirectInputManager::CreateDeviceWithGUID(WinAPI::GUID* a_guid)
	{
		using func_t = decltype(&BSDirectInputManager::CreateDeviceWithGUID);
		REL::Relocation<func_t> func{ RE::Offset::BSDirectInputManager::CreateDeviceWithGUID };
		return func(this, a_guid);
	}
	void BSDirectInputManager::GetDeviceState(DirectInput8::IDirectInputDevice8A* a_device, std::uint32_t a_size, void* outData)
	{
		using func_t = decltype(&BSDirectInputManager::GetDeviceState);
		REL::Relocation<func_t> func{ RE::Offset::BSDirectInputManager::GetDeviceState };
		return func(this, a_device, a_size, outData);
	}
	void BSDirectInputManager::GetDeviceData(DirectInput8::IDirectInputDevice8A* a_device, std::uint32_t* a_dataSize, DirectInput8::DIDEVICEOBJECTDATA** outData)
	{
		using func_t = decltype(&BSDirectInputManager::GetDeviceData);
		REL::Relocation<func_t> func{ RE::Offset::BSDirectInputManager::GetDeviceData };
		return func(this, a_device, a_dataSize, outData);
	}
	void BSDirectInputManager::ReleaseDevice(DirectInput8::IDirectInputDevice8A* a_device)
	{
		using func_t = decltype(&BSDirectInputManager::ReleaseDevice);
		REL::Relocation<func_t> func{ RE::Offset::BSDirectInputManager::ReleaseDevice };
		return func(this, a_device);
	}
}