---@meta

---@class UANS_SpawnSpoon_C : UAnimNotifyState
local UANS_SpawnSpoon_C = {}

---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@return boolean
function UANS_SpawnSpoon_C:Received_NotifyEnd(MeshComp, Animation) end
---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@param TotalDuration float
---@return boolean
function UANS_SpawnSpoon_C:Received_NotifyBegin(MeshComp, Animation, TotalDuration) end


