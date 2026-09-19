---@meta

---@class ASean_BP_C : ASeanCharacter
---@field UberGraphFrame FPointerToUberGraphFrame
local ASean_BP_C = {}

---@return FName
function ASean_BP_C:GetInteractionName() end
function ASean_BP_C:DEBUG_WalkToPointAndIndle() end
function ASean_BP_C:Delay1() end
function ASean_BP_C:Delay2() end
function ASean_BP_C:Debug_EnableTalking() end
function ASean_BP_C:Debug_EnableMarking() end
---@param EntryPoint int32
function ASean_BP_C:ExecuteUbergraph_Sean_BP(EntryPoint) end


