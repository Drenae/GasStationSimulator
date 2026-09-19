---@meta

---@class ABigStandToys_C : A00_Stand_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Spline55 USplineComponent
---@field Spline53 USplineComponent
---@field Spline51 USplineComponent
---@field Spline50 USplineComponent
---@field Spline48 USplineComponent
---@field Spline46 USplineComponent
---@field Spline43 USplineComponent
---@field Spline41 USplineComponent
---@field Spline39 USplineComponent
---@field Spline38 USplineComponent
---@field Spline36 USplineComponent
---@field Spline34 USplineComponent
---@field Spline30 USplineComponent
---@field Spline28 USplineComponent
---@field Spline20 USplineComponent
---@field Spline24 USplineComponent
---@field Spline22 USplineComponent
---@field Spline26 USplineComponent
local ABigStandToys_C = {}

function ABigStandToys_C:ReceiveBeginPlay() end
function ABigStandToys_C:ReceiveDestroyed() end
---@param DeltaSeconds float
function ABigStandToys_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABigStandToys_C:ExecuteUbergraph_BigStandToys(EntryPoint) end


