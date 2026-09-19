---@meta

---@class UWBP_IntroSequenceCongratz_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field FadeIn UWidgetAnimation
---@field FadeOut UWidgetAnimation
---@field ConstructAnim UWidgetAnimation
---@field Image_83 UImage
local UWBP_IntroSequenceCongratz_C = {}

function UWBP_IntroSequenceCongratz_C:Construct() end
---@param Animation UWidgetAnimation
function UWBP_IntroSequenceCongratz_C:OnAnimationFinished(Animation) end
---@param EntryPoint int32
function UWBP_IntroSequenceCongratz_C:ExecuteUbergraph_WBP_IntroSequenceCongratz(EntryPoint) end


