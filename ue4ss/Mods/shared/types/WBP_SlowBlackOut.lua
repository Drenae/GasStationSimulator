---@meta

---@class UWBP_SlowBlackOut_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RemoveBlackScreen UWidgetAnimation
---@field SlowBlackOut UWidgetAnimation
local UWBP_SlowBlackOut_C = {}

---@param Animation UWidgetAnimation
function UWBP_SlowBlackOut_C:OnAnimationFinished(Animation) end
function UWBP_SlowBlackOut_C:Construct() end
---@param EntryPoint int32
function UWBP_SlowBlackOut_C:ExecuteUbergraph_WBP_SlowBlackOut(EntryPoint) end


