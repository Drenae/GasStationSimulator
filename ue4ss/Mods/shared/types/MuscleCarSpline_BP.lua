---@meta

---@class AMuscleCarSpline_BP_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field MuscleCar_LampaLewaTylnia1 UStaticMeshComponent
---@field MuscleCar_LampaLewaTylnia UStaticMeshComponent
---@field MuscleCar_Wheel3 UStaticMeshComponent
---@field MuscleCar_Wheel2 UStaticMeshComponent
---@field MuscleCar_Wheel1 UStaticMeshComponent
---@field MuscleCar_Wheel UStaticMeshComponent
---@field MuscleCar_DrzwiPrawe UStaticMeshComponent
---@field MuscleCar_DrzwiLewe UStaticMeshComponent
---@field MuscleCar_Skeletal_02 USkeletalMeshComponent
---@field DefaultSceneRoot USceneComponent
---@field PlaneMover_Alpha_BB391020464FD38B977974AA6F7629DF float
---@field PlaneMover__Direction_BB391020464FD38B977974AA6F7629DF ETimelineDirection::Type
---@field PlaneMover UTimelineComponent
---@field ActivePlane boolean
---@field alpha float
---@field TrackRef APlane_Track_BP_C
---@field Duration float
---@field PlaneStartOffset float
local AMuscleCarSpline_BP_C = {}

function AMuscleCarSpline_BP_C:PlaneMover__FinishedFunc() end
function AMuscleCarSpline_BP_C:PlaneMover__UpdateFunc() end
function AMuscleCarSpline_BP_C:MoverPlane() end
function AMuscleCarSpline_BP_C:AnyButtonPressed() end
---@param EntryPoint int32
function AMuscleCarSpline_BP_C:ExecuteUbergraph_MuscleCarSpline_BP(EntryPoint) end


