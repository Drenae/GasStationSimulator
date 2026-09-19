---@meta

---@class ABigStandIceCream_lvl1_C : A00_Stand_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Spline28 USplineComponent
---@field Spline27 USplineComponent
---@field Spline26 USplineComponent
---@field Spline25 USplineComponent
---@field Spline24 USplineComponent
---@field Spline23 USplineComponent
---@field spot1 USpotLightComponent
local ABigStandIceCream_lvl1_C = {}

function ABigStandIceCream_lvl1_C:ReceiveBeginPlay() end
function ABigStandIceCream_lvl1_C:ReceiveDestroyed() end
---@param DeltaSeconds float
function ABigStandIceCream_lvl1_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABigStandIceCream_lvl1_C:ExecuteUbergraph_BigStandIceCream_lvl1(EntryPoint) end


