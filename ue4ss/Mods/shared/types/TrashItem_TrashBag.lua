---@meta

---@class ATrashItem_TrashBag_C : A00_TrashItem_C
---@field UberGraphFrame FPointerToUberGraphFrame
local ATrashItem_TrashBag_C = {}

function ATrashItem_TrashBag_C:UserConstructionScript() end
function ATrashItem_TrashBag_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ATrashItem_TrashBag_C:ExecuteUbergraph_TrashItem_TrashBag(EntryPoint) end


