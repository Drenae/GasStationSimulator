---@meta

---@class UTradeBoostTooltip_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Image_1 UImage
---@field Image_178 UImage
---@field Image_Icon UImage
---@field TextBlock_description UTextBlock
---@field TextBlock_Name UTextBlock
---@field TradeBoost ETradingBoosts
local UTradeBoostTooltip_C = {}

function UTradeBoostTooltip_C:Construct() end
---@param EntryPoint int32
function UTradeBoostTooltip_C:ExecuteUbergraph_TradeBoostTooltip(EntryPoint) end


