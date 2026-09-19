---@meta

---@class ASmallStandCarBattery_C : A00_Stand_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Spline3 USplineComponent
---@field Spline26 USplineComponent
---@field Spline25 USplineComponent
---@field Spline2 USplineComponent
---@field Spline24 USplineComponent
---@field Spline22 USplineComponent
---@field Spline1 USplineComponent
---@field Spline23 USplineComponent
---@field Spline21 USplineComponent
local ASmallStandCarBattery_C = {}

function ASmallStandCarBattery_C:ReceiveBeginPlay() end
function ASmallStandCarBattery_C:ReceiveDestroyed() end
---@param DeltaSeconds float
function ASmallStandCarBattery_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ASmallStandCarBattery_C:ExecuteUbergraph_SmallStandCarBattery(EntryPoint) end


