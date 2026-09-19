---@meta

---@class UAN_DeetachWithPhysics_C : UAnimNotify
---@field LifeTime float
---@field ImpulsePower float
---@field StartingVectorSocket FName
---@field EndVectorSocket FName
---@field ImpluseBoneName FName
local UAN_DeetachWithPhysics_C = {}

---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@return boolean
function UAN_DeetachWithPhysics_C:Received_Notify(MeshComp, Animation) end


