---@meta

---@class UWBP_FadeInOut_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field FadeInOut UWidgetAnimation
---@field Black_To_Fade UImage
local UWBP_FadeInOut_C = {}

function UWBP_FadeInOut_C:Construct() end
---@param EntryPoint int32
function UWBP_FadeInOut_C:ExecuteUbergraph_WBP_FadeInOut(EntryPoint) end


