---@meta

---@class ABigStandTire_C : A00_Stand_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Spline3 USplineComponent
---@field Spline2 USplineComponent
---@field Spline1 USplineComponent
local ABigStandTire_C = {}

function ABigStandTire_C:ReceiveBeginPlay() end
function ABigStandTire_C:ReceiveDestroyed() end
---@param DeltaSeconds float
function ABigStandTire_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABigStandTire_C:ExecuteUbergraph_BigStandTire(EntryPoint) end


