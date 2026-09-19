---@meta

---@class UANS_JoeUnMounting_C : UAnimNotifyState
local UANS_JoeUnMounting_C = {}

---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@return boolean
function UANS_JoeUnMounting_C:Received_NotifyEnd(MeshComp, Animation) end
---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@param TotalDuration float
---@return boolean
function UANS_JoeUnMounting_C:Received_NotifyBegin(MeshComp, Animation, TotalDuration) end
---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@param FrameDeltaTime float
---@return boolean
function UANS_JoeUnMounting_C:Received_NotifyTick(MeshComp, Animation, FrameDeltaTime) end


