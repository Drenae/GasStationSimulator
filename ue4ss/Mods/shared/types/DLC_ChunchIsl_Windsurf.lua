---@meta

---@class UDLC_ChunchIsl_Windsurf_C : URentEquipment
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Timer FTimerHandle
local UDLC_ChunchIsl_Windsurf_C = {}

---@param Character AAICharacterBase
---@param NewTasksProgress TArray<FTaskProgress>
function UDLC_ChunchIsl_Windsurf_C:InitializeTask(Character, NewTasksProgress) end
---@param Character ACharacter
function UDLC_ChunchIsl_Windsurf_C:StartTask(Character) end
---@param DeltaTime float
function UDLC_ChunchIsl_Windsurf_C:TickObject(DeltaTime) end
---@param TaskState ETaskResult
---@param FinishReason FString
function UDLC_ChunchIsl_Windsurf_C:FinishBeginTask(TaskState, FinishReason) end
function UDLC_ChunchIsl_Windsurf_C:StartService() end
---@param EntryPoint int32
function UDLC_ChunchIsl_Windsurf_C:ExecuteUbergraph_DLC_ChunchIsl_Windsurf(EntryPoint) end


