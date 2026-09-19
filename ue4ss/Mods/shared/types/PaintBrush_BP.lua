---@meta

---@class APaintBrush_BP_C : APaintBrush
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SkeletalMesh USkeletalMeshComponent
---@field PaintBrushWidget UWBP_PaintBrush_C
---@field PaintBrushREF boolean
local APaintBrush_BP_C = {}

function APaintBrush_BP_C:ReceiveBeginPlay() end
function APaintBrush_BP_C:ReceiveDestroyed() end
---@param EntryPoint int32
function APaintBrush_BP_C:ExecuteUbergraph_PaintBrush_BP(EntryPoint) end


