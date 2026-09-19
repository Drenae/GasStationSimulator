---@meta

---@class ABP_AirstripInteraction_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DefaultSceneRoot USceneComponent
local ABP_AirstripInteraction_C = {}

---@return FName
function ABP_AirstripInteraction_C:GetInteractionName() end
function ABP_AirstripInteraction_C:InvokeInteraction() end
---@param EntryPoint int32
function ABP_AirstripInteraction_C:ExecuteUbergraph_BP_AirstripInteraction(EntryPoint) end


