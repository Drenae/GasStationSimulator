---@meta

---@class UTradeButton_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ClickAnim UWidgetAnimation
---@field HoverAnim UWidgetAnimation
---@field PulseAnim UWidgetAnimation
---@field Button_trade UButton
---@field Image UImage
---@field Image_1 UImage
---@field Image_16 UImage
---@field Image_tut UImage
---@field ClickTrade FTradeButton_CClickTrade
---@field bIsTutorial boolean
---@field bIsLastTutorial boolean
local UTradeButton_C = {}

function UTradeButton_C:Construct() end
function UTradeButton_C:BndEvt__TradeButton_Button_trade_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UTradeButton_C:BndEvt__TradeButton_Button_trade_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() end
function UTradeButton_C:BndEvt__TradeButton_Button_trade_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() end
function UTradeButton_C:GamePadClick() end
---@param Hover boolean
function UTradeButton_C:GamePadHover(Hover) end
---@param EntryPoint int32
function UTradeButton_C:ExecuteUbergraph_TradeButton(EntryPoint) end
function UTradeButton_C:ClickTrade__DelegateSignature() end


