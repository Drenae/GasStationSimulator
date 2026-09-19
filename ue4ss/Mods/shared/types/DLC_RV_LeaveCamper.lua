---@meta

---@class UDLC_RV_LeaveCamper_C : UIteractableActorTask
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AIChar AAICharacterBase
local UDLC_RV_LeaveCamper_C = {}

---@param Rv_Camp_Spot ARVCampSpot
UDLC_RV_LeaveCamper_C['Find Camp Spot'] = function(self, Rv_Camp_Spot) end
---@param NPC_MontageManager_BP UNPC_MontageManager_BP_C
UDLC_RV_LeaveCamper_C['Get NPC Montage Manager'] = function(self, NPC_MontageManager_BP) end
---@param Character AAICharacterBase
---@param NewTasksProgress TArray<FTaskProgress>
function UDLC_RV_LeaveCamper_C:InitializeTask(Character, NewTasksProgress) end
---@param Character ACharacter
function UDLC_RV_LeaveCamper_C:StartTask(Character) end
---@param TaskState ETaskResult
---@param FinishReason FString
function UDLC_RV_LeaveCamper_C:FinishBeginTask(TaskState, FinishReason) end
---@param EntryPoint int32
function UDLC_RV_LeaveCamper_C:ExecuteUbergraph_DLC_RV_LeaveCamper(EntryPoint) end


