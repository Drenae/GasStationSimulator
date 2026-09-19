---@meta

---@class UANS_NPCSpawnActorInHands_C : UAnimNotifyState
---@field ['In Socket Name'] FName
---@field ClassToSpawn TSubclassOf<AActor>
---@field bDespawn boolean
---@field bSpawn boolean
local UANS_NPCSpawnActorInHands_C = {}

---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@return boolean
function UANS_NPCSpawnActorInHands_C:Received_NotifyEnd(MeshComp, Animation) end
---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@param TotalDuration float
---@return boolean
function UANS_NPCSpawnActorInHands_C:Received_NotifyBegin(MeshComp, Animation, TotalDuration) end


