---@meta

---@class UANS_RootMotion_C : UAnimNotifyState
local UANS_RootMotion_C = {}

---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@param FrameDeltaTime float
---@return boolean
function UANS_RootMotion_C:Received_NotifyTick(MeshComp, Animation, FrameDeltaTime) end


