---@meta

---@class UANS_CrushedCar_C : UAnimNotifyState
---@field EjectForceMin float
---@field EjectForceMax float
---@field EjectAngleMin float
---@field EjectAngleMax float
local UANS_CrushedCar_C = {}

---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@return boolean
function UANS_CrushedCar_C:Received_NotifyEnd(MeshComp, Animation) end
---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@param TotalDuration float
---@return boolean
function UANS_CrushedCar_C:Received_NotifyBegin(MeshComp, Animation, TotalDuration) end


