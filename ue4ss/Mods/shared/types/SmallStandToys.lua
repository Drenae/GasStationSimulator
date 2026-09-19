---@meta

---@class ASmallStandToys_C : A00_Stand_C
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
local ASmallStandToys_C = {}

function ASmallStandToys_C:ReceiveBeginPlay() end
function ASmallStandToys_C:ReceiveDestroyed() end
---@param DeltaSeconds float
function ASmallStandToys_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ASmallStandToys_C:ExecuteUbergraph_SmallStandToys(EntryPoint) end


