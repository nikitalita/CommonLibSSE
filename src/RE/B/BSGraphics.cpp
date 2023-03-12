#include "RE/B/BSGraphics.h"

namespace RE::BSGraphics
{
	[[nodiscard]] RendererData* UTIL::GetRendererData()
	{
		REL::Relocation<RendererData**> singleton{ Offset::BSGraphics::pRendererData };
		return *singleton;
	}
	[[nodiscard]] ScreenSize* UTIL::GetScreenSize()
	{
		REL::Relocation<ScreenSize**> singleton{ Offset::BSGraphics::pScreenSize };
		return *singleton;
	}
	[[nodiscard]] ID3D11Device* UTIL::GetDevice()
	{
		REL::Relocation<ID3D11Device**> device{ Offset::BSGraphics::pDevice };
		return *device;
	}
	[[nodiscard]] RendererWindow* UTIL::GetCurrentRenderWindow()
	{
		REL::Relocation<RendererWindow**> renderWindow{ Offset::BSGraphics::pCurrentRenderWindow };
		return *renderWindow;
	}
}