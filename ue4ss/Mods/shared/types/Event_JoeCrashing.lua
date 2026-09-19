---@meta

---@class UEvent_JoeCrashing_C : UEvent_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field MinHoursPassed int32
---@field MaxHoursPassed int32
---@field MinDistanceFromCrashSites float
---@field DistanceRecheckTimeInMinutes int32
---@field JoeCrashSequence TSoftObjectPtr<ALevelSequenceActor>
---@field Enabled boolean
local UEvent_JoeCrashing_C = {}

---@param bNearCrashsite boolean
function UEvent_JoeCrashing_C:IsPlayerNearAnyCrashsite(bNearCrashsite) end
---@param Loaded UObject
function UEvent_JoeCrashing_C:OnLoaded_2844B03141BD2E884B66FBB2592AACB2(Loaded) end
---@param UpdatedTime FTimeStruct
function UEvent_JoeCrashing_C:OnGameTimeUpdated(UpdatedTime) end
---@param World UWorld
---@param bEventEnabled boolean
function UEvent_JoeCrashing_C:InitializeEventWorld(World, bEventEnabled) end
function UEvent_JoeCrashing_C:OnSequenceFInished() end
---@param bSuccess boolean
function UEvent_JoeCrashing_C:OnMarshalWandsFinish(bSuccess) end
---@param NewPlayerController APlayerController
---@param NewGSSEventTime FGSSEventTime
function UEvent_JoeCrashing_C:InitializeEvent(NewPlayerController, NewGSSEventTime) end
---@param DLCName EDLCName
---@param bActivated boolean
function UEvent_JoeCrashing_C:CustomEvent_0(DLCName, bActivated) end
---@param EntryPoint int32
function UEvent_JoeCrashing_C:ExecuteUbergraph_Event_JoeCrashing(EntryPoint) end


