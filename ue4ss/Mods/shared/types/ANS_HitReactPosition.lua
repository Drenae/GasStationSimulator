---@meta

---@class UANS_HitReactPosition_C : UAnimNotifyState
local UANS_HitReactPosition_C = {}

---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@return boolean
function UANS_HitReactPosition_C:Received_NotifyEnd(MeshComp, Animation) end
---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@param FrameDeltaTime float
---@return boolean
function UANS_HitReactPosition_C:Received_NotifyTick(MeshComp, Animation, FrameDeltaTime) end
---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@param TotalDuration float
---@return boolean
function UANS_HitReactPosition_C:Received_NotifyBegin(MeshComp, Animation, TotalDuration) end


