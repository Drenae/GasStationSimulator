---@meta

---@class UANS_DisableLookAt_C : UAnimNotifyState
local UANS_DisableLookAt_C = {}

---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@return boolean
function UANS_DisableLookAt_C:Received_NotifyEnd(MeshComp, Animation) end
---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@param TotalDuration float
---@return boolean
function UANS_DisableLookAt_C:Received_NotifyBegin(MeshComp, Animation, TotalDuration) end


