---@meta

---@class UWBP_BlackScreen_IntroSequencerEnd_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field FadeIn UWidgetAnimation
---@field FadeOut UWidgetAnimation
---@field ConstructAnim UWidgetAnimation
local UWBP_BlackScreen_IntroSequencerEnd_C = {}

function UWBP_BlackScreen_IntroSequencerEnd_C:Construct() end
---@param Animation UWidgetAnimation
function UWBP_BlackScreen_IntroSequencerEnd_C:OnAnimationFinished(Animation) end
---@param EntryPoint int32
function UWBP_BlackScreen_IntroSequencerEnd_C:ExecuteUbergraph_WBP_BlackScreen_IntroSequencerEnd(EntryPoint) end


