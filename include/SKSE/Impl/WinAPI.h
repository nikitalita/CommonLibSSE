#pragma once

#undef CP_UTF8
#undef IMAGE_SCN_MEM_EXECUTE
#undef IMAGE_SCN_MEM_WRITE
#undef INVALID_HANDLE_VALUE
#undef MAX_PATH
#undef MEM_COMMIT
#undef MEM_RESERVE
#undef MEM_RELEASE
#undef PAGE_EXECUTE_READWRITE
#undef HKEY_LOCAL_MACHINE

#undef GetEnvironmentVariable
#undef GetFileVersionInfoSize
#undef GetModuleFileName
#undef VerQueryValue
#undef GetFileVersionInfo
#undef GetModuleHandle
#undef LoadLibrary
#undef MessageBox
#undef OutputDebugString

namespace SKSE::WinAPI
{
	inline constexpr auto CP_UTF8{ static_cast<unsigned int>(65001) };
	inline constexpr auto IMAGE_SCN_MEM_EXECUTE{ static_cast<std::uint32_t>(0x20000000) };
	inline constexpr auto IMAGE_SCN_MEM_WRITE{ static_cast<std::uint32_t>(0x80000000) };
	inline const auto     INVALID_HANDLE_VALUE{ reinterpret_cast<void*>(static_cast<std::intptr_t>(-1)) };
	inline constexpr auto MAX_PATH{ static_cast<std::uint32_t>(260) };
	inline constexpr auto MEM_COMMIT{ static_cast<std::uint32_t>(0x00001000) };
	inline constexpr auto MEM_RESERVE{ static_cast<std::uint32_t>(0x00002000) };
	inline constexpr auto MEM_RELEASE{ static_cast<std::uint32_t>(0x00008000) };
	inline constexpr auto PAGE_EXECUTE_READWRITE{ static_cast<std::uint32_t>(0x40) };

	struct CRITICAL_SECTION
	{
	public:
		// members
		void*          DebugInfo;       // 00
		std::int32_t   LockCount;       // 08
		std::int32_t   RecursionCount;  // 0C
		void*          OwningThread;    // 10
		void*          LockSemaphore;   // 18
		std::uint64_t* SpinCount;       // 20
	};
	static_assert(sizeof(CRITICAL_SECTION) == 0x28);

	struct _FILETIME
	{
	public:
		// members
		std::uint32_t dwLowDateTime;   // 00
		std::uint32_t dwHighDateTime;  // 04
	};
	static_assert(sizeof(_FILETIME) == 0x8);
	using FILETIME = _FILETIME;

	struct _GUID
	{
		std::uint32_t Data1;
		std::uint16_t Data2;
		std::uint16_t Data3;
		std::uint8_t  Data4[8];
	};
	static_assert(sizeof(_GUID) == 0x10);
	using GUID = _GUID;

	struct HWND__;
	using HWND = HWND__*;

	struct HINSTANCE__;
	using HINSTANCE = HINSTANCE__*;
	using HMODULE = HINSTANCE;

    struct HKEY__;
    using HKEY = HKEY__*;

    inline auto HKEY_LOCAL_MACHINE = reinterpret_cast<HKEY>(static_cast<uintptr_t>(0x80000002));

	struct _WIN32_FIND_DATAA
	{
	public:
		// members
		std::uint32_t dwFileAttributes;
		FILETIME      ftCreationTime;
		FILETIME      ftLastAccessTime;
		FILETIME      ftLastWriteTime;
		std::uint32_t nFileSizeHigh;
		std::uint32_t nFileSizeLow;
		std::uint32_t dwReserved0;
		std::uint32_t dwReserved1;
		char          cFileName[MAX_PATH];
		char          cAlternateFileName[14];
	};
	static_assert(sizeof(_WIN32_FIND_DATAA) == 0x140);
	using WIN32_FIND_DATAA = _WIN32_FIND_DATAA;

	bool FreeLibrary(HMODULE a_module) noexcept;
	struct tagRECT
	{
		std::int32_t left;
		std::int32_t top;
		std::int32_t right;
		std::int32_t bottom;
	};
	using RECT = tagRECT;

	struct tagPOINT
	{
		std::int32_t x;
		std::int32_t y;
	};
	using POINT = tagPOINT;

	using HRESULT = std::int32_t;

	struct HICON__;
	using HICON = HICON__*;

	using WNDPROC = std::int32_t(__stdcall*)(HWND, std::uint32_t, std::uint64_t, std::int64_t);

