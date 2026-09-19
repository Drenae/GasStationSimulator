---@meta

---@class UANS_SetBenchPressing_C : UAnimNotifyState
---@field ['Bench Pressing'] boolean
local UANS_SetBenchPressing_C = {}

---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@return boolean
function UANS_SetBenchPressing_C:Received_NotifyEnd(MeshComp, Animation) end


