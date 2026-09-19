---@meta

---@class ATrashItem_PrologueTrash_C : A00_TrashItem_C
---@field UberGraphFrame FPointerToUberGraphFrame
local ATrashItem_PrologueTrash_C = {}

function ATrashItem_PrologueTrash_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ATrashItem_PrologueTrash_C:ExecuteUbergraph_TrashItem_PrologueTrash(EntryPoint) end


