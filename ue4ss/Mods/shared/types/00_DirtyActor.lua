---@meta

---@class A00_DirtyActor_C : ADirtyDecal
---@field UberGraphFrame FPointerToUberGraphFrame
local A00_DirtyActor_C = {}

function A00_DirtyActor_C:ReceiveDestroyed() end
---@param EntryPoint int32
function A00_DirtyActor_C:ExecuteUbergraph_00_DirtyActor(EntryPoint) end


