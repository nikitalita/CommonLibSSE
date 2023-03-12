#pragma once

#include "REL/Relocation.h"

namespace RE
{
	namespace Offset
	{
#ifdef SKYRIM_SUPPORT_AE
		namespace Actor
		{
			inline constexpr REL::ID AddSpell(static_cast<std::uint64_t>(38716));
			inline constexpr REL::ID DispelWornItemEnchantments(static_cast<std::uint64_t>(34620));
			inline constexpr REL::ID DoReset3D(static_cast<std::uint64_t>(40255));
			inline constexpr REL::ID GetGhost(static_cast<std::uint64_t>(37275));
			inline constexpr REL::ID GetHostileToActor(static_cast<std::uint64_t>(37537));
			inline constexpr REL::ID GetLevel(static_cast<std::uint64_t>(37334));
			inline constexpr REL::ID HasPerk(static_cast<std::uint64_t>(37698));
			inline constexpr REL::ID IsRunning(static_cast<std::uint64_t>(37234));
			inline constexpr REL::ID RequestDetectionLevel(static_cast<std::uint64_t>(37764));
			inline constexpr REL::ID SwitchRace(static_cast<std::uint64_t>(37925));
			inline constexpr REL::ID UpdateArmorAbility(static_cast<std::uint64_t>(38751));
			inline constexpr REL::ID UpdateWeaponAbility(static_cast<std::uint64_t>(38752));
		}

		namespace ActorEquipManager
		{
			inline constexpr REL::ID EquipObject(static_cast<std::uint64_t>(38894));
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(400636));
			inline constexpr REL::ID UnequipObject(static_cast<std::uint64_t>(38901));
		}

		namespace ActorValueOwner
		{
			inline constexpr REL::ID GetClampedActorValue(static_cast<std::uint64_t>(27284));
		}

		namespace AIProcess
		{
			inline constexpr REL::ID SetBaseScale(static_cast<std::uint64_t>(39588));
			inline constexpr REL::ID Update3DModel(static_cast<std::uint64_t>(39395));
		}