	enum VKEnum : std::uint32_t
	{
		kVK_LBUTTON = 0x1,
		kVK_RBUTTON = 0x2,
		kVK_CANCEL = 0x3,
		kVK_MBUTTON = 0x4,
		kVK_XBUTTON1 = 0x5,
		kVK_XBUTTON2 = 0x6,
		kVK_BACK = 0x8,
		kVK_TAB = 0x9,
		kVK_RESERVED_0A = 0xA,
		kVK_RESERVED_0B = 0xB,
		kVK_CLEAR = 0xC,
		kVK_RETURN = 0xD,
		kVK_SHIFT = 0x10,
		kVK_CONTROL = 0x11,
		kVK_MENU = 0x12,
		kVK_PAUSE = 0x13,
		kVK_CAPITAL = 0x14,
		kVK_KANA = 0x15,
		kVK_HANGUEL = 0x15,
		kVK_HANGUL = 0x15,
		kVK_IME_ON = 0x16,
		kVK_JUNJA = 0x17,
		kVK_FINAL = 0x18,
		kVK_HANJA = 0x19,
		kVK_KANJI = kVK_HANJA,
		kVK_IME_OFF = 0x1A,
		kVK_ESCAPE = 0x1B,
		kVK_CONVERT = 0x1C,
		kVK_NONCONVERT = 0x1D,
		kVK_ACCEPT = 0x1E,
		kVK_MODECHANGE = 0x1F,
		kVK_SPACE = 0x20,
		kVK_PRIOR = 0x21,
		kVK_NEXT = 0x22,
		kVK_END = 0x23,
		kVK_HOME = 0x24,
		kVK_LEFT = 0x25,
		kVK_UP = 0x26,
		kVK_RIGHT = 0x27,
		kVK_DOWN = 0x28,
		kVK_SELECT = 0x29,
		kVK_PRINT = 0x2A,
		kVK_EXECUTE = 0x2B,
		kVK_SNAPSHOT = 0x2C,
		kVK_INSERT = 0x2D,
		kVK_DELETE = 0x2E,
		kVK_HELP = 0x2F,
		kVK_0 = 0x30,
		kVK_1 = 0x31,
		kVK_2 = 0x32,
		kVK_3 = 0x33,
		kVK_4 = 0x34,
		kVK_5 = 0x35,
		kVK_6 = 0x36,
		kVK_7 = 0x37,
		kVK_8 = 0x38,
		kVK_9 = 0x39,
		kVK_A = 0x41,
		kVK_B = 0x42,
		kVK_C = 0x43,
		kVK_D = 0x44,
		kVK_E = 0x45,
		kVK_F = 0x46,
		kVK_G = 0x47,
		kVK_H = 0x48,
		kVK_I = 0x49,
		kVK_J = 0x4A,
		kVK_K = 0x4B,
		kVK_L = 0x4C,
		kVK_M = 0x4D,
		kVK_N = 0x4E,
		kVK_O = 0x4F,
		kVK_P = 0x50,
		kVK_Q = 0x51,
		kVK_R = 0x52,
		kVK_S = 0x53,
		kVK_T = 0x54,
		kVK_U = 0x55,
		kVK_V = 0x56,
		kVK_W = 0x57,
		kVK_X = 0x58,
		kVK_Y = 0x59,
		kVK_Z = 0x5A,
		kVK_LWIN = 0x5B,
		kVK_RWIN = 0x5C,
		kVK_APPS = 0x5D,
		kVK_RESERVED_5E = 0x5E,
		kVK_SLEEP = 0x5F,
		kVK_NUMPAD0 = 0x60,
		kVK_NUMPAD1 = 0x61,
		kVK_NUMPAD2 = 0x62,
		kVK_NUMPAD3 = 0x63,
		kVK_NUMPAD4 = 0x64,
		kVK_NUMPAD5 = 0x65,
		kVK_NUMPAD6 = 0x66,
		kVK_NUMPAD7 = 0x67,
		kVK_NUMPAD8 = 0x68,
		kVK_NUMPAD9 = 0x69,
		kVK_MULTIPLY = 0x6A,
		kVK_ADD = 0x6B,
		kVK_SEPARATOR = 0x6C,
		kVK_SUBTRACT = 0x6D,
		kVK_DECIMAL = 0x6E,
		kVK_DIVIDE = 0x6F,
		kVK_F1 = 0x70,
		kVK_F2 = 0x71,
		kVK_F3 = 0x72,
		kVK_F4 = 0x73,
		kVK_F5 = 0x74,
		kVK_F6 = 0x75,
		kVK_F7 = 0x76,
		kVK_F8 = 0x77,
		kVK_F9 = 0x78,
		kVK_F10 = 0x79,
		kVK_F11 = 0x7A,
		kVK_F12 = 0x7B,
		kVK_F13 = 0x7C,
		kVK_F14 = 0x7D,
		kVK_F15 = 0x7E,
		kVK_F16 = 0x7F,
		kVK_F17 = 0x80,
		kVK_F18 = 0x81,
		kVK_F19 = 0x82,
		kVK_F20 = 0x83,
		kVK_F21 = 0x84,
		kVK_F22 = 0x85,
		kVK_F23 = 0x86,
		kVK_F24 = 0x87,
		kVK_NUMLOCK = 0x90,
		kVK_SCROLL = 0x91,
		kVK_OEMSPECIFIC_92 = 0x92,
		kVK_OEMSPECIFIC_93 = 0x93,
		kVK_OEMSPECIFIC_94 = 0x94,
		kVK_OEMSPECIFIC_95 = 0x95,
		kVK_OEMSPECIFIC_96 = 0x96,
		kVK_LSHIFT = 0xA0,
		kVK_RSHIFT = 0xA1,
		kVK_LCONTROL = 0xA2,
		kVK_RCONTROL = 0xA3,
		kVK_LMENU = 0xA4,
		kVK_RMENU = 0xA5,
		kVK_BROWSER_BACK = 0xA6,
		kVK_BROWSER_FORWARD = 0xA7,
		kVK_BROWSER_REFRESH = 0xA8,
		kVK_BROWSER_STOP = 0xA9,
		kVK_BROWSER_SEARCH = 0xAA,
		kVK_BROWSER_FAVORITES = 0xAB,
		kVK_BROWSER_HOME = 0xAC,
		kVK_VOLUME_MUTE = 0xAD,
		kVK_VOLUME_DOWN = 0xAE,
		kVK_VOLUME_UP = 0xAF,
		kVK_MEDIA_NEXT_TRACK = 0xB0,
		kVK_MEDIA_PREV_TRACK = 0xB1,
		kVK_MEDIA_STOP = 0xB2,
		kVK_MEDIA_PLAY_PAUSE = 0xB3,
		kVK_LAUNCH_MAIL = 0xB4,
		kVK_LAUNCH_MEDIA_SELECT = 0xB5,
		kVK_LAUNCH_APP1 = 0xB6,
		kVK_LAUNCH_APP2 = 0xB7,
		kVK_RESERVED_B8 = 0xB8,
		kVK_RESERVED_B9 = 0xB9,
		kVK_OEM_1 = 0xBA,
		kVK_OEM_PLUS = 0xBB,
		kVK_OEM_COMMA = 0xBC,
		kVK_OEM_MINUS = 0xBD,
		kVK_OEM_PERIOD = 0xBE,
		kVK_OEM_2 = 0xBF,
		kVK_OEM_3 = 0xC0,
		kVK_RESERVED_C1 = 0xC1,
		kVK_RESERVED_C2 = 0xC2,
		kVK_RESERVED_C3 = 0xC3,
		kVK_RESERVED_C4 = 0xC4,
		kVK_RESERVED_C5 = 0xC5,
		kVK_RESERVED_C6 = 0xC6,
		kVK_RESERVED_C7 = 0xC7,
		kVK_RESERVED_C8 = 0xC8,
		kVK_RESERVED_C9 = 0xC9,
		kVK_RESERVED_CA = 0xCA,
		kVK_RESERVED_CB = 0xCB,
		kVK_RESERVED_CC = 0xCC,
		kVK_RESERVED_CD = 0xCD,
		kVK_RESERVED_CE = 0xCE,
		kVK_RESERVED_CF = 0xCF,
		kVK_RESERVED_D0 = 0xD0,
		kVK_RESERVED_D1 = 0xD1,
		kVK_RESERVED_D2 = 0xD2,
		kVK_RESERVED_D3 = 0xD3,
		kVK_RESERVED_D4 = 0xD4,
		kVK_RESERVED_D5 = 0xD5,
		kVK_RESERVED_D6 = 0xD6,
		kVK_RESERVED_D7 = 0xD7,
		kVK_OEM_4 = 0xDB,
		kVK_OEM_5 = 0xDC,
		kVK_OEM_6 = 0xDD,
		kVK_OEM_7 = 0xDE,
		kVK_OEM_8 = 0xDF,
		kVK_RESERVED_E0 = 0xE0,
		kVK_OEMSPECIFIC_E1 = 0xE1,
		kVK_OEM_102 = 0xE2,
		kVK_OEMSPECIFIC_E3 = 0xE3,
		kVK_OEMSPECIFIC_E4 = 0xE4,
		kVK_PROCESSKEY = 0xE5,
		kVK_OEMSPECIFIC_E6 = 0xE6,
		kVK_PACKET = 0xE7,
		kVK_OEMSPECIFIC_E9 = 0xE9,
		kVK_OEMSPECIFIC_EA = 0xEA,
		kVK_OEMSPECIFIC_EB = 0xEB,
		kVK_OEMSPECIFIC_EC = 0xEC,
		kVK_OEMSPECIFIC_ED = 0xED,
		kVK_OEMSPECIFIC_EE = 0xEE,
		kVK_OEMSPECIFIC_EF = 0xEF,
		kVK_OEMSPECIFIC_F0 = 0xF0,
		kVK_OEMSPECIFIC_F1 = 0xF1,
		kVK_OEMSPECIFIC_F2 = 0xF2,
		kVK_OEMSPECIFIC_F3 = 0xF3,
		kVK_OEMSPECIFIC_F4 = 0xF4,
		kVK_OEMSPECIFIC_F5 = 0xF5,
		kVK_ATTN = 0xF6,
		kVK_CRSEL = 0xF7,
		kVK_EXSEL = 0xF8,
		kVK_EREOF = 0xF9,
		kVK_PLAY = 0xFA,
		kVK_ZOOM = 0xFB,
		kVK_NONAME = 0xFC,
		kVK_PA1 = 0xFD,
		kVK_OEM_CLEAR = 0xFE,
		kVK_RESERVED_FF = 0xFF
	};

