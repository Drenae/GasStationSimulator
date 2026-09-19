---@meta

---@class ABP_VolcanoSandstorm_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Niagara UNiagaraComponent
---@field DefaultSceneRoot USceneComponent
local ABP_VolcanoSandstorm_C = {}

function ABP_VolcanoSandstorm_C:ReceiveBeginPlay() end
---@param EndPlayReason EEndPlayReason::Type
function ABP_VolcanoSandstorm_C:ReceiveEndPlay(EndPlayReason) end
---@param AngerState EChunchumanchuAnger
---@param Value float
---@param ValueChanged float
function ABP_VolcanoSandstorm_C:AngerTrigger(AngerState, Value, ValueChanged) end
---@param EntryPoint int32
function ABP_VolcanoSandstorm_C:ExecuteUbergraph_BP_VolcanoSandstorm(EntryPoint) end


