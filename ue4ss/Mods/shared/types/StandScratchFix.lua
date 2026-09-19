---@meta

---@class AStandScratchFix_C : A00_Stand_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Spline9 USplineComponent
---@field Spline8 USplineComponent
---@field Spline7 USplineComponent
---@field Spline6 USplineComponent
local AStandScratchFix_C = {}

function AStandScratchFix_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function AStandScratchFix_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function AStandScratchFix_C:ExecuteUbergraph_StandScratchFix(EntryPoint) end


