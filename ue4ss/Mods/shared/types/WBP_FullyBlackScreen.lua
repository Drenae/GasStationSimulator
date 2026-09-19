---@meta

---@class UWBP_FullyBlackScreen_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Fade UWidgetAnimation
---@field ConstructAnim UWidgetAnimation
local UWBP_FullyBlackScreen_C = {}

function UWBP_FullyBlackScreen_C:Construct() end
---@param Animation UWidgetAnimation
function UWBP_FullyBlackScreen_C:OnAnimationFinished(Animation) end
---@param EntryPoint int32
function UWBP_FullyBlackScreen_C:ExecuteUbergraph_WBP_FullyBlackScreen(EntryPoint) end


