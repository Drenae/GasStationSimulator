---@meta

---@class UAN_HideBoneByName_C : UAnimNotify
---@field ['Bone Name'] FName
local UAN_HideBoneByName_C = {}

---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@return boolean
function UAN_HideBoneByName_C:Received_Notify(MeshComp, Animation) end


