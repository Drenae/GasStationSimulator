---@meta

---@class ADLCAirstripManager_BP_C : ADLCAirstripManager
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DefaultSceneRoot USceneComponent
local ADLCAirstripManager_BP_C = {}

function ADLCAirstripManager_BP_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ADLCAirstripManager_BP_C:ExecuteUbergraph_DLCAirstripManager_BP(EntryPoint) end


