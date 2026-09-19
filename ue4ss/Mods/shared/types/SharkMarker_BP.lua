---@meta

---@class ASharkMarker_BP_C : AObjectiveMarker
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DefaultSceneRoot USceneComponent
local ASharkMarker_BP_C = {}

function ASharkMarker_BP_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ASharkMarker_BP_C:ExecuteUbergraph_SharkMarker_BP(EntryPoint) end


