---@meta

---@class UEconomyDebug_Line_WBP_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AmountBought UTextBlock
---@field AmountSold UTextBlock
---@field BuyValue UTextBlock
---@field Name UTextBlock
---@field PlusMinus UTextBlock
---@field SellValue UTextBlock
---@field NameText FText
---@field AmountBought FText
---@field BuyValue FText
---@field AmountSold FText
---@field SellValue FText
---@field AmountProductBought int32
---@field AmountProductSold int32
---@field MoneySpentBuying float
---@field MoneyEarnedSelling float
local UEconomyDebug_Line_WBP_C = {}

function UEconomyDebug_Line_WBP_C:Construct() end
---@param EntryPoint int32
function UEconomyDebug_Line_WBP_C:ExecuteUbergraph_EconomyDebug_Line_WBP(EntryPoint) end


