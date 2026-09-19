---@meta

---@class UAN_UnhideBoneByName_C : UAnimNotify
---@field ['Bone Name'] FName
local UAN_UnhideBoneByName_C = {}

---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@return boolean
function UAN_UnhideBoneByName_C:Received_Notify(MeshComp, Animation) end


