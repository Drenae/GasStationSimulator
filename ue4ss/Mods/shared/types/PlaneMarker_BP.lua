---@meta

---@class APlaneMarker_BP_C : AObjectiveMarker
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DefaultSceneRoot USceneComponent
---@field Marker_0 UUserWidget
---@field IsInMiniGame boolean
local APlaneMarker_BP_C = {}

function APlaneMarker_BP_C:ReceiveBeginPlay() end
function APlaneMarker_BP_C:ReceiveDestroyed() end
---@param Show boolean
---@param Distance float
function APlaneMarker_BP_C:UpdateMarker(Show, Distance) end
---@param Show boolean
---@param Distance float
function APlaneMarker_BP_C:UpdateOutline(Show, Distance) end
---@param Show boolean
function APlaneMarker_BP_C:HidePlaneMarker(Show) end
---@param EntryPoint int32
function APlaneMarker_BP_C:ExecuteUbergraph_PlaneMarker_BP(EntryPoint) end


