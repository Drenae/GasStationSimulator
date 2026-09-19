---@meta

---@class AStandMirror_C : A00_Stand_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Spline3 USplineComponent
---@field Spline2 USplineComponent
---@field Spline1 USplineComponent
---@field Spline USplineComponent
---@field Mirror_Shelv_Shelf19 UStaticMeshComponent
---@field Mirror_Shelv_Shelf18 UStaticMeshComponent
---@field Mirror_Shelv_Shelf17 UStaticMeshComponent
---@field Mirror_Shelv_Shelf16 UStaticMeshComponent
---@field Mirror_Shelv_Shelf15 UStaticMeshComponent
---@field Mirror_Shelv_Shelf14 UStaticMeshComponent
---@field Mirror_Shelv_Shelf13 UStaticMeshComponent
---@field Mirror_Shelv_Shelf12 UStaticMeshComponent
---@field Mirror_Shelv_Shelf11 UStaticMeshComponent
---@field Mirror_Shelv_Shelf10 UStaticMeshComponent
---@field Mirror_Shelv_Shelf9 UStaticMeshComponent
---@field Mirror_Shelv_Shelf8 UStaticMeshComponent
---@field Mirror_Shelv_Shelf7 UStaticMeshComponent
---@field Mirror_Shelv_Shelf6 UStaticMeshComponent
---@field Mirror_Shelv_Shelf5 UStaticMeshComponent
---@field Mirror_Shelv_Shelf4 UStaticMeshComponent
---@field Mirror_Shelv_Shelf3 UStaticMeshComponent
---@field Mirror_Shelv_Shelf2 UStaticMeshComponent
---@field Mirror_Shelv_Shelf1 UStaticMeshComponent
---@field Mirror_Shelv_Shelf UStaticMeshComponent
local AStandMirror_C = {}

function AStandMirror_C:ReceiveBeginPlay() end
function AStandMirror_C:ReceiveDestroyed() end
---@param DeltaSeconds float
function AStandMirror_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function AStandMirror_C:ExecuteUbergraph_StandMirror(EntryPoint) end


