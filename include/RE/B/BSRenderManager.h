#pragma once

#include "RE/N/NiTexture.h"
#include "RE/B/BSGraphics.h"

namespace RE
{
	namespace BSGraphics
	{
	public:
		struct RUNTIME_DATA
		{
#define RUNTIME_DATA_CONTENT                          \
	ID3D11Device*              forwarder;    /* 00 */ \
	ID3D11DeviceContext*       context;      /* 08 */ \
	std::uint64_t              unk58;        /* 10 */ \
	std::uint64_t              unk60;        /* 18 */ \
	std::uint64_t              unk68;        /* 20 */ \
	IDXGISwapChain*            swapChain;    /* 28 */ \
	std::uint64_t              unk78;        /* 30 */ \
	std::uint64_t              unk80;        /* 38 */ \
	ID3D11RenderTargetView1*   renderView;   /* 40 */ \
	ID3D11ShaderResourceView1* resourceView; /* 48 */

			RUNTIME_DATA_CONTENT
		};
		static_assert(sizeof(RUNTIME_DATA) == 0x50);

		[[nodiscard]] NiTexture::RendererData* CreateRenderTexture(std::uint32_t width, std::uint32_t height)
		{
			using func_t = decltype(&BSRenderManager::CreateRenderTexture);
			REL::Relocation<func_t> func{ RELOCATION_ID(75507, 77299) };
			return func(this, width, height);
		}

		[[nodiscard]] static BSRenderManager* GetSingleton() noexcept
		{
			REL::Relocation<BSRenderManager*> instance{ RELOCATION_ID(524907, 411393) };
			return instance.get();
		}

		[[nodiscard]] inline RUNTIME_DATA& GetRuntimeData() noexcept
		{
			return REL::RelocateMember<RUNTIME_DATA>(this, 0x48, 0x50);
		}

		[[nodiscard]] inline const RUNTIME_DATA& GetRuntimeData() const noexcept
		{
			return REL::RelocateMember<RUNTIME_DATA>(this, 0x48, 0x50);
		}

		[[nodiscard]] inline SKSE::WinAPI::CRITICAL_SECTION& GetLock() noexcept
		{
			return REL::RelocateMember<SKSE::WinAPI::CRITICAL_SECTION>(this, 0x2790, 0x2F00);
		}

		[[nodiscard]] inline const SKSE::WinAPI::CRITICAL_SECTION& GetLock() const noexcept
		{
			return REL::RelocateMember<SKSE::WinAPI::CRITICAL_SECTION>(this, 0x2790, 0x2F00);
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

#ifndef ENABLE_SKYRIM_VR
		std::uint64_t unk00[0x48 >> 3];                              // 0000
		RUNTIME_DATA_CONTENT;                                        // 0048
		std::uint64_t                  unk98[(0x2788 - 0x90) >> 3];  // 0098
		SKSE::WinAPI::CRITICAL_SECTION lock;                         // 2790
#elif !defined(ENABLE_SKYRIM_AE) && !defined(ENABLE_SKYRIM_SE)
		std::uint64_t unk00[0x50 >> 3];                              // 0000
		RUNTIME_DATA_CONTENT;                                        // 0050
		std::uint64_t                  unkA0[(0x2F00 - 0xA0) >> 3];  // 00A0
		SKSE::WinAPI::CRITICAL_SECTION lock;                         // 2F00
#endif
	};
#ifndef ENABLE_SKYRIM_VR
	static_assert(sizeof(BSRenderManager) == 0x27B8);
#elif !defined(ENABLE_SKYRIM_AE) && !defined(ENABLE_SKYRIM_SE)
	static_assert(sizeof(BSRenderManager) == 0x2F28);
#endif
}
