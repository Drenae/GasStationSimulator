---@meta

---@class UAN_SpawnObjectInSocket_C : UAnimNotify
---@field Class TSubclassOf<AActor>
---@field ['Montage to Play'] UAnimMontage
---@field ['Socket Name'] FName
local UAN_SpawnObjectInSocket_C = {}

---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@return boolean
function UAN_SpawnObjectInSocket_C:Received_Notify(MeshComp, Animation) end


