---@meta

---@class UAN_JoeSpawnObject_C : UAnimNotify
---@field SocketName FName
---@field Class TSubclassOf<AActor>
local UAN_JoeSpawnObject_C = {}

---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@return boolean
function UAN_JoeSpawnObject_C:Received_Notify(MeshComp, Animation) end


