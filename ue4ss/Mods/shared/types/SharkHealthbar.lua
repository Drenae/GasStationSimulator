---@meta

---@class USharkHealthbar_C : USharkHealthBar
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SuccessClose UWidgetAnimation
---@field Failed_Close UWidgetAnimation
---@field Success UWidgetAnimation
---@field Failed UWidgetAnimation
---@field OpenAnimation UWidgetAnimation
---@field OnChangeHealth UWidgetAnimation
---@field Headline_text UTextBlock
---@field HealthBar_ProgressBar UProgressBar
---@field Secondheadline_Text UTextBlock
---@field Stars1_Image UImage
---@field Stars2_Image UImage
---@field HeadlineText FText
---@field SecondaryText FText
local USharkHealthbar_C = {}

function USharkHealthbar_C:Finished_682B731640321DD823CD6494C4159628() end
function USharkHealthbar_C:Finished_F7551AA647DAF48570154090D77CDF45() end
function USharkHealthbar_C:Finished_A127D2FB4C7C84BA1D55C1946D2788EF() end
function USharkHealthbar_C:Finished_7D7B96F2451CC25DFA1915875AC1CD79() end
function USharkHealthbar_C:Construct() end
---@param CurrentHealth float
function USharkHealthbar_C:RefreshWidget(CurrentHealth) end
function USharkHealthbar_C:OnFailed() end
function USharkHealthbar_C:OnSuccess() end
---@param EntryPoint int32
function USharkHealthbar_C:ExecuteUbergraph_SharkHealthbar(EntryPoint) end


