---@meta

---@class UANS_BlendPhysics_C : UAnimNotifyState
---@field ['In Bone Name'] FName
local UANS_BlendPhysics_C = {}

---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@return boolean
function UANS_BlendPhysics_C:Received_NotifyEnd(MeshComp, Animation) end
---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@param FrameDeltaTime float
---@return boolean
function UANS_BlendPhysics_C:Received_NotifyTick(MeshComp, Animation, FrameDeltaTime) end


