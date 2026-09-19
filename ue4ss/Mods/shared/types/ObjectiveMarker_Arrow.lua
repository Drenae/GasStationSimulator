---@meta

---@class AObjectiveMarker_Arrow_C : AObjectiveMarker
---@field UberGraphFrame FPointerToUberGraphFrame
---@field StaticMesh UStaticMeshComponent
local AObjectiveMarker_Arrow_C = {}

function AObjectiveMarker_Arrow_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AObjectiveMarker_Arrow_C:ExecuteUbergraph_ObjectiveMarker_Arrow(EntryPoint) end


