---@meta

---@class UWBP_ChallengesPosition_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field GreenAnim UWidgetAnimation
---@field RedAnim UWidgetAnimation
---@field AmountTXT UTextBlock
---@field CheckBoxDone UImage
---@field CheckOverlay UOverlay
---@field Image_88 UImage
---@field Objective_TXT UTextBlock
---@field SetObjectiveTXT FText
---@field MoneyIncluded boolean
---@field CurrentAmount float
---@field MaxAmount float
---@field ChallengeSubtype EGSS_Stat
---@field CreatedForPC boolean
---@field bPartDone boolean
local UWBP_ChallengesPosition_C = {}

function UWBP_ChallengesPosition_C:Construct() end
---@param CurrentAmount float
---@param IsPartDone boolean
function UWBP_ChallengesPosition_C:UpdateValue(CurrentAmount, IsPartDone) end
function UWBP_ChallengesPosition_C:PlayRedAnim() end
function UWBP_ChallengesPosition_C:PlayGreenAnim() end
---@param EntryPoint int32
function UWBP_ChallengesPosition_C:ExecuteUbergraph_WBP_ChallengesPosition(EntryPoint) end


