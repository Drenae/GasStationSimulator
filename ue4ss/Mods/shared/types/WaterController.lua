---@meta

---@class AWaterController_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DefaultSceneRoot USceneComponent
---@field WashVFX TArray<AEmitter>
local AWaterController_C = {}

function AWaterController_C:ReceiveBeginPlay() end
function AWaterController_C:StartVFX() end
---@param TaskResultValue ETaskResult
function AWaterController_C:StopVFX(TaskResultValue) end
---@param EndPlayReason EEndPlayReason::Type
function AWaterController_C:ReceiveEndPlay(EndPlayReason) end
---@param EntryPoint int32
function AWaterController_C:ExecuteUbergraph_WaterController(EntryPoint) end


