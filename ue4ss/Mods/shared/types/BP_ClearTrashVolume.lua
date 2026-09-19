---@meta

---@class ABP_ClearTrashVolume_C : ATriggerBox
---@field UberGraphFrame FPointerToUberGraphFrame
local ABP_ClearTrashVolume_C = {}

function ABP_ClearTrashVolume_C:ReceiveBeginPlay() end
---@param GameLoaded boolean
function ABP_ClearTrashVolume_C:ClearTrash(GameLoaded) end
function ABP_ClearTrashVolume_C:DestroyAfterSetTime() end
---@param EntryPoint int32
function ABP_ClearTrashVolume_C:ExecuteUbergraph_BP_ClearTrashVolume(EntryPoint) end


