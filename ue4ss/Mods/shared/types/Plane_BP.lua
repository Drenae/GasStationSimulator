---@meta

---@class APlane_BP_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Audio UAudioComponent
---@field SM_AirplaneProp UStaticMeshComponent
---@field Plane UStaticMeshComponent
---@field DefaultSceneRoot USceneComponent
---@field PlaneMover_Alpha_4F1176184FDCD56F1E0767A0DABB03F2 float
---@field PlaneMover__Direction_4F1176184FDCD56F1E0767A0DABB03F2 ETimelineDirection::Type
---@field PlaneMover UTimelineComponent
---@field ActivePlane boolean
---@field alpha float
---@field TrackRef APlane_Track_BP_C
---@field Duration float
---@field PlaneStartOffset float
local APlane_BP_C = {}

function APlane_BP_C:PlaneMover__FinishedFunc() end
function APlane_BP_C:PlaneMover__UpdateFunc() end
function APlane_BP_C:ReceiveBeginPlay() end
function APlane_BP_C:MoverPlane() end
---@param EntryPoint int32
function APlane_BP_C:ExecuteUbergraph_Plane_BP(EntryPoint) end


