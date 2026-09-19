---@meta

---@class UEvent_Denis_C : UEvent_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DenisClass TSoftClassPtr<AAICharacterBase>
---@field DenisPaintingWallTask TSoftClassPtr<UDenisTask>
---@field bIsDenisForceSpawnedFromQuest boolean
local UEvent_Denis_C = {}

---@return boolean
function UEvent_Denis_C:CalcTime() end
---@param Loaded UClass
function UEvent_Denis_C:OnLoaded_C5EC1C854CB734BE3F6EA89D42213956(Loaded) end
---@param Loaded UClass
function UEvent_Denis_C:OnLoaded_48ADE50F4E156E66D2E64F80E9450CBC(Loaded) end
---@param NewPlayerController APlayerController
---@param NewGSSEventTime FGSSEventTime
function UEvent_Denis_C:InitializeEvent(NewPlayerController, NewGSSEventTime) end
function UEvent_Denis_C:SpawnDenis() end
---@param UpdatedTime FTimeStruct
function UEvent_Denis_C:OnGameTimeUpdated(UpdatedTime) end
---@param World UWorld
---@param bEventEnabled boolean
function UEvent_Denis_C:InitializeEventWorld(World, bEventEnabled) end
function UEvent_Denis_C:ForceDenis() end
---@param EntryPoint int32
function UEvent_Denis_C:ExecuteUbergraph_Event_Denis(EntryPoint) end


