---@meta

---@class UDLC_ChunchIsl_ScubaDive_C : URentEquipment
---@field UberGraphFrame FPointerToUberGraphFrame
local UDLC_ChunchIsl_ScubaDive_C = {}

---@param Character AAICharacterBase
---@param NewTasksProgress TArray<FTaskProgress>
function UDLC_ChunchIsl_ScubaDive_C:InitializeTask(Character, NewTasksProgress) end
---@param Character ACharacter
function UDLC_ChunchIsl_ScubaDive_C:StartTask(Character) end
---@param DeltaTime float
function UDLC_ChunchIsl_ScubaDive_C:TickObject(DeltaTime) end
---@param TaskState ETaskResult
---@param FinishReason FString
function UDLC_ChunchIsl_ScubaDive_C:FinishBeginTask(TaskState, FinishReason) end
---@param EntryPoint int32
function UDLC_ChunchIsl_ScubaDive_C:ExecuteUbergraph_DLC_ChunchIsl_ScubaDive(EntryPoint) end


