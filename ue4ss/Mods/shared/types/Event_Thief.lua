---@meta

---@class UEvent_Thief_C : UEvent_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
local UEvent_Thief_C = {}

---@param NewPlayerController APlayerController
---@param NewGSSEventTime FGSSEventTime
function UEvent_Thief_C:InitializeEvent(NewPlayerController, NewGSSEventTime) end
---@param UpdatedTime int32
function UEvent_Thief_C:CustomEvent(UpdatedTime) end
---@param World UWorld
---@param bEventEnabled boolean
function UEvent_Thief_C:InitializeEventWorld(World, bEventEnabled) end
---@param EntryPoint int32
function UEvent_Thief_C:ExecuteUbergraph_Event_Thief(EntryPoint) end


