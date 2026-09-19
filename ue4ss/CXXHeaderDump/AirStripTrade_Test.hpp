#ifndef UE4SS_SDK_AirStripTrade_Test_HPP
#define UE4SS_SDK_AirStripTrade_Test_HPP

class UAirStripTrade_Test_C : public UAirstripTradeWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UWidgetAnimation* TradeSuccessAnim;                                         // 0x0270 (size: 0x8)
    class UWidgetAnimation* TimeRunningOff;                                           // 0x0278 (size: 0x8)
    class UWidgetAnimation* NoCapacity;                                               // 0x0280 (size: 0x8)
    class UWidgetAnimation* ShowAndHideTequilaTip;                                    // 0x0288 (size: 0x8)
    class UWidgetAnimation* ShowTequilaTip;                                           // 0x0290 (size: 0x8)
    class UWidgetAnimation* CalmSkillUsed;                                            // 0x0298 (size: 0x8)
    class UWidgetAnimation* GratitudeSkillUsed;                                       // 0x02A0 (size: 0x8)
    class UWidgetAnimation* CogencySkillUsed;                                         // 0x02A8 (size: 0x8)
    class UWidgetAnimation* TimeSkillUsed;                                            // 0x02B0 (size: 0x8)
    class UWidgetAnimation* CogencyUsed_Anim;                                         // 0x02B8 (size: 0x8)
    class UWidgetAnimation* ImpatienceGrowAnim;                                       // 0x02C0 (size: 0x8)
    class UWidgetAnimation* TradeChanceChange;                                        // 0x02C8 (size: 0x8)
    class UWidgetAnimation* HoverCancel;                                              // 0x02D0 (size: 0x8)
    class UWidgetAnimation* HoverHold;                                                // 0x02D8 (size: 0x8)
    class UBorder* BorderSandstorm;                                                   // 0x02E0 (size: 0x8)
    class UButton* Button_Cancel;                                                     // 0x02E8 (size: 0x8)
    class UButton* button_hold;                                                       // 0x02F0 (size: 0x8)
    class UChangeTradeChanceArrow_C* ChangeTradeChanceArrow_C;                        // 0x02F8 (size: 0x8)
    class UChangeTradeChanceArrow_C* ChangeTradeChanceArrow_C_1;                      // 0x0300 (size: 0x8)
    class UOverlay* DenyCD_Overlay;                                                   // 0x0308 (size: 0x8)
    class UFlagTrade_C* FlagTrade_IMG;                                                // 0x0310 (size: 0x8)
    class UHorizontalBox* HorizontalBox_buttons;                                      // 0x0318 (size: 0x8)
    class UImage* Image;                                                              // 0x0320 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0328 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0330 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0338 (size: 0x8)
    class UImage* Image_4;                                                            // 0x0340 (size: 0x8)
    class UImage* Image_5;                                                            // 0x0348 (size: 0x8)
    class UImage* Image_6;                                                            // 0x0350 (size: 0x8)
    class UImage* Image_7;                                                            // 0x0358 (size: 0x8)
    class UImage* Image_8;                                                            // 0x0360 (size: 0x8)
    class UImage* Image_9;                                                            // 0x0368 (size: 0x8)
    class UImage* Image_10;                                                           // 0x0370 (size: 0x8)
    class UImage* Image_11;                                                           // 0x0378 (size: 0x8)
    class UImage* Image_15;                                                           // 0x0380 (size: 0x8)
    class UImage* Image_19;                                                           // 0x0388 (size: 0x8)
    class UImage* Image_64;                                                           // 0x0390 (size: 0x8)
    class UImage* Image_71;                                                           // 0x0398 (size: 0x8)
    class UImage* Image_74;                                                           // 0x03A0 (size: 0x8)
    class UImage* Image_75;                                                           // 0x03A8 (size: 0x8)
    class UImage* Image_89;                                                           // 0x03B0 (size: 0x8)
    class UImage* Image_129;                                                          // 0x03B8 (size: 0x8)
    class UImage* Image_133;                                                          // 0x03C0 (size: 0x8)
    class UImage* Image_143;                                                          // 0x03C8 (size: 0x8)
    class UImage* Image_158;                                                          // 0x03D0 (size: 0x8)
    class UImage* Image_162;                                                          // 0x03D8 (size: 0x8)
    class UImage* Image_170;                                                          // 0x03E0 (size: 0x8)
    class UImage* Image_171;                                                          // 0x03E8 (size: 0x8)
    class UImage* Image_287;                                                          // 0x03F0 (size: 0x8)
    class UImage* Image_arrow;                                                        // 0x03F8 (size: 0x8)
    class UImage* Image_blocker;                                                      // 0x0400 (size: 0x8)
    class UImage* Image_border;                                                       // 0x0408 (size: 0x8)
    class UImage* Image_calm_icon;                                                    // 0x0410 (size: 0x8)
    class UImage* Image_cogency;                                                      // 0x0418 (size: 0x8)
    class UImage* Image_cogency_icon;                                                 // 0x0420 (size: 0x8)
    class UImage* Image_glow;                                                         // 0x0428 (size: 0x8)
    class UImage* Image_gratitude_icon;                                               // 0x0430 (size: 0x8)
    class UImage* Image_high;                                                         // 0x0438 (size: 0x8)
    class UImage* Image_low;                                                          // 0x0440 (size: 0x8)
    class UImage* Image_medium;                                                       // 0x0448 (size: 0x8)
    class UImage* Image_table;                                                        // 0x0450 (size: 0x8)
    class UImage* Image_time_icon;                                                    // 0x0458 (size: 0x8)
    class UImage* Image_very_high;                                                    // 0x0460 (size: 0x8)
    class UImage* Image_very_low;                                                     // 0x0468 (size: 0x8)
    class UImpatienceMeter_C* ImpatienceMeter;                                        // 0x0470 (size: 0x8)
    class UNiagaraSystemWidget* NiagaraSystemWidget_74;                               // 0x0478 (size: 0x8)
    class UOverlay* Overlay_18;                                                       // 0x0480 (size: 0x8)
    class UOverlay* Overlay_28;                                                       // 0x0488 (size: 0x8)
    class UOverlay* Overlay_high;                                                     // 0x0490 (size: 0x8)
    class UOverlay* Overlay_low;                                                      // 0x0498 (size: 0x8)
    class UOverlay* Overlay_medium;                                                   // 0x04A0 (size: 0x8)
    class UOverlay* Overlay_pointer;                                                  // 0x04A8 (size: 0x8)
    class UCanvasPanel* Overlay_skills;                                               // 0x04B0 (size: 0x8)
    class UOverlay* Overlay_Tip;                                                      // 0x04B8 (size: 0x8)
    class UOverlay* Overlay_very_high;                                                // 0x04C0 (size: 0x8)
    class UOverlay* Overlay_very_low;                                                 // 0x04C8 (size: 0x8)
    class UTradeSlot_C* PilotSlot1;                                                   // 0x04D0 (size: 0x8)
    class UTradeSlot_C* PilotSlot2;                                                   // 0x04D8 (size: 0x8)
    class UTradeSlot_C* PilotSlot3;                                                   // 0x04E0 (size: 0x8)
    class UTradeSlot_C* PilotSlot4;                                                   // 0x04E8 (size: 0x8)
    class UTradeSlot_C* PilotSlot5;                                                   // 0x04F0 (size: 0x8)
    class UTradeSlot_C* PilotSlot6;                                                   // 0x04F8 (size: 0x8)
    class UWrapBox* PilotsProducts_Wrap;                                              // 0x0500 (size: 0x8)
    class UWrapBox* PilotTradeSlotWrap;                                               // 0x0508 (size: 0x8)
    class UTextBlock* PlainID_Txt;                                                    // 0x0510 (size: 0x8)
    class UWrapBox* PlayersProducts_Wrap;                                             // 0x0518 (size: 0x8)
    class UWrapBox* PlayerTradeSlotWrap;                                              // 0x0520 (size: 0x8)
    class UTradeSlot_C* PlayerTradingSlot1;                                           // 0x0528 (size: 0x8)
    class UTradeSlot_C* PlayerTradingSlot2;                                           // 0x0530 (size: 0x8)
    class UTradeSlot_C* PlayerTradingSlot3;                                           // 0x0538 (size: 0x8)
    class UTradeSlot_C* PlayerTradingSlot4;                                           // 0x0540 (size: 0x8)
    class UTradeSlot_C* PlayerTradingSlot5;                                           // 0x0548 (size: 0x8)
    class UTradeSlot_C* PlayerTradingSlot6;                                           // 0x0550 (size: 0x8)
    class USizeBox* SizeBox_1;                                                        // 0x0558 (size: 0x8)
    class UTextBlock* SkillCD_TXT;                                                    // 0x0560 (size: 0x8)
    class USpacer* Spacer_137;                                                        // 0x0568 (size: 0x8)
    class USpacer* Spacer_230;                                                        // 0x0570 (size: 0x8)
    class USpacer* Spacer_382;                                                        // 0x0578 (size: 0x8)
    class USpacer* Spacer_458;                                                        // 0x0580 (size: 0x8)
    class UTextBlock* TextBlock_11;                                                   // 0x0588 (size: 0x8)
    class UTextBlock* TextBlock_airstrip;                                             // 0x0590 (size: 0x8)
    class UTextBlock* TextBlock_tip;                                                  // 0x0598 (size: 0x8)
    class UTextBlock* TextBlock_warehouse;                                            // 0x05A0 (size: 0x8)
    class UTextBlock* TimeToDeparture_TXT;                                            // 0x05A8 (size: 0x8)
    class UTradeButton_C* TradeButton;                                                // 0x05B0 (size: 0x8)
    class UTradeNotification_C* TradeNotification;                                    // 0x05B8 (size: 0x8)
    class UTradeSkill_C* TradeSkill;                                                  // 0x05C0 (size: 0x8)
    class UTradeSkill_C* TradeSkill_1;                                                // 0x05C8 (size: 0x8)
    class UTradeSkill_C* TradeSkill_3;                                                // 0x05D0 (size: 0x8)
    class UTradeSkill_C* TradeSkill_calm;                                             // 0x05D8 (size: 0x8)
    class UOverlay* TutorialOverlay;                                                  // 0x05E0 (size: 0x8)
    class UVerticalBox* VerticalBox_4;                                                // 0x05E8 (size: 0x8)
    class UVerticalBox* VerticalBox_aistrip;                                          // 0x05F0 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_MoveLeft;                                       // 0x05F8 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_MoveRight;                                      // 0x0600 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_RightButton;                                    // 0x0608 (size: 0x8)
    TMap<FString, int32> ValuationMap;                                                // 0x0610 (size: 0x50)
    FString PreviousValue;                                                            // 0x0660 (size: 0x10)
    FString CurrentValue;                                                             // 0x0670 (size: 0x10)
    int32 PlayerItemsAmount;                                                          // 0x0680 (size: 0x4)
    FAirStripTrade_Test_CItemsLoaded ItemsLoaded;                                     // 0x0688 (size: 0x10)
    void ItemsLoaded();
    float CurrentChanceValue;                                                         // 0x0698 (size: 0x4)
    float LastChanceValue;                                                            // 0x069C (size: 0x4)
    bool AreBothProductsOnTable;                                                      // 0x06A0 (size: 0x1)
    bool bIsTradeChanceSetToDefault;                                                  // 0x06A1 (size: 0x1)
    bool Is Any Pilot Item;                                                           // 0x06A2 (size: 0x1)
    bool Is Any Player Item;                                                          // 0x06A3 (size: 0x1)
    bool bDoesPlayerHaveAnyItems;                                                     // 0x06A4 (size: 0x1)
    float TutorialTradeValue;                                                         // 0x06A8 (size: 0x4)
    bool IsGraditudeItemGot;                                                          // 0x06AC (size: 0x1)
    int32 GamePadCurrentButton;                                                       // 0x06B0 (size: 0x4)
    int32 GamePadCurrentSegment;                                                      // 0x06B4 (size: 0x4)
    int32 GamePadCurrentElement;                                                      // 0x06B8 (size: 0x4)
    int32 GamePadCurrentElementItems;                                                 // 0x06BC (size: 0x4)
    bool GamePadFindElement;                                                          // 0x06C0 (size: 0x1)
    int32 GamePadCurrentSkill;                                                        // 0x06C4 (size: 0x4)
    class UWrapBox* GamePadWrapToClick;                                               // 0x06C8 (size: 0x8)
    int32 GamePadSegmentBeforeCards;                                                  // 0x06D0 (size: 0x4)
    bool IsGamepadNavigationLimited;                                                  // 0x06D4 (size: 0x1)
    TMap<FKey, bool> GamepadUnlockedKeys;                                             // 0x06D8 (size: 0x50)
    bool IsBindedNextTutorial;                                                        // 0x0728 (size: 0x1)
    bool BlockContinousInput;                                                         // 0x0729 (size: 0x1)
    TMap<FKey, bool> ContinousInputKeyLocks;                                          // 0x0730 (size: 0x50)

    void SequenceEvent__ENTRYPOINTAirStripTrade_Test_1(class UNiagaraSystemWidget* NiagaraSystemWidget_74);
    void SequenceEvent__ENTRYPOINTAirStripTrade_Test_0();
    void ChangeLockStatusOfContinousInput(FKey Key, bool IsKeyUnlocked);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void BlockInputTrade();
    void BlockPlayerProductInput();
    void BlockInputTequila();
    void FindFirstPlayerItem();
    void FindfFirstPilotItem();
    void GamepadHandleSelection();
    void MoveThePilotItems_Right();
    void MoveThePlayerItems_Right();
    void GamepadNavigateRight();
    void GamepadNavigateLeft();
    void MoveThePilotItems_Left();
    void MoveThePlayersItem_Left();
    void GamepadNavigationUp();
    void GamepadNavigationDown();
    void HooverFirstPlayerItem();
    void UnlockGamepadNavigation();
    void IsNavigationAllowed(const FKeyEvent& Input, bool& IsAllowed);
    void LimitGamepadNavigation(const TArray<FKey>& UnlockedKeys);
    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void HintsVisibility(bool Visible);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void GamePadCloseTutorial(bool& ThereWasTutorial);
    void CalculateSpaceLeft();
    void SetGratitudeSkillToUsed();
    void SetCalmSkillToUsed();
    void SetCogencySkillToUsed();
    void CheckCapacity(bool& HaveCappacity);
    void CheckUsedSkills();
    void SetTimeSkillToUsed();
    void CreateTradeItem(FGeneratedItem GeneratedItem, bool PlayerItem, int32 ItemIndex, int32 PlayerItemsAmountTotal);
    void ShowTequilaAmountTip();
    void Tut_Propose trade again();
    void Tut_Deny & Hold buttons();
    void Tut_Increase the quantity();
    void Tut_The Power of Calm();
    void Tut_Skills();
    void Tut_Impatience indicator();
    void Tut_Propose trade();
    void Tut_Trade Chances();
    void Tut_Player products();
    void Tut_Quantity selection();
    void Tut_Trade space();
    void Tut_Tequila();
    void Tut_Pilot’s products();
    void Tut_Time counter();
    void Tut_TRADING();
    void Add Tut to Overlay(class UWidget* Content, class UWidget* Widget);
    void RefreshImpatienceMeter();
    void Calm Skill Impatience Meter();
    void SetTradeChanceToDefault();
    void CheckIfTradeIsActive(bool& AreBothProductsOnTable, bool& IsAnyPilotItem, bool& IsAnyPlayerItem);
    void Finished_54253FCF4F91FFBBDBC8D2929F3B235A();
    void Finished_0991331F4A29FC3D1B0B5A86BB84CCBA();
    void Finished_520F8BF14666D701BB615D9939E9A085();
    void NiagaraSystemWidget_74_Event_0(class UNiagaraSystemWidget* NiagaraSystemWidget_74, bool Reset);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__AirStripTrade_Test_Button_hold_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__AirStripTrade_Test_Button_hold_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__AirStripTrade_Test_Button_cancel_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__AirStripTrade_Test_Button_cancel_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__AirStripTrade_Test_Button_hold_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
    void OnMoveToTable(int32 CardIndex, bool IsPlayerItem, float TradeValue, int32 MaxAmount, ETradingBoosts Boost, FText ItemName, TSoftObjectPtr<class UTexture2D> ItemIcom, TSoftClassPtr<AItem> ItemClass);
    void OnMoveFromTable(int32 CardIndex, bool IsPlayerItem);
    void Destruct();
    void OnTakeOff(ERunway Runway);
    void OnTimeToTakeOffUpdated(const int32 TimeUpdated);
    void UpdateChancesTier();
    void BndEvt__AirStripTrade_Test_TradeButton_K2Node_ComponentBoundEvent_0_ClickTrade__DelegateSignature();
    void UpdateVizual();
    void OnGraditudeItemGot_Event_0(const FGeneratedLootInfo& GraditudeItem);
    void OnTradeAccepted(bool bIsTradeAccepted, float AddedImpatience, ENPCGender PilotGender, ECountryOfOrigin CountryOfOrigin);
    void BndEvt__AirStripTrade_Test_Button_cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void CustomEvent_0();
    void SandstormStarted();
    void SandstormFinished();
    void GamePadClickHold();
    void GamePadClickCancel();
    void GamePadHoverHold(bool Hover);
    void GamePadHoverCancel(bool Hover);
    void GamePadHoverTrade(bool Hover);
    void GamePadNavigateButtons(bool Hover, int32 Index);
    void GamePadEnterTradeButton();
    void CustomEvent();
    void ExecuteUbergraph_AirStripTrade_Test(int32 EntryPoint);
    void ItemsLoaded__DelegateSignature();
}; // Size: 0x780

#endif
