---@meta

---@class UDLC_RV_GoToRVHome_C : UGoToHome_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AICharacter AAICharacterBase
---@field ['As GSSWheeled Vehicle'] AGSSWheeledVehicle
---@field Destination FVector
---@field ShouldCheckCurentlyOccupied boolean
local UDLC_RV_GoToRVHome_C = {}

---@param Spawned_Npc_Home AActor
function UDLC_RV_GoToRVHome_C:FindHome(Spawned_Npc_Home) end
function UDLC_RV_GoToRVHome_C:DeactivateHandsLayer() end
function UDLC_RV_GoToRVHome_C:ActivateHandLayer() end
function UDLC_RV_GoToRVHome_C:SetPositioningValues() end
---@param MovementResult EPathFollowingResult::Type
function UDLC_RV_GoToRVHome_C:OnFail_715F33F44E23F37C9C98188FEDB8182C(MovementResult) end
---@param MovementResult EPathFollowingResult::Type
function UDLC_RV_GoToRVHome_C:OnSuccess_715F33F44E23F37C9C98188FEDB8182C(MovementResult) end
---@param NotifyName FName
function UDLC_RV_GoToRVHome_C:OnNotifyEnd_56B8B8514BFF6F3C807F1A8D5F4312B6(NotifyName) end
---@param NotifyName FName
function UDLC_RV_GoToRVHome_C:OnNotifyBegin_56B8B8514BFF6F3C807F1A8D5F4312B6(NotifyName) end
---@param NotifyName FName
function UDLC_RV_GoToRVHome_C:OnInterrupted_56B8B8514BFF6F3C807F1A8D5F4312B6(NotifyName) end
---@param NotifyName FName
function UDLC_RV_GoToRVHome_C:OnBlendOut_56B8B8514BFF6F3C807F1A8D5F4312B6(NotifyName) end
---@param NotifyName FName
function UDLC_RV_GoToRVHome_C:OnCompleted_56B8B8514BFF6F3C807F1A8D5F4312B6(NotifyName) end
---@param NotifyName FName
function UDLC_RV_GoToRVHome_C:OnNotifyEnd_9CE85ED348FE211AE7B0CCAE67B9CF7B(NotifyName) end
---@param NotifyName FName
function UDLC_RV_GoToRVHome_C:OnNotifyBegin_9CE85ED348FE211AE7B0CCAE67B9CF7B(NotifyName) end
---@param NotifyName FName
function UDLC_RV_GoToRVHome_C:OnInterrupted_9CE85ED348FE211AE7B0CCAE67B9CF7B(NotifyName) end
---@param NotifyName FName
function UDLC_RV_GoToRVHome_C:OnBlendOut_9CE85ED348FE211AE7B0CCAE67B9CF7B(NotifyName) end
---@param NotifyName FName
function UDLC_RV_GoToRVHome_C:OnCompleted_9CE85ED348FE211AE7B0CCAE67B9CF7B(NotifyName) end
---@param MovementResult EPathFollowingResult::Type
function UDLC_RV_GoToRVHome_C:OnFail_60687AC84453B3BCF653D0BF22E61EF9(MovementResult) end
---@param MovementResult EPathFollowingResult::Type
function UDLC_RV_GoToRVHome_C:OnSuccess_60687AC84453B3BCF653D0BF22E61EF9(MovementResult) end
---@param MovementResult EPathFollowingResult::Type
function UDLC_RV_GoToRVHome_C:OnFail_4F209A1B40751E3EE10575B31AA00F4F(MovementResult) end
---@param MovementResult EPathFollowingResult::Type
function UDLC_RV_GoToRVHome_C:OnSuccess_4F209A1B40751E3EE10575B31AA00F4F(MovementResult) end
---@param Character AAICharacterBase
---@param NewTasksProgress TArray<FTaskProgress>
function UDLC_RV_GoToRVHome_C:InitializeTask(Character, NewTasksProgress) end
---@param Character ACharacter
function UDLC_RV_GoToRVHome_C:StartTask(Character) end
---@param TaskState ETaskResult
---@param FinishReason FString
function UDLC_RV_GoToRVHome_C:FinishBeginTask(TaskState, FinishReason) end
---@param DeltaTime float
function UDLC_RV_GoToRVHome_C:TickObject(DeltaTime) end
---@param Target AActor
function UDLC_RV_GoToRVHome_C:MoveToSpot(Target) end
---@param EntryPoint int32
function UDLC_RV_GoToRVHome_C:ExecuteUbergraph_DLC_RV_GoToRVHome(EntryPoint) end


