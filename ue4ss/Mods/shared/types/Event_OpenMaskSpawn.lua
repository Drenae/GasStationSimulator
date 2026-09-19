---@meta

---@class UEvent_OpenMaskSpawn_C : UEvent_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ThiefEventWidget UWBP_ThiefEvent_C
---@field GameState AGSSGameState
local UEvent_OpenMaskSpawn_C = {}

---@param UpdatedTime FTimeStruct
function UEvent_OpenMaskSpawn_C:UpdateTime(UpdatedTime) end
function UEvent_OpenMaskSpawn_C:FinishEvent() end
---@param NewPlayerController APlayerController
---@param NewGSSEventTime FGSSEventTime
function UEvent_OpenMaskSpawn_C:InitializeEvent(NewPlayerController, NewGSSEventTime) end
---@param World UWorld
---@param bEventEnabled boolean
function UEvent_OpenMaskSpawn_C:InitializeEventWorld(World, bEventEnabled) end
---@param StatChanged EGSS_Stat
---@param ValueChanged int32
function UEvent_OpenMaskSpawn_C:StatUpdated(StatChanged, ValueChanged) end
---@param EntryPoint int32
function UEvent_OpenMaskSpawn_C:ExecuteUbergraph_Event_OpenMaskSpawn(EntryPoint) end


