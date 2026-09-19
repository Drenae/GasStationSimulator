---@meta

---@class UBTT_MoveToVehicle_C : UBTTask_BlueprintBase
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CarRotation FTransform
---@field StartRotation boolean
---@field AICharacterBase AAICharacterBase
---@field PathPoint APathPoint
---@field MontageSpeed float
---@field Timer FTimerHandle
---@field UpdatePathStationsAttempts int32
---@field ['Nav Data'] ANavigationData
local UBTT_MoveToVehicle_C = {}

function UBTT_MoveToVehicle_C:SetTransforms() end
---@param Mesh USkeletalMeshComponent
function UBTT_MoveToVehicle_C:HandlePositioning(Mesh) end
---@param MovementResult EPathFollowingResult::Type
function UBTT_MoveToVehicle_C:OnFail_9A0F57544FBE668D7C11DFAFDFA21B3E(MovementResult) end
---@param MovementResult EPathFollowingResult::Type
function UBTT_MoveToVehicle_C:OnSuccess_9A0F57544FBE668D7C11DFAFDFA21B3E(MovementResult) end
---@param NotifyName FName
function UBTT_MoveToVehicle_C:OnNotifyEnd_CF3E45D94C307AE79F21168871DEBAD8(NotifyName) end
---@param NotifyName FName
function UBTT_MoveToVehicle_C:OnNotifyBegin_CF3E45D94C307AE79F21168871DEBAD8(NotifyName) end
---@param NotifyName FName
function UBTT_MoveToVehicle_C:OnInterrupted_CF3E45D94C307AE79F21168871DEBAD8(NotifyName) end
---@param NotifyName FName
function UBTT_MoveToVehicle_C:OnBlendOut_CF3E45D94C307AE79F21168871DEBAD8(NotifyName) end
---@param NotifyName FName
function UBTT_MoveToVehicle_C:OnCompleted_CF3E45D94C307AE79F21168871DEBAD8(NotifyName) end
---@param MovementResult EPathFollowingResult::Type
function UBTT_MoveToVehicle_C:OnFail_B0BDA82E47DC4DFB77F971B76D4F43F3(MovementResult) end
---@param MovementResult EPathFollowingResult::Type
function UBTT_MoveToVehicle_C:OnSuccess_B0BDA82E47DC4DFB77F971B76D4F43F3(MovementResult) end
---@param NotifyName FName
function UBTT_MoveToVehicle_C:OnNotifyEnd_BAFF648F4B94579EE73D938378A3315E(NotifyName) end
---@param NotifyName FName
function UBTT_MoveToVehicle_C:OnNotifyBegin_BAFF648F4B94579EE73D938378A3315E(NotifyName) end
---@param NotifyName FName
function UBTT_MoveToVehicle_C:OnInterrupted_BAFF648F4B94579EE73D938378A3315E(NotifyName) end
---@param NotifyName FName
function UBTT_MoveToVehicle_C:OnBlendOut_BAFF648F4B94579EE73D938378A3315E(NotifyName) end
---@param NotifyName FName
function UBTT_MoveToVehicle_C:OnCompleted_BAFF648F4B94579EE73D938378A3315E(NotifyName) end
---@param NotifyName FName
function UBTT_MoveToVehicle_C:OnNotifyEnd_CF52349D44A66F1FE2C2118916AED54C(NotifyName) end
---@param NotifyName FName
function UBTT_MoveToVehicle_C:OnNotifyBegin_CF52349D44A66F1FE2C2118916AED54C(NotifyName) end
---@param NotifyName FName
function UBTT_MoveToVehicle_C:OnInterrupted_CF52349D44A66F1FE2C2118916AED54C(NotifyName) end
---@param NotifyName FName
function UBTT_MoveToVehicle_C:OnBlendOut_CF52349D44A66F1FE2C2118916AED54C(NotifyName) end
---@param NotifyName FName
function UBTT_MoveToVehicle_C:OnCompleted_CF52349D44A66F1FE2C2118916AED54C(NotifyName) end
---@param OwnerController AAIController
---@param ControlledPawn APawn
function UBTT_MoveToVehicle_C:ReceiveExecuteAI(OwnerController, ControlledPawn) end
function UBTT_MoveToVehicle_C:TryUpdatePathPoint() end
function UBTT_MoveToVehicle_C:OnNotValidPathPoint() end
function UBTT_MoveToVehicle_C:CheckForValidPathPoint() end
---@param EntryPoint int32
function UBTT_MoveToVehicle_C:ExecuteUbergraph_BTT_MoveToVehicle(EntryPoint) end


