---@meta

---@class UAN_SeanSpawnZippo_C : UAnimNotify
---@field SocketName FName
---@field ActorToSpawn TSubclassOf<AActor>
local UAN_SeanSpawnZippo_C = {}

---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@return boolean
function UAN_SeanSpawnZippo_C:Received_Notify(MeshComp, Animation) end


