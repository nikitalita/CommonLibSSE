#pragma once

#include "RE/N/NiTexture.h"
#include "RE/B/BSGraphics.h"

namespace RE
{
	namespace BSGraphics
	{
		class BSRenderManager
		{
			// TODO: There is a LOT more that is already reverse engineered at https://github.com/Nukem9/SkyrimSETest/tree/master/skyrim64_test/src/patches/TES/BSGraphics
		public:
			[[nodiscard]] static BSRenderManager* GetSingleton() noexcept
			{
				REL::Relocation<BSRenderManager**> singleton{ RELOCATION_ID(524907, 411393) };
				return *singleton;
			}

			[[nodiscard]] NiTexture::RendererData* CreateRenderTexture(std::uint32_t a_width, std::uint32_t a_height)
			{
				using func_t = decltype(&BSRenderManager::CreateRenderTexture);
				REL::Relocation<func_t> func{ RELOCATION_ID(75507, 77299) };
				return func(this, a_width, a_height);
			}
			void Init(RendererInitOSData* a_data, ApplicationWindowProperties* windowProps, WinAPI::HWND window)
			{
				using func_t = decltype(&BSRenderManager::Init);
				REL::Relocation<func_t> func{ Offset::BSGraphics::BSRenderManager::Init };
				return func(this, a_data, windowProps, window);
			}
			void Begin(std::uint32_t windowID)
			{
				using func_t = decltype(&BSRenderManager::Begin);
				REL::Relocation<func_t> func{ Offset::BSGraphics::BSRenderManager::Begin };
				return func(this, windowID);
			}
			void CreateSwapChain(WinAPI::HWND * window, bool setCurrent)
			{
				using func_t = decltype(&BSRenderManager::CreateSwapChain);
				REL::Relocation<func_t> func{ Offset::BSGraphics::BSRenderManager::CreateSwapChain };
				return func(this, window, setCurrent);
			}
			void End()
			{
				using func_t = decltype(&BSRenderManager::End);
				REL::Relocation<func_t> func{ Offset::BSGraphics::BSRenderManager::End };
				return func(this);
			}
			void KillWindow(std::uint32_t windowID)
			{
				using func_t = decltype(&BSRenderManager::KillWindow);
				REL::Relocation<func_t> func{ Offset::BSGraphics::BSRenderManager::KillWindow };
				return func(this, windowID);
			}
			void Lock()
			{
				using func_t = decltype(&BSRenderManager::Lock);
				REL::Relocation<func_t> func{ Offset::BSGraphics::BSRenderManager::Lock };
				return func(this);
			}
			void Unlock()
			{
				using func_t = decltype(&BSRenderManager::Unlock);
				REL::Relocation<func_t> func{ Offset::BSGraphics::BSRenderManager::Unlock };
				return func(this);
			}
			void ResizeWindow(std::uint32_t windowID, std::uint32_t width, std::uint32_t height, bool fullscreen, bool borderless)
			{
				using func_t = decltype(&BSRenderManager::ResizeWindow);
				REL::Relocation<func_t> func{ Offset::BSGraphics::BSRenderManager::ResizeWindow };
				return func(this, windowID, width, height, fullscreen, borderless);
			}
			void RequestWindowResize(std::uint32_t width, std::uint32_t height)
			{
				using func_t = decltype(&BSRenderManager::RequestWindowResize);
				REL::Relocation<func_t> func{ Offset::BSGraphics::BSRenderManager::RequestWindowResize };
				return func(this, width, height);
			}
			void SetWindowPosition(std::uint32_t windowID, std::int32_t x, std::int32_t y)
			{
				using func_t = decltype(&BSRenderManager::SetWindowPosition);
				REL::Relocation<func_t> func{ Offset::BSGraphics::BSRenderManager::SetWindowPosition };
				return func(this, windowID, x, y);
			}
			void SetWindowActiveState(bool show)
			{
				using func_t = decltype(&BSRenderManager::SetWindowActiveState);
				REL::Relocation<func_t> func{ Offset::BSGraphics::BSRenderManager::SetWindowActiveState };
				return func(this, show);
			}
			void WindowSizeChanged(std::uint32_t windowID)
			{
				using func_t = decltype(&BSRenderManager::WindowSizeChanged);
				REL::Relocation<func_t> func{ Offset::BSGraphics::BSRenderManager::WindowSizeChanged };
				return func(this, windowID);
			}
			void ResetWindow(std::uint32_t windowID)
			{
				using func_t = decltype(&BSRenderManager::ResetWindow);
				REL::Relocation<func_t> func{ Offset::BSGraphics::BSRenderManager::ResetWindow };
				return func(this, windowID);
			}
			void UpdateViewPort(std::uint32_t a_unk, std::uint32_t b_unk, bool c_unk)
			{
				using func_t = decltype(&BSRenderManager::UpdateViewPort);
				REL::Relocation<func_t> func{ Offset::BSGraphics::BSRenderManager::UpdateViewPort };
				return func(this, a_unk, b_unk, c_unk);
			}
			void Shutdown()
			{
				using func_t = decltype(&BSRenderManager::Shutdown);
				REL::Relocation<func_t> func{ Offset::BSGraphics::BSRenderManager::Shutdown };
				return func(this);
			}
			using ResetRenderTargets_t = void (*)();

			bool                  skipNextPresent;     // 00
			ResetRenderTargets_t* resetRenderTargets;  // 08
			RendererData          data;                // 10
		};
		static_assert(sizeof(BSRenderManager) == 0x27C8);
	}

}
