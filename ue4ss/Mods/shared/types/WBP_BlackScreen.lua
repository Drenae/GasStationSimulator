---@meta

---@class UWBP_BlackScreen_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field FadeOut UWidgetAnimation
---@field ConstructAnim UWidgetAnimation
---@field Image UImage
local UWBP_BlackScreen_C = {}

function UWBP_BlackScreen_C:Construct() end
---@param Animation UWidgetAnimation
function UWBP_BlackScreen_C:OnAnimationFinished(Animation) end
---@param EntryPoint int32
function UWBP_BlackScreen_C:ExecuteUbergraph_WBP_BlackScreen(EntryPoint) end


