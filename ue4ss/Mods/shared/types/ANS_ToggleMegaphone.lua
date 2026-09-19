---@meta

---@class UANS_ToggleMegaphone_C : UAnimNotifyState
---@field ['Megaphone Equipped'] boolean
local UANS_ToggleMegaphone_C = {}

---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@return boolean
function UANS_ToggleMegaphone_C:Received_NotifyEnd(MeshComp, Animation) end


