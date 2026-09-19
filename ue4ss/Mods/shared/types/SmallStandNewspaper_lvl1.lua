---@meta

---@class ASmallStandNewspaper_lvl1_C : A00_Stand_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Spline33 USplineComponent
---@field Spline32 USplineComponent
---@field Spline31 USplineComponent
---@field Spline30 USplineComponent
---@field Spline29 USplineComponent
---@field Spline28 USplineComponent
---@field Spline26 USplineComponent
---@field Spline25 USplineComponent
---@field Spline27 USplineComponent
local ASmallStandNewspaper_lvl1_C = {}

function ASmallStandNewspaper_lvl1_C:ReceiveBeginPlay() end
function ASmallStandNewspaper_lvl1_C:ReceiveDestroyed() end
---@param DeltaSeconds float
function ASmallStandNewspaper_lvl1_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ASmallStandNewspaper_lvl1_C:ExecuteUbergraph_SmallStandNewspaper_lvl1(EntryPoint) end


