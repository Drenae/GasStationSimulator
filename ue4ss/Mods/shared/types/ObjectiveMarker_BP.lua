---@meta

---@class AObjectiveMarker_BP_C : AObjectiveMarker
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DefaultSceneRoot USceneComponent
local AObjectiveMarker_BP_C = {}

function AObjectiveMarker_BP_C:ReceiveBeginPlay() end
function AObjectiveMarker_BP_C:ReceiveDestroyed() end
---@param Show boolean
---@param Distance float
function AObjectiveMarker_BP_C:UpdateMarker(Show, Distance) end
---@param Show boolean
---@param Distance float
function AObjectiveMarker_BP_C:UpdateOutline(Show, Distance) end
---@param EntryPoint int32
function AObjectiveMarker_BP_C:ExecuteUbergraph_ObjectiveMarker_BP(EntryPoint) end


