---@meta

---@class UAN_SpawnObjectOnCustomer_C : UAnimNotify
---@field ActorClassToSpawn TSubclassOf<AActor>
---@field bSpawnRHand boolean
local UAN_SpawnObjectOnCustomer_C = {}

---@param ActorToDestroy AActor
function UAN_SpawnObjectOnCustomer_C:destroyActor(ActorToDestroy) end
---@param bRHand boolean
---@param SpawnedActor AActor
---@param AnimInstance UAnimInstance
function UAN_SpawnObjectOnCustomer_C:SetSpawnedActor(bRHand, SpawnedActor, AnimInstance) end
---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@return boolean
function UAN_SpawnObjectOnCustomer_C:Received_Notify(MeshComp, Animation) end


