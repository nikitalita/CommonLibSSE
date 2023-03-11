#include "RE/R/Rumble.h"

namespace RE
{
	void Rumble::DisableRumble()
	{
		//  XINPUT_VIBRATION pVibration;
		//  pVibration = 0;
		//  return XInputSetState(0, &pVibration);
		using func_t = decltype(&Rumble::DisableRumble);
		REL::Relocation<func_t> func{ Offset::Rumble::DisableRumble };
		return func();
	}
}