	[[nodiscard]] void* GetCurrentModule() noexcept;

	[[nodiscard]] void* GetCurrentProcess() noexcept;

	[[nodiscard]] std::uint32_t GetCurrentThreadID() noexcept;

	[[nodiscard]] std::uint32_t GetEnvironmentVariable(
		const char*   a_name,
		char*         a_buffer,
		std::uint32_t a_size) noexcept;

	[[nodiscard]] std::uint32_t GetEnvironmentVariable(
		const wchar_t* a_name,
		wchar_t*       a_buffer,
		std::uint32_t  a_size) noexcept;

	[[nodiscard]] bool GetFileVersionInfo(
		const char*   a_filename,
		std::uint32_t a_handle,
		std::uint32_t a_len,
		void*         a_data) noexcept;

	[[nodiscard]] bool GetFileVersionInfo(
		const wchar_t* a_filename,
		std::uint32_t  a_handle,
		std::uint32_t  a_len,
		void*          a_data) noexcept;

	[[nodiscard]] std::uint32_t GetFileVersionInfoSize(
		const char*    a_filename,
		std::uint32_t* a_handle) noexcept;

	[[nodiscard]] std::uint32_t GetFileVersionInfoSize(
		const wchar_t* a_filename,
		std::uint32_t* a_handle) noexcept;