		namespace BGSFootstepManager
		{
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(403553));
		}

		namespace BGSListForm
		{
			inline constexpr REL::ID AddForm(static_cast<std::uint64_t>(20913));
		}

		namespace BGSSaveLoadManager
		{
			inline constexpr REL::ID Save(static_cast<std::uint64_t>(35727));
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(403340));
			inline constexpr REL::ID Load(static_cast<std::uint64_t>(35728));
		}

		namespace BGSStoryTeller
		{
			inline constexpr REL::ID BeginShutDownQuest(static_cast<std::uint64_t>(32486));
			inline constexpr REL::ID BeginStartUpQuest(static_cast<std::uint64_t>(32485));
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(400476));
		}

		namespace BipedAnim
		{
			inline constexpr REL::ID Dtor(static_cast<std::uint64_t>(15656));
			inline constexpr REL::ID RemoveAllParts(static_cast<std::uint64_t>(15659));
		}

		namespace BSAudioManager
		{
			inline constexpr REL::ID GetSingleton(static_cast<std::uint64_t>(67652));
			inline constexpr REL::ID BuildSoundDataFromDescriptor(static_cast<std::uint64_t>(67666));
		}

		namespace BSInputDeviceManager
		{
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(402776));
		}

		namespace BSLightingShaderMaterialBase
		{
			inline constexpr REL::ID CreateMaterial(static_cast<std::uint64_t>(106723));
		}

		namespace BSReadWriteLock
		{
			inline constexpr REL::ID LockForRead(static_cast<std::uint64_t>(68233));
			inline constexpr REL::ID LockForWrite(static_cast<std::uint64_t>(68234));
			inline constexpr REL::ID UnlockForRead(static_cast<std::uint64_t>(68239));
			inline constexpr REL::ID UnlockForWrite(static_cast<std::uint64_t>(68240));
		}

		namespace BSResourceNiBinaryStream
		{
			inline constexpr REL::ID Ctor(static_cast<std::uint64_t>(71014));
			inline constexpr REL::ID Dtor(static_cast<std::uint64_t>(71016));
			inline constexpr REL::ID Seek(static_cast<std::uint64_t>(71018));
			inline constexpr REL::ID SetEndianSwap(static_cast<std::uint64_t>(71021));
		}

		namespace BSScaleformTranslator
		{
			inline constexpr REL::ID GetCachedString(static_cast<std::uint64_t>(69188));
		}

		namespace BSScript
		{
			namespace ObjectBindPolicy
			{
				inline constexpr REL::ID BindObject(static_cast<std::uint64_t>(104184));
			}

			namespace NF_util
			{
				namespace NativeFunctionBase
				{
					inline constexpr REL::ID Call(static_cast<std::uint64_t>(104651));
				}
			}

			namespace Stack
			{
				inline constexpr REL::ID Dtor(static_cast<std::uint64_t>(104480));
			}
		}

		namespace BSSoundHandle
		{
			inline constexpr REL::ID IsValid(static_cast<std::uint64_t>(67621));
			inline constexpr REL::ID Play(static_cast<std::uint64_t>(67616));
			inline constexpr REL::ID SetObjectToFollow(static_cast<std::uint64_t>(67636));
			inline constexpr REL::ID SetPosition(static_cast<std::uint64_t>(67631));
			inline constexpr REL::ID Stop(static_cast<std::uint64_t>(67619));
		}

		namespace BSString
		{
			inline constexpr REL::ID Set_CStr(static_cast<std::uint64_t>(11044));
		}

		namespace BucketTable
		{
			inline constexpr REL::ID GetSingleton(static_cast<std::uint64_t>(69200));
		}

		namespace BSWin32SaveDataSystemUtility
		{
			inline constexpr REL::ID GetSingleton(static_cast<std::uint64_t>(109278));
		}

		namespace Calendar
		{
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(400447));
		}

		namespace Console
		{
			inline constexpr REL::ID SelectedRef(static_cast<std::uint64_t>(405935));
			inline constexpr REL::ID SetSelectedRef(static_cast<std::uint64_t>(51093));
		}

		namespace ConsoleLog
		{
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(401203));
			inline constexpr REL::ID VPrint(static_cast<std::uint64_t>(51110));
		}

		namespace ControlMap
		{
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(400863));
		}

		namespace CraftingSubMenus
		{
			namespace EnchantConstructMenu
			{
				inline constexpr REL::ID RenameItem(static_cast<std::uint64_t>(51415));
				inline constexpr REL::ID UpdateInterface(static_cast<std::uint64_t>(51459));
			}
		}

		namespace CRC32Calculator
		{
			inline constexpr REL::ID SizeOf32(static_cast<std::uint64_t>(12141));
			inline constexpr REL::ID SizeOf64(static_cast<std::uint64_t>(68221));
			inline constexpr REL::ID SizeOfSize(static_cast<std::uint64_t>(68219));
		}

		namespace ExtraDataList
		{
			inline constexpr REL::ID Add(static_cast<std::uint64_t>(12315));
			inline constexpr REL::ID SetCount(static_cast<std::uint64_t>(11617));
			inline constexpr REL::ID SetExtraFlags(static_cast<std::uint64_t>(12042));
			inline constexpr REL::ID SetInventoryChanges(static_cast<std::uint64_t>(11600));
		}

		namespace GameSettingCollection
		{
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(400782));
		}

		namespace GASActionBufferData
		{
			inline constexpr REL::ID Vtbl(static_cast<std::uint64_t>(242366));
		}

		namespace GASDoAction
		{
			inline constexpr REL::ID Vtbl(static_cast<std::uint64_t>(242413));
		}

		namespace GASDoInitAction
		{
			inline constexpr REL::ID Vtbl(static_cast<std::uint64_t>(242414));
		}

		namespace GFxInitImportActions
		{
			inline constexpr REL::ID Vtbl(static_cast<std::uint64_t>(244866));
		}

		namespace GFxLoader
		{
			inline constexpr REL::ID CreateMovie(static_cast<std::uint64_t>(84640));
		}

		namespace GFxMovieView
		{
			inline constexpr REL::ID InvokeNoReturn(static_cast<std::uint64_t>(82665));
		}

		namespace GFxPlaceObject2
		{
			inline constexpr REL::ID Vtbl(static_cast<std::uint64_t>(242592));
		}

		namespace GFxPlaceObject3
		{
			inline constexpr REL::ID Vtbl(static_cast<std::uint64_t>(242593));
		}

		namespace GFxRemoveObject
		{
			inline constexpr REL::ID Vtbl(static_cast<std::uint64_t>(244863));
		}

		namespace GFxRemoveObject2
		{
			inline constexpr REL::ID Vtbl(static_cast<std::uint64_t>(244864));
		}

		namespace GFxSetBackgroundColor
		{
			inline constexpr REL::ID Vtbl(static_cast<std::uint64_t>(244865));
		}

		namespace GFxValue
		{
			namespace ObjectInterface
			{
				inline constexpr REL::ID AttachMovie(static_cast<std::uint64_t>(82219));
				inline constexpr REL::ID DeleteMember(static_cast<std::uint64_t>(82230));
				inline constexpr REL::ID GetArraySize(static_cast<std::uint64_t>(82237));
				inline constexpr REL::ID GetCxform(static_cast<std::uint64_t>(82238));
				inline constexpr REL::ID GetDisplayInfo(static_cast<std::uint64_t>(82239));
				inline constexpr REL::ID GetDisplayMatrix(static_cast<std::uint64_t>(82240));
				inline constexpr REL::ID GetElement(static_cast<std::uint64_t>(82241));
				inline constexpr REL::ID GetMember(static_cast<std::uint64_t>(82245));
				inline constexpr REL::ID GotoAndPlay(static_cast<std::uint64_t>(82253));
				inline constexpr REL::ID HasMember(static_cast<std::uint64_t>(82254));
				inline constexpr REL::ID Invoke(static_cast<std::uint64_t>(82256));
				inline constexpr REL::ID ObjectAddRef(static_cast<std::uint64_t>(82269));
				inline constexpr REL::ID ObjectRelease(static_cast<std::uint64_t>(82270));
				inline constexpr REL::ID PushBack(static_cast<std::uint64_t>(82273));
				inline constexpr REL::ID RemoveElements(static_cast<std::uint64_t>(82280));
				inline constexpr REL::ID SetArraySize(static_cast<std::uint64_t>(82285));
				inline constexpr REL::ID SetDisplayInfo(static_cast<std::uint64_t>(82287));
				inline constexpr REL::ID SetDisplayMatrix(static_cast<std::uint64_t>(82288));
				inline constexpr REL::ID SetCxform(static_cast<std::uint64_t>(82286));
				inline constexpr REL::ID SetElement(static_cast<std::uint64_t>(82289));
				inline constexpr REL::ID SetMember(static_cast<std::uint64_t>(82292));
				inline constexpr REL::ID SetText(static_cast<std::uint64_t>(82293));
				inline constexpr REL::ID VisitMembers(static_cast<std::uint64_t>(82302));
			}
		}

		namespace GMemory
		{
			inline constexpr REL::ID GlobalHeap(static_cast<std::uint64_t>(412058));
		}

		namespace hkReferencedObject
		{
			inline constexpr REL::ID AddReference(static_cast<std::uint64_t>(57010));
			inline constexpr REL::ID RemoveReference(static_cast<std::uint64_t>(57011));
		}

		namespace INIPrefSettingCollection
		{
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(410219));
		}

		namespace INISettingCollection
		{
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(411155));
		}

		namespace InterfaceStrings
		{
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(400446));
		}

		namespace Inventory
		{
			inline constexpr REL::ID GetEventSource(static_cast<std::uint64_t>(16225));
		}

		namespace InventoryChanges
		{
			inline constexpr REL::ID GetNextUniqueID(static_cast<std::uint64_t>(16148));
			inline constexpr REL::ID SendContainerChangedEvent(static_cast<std::uint64_t>(16149));
			inline constexpr REL::ID SetUniqueID(static_cast<std::uint64_t>(16149));
			inline constexpr REL::ID TransferItemUID(static_cast<std::uint64_t>(16149));
		}

		namespace ItemCrafted
		{
			inline constexpr REL::ID GetEventSource(static_cast<std::uint64_t>(51403));
		}

		namespace ItemList
		{
			inline constexpr REL::ID Update(static_cast<std::uint64_t>(51031));
		}

		namespace ItemsPickpocketed
		{
			inline constexpr REL::ID GetEventSource(static_cast<std::uint64_t>(51183));
		}

		namespace LocalMapCamera
		{
			inline constexpr REL::ID Ctor(static_cast<std::uint64_t>(16325));
			inline constexpr REL::ID SetNorthRotation(static_cast<std::uint64_t>(16330));
		}

		namespace LooseFileStream
		{
			//inline constexpr REL::ID Ctor(static_cast<std::uint64_t>(0));
		}

		namespace MagicFavorites
		{
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(403337));
		}

		namespace MagicItem
		{
			inline constexpr REL::ID CalculateCost(static_cast<std::uint64_t>(11321));
			inline constexpr REL::ID GetCostliestEffectItem(static_cast<std::uint64_t>(11335));
		}

		namespace MagicTarget
		{
			inline constexpr REL::ID HasMagicEffect(static_cast<std::uint64_t>(34517));
		}

		namespace Main
		{
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(403449));
		}

		namespace MenuControls
		{
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(401263));
		}

		namespace MessageDataFactoryManager
		{
			inline constexpr REL::ID GetSingleton(static_cast<std::uint64_t>(52875));
		}

		namespace NiAVObject
		{
			inline constexpr REL::ID SetMotionType(static_cast<std::uint64_t>(77866));
			inline constexpr REL::ID Update(static_cast<std::uint64_t>(70251));
		}

		namespace NiCamera
		{
			inline constexpr REL::ID WorldPtToScreenPt3(static_cast<std::uint64_t>(70640));
		}

		namespace NiMemManager
		{
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(410319));
		}

		namespace NiNode
		{
			inline constexpr REL::ID Ctor(static_cast<std::uint64_t>(70287));
		}

		namespace NiPoint3
		{
			inline constexpr REL::ID Zero(static_cast<std::uint64_t>(410468));
		}

		namespace NiRefObject
		{
			inline constexpr REL::ID TotalObjectCount(static_cast<std::uint64_t>(410493));
		}

		namespace NiSkinInstance
		{
			inline constexpr REL::ID Ctor(static_cast<std::uint64_t>(71227));
		}

		namespace PlayerCamera
		{
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(400802));
			inline constexpr REL::ID UpdateThirdPerson(static_cast<std::uint64_t>(50841));
		}

		namespace PlayerCharacter
		{
			namespace PlayerSkills
			{
				inline constexpr REL::ID AdvanceLevel(static_cast<std::uint64_t>(41567));
			}

			inline constexpr REL::ID ActivatePickRef(static_cast<std::uint64_t>(40548));
			inline constexpr REL::ID GetArmorValue(static_cast<std::uint64_t>(40249));
			inline constexpr REL::ID GetDamage(static_cast<std::uint64_t>(40253));
			inline constexpr REL::ID GetNumTints(static_cast<std::uint64_t>(40700));
			inline constexpr REL::ID GetTintMask(static_cast<std::uint64_t>(40698));
			inline constexpr REL::ID PlayPickupEvent(static_cast<std::uint64_t>(40456));
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(403521));
			inline constexpr REL::ID StartGrabObject(static_cast<std::uint64_t>(40552));
		}

		namespace PlayerControls
		{
			inline constexpr REL::ID Ctor(static_cast<std::uint64_t>(42336));
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(400864));
		}

		namespace RaceSexMenu
		{
			inline constexpr REL::ID ChangeName(static_cast<std::uint64_t>(52415));
		}

		namespace ReferenceEffectController
		{
			inline constexpr REL::ID Start(static_cast<std::uint64_t>(34761));
		}

		namespace Script
		{
			inline constexpr REL::ID CompileAndRun(static_cast<std::uint64_t>(21890));
			inline constexpr REL::ID GetProcessScripts(static_cast<std::uint64_t>(21921));
			inline constexpr REL::ID SetProcessScripts(static_cast<std::uint64_t>(21920));
		}

		namespace SCRIPT_FUNCTION
		{
			inline constexpr REL::ID FirstConsoleCommand(static_cast<std::uint64_t>(365650));
			inline constexpr REL::ID FirstScriptCommand(static_cast<std::uint64_t>(361120));
		}

		namespace Sky
		{
			inline constexpr REL::ID GetSingleton(static_cast<std::uint64_t>(13878));
			inline constexpr REL::ID SetWeather(static_cast<std::uint64_t>(26241));
			inline constexpr REL::ID ForceWeather(static_cast<std::uint64_t>(26243));
			inline constexpr REL::ID ResetWeather(static_cast<std::uint64_t>(26242));
		}

		namespace SkyrimVM
		{
			inline constexpr REL::ID QueuePostRenderCall(static_cast<std::uint64_t>(53955));
			inline constexpr REL::ID RelayEvent(static_cast<std::uint64_t>(54033));
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(400475));
		}

		namespace TES
		{
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(403450));
		}

		namespace TESCamera
		{
			inline constexpr REL::ID SetState(static_cast<std::uint64_t>(33026));
		}

		namespace TESDataHandler
		{
			inline constexpr REL::ID LoadScripts(static_cast<std::uint64_t>(13766));
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(400269));
		}

		namespace TESDescription
		{
			inline constexpr REL::ID GetDescription(static_cast<std::uint64_t>(14552));
		}

		namespace TESFile
		{
			inline constexpr REL::ID Duplicate(static_cast<std::uint64_t>(14018));
			inline constexpr REL::ID GetCurrentSubRecordType(static_cast<std::uint64_t>(13988));
			inline constexpr REL::ID GetFormType(static_cast<std::uint64_t>(13982));
			inline constexpr REL::ID ReadData(static_cast<std::uint64_t>(13991));
			inline constexpr REL::ID Seek(static_cast<std::uint64_t>(13984));
			inline constexpr REL::ID SeekNextSubrecord(static_cast<std::uint64_t>(13990));
		}

		namespace TESHavokUtilities
		{
			inline constexpr REL::ID FindCollidableRef(static_cast<std::uint64_t>(26003));
		}

		namespace TESNPC
		{
			inline constexpr REL::ID ChangeHeadPart(static_cast<std::uint64_t>(24750));
			inline constexpr REL::ID GetBaseOverlays(static_cast<std::uint64_t>(24791));
			inline constexpr REL::ID GetNumBaseOverlays(static_cast<std::uint64_t>(24792));
			inline constexpr REL::ID HasOverlays(static_cast<std::uint64_t>(24790));
			inline constexpr REL::ID SetSkinFromTint(static_cast<std::uint64_t>(24710));
			inline constexpr REL::ID UpdateNeck(static_cast<std::uint64_t>(24711));
		}

		namespace TESObjectREFR
		{
			inline constexpr REL::ID FindReferenceFor3D(static_cast<std::uint64_t>(19750));
			inline constexpr REL::ID GetDisplayFullName(static_cast<std::uint64_t>(19781));
			inline constexpr REL::ID GetLock(static_cast<std::uint64_t>(20223));
			inline constexpr REL::ID GetOwner(static_cast<std::uint64_t>(20194));
			inline constexpr REL::ID GetStealValue(static_cast<std::uint64_t>(16045));
			inline constexpr REL::ID InitInventoryIfRequired(static_cast<std::uint64_t>(16038));
			inline constexpr REL::ID MoveTo(static_cast<std::uint64_t>(56626));
			inline constexpr REL::ID PlayAnimation(static_cast<std::uint64_t>(14297));
		}

		namespace TESQuest
		{
			inline constexpr REL::ID EnsureQuestStarted(static_cast<std::uint64_t>(25003));
			inline constexpr REL::ID ResetQuest(static_cast<std::uint64_t>(25014));
		}

		namespace UI
		{
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(400327));
		}

		namespace UIBlurManager
		{
			inline constexpr REL::ID DecrementBlurCount(static_cast<std::uint64_t>(52777));
			inline constexpr REL::ID IncrementBlurCount(static_cast<std::uint64_t>(52776));
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(403350));
		}

		namespace UIMessageQueue
		{
			inline constexpr REL::ID AddMessage(static_cast<std::uint64_t>(13631));
			inline constexpr REL::ID CreateUIMessageData(static_cast<std::uint64_t>(82169));
			inline constexpr REL::ID ProcessCommands(static_cast<std::uint64_t>(82167));
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(400445));
		}

		namespace UserEvents
		{
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(402638));
		}

		inline constexpr REL::ID CreateRefHandle(static_cast<std::uint64_t>(12326));
		inline constexpr REL::ID DebugNotification(static_cast<std::uint64_t>(52933));
		inline constexpr REL::ID LookupReferenceByHandle(static_cast<std::uint64_t>(12332));
		inline constexpr REL::ID PlaySound(static_cast<std::uint64_t>(52939));
		inline constexpr REL::ID TlsIndex(static_cast<std::uint64_t>(415542));
		inline constexpr REL::ID GlobalStateCounter(static_cast<std::uint64_t>(400305));
