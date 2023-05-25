#pragma once

#include "RE/H/hkbContext.h"

namespace RE
{
	class hkbClipGenerator;
	class BSSynchronizedClipGenerator;

	class IAnimationClipLoaderSingleton
	{
	public:
		inline static auto RTTI = RTTI_IAnimationClipLoaderSingleton;
		inline static auto VTABLE = VTABLE_IAnimationClipLoaderSingleton;

		virtual ~IAnimationClipLoaderSingleton();  // 00

		// add
		virtual std::int32_t Unk_01(const hkbContext& a_hkbContext, hkbClipGenerator* a_clipGenerator, BSSynchronizedClipGenerator* a_synchronizedClipGenerator);  // 01
		virtual bool         Unk_02(const hkbContext& a_hkbContext, hkbClipGenerator* a_clipGenerator, BSSynchronizedClipGenerator* a_synchronizedClipGenerator);  // 02
		virtual std::int32_t Unk_03(const hkbContext& a_hkbContext, hkbClipGenerator* a_clipGenerator, BSSynchronizedClipGenerator* a_synchronizedClipGenerator);  // 03
		virtual void         Unk_04(const hkbContext& a_context, std::int16_t a_animationBindingIndex);                                                            // 04
		virtual void         Unk_05(const hkbContext& a_context, std::int16_t a_animationBindingIndex);                                                            // 05
	};
}
