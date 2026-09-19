---@meta

---@class ASmallStandIceCream_lvl1_C : A00_Stand_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Spline25 USplineComponent
---@field Spline24 USplineComponent
---@field Spline23 USplineComponent
---@field spot1 USpotLightComponent
local ASmallStandIceCream_lvl1_C = {}

function ASmallStandIceCream_lvl1_C:ReceiveBeginPlay() end
function ASmallStandIceCream_lvl1_C:ReceiveDestroyed() end
---@param DeltaSeconds float
function ASmallStandIceCream_lvl1_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ASmallStandIceCream_lvl1_C:ExecuteUbergraph_SmallStandIceCream_lvl1(EntryPoint) end


