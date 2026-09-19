---@meta

---@class ADirty_Feet_C : A00_DirtyActor_C
---@field UberGraphFrame FPointerToUberGraphFrame
local ADirty_Feet_C = {}

function ADirty_Feet_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ADirty_Feet_C:ExecuteUbergraph_Dirty_Feet(EntryPoint) end


