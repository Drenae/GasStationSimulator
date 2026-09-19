---@meta

---@class ASmallStandSoftToys_C : A00_Stand_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Spline44 USplineComponent
---@field Spline42 USplineComponent
---@field Spline40 USplineComponent
---@field Spline39 USplineComponent
---@field Spline36 USplineComponent
---@field Spline34 USplineComponent
---@field Spline32 USplineComponent
---@field Spline31 USplineComponent
---@field Spline28 USplineComponent
---@field Spline27 USplineComponent
---@field Spline25 USplineComponent
---@field Spline23 USplineComponent
local ASmallStandSoftToys_C = {}

function ASmallStandSoftToys_C:ReceiveBeginPlay() end
function ASmallStandSoftToys_C:ReceiveDestroyed() end
---@param DeltaSeconds float
function ASmallStandSoftToys_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ASmallStandSoftToys_C:ExecuteUbergraph_SmallStandSoftToys(EntryPoint) end