	[[nodiscard]] std::int16_t GetKeyState(int nVirtKey) noexcept;

	[[nodiscard]] std::size_t GetMaxPath() noexcept;

	[[nodiscard]] std::uint32_t GetModuleFileName(
		void*         a_module,
		char*         a_filename,
		std::uint32_t a_size) noexcept;

	[[nodiscard]] std::uint32_t GetModuleFileName(
		void*         a_module,
		wchar_t*      a_filename,
		std::uint32_t a_size) noexcept;

	[[nodiscard]] HMODULE GetModuleHandle(const char* a_moduleName) noexcept;

	[[nodiscard]] HMODULE GetModuleHandle(const wchar_t* a_moduleName) noexcept;

	[[nodiscard]] void* GetProcAddress(
		void*       a_module,
		const char* a_procName) noexcept;

	[[nodiscard]] bool IsDebuggerPresent() noexcept;

	[[nodiscard]] HMODULE LoadLibrary(const char* a_libFileName) noexcept;

	[[nodiscard]] HMODULE LoadLibrary(const wchar_t* a_libFileName) noexcept;

	std::int32_t MessageBox(
		void*        a_wnd,
		const char*  a_text,
		const char*  a_caption,
		unsigned int a_type) noexcept;

	std::int32_t MessageBox(
		void*          a_wnd,
		const wchar_t* a_text,
		const wchar_t* a_caption,
		unsigned int   a_type) noexcept;

	[[nodiscard]] int MultiByteToWideChar(
		unsigned int  a_codePage,
		std::uint32_t a_flags,
		const char*   a_multiByteStr,
		int           a_multiByte,
		wchar_t*      a_wideCharStr,
		int           a_wideChar);

	void OutputDebugString(
		const char* a_outputString) noexcept;

	void OutputDebugString(
		const wchar_t* a_outputString) noexcept;

