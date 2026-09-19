---@meta

---@class UANS_PositionWarp_C : UAnimNotifyState
---@field WarpingDisabled boolean
local UANS_PositionWarp_C = {}

---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@return boolean
function UANS_PositionWarp_C:Received_NotifyEnd(MeshComp, Animation) end
---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@param TotalDuration float
---@return boolean
function UANS_PositionWarp_C:Received_NotifyBegin(MeshComp, Animation, TotalDuration) end
---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@param FrameDeltaTime float
---@return boolean
function UANS_PositionWarp_C:Received_NotifyTick(MeshComp, Animation, FrameDeltaTime) end


