---@meta

---@class AGSSPlayerState_BP_C : AGSSPlayerState
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DefaultSceneRoot USceneComponent
local AGSSPlayerState_BP_C = {}

function AGSSPlayerState_BP_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AGSSPlayerState_BP_C:ExecuteUbergraph_GSSPlayerState_BP(EntryPoint) end


