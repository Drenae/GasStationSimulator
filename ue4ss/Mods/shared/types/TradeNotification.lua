---@meta

---@class UTradeNotification_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Show UWidgetAnimation
---@field TextBlock UTextBlock
local UTradeNotification_C = {}

function UTradeNotification_C:TradeFail() end
function UTradeNotification_C:TradeSuccess() end
---@param EntryPoint int32
function UTradeNotification_C:ExecuteUbergraph_TradeNotification(EntryPoint) end