#else
		namespace Actor
		{
			inline constexpr REL::ID AddSpell(static_cast<std::uint64_t>(37771));
			inline constexpr REL::ID DispelWornItemEnchantments(static_cast<std::uint64_t>(33828));
			inline constexpr REL::ID DoReset3D(static_cast<std::uint64_t>(39181));
			inline constexpr REL::ID GetGhost(static_cast<std::uint64_t>(36286));
			inline constexpr REL::ID GetHostileToActor(static_cast<std::uint64_t>(36537));
			inline constexpr REL::ID GetLevel(static_cast<std::uint64_t>(36344));
			inline constexpr REL::ID HasPerk(static_cast<std::uint64_t>(36690));
			inline constexpr REL::ID IsRunning(static_cast<std::uint64_t>(36252));
			inline constexpr REL::ID RequestDetectionLevel(static_cast<std::uint64_t>(36748));
			inline constexpr REL::ID SwitchRace(static_cast<std::uint64_t>(36901));
			inline constexpr REL::ID UpdateArmorAbility(static_cast<std::uint64_t>(37802));
			inline constexpr REL::ID UpdateWeaponAbility(static_cast<std::uint64_t>(37803));
		}

		namespace ActorEquipManager
		{
			inline constexpr REL::ID EquipObject(static_cast<std::uint64_t>(37938));
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(514494));
			inline constexpr REL::ID UnequipObject(static_cast<std::uint64_t>(37945));
		}

		namespace ActorValueOwner
		{
			inline constexpr REL::ID GetClampedActorValue(static_cast<std::uint64_t>(26616));
		}

		namespace AIProcess
		{
			inline constexpr REL::ID SetBaseScale(static_cast<std::uint64_t>(38568));
			inline constexpr REL::ID Update3DModel(static_cast<std::uint64_t>(38404));
		}

		namespace BGSFootstepManager
		{
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(517045));
		}

		namespace BGSListForm
		{
			inline constexpr REL::ID AddForm(static_cast<std::uint64_t>(20470));
		}

		namespace BGSSaveLoadManager
		{
			inline constexpr REL::ID Save(static_cast<std::uint64_t>(34818));
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(516860));
			inline constexpr REL::ID Load(static_cast<std::uint64_t>(34819));
		}

		namespace BGSStoryTeller
		{
			inline constexpr REL::ID BeginShutDownQuest(static_cast<std::uint64_t>(31718));
			inline constexpr REL::ID BeginStartUpQuest(static_cast<std::uint64_t>(31717));
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(514316));
		}

		namespace BipedAnim
		{
			inline constexpr REL::ID Dtor(static_cast<std::uint64_t>(15491));
			inline constexpr REL::ID RemoveAllParts(static_cast<std::uint64_t>(15494));
		}

		namespace BSAudioManager
		{
			inline constexpr REL::ID GetSingleton(static_cast<std::uint64_t>(66391));
			inline constexpr REL::ID BuildSoundDataFromDescriptor(static_cast<std::uint64_t>(66404));
		}

		namespace BSInputDeviceManager
		{
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(516574));
		}

		namespace BSLightingShaderMaterialBase
		{
			inline constexpr REL::ID CreateMaterial(static_cast<std::uint64_t>(100016));
		}

		namespace BSReadWriteLock
		{
			inline constexpr REL::ID LockForRead(static_cast<std::uint64_t>(66976));
			inline constexpr REL::ID LockForWrite(static_cast<std::uint64_t>(66977));
			inline constexpr REL::ID UnlockForRead(static_cast<std::uint64_t>(66982));
			inline constexpr REL::ID UnlockForWrite(static_cast<std::uint64_t>(66983));
		}

		namespace BSResourceNiBinaryStream
		{
			inline constexpr REL::ID Ctor(static_cast<std::uint64_t>(69636));
			inline constexpr REL::ID Dtor(static_cast<std::uint64_t>(69638));
			inline constexpr REL::ID Seek(static_cast<std::uint64_t>(69640));
			inline constexpr REL::ID SetEndianSwap(static_cast<std::uint64_t>(69643));
		}

		namespace BSScaleformTranslator
		{
			inline constexpr REL::ID GetCachedString(static_cast<std::uint64_t>(67844));
		}

		namespace BSScript
		{
			namespace ObjectBindPolicy
			{
				inline constexpr REL::ID BindObject(static_cast<std::uint64_t>(97379));
			}

			namespace NF_util
			{
				namespace NativeFunctionBase
				{
					inline constexpr REL::ID Call(static_cast<std::uint64_t>(97923));
				}
			}

			namespace Stack
			{
				inline constexpr REL::ID Dtor(static_cast<std::uint64_t>(97742));
			}
		}

		namespace BSSoundHandle
		{
			inline constexpr REL::ID IsValid(static_cast<std::uint64_t>(66360));
			inline constexpr REL::ID Play(static_cast<std::uint64_t>(66355));
			inline constexpr REL::ID SetObjectToFollow(static_cast<std::uint64_t>(66375));
			inline constexpr REL::ID SetPosition(static_cast<std::uint64_t>(66370));
			inline constexpr REL::ID Stop(static_cast<std::uint64_t>(66358));
		}

		namespace BSString
		{
			inline constexpr REL::ID Set_CStr(static_cast<std::uint64_t>(10979));
		}

		namespace BucketTable
		{
			inline constexpr REL::ID GetSingleton(static_cast<std::uint64_t>(67855));
		}

		namespace BSWin32SaveDataSystemUtility
		{
			inline constexpr REL::ID GetSingleton(static_cast<std::uint64_t>(101884));
		}

		namespace Calendar
		{
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(514287));
		}

		namespace Console
		{
			inline constexpr REL::ID SelectedRef(static_cast<std::uint64_t>(519394));
			inline constexpr REL::ID SetSelectedRef(static_cast<std::uint64_t>(50164));
		}

		namespace ConsoleLog
		{
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(515064));
			inline constexpr REL::ID VPrint(static_cast<std::uint64_t>(50180));
		}

		namespace ControlMap
		{
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(514705));
		}

		namespace CraftingSubMenus
		{
			namespace EnchantConstructMenu
			{
				inline constexpr REL::ID RenameItem(static_cast<std::uint64_t>(50530));
				inline constexpr REL::ID UpdateInterface(static_cast<std::uint64_t>(50567));
			}
		}

		namespace CRC32Calculator
		{
			inline constexpr REL::ID SizeOf32(static_cast<std::uint64_t>(66963));
			inline constexpr REL::ID SizeOf64(static_cast<std::uint64_t>(66964));
			inline constexpr REL::ID SizeOfSize(static_cast<std::uint64_t>(66962));
		}

		namespace ExtraDataList
		{
			inline constexpr REL::ID Add(static_cast<std::uint64_t>(12176));
			inline constexpr REL::ID SetCount(static_cast<std::uint64_t>(11471));
			inline constexpr REL::ID SetExtraFlags(static_cast<std::uint64_t>(11903));
			inline constexpr REL::ID SetInventoryChanges(static_cast<std::uint64_t>(11483));
		}

		namespace GameSettingCollection
		{
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(514622));
		}

		namespace GASActionBufferData
		{
			inline constexpr std::uint64_t Vtbl(0x17BC3F0);
		}

		namespace GASDoAction
		{
			inline constexpr REL::ID Vtbl(static_cast<std::uint64_t>(291613));
		}

		namespace GASDoInitAction
		{
			inline constexpr std::uint64_t Vtbl(0x17BCA00);
		}

		namespace GFxInitImportActions
		{
			inline constexpr std::uint64_t Vtbl(0x17DC4C8);
		}

		namespace GFxLoader
		{
			inline constexpr REL::ID CreateMovie(static_cast<std::uint64_t>(80620));
		}

		namespace GFxMovieView
		{
			inline constexpr REL::ID InvokeNoReturn(static_cast<std::uint64_t>(80547));
		}

		namespace GFxPlaceObject2
		{
			inline constexpr std::uint64_t Vtbl(0x17BE0E0);
		}

		namespace GFxPlaceObject3
		{
			inline constexpr std::uint64_t Vtbl(0x17BE138);
		}

		namespace GFxRemoveObject
		{
			inline constexpr std::uint64_t Vtbl(0x17DC408);
		}

		namespace GFxRemoveObject2
		{
			inline constexpr std::uint64_t Vtbl(0x17DC448);
		}

		namespace GFxSetBackgroundColor
		{
			inline constexpr std::uint64_t Vtbl(0x17DC488);
		}

		namespace GFxValue
		{
			namespace ObjectInterface
			{
				inline constexpr REL::ID AttachMovie(static_cast<std::uint64_t>(80197));
				inline constexpr REL::ID DeleteMember(static_cast<std::uint64_t>(80207));
				inline constexpr REL::ID GetArraySize(static_cast<std::uint64_t>(80214));
				inline constexpr REL::ID GetCxform(static_cast<std::uint64_t>(80215));
				inline constexpr REL::ID GetDisplayInfo(static_cast<std::uint64_t>(80216));
				inline constexpr REL::ID GetDisplayMatrix(static_cast<std::uint64_t>(80217));
				inline constexpr REL::ID GetElement(static_cast<std::uint64_t>(80218));
				inline constexpr REL::ID GetMember(static_cast<std::uint64_t>(80222));
				inline constexpr REL::ID GotoAndPlay(static_cast<std::uint64_t>(80230));
				inline constexpr REL::ID HasMember(static_cast<std::uint64_t>(80231));
				inline constexpr REL::ID Invoke(static_cast<std::uint64_t>(80233));
				inline constexpr REL::ID ObjectAddRef(static_cast<std::uint64_t>(80244));
				inline constexpr REL::ID ObjectRelease(static_cast<std::uint64_t>(80245));
				inline constexpr REL::ID PushBack(static_cast<std::uint64_t>(80248));
				inline constexpr REL::ID RemoveElements(static_cast<std::uint64_t>(80252));
				inline constexpr REL::ID SetArraySize(static_cast<std::uint64_t>(80261));
				inline constexpr REL::ID SetCxform(static_cast<std::uint64_t>(80262));
				inline constexpr REL::ID SetDisplayInfo(static_cast<std::uint64_t>(80263));
				inline constexpr REL::ID SetDisplayMatrix(static_cast<std::uint64_t>(80264));
				inline constexpr REL::ID SetElement(static_cast<std::uint64_t>(80265));
				inline constexpr REL::ID SetMember(static_cast<std::uint64_t>(80268));
				inline constexpr REL::ID SetText(static_cast<std::uint64_t>(80270));
				inline constexpr REL::ID VisitMembers(static_cast<std::uint64_t>(80279));
			}
		}

		namespace GMemory
		{
			inline constexpr REL::ID GlobalHeap(static_cast<std::uint64_t>(525584));
		}

		namespace hkReferencedObject
		{
			inline constexpr REL::ID AddReference(static_cast<std::uint64_t>(56606));
			inline constexpr REL::ID RemoveReference(static_cast<std::uint64_t>(56607));
		}

		namespace INIPrefSettingCollection
		{
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(523673));
		}

		namespace INISettingCollection
		{
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(524557));
		}

		namespace InterfaceStrings
		{
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(514286));
		}

		namespace Inventory
		{
			inline constexpr REL::ID GetEventSource(static_cast<std::uint64_t>(15980));
		}

		namespace InventoryChanges
		{
			inline constexpr REL::ID GetNextUniqueID(static_cast<std::uint64_t>(15908));
			inline constexpr REL::ID SendContainerChangedEvent(static_cast<std::uint64_t>(15909));
			inline constexpr REL::ID SetUniqueID(static_cast<std::uint64_t>(15907));
			inline constexpr REL::ID TransferItemUID(static_cast<std::uint64_t>(15909));
		}

		namespace ItemCrafted
		{
			inline constexpr REL::ID GetEventSource(static_cast<std::uint64_t>(50515));
		}

		namespace ItemList
		{
			inline constexpr REL::ID Update(static_cast<std::uint64_t>(50099));
		}

		namespace ItemsPickpocketed
		{
			inline constexpr REL::ID GetEventSource(static_cast<std::uint64_t>(50258));
		}

		namespace LocalMapCamera
		{
			inline constexpr REL::ID Ctor(static_cast<std::uint64_t>(16084));
			inline constexpr REL::ID SetNorthRotation(static_cast<std::uint64_t>(16089));
		}

		namespace LooseFileStream
		{
			inline constexpr REL::ID Ctor(static_cast<std::uint64_t>(68663));
		}

		namespace MagicFavorites
		{
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(516858));
		}

		namespace MagicItem
		{
			inline constexpr REL::ID CalculateCost(static_cast<std::uint64_t>(11213));
			inline constexpr REL::ID GetCostliestEffectItem(static_cast<std::uint64_t>(11216));
		}

		namespace MagicTarget
		{
			inline constexpr REL::ID HasMagicEffect(static_cast<std::uint64_t>(33733));
		}

		namespace Main
		{
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(516943));
		}

		namespace MenuControls
		{
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(515124));
		}

		namespace MessageDataFactoryManager
		{
			inline constexpr REL::ID GetSingleton(static_cast<std::uint64_t>(22843));
		}

		namespace NiAVObject
		{
			inline constexpr REL::ID SetMotionType(static_cast<std::uint64_t>(76033));
			inline constexpr REL::ID Update(static_cast<std::uint64_t>(68900));
		}

		namespace NiCamera
		{
			inline constexpr REL::ID WorldPtToScreenPt3(static_cast<std::uint64_t>(69270));
		}

		namespace NiMemManager
		{
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(523759));
		}

		namespace NiNode
		{
			inline constexpr REL::ID Ctor(static_cast<std::uint64_t>(68936));
		}

		namespace NiPoint3
		{
			inline constexpr REL::ID Zero(static_cast<std::uint64_t>(523887));
		}

		namespace NiRefObject
		{
			inline constexpr REL::ID TotalObjectCount(static_cast<std::uint64_t>(523912));
		}

		namespace NiSkinInstance
		{
			inline constexpr REL::ID Ctor(static_cast<std::uint64_t>(69804));
		}

		namespace PlayerCamera
		{
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(514642));
			inline constexpr REL::ID UpdateThirdPerson(static_cast<std::uint64_t>(49908));
		}

		namespace PlayerCharacter
		{
			namespace PlayerSkills
			{
				inline constexpr REL::ID AdvanceLevel(static_cast<std::uint64_t>(40560));
			}

			inline constexpr REL::ID ActivatePickRef(static_cast<std::uint64_t>(39471));
			inline constexpr REL::ID GetArmorValue(static_cast<std::uint64_t>(39175));
			inline constexpr REL::ID GetDamage(static_cast<std::uint64_t>(39179));
			inline constexpr REL::ID GetNumTints(static_cast<std::uint64_t>(39614));
			inline constexpr REL::ID GetTintMask(static_cast<std::uint64_t>(39612));
			inline constexpr REL::ID PlayPickupEvent(static_cast<std::uint64_t>(39384));
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(517014));
			inline constexpr REL::ID StartGrabObject(static_cast<std::uint64_t>(39475));
		}

		namespace PlayerControls
		{
			inline constexpr REL::ID Ctor(static_cast<std::uint64_t>(41257));
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(514706));
		}

		namespace RaceSexMenu
		{
			inline constexpr REL::ID ChangeName(static_cast<std::uint64_t>(51540));
		}

		namespace ReferenceEffectController
		{
			inline constexpr REL::ID Start(static_cast<std::uint64_t>(33961));
		}

		namespace Script
		{
			inline constexpr REL::ID CompileAndRun(static_cast<std::uint64_t>(21416));
			inline constexpr REL::ID GetProcessScripts(static_cast<std::uint64_t>(21436));
			inline constexpr REL::ID SetProcessScripts(static_cast<std::uint64_t>(21435));
		}

		namespace SCRIPT_FUNCTION
		{
			inline constexpr REL::ID FirstConsoleCommand(static_cast<std::uint64_t>(501797));
			inline constexpr REL::ID FirstScriptCommand(static_cast<std::uint64_t>(501789));
		}

		namespace Sky
		{
			inline constexpr REL::ID GetSingleton(static_cast<std::uint64_t>(13789));
			inline constexpr REL::ID SetWeather(static_cast<std::uint64_t>(25694));
			inline constexpr REL::ID ForceWeather(static_cast<std::uint64_t>(25696));
			inline constexpr REL::ID ResetWeather(static_cast<std::uint64_t>(25695));
		}

		namespace SkyrimVM
		{
			inline constexpr REL::ID QueuePostRenderCall(static_cast<std::uint64_t>(53144));
			inline constexpr REL::ID RelayEvent(static_cast<std::uint64_t>(53221));
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(514315));
		}

		namespace TES
		{
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(516923));
		}

		namespace TESCamera
		{
			inline constexpr REL::ID SetState(static_cast<std::uint64_t>(32290));
		}

		namespace TESDataHandler
		{
			inline constexpr REL::ID LoadScripts(static_cast<std::uint64_t>(13657));
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(514141));
		}

		namespace TESDescription
		{
			inline constexpr REL::ID GetDescription(static_cast<std::uint64_t>(14399));
		}

		namespace TESFile
		{
			inline constexpr REL::ID Duplicate(static_cast<std::uint64_t>(13923));
			inline constexpr REL::ID GetCurrentSubRecordType(static_cast<std::uint64_t>(13902));
			inline constexpr REL::ID GetFormType(static_cast<std::uint64_t>(13897));
			inline constexpr REL::ID ReadData(static_cast<std::uint64_t>(13904));
			inline constexpr REL::ID Seek(static_cast<std::uint64_t>(13898));
			inline constexpr REL::ID SeekNextSubrecord(static_cast<std::uint64_t>(13903));
		}

		namespace TESHavokUtilities
		{
			inline constexpr REL::ID FindCollidableRef(static_cast<std::uint64_t>(25466));
		}

		namespace TESNPC
		{
			inline constexpr REL::ID ChangeHeadPart(static_cast<std::uint64_t>(24246));
			inline constexpr REL::ID GetBaseOverlays(static_cast<std::uint64_t>(24275));
			inline constexpr REL::ID GetNumBaseOverlays(static_cast<std::uint64_t>(24276));
			inline constexpr REL::ID HasOverlays(static_cast<std::uint64_t>(24274));
			inline constexpr REL::ID SetSkinFromTint(static_cast<std::uint64_t>(24206));
			inline constexpr REL::ID UpdateNeck(static_cast<std::uint64_t>(24207));
		}

		namespace TESObjectREFR
		{
			inline constexpr REL::ID FindReferenceFor3D(static_cast<std::uint64_t>(19323));
			inline constexpr REL::ID GetDisplayFullName(static_cast<std::uint64_t>(19354));
			inline constexpr REL::ID GetLock(static_cast<std::uint64_t>(19818));
			inline constexpr REL::ID GetOwner(static_cast<std::uint64_t>(19789));
			inline constexpr REL::ID GetStealValue(static_cast<std::uint64_t>(15807));
			inline constexpr REL::ID InitInventoryIfRequired(static_cast<std::uint64_t>(15800));
			inline constexpr REL::ID MoveTo(static_cast<std::uint64_t>(56227));
			inline constexpr REL::ID PlayAnimation(static_cast<std::uint64_t>(14189));
		}

		namespace TESQuest
		{
			inline constexpr REL::ID EnsureQuestStarted(static_cast<std::uint64_t>(24481));
			inline constexpr REL::ID ResetQuest(static_cast<std::uint64_t>(24486));
		}

		namespace UI
		{
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(514178));
		}

		namespace UIBlurManager
		{
			inline constexpr REL::ID DecrementBlurCount(static_cast<std::uint64_t>(51900));
			inline constexpr REL::ID IncrementBlurCount(static_cast<std::uint64_t>(51899));
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(516871));
		}

		namespace UIMessageQueue
		{
			inline constexpr REL::ID AddMessage(static_cast<std::uint64_t>(13530));
			inline constexpr REL::ID CreateUIMessageData(static_cast<std::uint64_t>(80061));
			inline constexpr REL::ID ProcessCommands(static_cast<std::uint64_t>(80059));
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(514285));
		}

		namespace UserEvents
		{
			inline constexpr REL::ID Singleton(static_cast<std::uint64_t>(516458));
		}

		inline constexpr REL::ID CreateRefHandle(static_cast<std::uint64_t>(12193));
		inline constexpr REL::ID DebugNotification(static_cast<std::uint64_t>(52050));
		inline constexpr REL::ID LookupReferenceByHandle(static_cast<std::uint64_t>(12204));
		inline constexpr REL::ID PlaySound(static_cast<std::uint64_t>(52054));
		inline constexpr REL::ID TlsIndex(static_cast<std::uint64_t>(528600));
		inline constexpr REL::ID GlobalStateCounter(static_cast<std::uint64_t>(514157));
