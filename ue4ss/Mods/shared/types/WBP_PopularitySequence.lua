---@meta

---@class UWBP_PopularitySequence_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ConstructAnim UWidgetAnimation
---@field StationLevelTXT UTextBlock
local UWBP_PopularitySequence_C = {}

function UWBP_PopularitySequence_C:Construct() end
function UWBP_PopularitySequence_C:EndAnimation() end
function UWBP_PopularitySequence_C:Remove() end
---@param EntryPoint int32
function UWBP_PopularitySequence_C:ExecuteUbergraph_WBP_PopularitySequence(EntryPoint) end


