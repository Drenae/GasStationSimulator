---@meta

---@class UMoney_Widget_WBP_C : UGSSInnerWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ConstructAnim UWidgetAnimation
---@field PlusMoneyAnim UWidgetAnimation
---@field Image_370 UImage
---@field Image_412 UImage
---@field Money_TXT UTextBlock
---@field PlusMinusText UTextBlock
---@field PlusMoney_TXT UTextBlock
---@field WBPHud_Money_Anim UWBPHud_Money_Anim_C
---@field SkipConstructAnimation boolean
local UMoney_Widget_WBP_C = {}

function UMoney_Widget_WBP_C:Construct() end
---@param CharacterMoney float
---@param Difference float
---@param YieldType EEconomyDetailedYieldType
function UMoney_Widget_WBP_C:MoneyUpdate(CharacterMoney, Difference, YieldType) end
---@param EntryPoint int32
function UMoney_Widget_WBP_C:ExecuteUbergraph_Money_Widget_WBP(EntryPoint) end


