#pragma once

#include "RE/N/NiTexture.h"

struct ID3D11Device;
struct ID3D11DeviceContext;
struct IDXGISwapChain;
struct ID3D11RenderTargetView1;
struct ID3D11ShaderResourceView1;
struct ID3D11RenderTargetView;
struct ID3D11UnorderedAccessView;
struct ID3D11DeviceContext2;
struct ID3D11DepthStencilView;
namespace RE
{
	namespace BSGraphics
	{
		struct RenderTarget
		{
			// members
			ID3D11Texture2D*           texture;      // 00
			ID3D11Texture2D*           copyTexture;  // 08
			ID3D11RenderTargetView*    rtView;       // 10
			ID3D11ShaderResourceView*  srView;       // 18
			ID3D11ShaderResourceView*  copySRView;   // 20
			ID3D11UnorderedAccessView* uaView;       // 28
		};
		static_assert(sizeof(RenderTarget) == 0x30);

		struct CubemapRenderTarget
		{
			ID3D11Texture2D*          Texture;         // 00
			ID3D11RenderTargetView*   CubeSideRTV[6];  // 08
			ID3D11ShaderResourceView* SRV;             // 38
		};
		static_assert(sizeof(CubemapRenderTarget) == 0x40);

		class DepthStencilTarget
		{
		public:
			// members
			ID3D11Texture2D*          texture;                        // 00
			ID3D11DepthStencilView*   dsView[4];                      // 08
			ID3D11DepthStencilView*   dsViewReadOnlyDepth[4];         // 28
			ID3D11DepthStencilView*   dsViewReadOnlyStencil[4];       // 48
			ID3D11DepthStencilView*   dsViewReadOnlyDepthStencil[4];  // 68
			ID3D11ShaderResourceView* srViewDepth;                    // 88
			ID3D11ShaderResourceView* srViewStencil;                  // 90
		};
		static_assert(sizeof(DepthStencilTarget) == 0x98);

		struct RendererWindow
		{
			WinAPI::HWND*   hwnd;                   // 000
			int32_t         windowX;                // 008
			int32_t         windowY;                // 00C
			int32_t         windowWidth;            // 010
			int32_t         windowHeight;           // 014
			IDXGISwapChain* swapChain;              // 018
			RenderTarget    swapChainRenderTarget;  // 020
		};
		static_assert(sizeof(RendererWindow) == 0x50);

		struct Texture3DTargetData
		{
			std::uint8_t unk000[0x20];  // 000
		};
		static_assert(sizeof(Texture3DTargetData) == 0x20);

		struct RendererData
		{
			[[nodiscard]] static RendererData* GetSingleton() noexcept
			{
				REL::Relocation<RendererData**> singleton{ Offset::BSGraphics::pRendererData };
				return *singleton;
			}
			// members
			std::uint32_t                     adapter;                     // 0000
			DirectX::DXGI_RATIONAL            desiredRefreshRate;          // 0004
			DirectX::DXGI_RATIONAL            actualRefreshRate;           // 000C
			DirectX::DXGI_MODE_SCALING        scaleMode;                   // 0014
			DirectX::DXGI_MODE_SCANLINE_ORDER scanlineOrdering;            // 0018
			std::uint32_t                     fullscreen;                  // 001C
			bool                              appFullscreen;               // 0020
			bool                              borderlessWindow;            // 0021
			bool                              vsync;                       // 0022
			bool                              instantiated;                // 0023
			bool                              requestWindowSizeChange;     // 0024
			std::uint32_t                     newWidth;                    // 0028
			std::uint32_t                     newHeight;                   // 002C
			std::uint32_t                     presentInterval;             // 0030
			ID3D11Device*                     pDevice;                     // 0038
			ID3D11DeviceContext2*             pContext;                    // 0040
			RendererWindow                    RenderWindowA[32];           // 0048
			RenderTarget                      pRenderTargets[114];         // 0A48
			DepthStencilTarget                pDepthStencils[12];          // 1FA8
			CubemapRenderTarget               pCubemapRenderTargets[1];    // 26C8
			Texture3DTargetData               pTexture3DRenderTargets[3];  // 2708
			float                             ClearColor[4];               // 2768
			std::uint8_t                      ClearStencil;                // 2778
			BSCriticalSection                 RendererLock;                // 2780
			const char*                       className;                   // 27A8
			WinAPI::HINSTANCE                 instance;                    // 27B0
		};
		static_assert(sizeof(RendererData) == 0x27B8);

		class BSRenderManager
		{
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
			using ResetRenderTargets_t = void (*)();

			bool                  skipNextPresent;     // 00
			ResetRenderTargets_t* resetRenderTargets;  // 08
			RendererData          data;                // 10
		};
		static_assert(sizeof(BSRenderManager) == 0x27C8);
	}

}
