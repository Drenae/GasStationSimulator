---@meta

---@class UAN_PlaySoundInSocketLocation_C : UAnimNotify
---@field SoundToPlay USoundBase
---@field ['Socket Name'] FName
---@field ['Attenuation Settings'] USoundAttenuation
local UAN_PlaySoundInSocketLocation_C = {}

---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@return boolean
function UAN_PlaySoundInSocketLocation_C:Received_Notify(MeshComp, Animation) end


