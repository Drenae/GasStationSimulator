---@meta

---@class UAN_SpawnSound_C : UAnimNotify
---@field ['In Socket Name'] FName
---@field SoundAttached USoundBase
---@field SoundAtLocation USoundBase
local UAN_SpawnSound_C = {}

---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@return boolean
function UAN_SpawnSound_C:Received_Notify(MeshComp, Animation) end


