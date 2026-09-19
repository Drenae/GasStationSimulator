---@meta

---@class ABP_GuidesManager_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DefaultSceneRoot USceneComponent
---@field RadialElementIndex int32
---@field MarkersOnScreen TArray<UWBP_RedDotUiMark_C>
local ABP_GuidesManager_C = {}

function ABP_GuidesManager_C:RemoveGuideWidgets() end
---@param EntryPoint int32
function ABP_GuidesManager_C:ExecuteUbergraph_BP_GuidesManager(EntryPoint) end


