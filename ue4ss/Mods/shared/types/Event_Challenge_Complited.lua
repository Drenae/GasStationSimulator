---@meta

---@class UEvent_Challenge_Complited_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field WaitingAnim UWidgetAnimation
---@field ConstructAnim UWidgetAnimation
---@field Description_TXT UTextBlock
---@field Image_1 UImage
---@field Image_347 UImage
---@field MoneyReward UOverlay
---@field PopularityReward UOverlay
---@field RewardMoneyAmount UTextBlock
---@field RewardTextPopularity UTextBlock
---@field TitleTXT UTextBlock
---@field IsChallenge boolean
---@field RewardAmountPopularity float
---@field RewardAmountMoney float
---@field IncludedMoney boolean
local UEvent_Challenge_Complited_C = {}

function UEvent_Challenge_Complited_C:Construct() end
---@param EntryPoint int32
function UEvent_Challenge_Complited_C:ExecuteUbergraph_Event_Challenge_Complited(EntryPoint) end


