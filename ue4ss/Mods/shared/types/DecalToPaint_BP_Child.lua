---@meta

---@class ADecalToPaint_BP_Child_C : ADecalToPaint_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
local ADecalToPaint_BP_Child_C = {}

function ADecalToPaint_BP_Child_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ADecalToPaint_BP_Child_C:ExecuteUbergraph_DecalToPaint_BP_Child(EntryPoint) end


