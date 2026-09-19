#ifndef UE4SS_SDK_Lottery_WBP_HPP
#define UE4SS_SDK_Lottery_WBP_HPP

class ULottery_WBP_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Base_Popularity3;                                                   // 0x0268 (size: 0x8)
    class UImage* BasePopularity;                                                     // 0x0270 (size: 0x8)
    class UImage* BasePopularity_1;                                                   // 0x0278 (size: 0x8)
    class UImage* BasePopularity_2;                                                   // 0x0280 (size: 0x8)
    class UImage* BG_Image;                                                           // 0x0288 (size: 0x8)
    class UButton* CancelButton;                                                      // 0x0290 (size: 0x8)
    class UEditableTextBox* Chances;                                                  // 0x0298 (size: 0x8)
    class UTextBlock* CurrentLotteryPrize;                                            // 0x02A0 (size: 0x8)
    class UEditableTextBox* Earnings;                                                 // 0x02A8 (size: 0x8)
    class UButton* EndButton;                                                         // 0x02B0 (size: 0x8)
    class UVerticalBox* ExistingLottery;                                              // 0x02B8 (size: 0x8)
    class UVerticalBox* ExitLottery;                                                  // 0x02C0 (size: 0x8)
    class UInvalidationBox* InvalidationBox_0;                                        // 0x02C8 (size: 0x8)
    class UButton* LeftButton;                                                        // 0x02D0 (size: 0x8)
    class UTextBlock* Lost_plus_minus1;                                               // 0x02D8 (size: 0x8)
    class UImage* MinusImage;                                                         // 0x02E0 (size: 0x8)
    class UTextBlock* MoneyLost;                                                      // 0x02E8 (size: 0x8)
    class UButton* NoButton;                                                          // 0x02F0 (size: 0x8)
    class UTextBlock* Plus_minusPopularity;                                           // 0x02F8 (size: 0x8)
    class UImage* PlusImage;                                                          // 0x0300 (size: 0x8)
    class UTextBlock* PlusMinusLottery3;                                              // 0x0308 (size: 0x8)
    class UTextBlock* Popularity_Headline1;                                           // 0x0310 (size: 0x8)
    class UTextBlock* Popularity_plus_minus_2;                                        // 0x0318 (size: 0x8)
    class UEditableTextBox* PopularityAmount;                                         // 0x0320 (size: 0x8)
    class UTextBlock* PopularityAmount2;                                              // 0x0328 (size: 0x8)
    class UTextBlock* PopularityGained_Amount;                                        // 0x0330 (size: 0x8)
    class UTextBlock* PopularityHeadline2;                                            // 0x0338 (size: 0x8)
    class UTextBlock* PopularityHeadline3;                                            // 0x0340 (size: 0x8)
    class UTextBlock* PopularityLost_Amount;                                          // 0x0348 (size: 0x8)
    class UTextBlock* PopularityLost_Headline;                                        // 0x0350 (size: 0x8)
    class UEditableTextBox* Price;                                                    // 0x0358 (size: 0x8)
    class UEditableTextBox* Prize;                                                    // 0x0360 (size: 0x8)
    class UButton* RightButton;                                                       // 0x0368 (size: 0x8)
    class UButton* StartButton;                                                       // 0x0370 (size: 0x8)
    class UVerticalBox* StartLottery;                                                 // 0x0378 (size: 0x8)
    class UVerticalBox* SummaryLottery;                                               // 0x0380 (size: 0x8)
    class UTextBlock* SummaryPrize;                                                   // 0x0388 (size: 0x8)
    class UTextBlock* SummaryRevenue;                                                 // 0x0390 (size: 0x8)
    class UTextBlock* SummaryTickets;                                                 // 0x0398 (size: 0x8)
    class UTextBlock* TicketCost_Text;                                                // 0x03A0 (size: 0x8)
    class UHorizontalBox* TidalHorizontal2;                                           // 0x03A8 (size: 0x8)
    class UHorizontalBox* TidalHorizontal3;                                           // 0x03B0 (size: 0x8)
    class UHorizontalBox* TidalPopularity1;                                           // 0x03B8 (size: 0x8)
    class UHorizontalBox* TidalPopularity2;                                           // 0x03C0 (size: 0x8)
    class UTextBlock* TimerText;                                                      // 0x03C8 (size: 0x8)
    class UTextBlock* Title;                                                          // 0x03D0 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_0;                                          // 0x03D8 (size: 0x8)
    class UTextBlock* WinnerName;                                                     // 0x03E0 (size: 0x8)
    class UTextBlock* WinningChances_Text;                                            // 0x03E8 (size: 0x8)
    class UButton* YesButton;                                                         // 0x03F0 (size: 0x8)
    class ALotteryMachine* LotteryMachine;                                            // 0x03F8 (size: 0x8)
    int32 CurrentParametersIndex;                                                     // 0x0400 (size: 0x4)
    TArray<FText> RandomName;                                                         // 0x0408 (size: 0x10)

    void UpdateSummaryValue();
    void UpdateTime();
    void UpdateMachineStateAfterLoad(bool GameLoaded);
    void UpdateWinState();
    void UpdateStartButton();
    void UpdateEarnings();
    void ChangeLotteryParameters(int32 Index);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void InitializeMachine();
    void BndEvt__Lottery_WBP_LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Lottery_WBP_RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Lottery_WBP_StartButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Lottery_WBP_CancelButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Lottery_WBP_YesButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Lottery_WBP_NoButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Lottery_WBP_EndButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void OnMoneyAmountChanged(const float CharacterMoney, const float Difference, EEconomyDetailedYieldType YieldType);
    void Construct();
    void ExecuteUbergraph_Lottery_WBP(int32 EntryPoint);
}; // Size: 0x418

#endif
