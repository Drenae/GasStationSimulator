---@meta

---@class UEvent_Sandstorm_C : UEvent_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field GameState AGSSGameState
local UEvent_Sandstorm_C = {}

---@param NewPlayerController APlayerController
---@param NewGSSEventTime FGSSEventTime
function UEvent_Sandstorm_C:InitializeEvent(NewPlayerController, NewGSSEventTime) end
---@param UpdatedTime FTimeStruct
function UEvent_Sandstorm_C:OnGameTimeUpdated(UpdatedTime) end
---@param World UWorld
---@param bEventEnabled boolean
function UEvent_Sandstorm_C:InitializeEventWorld(World, bEventEnabled) end
---@param EntryPoint int32
function UEvent_Sandstorm_C:ExecuteUbergraph_Event_Sandstorm(EntryPoint) end


