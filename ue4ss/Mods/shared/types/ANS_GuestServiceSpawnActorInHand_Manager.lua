---@meta

---@class UANS_GuestServiceSpawnActorInHand_Manager_C : UAnimNotifyState
---@field ['Actor to Spawn'] TSubclassOf<AActor>
---@field ['Socket Name'] FName
local UANS_GuestServiceSpawnActorInHand_Manager_C = {}

---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@param TotalDuration float
---@return boolean
function UANS_GuestServiceSpawnActorInHand_Manager_C:Received_NotifyBegin(MeshComp, Animation, TotalDuration) end