#endif

		namespace BSDirectInputManager
		{
			inline constexpr REL::ID Singleton = RELOCATION_ID(517046, 403554);
			inline constexpr REL::ID GetDeviceState = RELOCATION_ID(67375, 68677);
			inline constexpr REL::ID GetDeviceData = RELOCATION_ID(67376, 68678);
			inline constexpr REL::ID ReleaseDevice = RELOCATION_ID(67374, 68676);
			inline constexpr REL::ID CreateDeviceWithGUID = RELOCATION_ID(67373, 68675);
			inline constexpr REL::ID ctor = RELOCATION_ID(67372, 68674);
			inline constexpr REL::ID dtor = RELOCATION_ID(67371, 68673);
		}

		namespace BSInputEventQueue
		{
			inline constexpr REL::ID Singleton = RELOCATION_ID(520856, 407374);
			inline constexpr REL::ID EnqueueButtonEvent = RELOCATION_ID(67382, 68685);
			inline constexpr REL::ID EnqueueCharEvent = RELOCATION_ID(67383, 68686);
			inline constexpr REL::ID EnqueueMouseMoveEvent = RELOCATION_ID(67384, 68687);
			inline constexpr REL::ID EnqueueThumbstickEvent = RELOCATION_ID(67385, 68688);
			inline constexpr REL::ID EnqueueDeviceConnectEvent = RELOCATION_ID(67386, 68689);
			inline constexpr REL::ID EnqueueKinectEvent = RELOCATION_ID(67387, 68690);
			inline constexpr REL::ID Reset = RELOCATION_ID(67388, 68691);
			// inline constexpr REL::ID ctor = RELOCATION_ID(67332); - inlined in AE
			// inline constexpr REL::ID dtor = RELOCATION_ID(67341); - inlined in AE
		}

		namespace Main
		{
			inline constexpr REL::ID SetActive = RELOCATION_ID(35598, 36606);
		}

		namespace MenuCursor
		{
			inline constexpr REL::ID Singleton = RELOCATION_ID(517043, 403551);
		}

		namespace Rumble
		{
			inline constexpr REL::ID DisableRumble = RELOCATION_ID(67224, 68533);
		}

		namespace BSGraphics
		{
			inline constexpr REL::ID pRendererData = RELOCATION_ID(524728, 411347);
			inline constexpr REL::ID pScreenSize = RELOCATION_ID(525002, 411483);
			inline constexpr REL::ID pDevice = RELOCATION_ID(524729, 411348);
			inline constexpr REL::ID pCurrentRenderWindow = RELOCATION_ID(524730, 411349);
			namespace BSRenderManager
			{
				inline constexpr REL::ID Singleton = RELOCATION_ID(524907, 411393);
				inline constexpr REL::ID Ctor = RELOCATION_ID(75444, 77225);
				inline constexpr REL::ID Init = RELOCATION_ID(75445, 77226);
				inline constexpr REL::ID Shutdown = RELOCATION_ID(75447, 77228);
				inline constexpr REL::ID SetWindowPosition = RELOCATION_ID(75448, 77233);
				inline constexpr REL::ID ResizeWindow = RELOCATION_ID(75449, 77234);
				inline constexpr REL::ID RequestWindowResize = RELOCATION_ID(75450, 77235);
				inline constexpr REL::ID SetWindowActiveState = RELOCATION_ID(75451, 77236);
				inline constexpr REL::ID KillWindow = RELOCATION_ID(75452, 77237);
				inline constexpr REL::ID WindowSizeChanged = RELOCATION_ID(75453, 77238);
				inline constexpr REL::ID ResetWindow = RELOCATION_ID(75454, 77239);
				inline constexpr REL::ID UpdateViewPort = RELOCATION_ID(75455, 77240);
				inline constexpr REL::ID CreateSwapChain = RELOCATION_ID(75457, 77242);
				inline constexpr REL::ID Lock = RELOCATION_ID(75458, 77243);
				inline constexpr REL::ID Unlock = RELOCATION_ID(75459, 77244);
				inline constexpr REL::ID Begin = RELOCATION_ID(75460, 77245);
				inline constexpr REL::ID End = RELOCATION_ID(75461,77246);

			}
		}

		inline constexpr REL::ID pGamepadEnable(RELOCATION_ID(511901,388465));
		inline constexpr REL::ID pKeyboardDefinitionFilePrefix(RELOCATION_ID(511916, 388487));
		inline constexpr REL::ID pDefaultLocale(RELOCATION_ID(500908,358892));
		inline constexpr REL::ID pMouseDefinitionFile(RELOCATION_ID(511918, 388490));
		inline constexpr REL::ID pGamepadDefinitionFile(RELOCATION_ID(511903, 388468));
		inline constexpr REL::ID WinProc = RELOCATION_ID(35635, 36649); // function called by the Windows message loop, set on the window when BSGraphics::InitWindows() calls `CreateWindowEXA`
		inline constexpr REL::ID pControlsBackgroundMouse = RELOCATION_ID(511920, 388493); // global variable that stores the [Controls] bBackgroundMouse ini setting; overwritten on ini load
	}
}
