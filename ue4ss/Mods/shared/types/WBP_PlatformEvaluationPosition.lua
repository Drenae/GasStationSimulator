---@meta

---@class UWBP_PlatformEvaluationPosition_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field PositionName_TXT UTextBlock
---@field ValueNeeded_TXT UTextBlock
---@field Info FText
---@field Value float
---@field bHeader boolean
---@field ValueFormatting FText
local UWBP_PlatformEvaluationPosition_C = {}

function UWBP_PlatformEvaluationPosition_C:Construct() end
---@param EntryPoint int32
function UWBP_PlatformEvaluationPosition_C:ExecuteUbergraph_WBP_PlatformEvaluationPosition(EntryPoint) end


