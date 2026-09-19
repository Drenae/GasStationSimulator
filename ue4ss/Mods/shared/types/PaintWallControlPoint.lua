---@meta

---@class APaintWallControlPoint_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Painting_Progress UWidgetComponent
---@field CameraSnapPoint ACameraSnapPoint_C
---@field Time float
---@field Active boolean
---@field MaxTime float
---@field ActivateTime float
local APaintWallControlPoint_C = {}

---@param CameraSnapPoint ACameraSnapPoint_C
---@return boolean
function APaintWallControlPoint_C:hasRange(CameraSnapPoint) end
function APaintWallControlPoint_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function APaintWallControlPoint_C:ReceiveTick(DeltaSeconds) end
---@param Active boolean
function APaintWallControlPoint_C:ActivePoint(Active) end
---@param EntryPoint int32
function APaintWallControlPoint_C:ExecuteUbergraph_PaintWallControlPoint(EntryPoint) end


