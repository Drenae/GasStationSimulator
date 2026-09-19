---@meta

---@class AStandSparkPlug_C : A00_Stand_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Spline9 USplineComponent
---@field Spline8 USplineComponent
---@field Spline7 USplineComponent
---@field Spline6 USplineComponent
local AStandSparkPlug_C = {}

function AStandSparkPlug_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function AStandSparkPlug_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function AStandSparkPlug_C:ExecuteUbergraph_StandSparkPlug(EntryPoint) end


