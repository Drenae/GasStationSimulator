---@meta

---@class UFadeBorderWidgetBP_C : UGlobalInteractableUserWidget_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field FadeOut UWidgetAnimation
---@field FadeIn UWidgetAnimation
---@field FadeBorder UBorder
local UFadeBorderWidgetBP_C = {}

function UFadeBorderWidgetBP_C:OnFadeInAnimation() end
function UFadeBorderWidgetBP_C:OnFadeOutAnimation() end
---@param EntryPoint int32
function UFadeBorderWidgetBP_C:ExecuteUbergraph_FadeBorderWidgetBP(EntryPoint) end


