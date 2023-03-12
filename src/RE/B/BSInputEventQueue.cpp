#include "RE/B/BSInputEventQueue.h"

namespace RE
{
	BSInputEventQueue* BSInputEventQueue::GetSingleton()
	{
		REL::Relocation<BSInputEventQueue**> singleton{ Offset::BSInputEventQueue::Singleton };
		return *singleton;
	}
	void BSInputEventQueue::EnqueueButtonEvent(INPUT_DEVICE device, std::uint32_t buttonId, float value, float heldDownSecs)
	{
		using func_t = decltype(&BSInputEventQueue::EnqueueButtonEvent);
		REL::Relocation<func_t> func{ Offset::BSInputEventQueue::EnqueueButtonEvent };
		return func(this, device, buttonId, value, heldDownSecs);
	}
	void BSInputEventQueue::EnqueueCharEvent(std::uint32_t keycode)
	{
		using func_t = decltype(&BSInputEventQueue::EnqueueCharEvent);
		REL::Relocation<func_t> func{ Offset::BSInputEventQueue::EnqueueCharEvent };
		return func(this, keycode);
	}
	void BSInputEventQueue::EnqueueMouseMoveEvent(std::int32_t deltaX, std::int32_t deltaY)
	{
		using func_t = decltype(&BSInputEventQueue::EnqueueMouseMoveEvent);
		REL::Relocation<func_t> func{ Offset::BSInputEventQueue::EnqueueMouseMoveEvent };
		return func(this, deltaX, deltaY);
	}
	void BSInputEventQueue::EnqueueThumbstickEvent(std::uint32_t thumbstickId, float x, float y)
	{
		using func_t = decltype(&BSInputEventQueue::EnqueueThumbstickEvent);
		REL::Relocation<func_t> func{ Offset::BSInputEventQueue::EnqueueThumbstickEvent };
		return func(this, thumbstickId, x, y);
	}
	void BSInputEventQueue::EnqueueDeviceConnectEvent(INPUT_DEVICE device, bool connected)
	{
		using func_t = decltype(&BSInputEventQueue::EnqueueDeviceConnectEvent);
		REL::Relocation<func_t> func{ Offset::BSInputEventQueue::EnqueueDeviceConnectEvent };
		return func(this, device, connected);
	}
	void BSInputEventQueue::EnqueueKinectEvent(BSFixedString* userEvent, BSFixedString* heard)
	{
		using func_t = decltype(&BSInputEventQueue::EnqueueKinectEvent);
		REL::Relocation<func_t> func{ Offset::BSInputEventQueue::EnqueueKinectEvent };
		return func(this, userEvent, heard);
	}
	void BSInputEventQueue::Reset()
	{
		using func_t = decltype(&BSInputEventQueue::Reset);
		REL::Relocation<func_t> func{ Offset::BSInputEventQueue::Reset };
		return func(this);
	}
}