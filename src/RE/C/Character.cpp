#include "RE/C/Character.h"
#include "RE/I/Inventory.h"
#include "RE/I/InventoryChanges.h"

namespace RE{

  TESObjectREFR * Character::RemoveOutfitItems(BGSOutfit * a_outfit){
    using func_t = decltype(&Character::RemoveOutfitItems);
		REL::Relocation<func_t> func{ Offset::TESNPC::RemoveOutfitItems };
		return func(this, a_outfit);
  }
}