    long RegGetValueW(HKEY hkey, const char* subKey, const char* value, unsigned long flags, unsigned long* type,
                         void* data, unsigned long* length);

    long RegGetValueW(HKEY hkey, const wchar_t* subKey, const wchar_t* value, unsigned long flags, unsigned long* type,
                         void* data, unsigned long* length);
	[[nodiscard]] int ShowCursor(bool bShow) noexcept;

	[[noreturn]] void TerminateProcess(
		void*        a_process,
		unsigned int a_exitCode) noexcept;

	[[nodiscard]] void* TlsGetValue(std::uint32_t a_tlsIndex) noexcept;

	bool TlsSetValue(
		std::uint32_t a_tlsIndex,
		void*         a_tlsValue) noexcept;

	bool VirtualFree(
		void*         a_address,
		std::size_t   a_size,
		std::uint32_t a_freeType) noexcept;

	[[nodiscard]] bool VerQueryValue(
		const void*   a_block,
		const char*   a_subBlock,
		void**        a_buffer,
		unsigned int* a_len) noexcept;

	[[nodiscard]] bool VerQueryValue(
		const void*    a_block,
		const wchar_t* a_subBlock,
		void**         a_buffer,
		unsigned int*  a_len) noexcept;

	[[nodiscard]] bool VirtualProtect(
		void*          a_address,
		std::size_t    a_size,
		std::uint32_t  a_newProtect,
		std::uint32_t* a_oldProtect) noexcept;

	[[nodiscard]] int WideCharToMultiByte(
		unsigned int   a_codePage,
		std::uint32_t  a_flags,
		const wchar_t* a_wideCharStr,
		int            a_wideChar,
		char*          a_multiByteStr,
		int            a_multiByte,
		const char*    a_defaultChar,
		int*           a_usedDefaultChar);
}

namespace RE::DirectX
{
	struct XMFLOAT4X4
	{
	public:
		// members
		float m[4][4];
	};
	static_assert(sizeof(XMFLOAT4X4) == 0x40);

	struct DXGI_RATIONAL
	{
	public:
		// members
		std::uint32_t numerator;    // 00
		std::uint32_t denominator;  // 04
	};
	static_assert(sizeof(DXGI_RATIONAL) == 0x08);
	enum DXGI_MODE_SCALING : std::uint32_t
	{
		DXGI_MODE_SCALING_UNSPECIFIED   = 0,
		DXGI_MODE_SCALING_CENTERED      = 1,
		DXGI_MODE_SCALING_STRETCHED     = 2
	};
	enum DXGI_MODE_SCANLINE_ORDER : std::uint32_t
	{
		DXGI_MODE_SCANLINE_ORDER_UNSPECIFIED        = 0,
		DXGI_MODE_SCANLINE_ORDER_PROGRESSIVE        = 1,
		DXGI_MODE_SCANLINE_ORDER_UPPER_FIELD_FIRST  = 2,
		DXGI_MODE_SCANLINE_ORDER_LOWER_FIELD_FIRST  = 3
	};
}

#define CP_UTF8 ::SKSE::WinAPI::CP_UTF8
#define IMAGE_SCN_MEM_EXECUTE ::SKSE::WinAPI::IMAGE_SCN_MEM_EXECUTE
#define IMAGE_SCN_MEM_WRITE ::SKSE::WinAPI::IMAGE_SCN_MEM_WRITE
#define INVALID_HANDLE_VALUE ::SKSE::WinAPI::INVALID_HANDLE_VALUE
#define MAX_PATH ::SKSE::WinAPI::MAX_PATH
#define MEM_COMMIT ::SKSE::WinAPI::MEM_COMMIT
#define MEM_RESERVE ::SKSE::WinAPI::MEM_RESERVE
#define MEM_RELEASE ::SKSE::WinAPI::MEM_RELEASE
#define PAGE_EXECUTE_READWRITE ::SKSE::WinAPI::PAGE_EXECUTE_READWRITE

#define GetEnvironmentVariable ::SKSE::WinAPI::GetEnvironmentVariable
#define GetFileVersionInfoSize ::SKSE::WinAPI::GetFileVersionInfoSize
#define GetModuleFileName ::SKSE::WinAPI::GetModuleFileName
#define VerQueryValue ::SKSE::WinAPI::VerQueryValue
#define GetFileVersionInfo ::SKSE::WinAPI::GetFileVersionInfo
#define GetModuleHandle ::SKSE::WinAPI::GetModuleHandle
#define LoadLibrary ::SKSE::WinAPI::LoadLibrary
#define MessageBox ::SKSE::WinAPI::MessageBox
#define OutputDebugString ::SKSE::WinAPI::OutputDebugString
