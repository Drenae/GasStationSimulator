---@meta

---@class UANS_AttachLog_C : UAnimNotifyState
---@field bShouldAttach boolean
---@field bShouldDettach boolean
local UANS_AttachLog_C = {}

---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@return boolean
function UANS_AttachLog_C:Received_NotifyEnd(MeshComp, Animation) end
---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@param TotalDuration float
---@return boolean
function UANS_AttachLog_C:Received_NotifyBegin(MeshComp, Animation, TotalDuration) end


