---@meta

---@class ADirtyActor_PaintColor_C : A00_DirtyActor_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Color FLinearColor
---@field TraceDistance float
local ADirtyActor_PaintColor_C = {}

function ADirtyActor_PaintColor_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ADirtyActor_PaintColor_C:ExecuteUbergraph_DirtyActor_PaintColor(EntryPoint) end


