---@meta

---@class UNP_RubyTask_Wait_C : UNPAITaskBase
---@field UberGraphFrame FPointerToUberGraphFrame
local UNP_RubyTask_Wait_C = {}

---@param OwnerCharacter ANPAICharacterBase
---@param InTargetActor AActor
function UNP_RubyTask_Wait_C:OnInitializeTask(OwnerCharacter, InTargetActor) end
---@param TaskStopReason FNPTaskFinishReason
function UNP_RubyTask_Wait_C:FinishBeginTask(TaskStopReason) end
function UNP_RubyTask_Wait_C:StartTask() end
---@param EntryPoint int32
function UNP_RubyTask_Wait_C:ExecuteUbergraph_NP_RubyTask_Wait(EntryPoint) end


