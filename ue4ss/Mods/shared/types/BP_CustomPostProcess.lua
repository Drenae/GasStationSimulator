---@meta

---@class ABP_CustomPostProcess_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field PostProcess UPostProcessComponent
---@field Box UBoxComponent
---@field DefaultSceneRoot USceneComponent
---@field PP FPostProcessSettings
local ABP_CustomPostProcess_C = {}

---@param PostProcessSettings FPostProcessSettings
function ABP_CustomPostProcess_C:getPostProcess(PostProcessSettings) end
function ABP_CustomPostProcess_C:UserConstructionScript() end
---@param PP FPostProcessSettings
function ABP_CustomPostProcess_C:UpdatePostProcess(PP) end
---@param EntryPoint int32
function ABP_CustomPostProcess_C:ExecuteUbergraph_BP_CustomPostProcess(EntryPoint) end


