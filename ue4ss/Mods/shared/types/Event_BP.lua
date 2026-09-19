---@meta

---@class UEvent_BP_C : UGSSEvent
---@field UberGraphFrame FPointerToUberGraphFrame
local UEvent_BP_C = {}

---@param World UWorld
---@param bEventEnabled boolean
function UEvent_BP_C:InitializeEventWorld(World, bEventEnabled) end
---@param EntryPoint int32
function UEvent_BP_C:ExecuteUbergraph_Event_BP(EntryPoint) end


