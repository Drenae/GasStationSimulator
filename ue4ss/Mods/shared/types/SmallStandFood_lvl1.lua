---@meta

---@class ASmallStandFood_lvl1_C : A00_Stand_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Spline35 USplineComponent
---@field Spline34 USplineComponent
---@field Spline33 USplineComponent
---@field Spline32 USplineComponent
---@field Spline31 USplineComponent
---@field Spline30 USplineComponent
---@field Spline29 USplineComponent
---@field Spline28 USplineComponent
---@field Spline27 USplineComponent
---@field Spline25 USplineComponent
---@field Spline23 USplineComponent
---@field Spline21 USplineComponent
---@field Spline26 USplineComponent
---@field Spline24 USplineComponent
---@field Spline22 USplineComponent
local ASmallStandFood_lvl1_C = {}

function ASmallStandFood_lvl1_C:ReceiveBeginPlay() end
function ASmallStandFood_lvl1_C:ReceiveDestroyed() end
---@param DeltaSeconds float
function ASmallStandFood_lvl1_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ASmallStandFood_lvl1_C:ExecuteUbergraph_SmallStandFood_lvl1(EntryPoint) end


