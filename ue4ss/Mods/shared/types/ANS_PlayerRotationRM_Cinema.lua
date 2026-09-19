---@meta

---@class UANS_PlayerRotationRM_Cinema_C : UAnimNotifyState
local UANS_PlayerRotationRM_Cinema_C = {}

---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@param TotalDuration float
---@return boolean
function UANS_PlayerRotationRM_Cinema_C:Received_NotifyBegin(MeshComp, Animation, TotalDuration) end
---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@param FrameDeltaTime float
---@return boolean
function UANS_PlayerRotationRM_Cinema_C:Received_NotifyTick(MeshComp, Animation, FrameDeltaTime) end


