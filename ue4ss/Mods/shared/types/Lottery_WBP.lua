---@meta

---@class ULottery_WBP_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Base_Popularity3 UImage
---@field BasePopularity UImage
---@field BasePopularity_1 UImage
---@field BasePopularity_2 UImage
---@field BG_Image UImage
---@field CancelButton UButton
---@field Chances UEditableTextBox
---@field CurrentLotteryPrize UTextBlock
---@field Earnings UEditableTextBox
---@field EndButton UButton
---@field ExistingLottery UVerticalBox
---@field ExitLottery UVerticalBox
---@field InvalidationBox_0 UInvalidationBox
---@field LeftButton UButton
---@field Lost_plus_minus1 UTextBlock
---@field MinusImage UImage
---@field MoneyLost UTextBlock
---@field NoButton UButton
---@field Plus_minusPopularity UTextBlock
---@field PlusImage UImage
---@field PlusMinusLottery3 UTextBlock
---@field Popularity_Headline1 UTextBlock
---@field Popularity_plus_minus_2 UTextBlock
---@field PopularityAmount UEditableTextBox
---@field PopularityAmount2 UTextBlock
---@field PopularityGained_Amount UTextBlock
---@field PopularityHeadline2 UTextBlock
---@field PopularityHeadline3 UTextBlock
---@field PopularityLost_Amount UTextBlock
---@field PopularityLost_Headline UTextBlock
---@field Price UEditableTextBox
---@field Prize UEditableTextBox
---@field RightButton UButton
---@field StartButton UButton
---@field StartLottery UVerticalBox
---@field SummaryLottery UVerticalBox
---@field SummaryPrize UTextBlock
---@field SummaryRevenue UTextBlock
---@field SummaryTickets UTextBlock
---@field TicketCost_Text UTextBlock
---@field TidalHorizontal2 UHorizontalBox
---@field TidalHorizontal3 UHorizontalBox
---@field TidalPopularity1 UHorizontalBox
---@field TidalPopularity2 UHorizontalBox
---@field TimerText UTextBlock
---@field Title UTextBlock
---@field WidgetSwitcher_0 UWidgetSwitcher
---@field WinnerName UTextBlock
---@field WinningChances_Text UTextBlock
---@field YesButton UButton
---@field LotteryMachine ALotteryMachine
---@field CurrentParametersIndex int32
---@field RandomName TArray<FText>
local ULottery_WBP_C = {}

function ULottery_WBP_C:UpdateSummaryValue() end
function ULottery_WBP_C:UpdateTime() end
---@param GameLoaded boolean
function ULottery_WBP_C:UpdateMachineStateAfterLoad(GameLoaded) end
function ULottery_WBP_C:UpdateWinState() end
function ULottery_WBP_C:UpdateStartButton() end
function ULottery_WBP_C:UpdateEarnings() end
---@param Index int32
function ULottery_WBP_C:ChangeLotteryParameters(Index) end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function ULottery_WBP_C:Tick(MyGeometry, InDeltaTime) end
function ULottery_WBP_C:InitializeMachine() end
function ULottery_WBP_C:BndEvt__Lottery_WBP_LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function ULottery_WBP_C:BndEvt__Lottery_WBP_RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() end
function ULottery_WBP_C:BndEvt__Lottery_WBP_StartButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature() end
function ULottery_WBP_C:BndEvt__Lottery_WBP_CancelButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature() end
function ULottery_WBP_C:BndEvt__Lottery_WBP_YesButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature() end
function ULottery_WBP_C:BndEvt__Lottery_WBP_NoButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature() end
function ULottery_WBP_C:BndEvt__Lottery_WBP_EndButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature() end
---@param CharacterMoney float
---@param Difference float
---@param YieldType EEconomyDetailedYieldType
function ULottery_WBP_C:OnMoneyAmountChanged(CharacterMoney, Difference, YieldType) end
function ULottery_WBP_C:Construct() end
---@param EntryPoint int32
function ULottery_WBP_C:ExecuteUbergraph_Lottery_WBP(EntryPoint) end


