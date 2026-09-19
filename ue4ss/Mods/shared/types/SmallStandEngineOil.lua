---@meta

---@class ASmallStandEngineOil_C : A00_Stand_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Spline23 USplineComponent
---@field Spline3 USplineComponent
---@field Spline26 USplineComponent
---@field Spline25 USplineComponent
---@field Spline2 USplineComponent
---@field Spline21 USplineComponent
---@field Spline22 USplineComponent
---@field Spline1 USplineComponent
---@field Spline24 USplineComponent
local ASmallStandEngineOil_C = {}

function ASmallStandEngineOil_C:ReceiveBeginPlay() end
function ASmallStandEngineOil_C:ReceiveDestroyed() end
---@param DeltaSeconds float
function ASmallStandEngineOil_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ASmallStandEngineOil_C:ExecuteUbergraph_SmallStandEngineOil(EntryPoint) end


