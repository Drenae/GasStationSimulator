---@meta

---@class ULotteryPrize_WBP_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Prize_headline UTextBlock
---@field TimerText UTextBlock
---@field LotteryMachine ALotteryMachine_BP_C
local ULotteryPrize_WBP_C = {}

---@param GameLoaded boolean
function ULotteryPrize_WBP_C:UpdatePrizeStateAfterLoad(GameLoaded) end
function ULotteryPrize_WBP_C:InitializeMachine() end
function ULotteryPrize_WBP_C:SetPrizeText() end
function ULotteryPrize_WBP_C:ClearPrizeText() end
---@param EntryPoint int32
function ULotteryPrize_WBP_C:ExecuteUbergraph_LotteryPrize_WBP(EntryPoint) end


