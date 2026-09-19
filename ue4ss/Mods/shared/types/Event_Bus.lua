---@meta

---@class UEvent_Bus_C : UEvent_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
local UEvent_Bus_C = {}

function UEvent_Bus_C:SpawnBus() end
---@param NewPlayerController APlayerController
---@param NewGSSEventTime FGSSEventTime
function UEvent_Bus_C:InitializeEvent(NewPlayerController, NewGSSEventTime) end
---@param UpdatedTime FTimeStruct
function UEvent_Bus_C:OnGameTimeUpdated(UpdatedTime) end
---@param World UWorld
---@param bEventEnabled boolean
function UEvent_Bus_C:InitializeEventWorld(World, bEventEnabled) end
---@param EntryPoint int32
function UEvent_Bus_C:ExecuteUbergraph_Event_Bus(EntryPoint) end


