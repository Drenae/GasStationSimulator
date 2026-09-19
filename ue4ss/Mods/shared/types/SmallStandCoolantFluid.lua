---@meta

---@class ASmallStandCoolantFluid_C : A00_Stand_C
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
local ASmallStandCoolantFluid_C = {}

function ASmallStandCoolantFluid_C:ReceiveBeginPlay() end
function ASmallStandCoolantFluid_C:ReceiveDestroyed() end
---@param DeltaSeconds float
function ASmallStandCoolantFluid_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ASmallStandCoolantFluid_C:ExecuteUbergraph_SmallStandCoolantFluid(EntryPoint) end


