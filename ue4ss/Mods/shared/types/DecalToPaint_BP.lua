---@meta

---@class ADecalToPaint_BP_C : ADecalToPaint
---@field UberGraphFrame FPointerToUberGraphFrame
local ADecalToPaint_BP_C = {}

function ADecalToPaint_BP_C:ReceiveBeginPlay() end
---@param EndPlayReason EEndPlayReason::Type
function ADecalToPaint_BP_C:ReceiveEndPlay(EndPlayReason) end
---@param EntryPoint int32
function ADecalToPaint_BP_C:ExecuteUbergraph_DecalToPaint_BP(EntryPoint) end


