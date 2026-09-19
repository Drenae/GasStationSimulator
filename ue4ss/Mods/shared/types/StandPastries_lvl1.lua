---@meta

---@class AStandPastries_lvl1_C : A00_Stand_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Spline38 USplineComponent
---@field Spline26 USplineComponent
---@field Spline37 USplineComponent
---@field Spline36 USplineComponent
---@field Spline35 USplineComponent
---@field Spline25 USplineComponent
---@field Spline34 USplineComponent
---@field Spline33 USplineComponent
---@field Spline32 USplineComponent
---@field Spline24 USplineComponent
---@field Spline31 USplineComponent
---@field Spline30 USplineComponent
---@field PointLight UPointLightComponent
---@field SM_CeilingLamp_01 UStaticMeshComponent
local AStandPastries_lvl1_C = {}

function AStandPastries_lvl1_C:ReceiveBeginPlay() end
function AStandPastries_lvl1_C:ReceiveDestroyed() end
---@param DeltaSeconds float
function AStandPastries_lvl1_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function AStandPastries_lvl1_C:ExecuteUbergraph_StandPastries_lvl1(EntryPoint) end


