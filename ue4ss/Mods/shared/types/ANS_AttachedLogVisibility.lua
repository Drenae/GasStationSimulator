---@meta

---@class UANS_AttachedLogVisibility_C : UAnimNotifyState
---@field bShouldBeVisibleOnBegin boolean
---@field bShouldBeVisibleOnEnd boolean
local UANS_AttachedLogVisibility_C = {}

---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@return boolean
function UANS_AttachedLogVisibility_C:Received_NotifyEnd(MeshComp, Animation) end
---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@param TotalDuration float
---@return boolean
function UANS_AttachedLogVisibility_C:Received_NotifyBegin(MeshComp, Animation, TotalDuration) end


