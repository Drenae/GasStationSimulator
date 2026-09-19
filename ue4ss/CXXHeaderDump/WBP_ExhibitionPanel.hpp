#ifndef UE4SS_SDK_WBP_ExhibitionPanel_HPP
#define UE4SS_SDK_WBP_ExhibitionPanel_HPP

class UWBP_ExhibitionPanel_C : public UExhibitionSpotWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C8 (size: 0x8)
    class UWidgetAnimation* UpDetails;                                                // 0x02D0 (size: 0x8)
    class UWidgetAnimation* OnDetailsBack;                                            // 0x02D8 (size: 0x8)
    class UWidgetAnimation* OnDetailsClicked;                                         // 0x02E0 (size: 0x8)
    class UWidgetAnimation* FadeOut;                                                  // 0x02E8 (size: 0x8)
    class UWidgetAnimation* FadeIn;                                                   // 0x02F0 (size: 0x8)
    class UWidgetAnimation* OnHoverExit;                                              // 0x02F8 (size: 0x8)
    class UWidgetAnimation* OnHoverLeftButton;                                        // 0x0300 (size: 0x8)
    class UWidgetAnimation* OnHoverRightButton;                                       // 0x0308 (size: 0x8)
    class UWidgetAnimation* OnHoverBack;                                              // 0x0310 (size: 0x8)
    class UWidgetAnimation* OnHover;                                                  // 0x0318 (size: 0x8)
    class UOverlay* ActiveSale;                                                       // 0x0320 (size: 0x8)
    class UImage* ArrowExit_ICO_1;                                                    // 0x0328 (size: 0x8)
    class UGSSButton* BackButton;                                                     // 0x0330 (size: 0x8)
    class UTextBlock* CarName_Text;                                                   // 0x0338 (size: 0x8)
    class UTextBlock* CarPrice_TXT;                                                   // 0x0340 (size: 0x8)
    class UHorizontalBox* ChangeCarsView_Horizostal;                                  // 0x0348 (size: 0x8)
    class UButton* ConfirmSellButton;                                                 // 0x0350 (size: 0x8)
    class UButton* ConfirmSoldButton;                                                 // 0x0358 (size: 0x8)
    class UOverlay* ConfirmSoldOverlay;                                               // 0x0360 (size: 0x8)
    class UButton* DeleteSale_Button;                                                 // 0x0368 (size: 0x8)
    class UOverlay* DeleteSaleOverlay;                                                // 0x0370 (size: 0x8)
    class UTextBlock* Details_text;                                                   // 0x0378 (size: 0x8)
    class UGSSButton* DetailsButton;                                                  // 0x0380 (size: 0x8)
    class UImage* DetailsIcon;                                                        // 0x0388 (size: 0x8)
    class UTextBlock* Exit_TXT;                                                       // 0x0390 (size: 0x8)
    class UImage* Fade;                                                               // 0x0398 (size: 0x8)
    class UHorizontalBox* Fee_Horizontal;                                             // 0x03A0 (size: 0x8)
    class UTextBlock* FeeInfo_TXT;                                                    // 0x03A8 (size: 0x8)
    class UTextBlock* FinalPrice_TXT;                                                 // 0x03B0 (size: 0x8)
    class UTextBlock* FinalPrice_TXT_1;                                               // 0x03B8 (size: 0x8)
    class UImage* Image_2;                                                            // 0x03C0 (size: 0x8)
    class UImage* Image_3;                                                            // 0x03C8 (size: 0x8)
    class UImage* Image_4;                                                            // 0x03D0 (size: 0x8)
    class UImage* Image_6;                                                            // 0x03D8 (size: 0x8)
    class UImage* Image_47;                                                           // 0x03E0 (size: 0x8)
    class UImage* Image_55;                                                           // 0x03E8 (size: 0x8)
    class UImage* Image_249;                                                          // 0x03F0 (size: 0x8)
    class UImage* Image_292;                                                          // 0x03F8 (size: 0x8)
    class UVerticalBox* Interest_Vertical;                                            // 0x0400 (size: 0x8)
    class UVerticalBox* Interest_Vertical_1;                                          // 0x0408 (size: 0x8)
    class UTextBlock* InterestValue_percent;                                          // 0x0410 (size: 0x8)
    class UTextBlock* InterestValue_percent_2;                                        // 0x0418 (size: 0x8)
    class UTextBlock* InterestValue_TXT;                                              // 0x0420 (size: 0x8)
    class UTextBlock* InterestValue_TXT_1;                                            // 0x0428 (size: 0x8)
    class UButton* LeftButton;                                                        // 0x0430 (size: 0x8)
    class UVerticalBox* Main2VerticalBox;                                             // 0x0438 (size: 0x8)
    class UVerticalBox* MainVertical;                                                 // 0x0440 (size: 0x8)
    class UMiniGames_Tutorial_C* MiniGames_Tutorial_Fame;                             // 0x0448 (size: 0x8)
    class USlider* Price_Slider;                                                      // 0x0450 (size: 0x8)
    class UButton* Reset_Button;                                                      // 0x0458 (size: 0x8)
    class UButton* RightButton;                                                       // 0x0460 (size: 0x8)
    class UOverlay* Sale_Overlay;                                                     // 0x0468 (size: 0x8)
    class UTextBlock* SellPriceValue_TXT;                                             // 0x0470 (size: 0x8)
    class UTextBlock* TextBlock_466;                                                  // 0x0478 (size: 0x8)
    class UHorizontalBox* TimeLeft_Horizontal;                                        // 0x0480 (size: 0x8)
    class UVerticalBox* TopInfor_Vertical;                                            // 0x0488 (size: 0x8)
    class UOverlay* Tutorials_holder;                                                 // 0x0490 (size: 0x8)
    class UTextBlock* ViewersCount_Text;                                              // 0x0498 (size: 0x8)
    class UWBP_CarWreckTooltip_C* WBP_CarWreckTooltip;                                // 0x04A0 (size: 0x8)
    class UWBP_CarWreckTooltip_C* WBP_CarWreckTooltip_1;                              // 0x04A8 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_LeftTrigger;                                    // 0x04B0 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_RightTrigger;                                   // 0x04B8 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_Up_ButtonBottom;                                // 0x04C0 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_Up_ButtonBottom_1;                              // 0x04C8 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_Up_ButtonLeft;                                  // 0x04D0 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_Up_ButtonLeft_1;                                // 0x04D8 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_Up_ButtonLeft_2;                                // 0x04E0 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_Up_ButtonLeft_3;                                // 0x04E8 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_Up_ButtonTop;                                   // 0x04F0 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_Up_LeftShoulder;                                // 0x04F8 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_Up_RightShoulder;                               // 0x0500 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_0;                                          // 0x0508 (size: 0x8)
    class AJunkyardCarWreckCustomizable* CurrentCar;                                  // 0x0510 (size: 0x8)
    float CurrentCarSellPrice;                                                        // 0x0518 (size: 0x4)
    class AExhibitionSpotSlot* CurrentExhibitionSpotSlot;                             // 0x0520 (size: 0x8)
    bool bTutorialFInished;                                                           // 0x0528 (size: 0x1)
    bool bIsExpanded;                                                                 // 0x0529 (size: 0x1)
    bool bTutorial6;                                                                  // 0x052A (size: 0x1)
    bool bSliderValueChanged;                                                         // 0x052B (size: 0x1)
    int32 TutorialIndex;                                                              // 0x052C (size: 0x4)
    int32 CurrentAmount;                                                              // 0x0530 (size: 0x4)
    int32 Old Amount;                                                                 // 0x0534 (size: 0x4)
    int32 Max Ammount;                                                                // 0x0538 (size: 0x4)
    int32 SaleFee;                                                                    // 0x053C (size: 0x4)
    float Slider Value;                                                               // 0x0540 (size: 0x4)
    bool IsGamepadNavigationLimited;                                                  // 0x0544 (size: 0x1)
    TMap<FKey, bool> GamepadUnlockedKeys;                                             // 0x0548 (size: 0x50)
    bool IsBindedNextTutorial;                                                        // 0x0598 (size: 0x1)
    bool IsLeftHold;                                                                  // 0x0599 (size: 0x1)
    bool IsRightHolded;                                                               // 0x059A (size: 0x1)
    float InputMultiplier;                                                            // 0x059C (size: 0x4)

    FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void IsNavigationAllowed(const FKeyEvent& Input, bool& IsAllowed);
    void UnlockGamepadNavigation();
    void LimitGamepadNavigation(const TArray<FKey>& UnlockedKeys);
    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void HintsVisibility(bool Visible);
    void GamePadChangeSliderValue(bool Increase);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void GetUncleTax(float& ReturnValue1);
    void Add Tut to Overlay(class UWidget* Content, class UWidget* Widget);
    void TutorialEnd();
    void Tutorial6();
    void Tutorial5_1();
    void Tutorial5();
    void Tutorial4(float Value);
    void Tutorial3();
    void Tutorial2();
    void SetDefaultValues();
    void UpdateActiveSale();
    void SetPopupSettingsWidget();
    void Finished_CA7844E04EB141459E39BB87D7A47258();
    void Finished_A0BAC7ED4C8A6E07413D0FA1E77A539E();
    void Finished_8867CFF5427EF1F6E272F68237936AF5();
    void Construct();
    void BndEvt__ExhibitionPanel_ExhibitionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__WBP_ExhibitionPanel_Price_Slider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void SetCarPrice(class AJunkyardCarWreckCustomizable* InCarWreck);
    void HideSaleSettingsWindow();
    void BndEvt__WBP_ExhibitionPanel_ConfirmSellButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__WBP_ExhibitionPanel_LeftButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_ExhibitionPanel_LeftButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_ExhibitionPanel_RightButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_ExhibitionPanel_RightButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_ExhibitionPanel_BackButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_ExhibitionPanel_BackButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_ExhibitionPanel_Reset_Button_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_ExhibitionPanel_Reset_Button_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature();
    void ShowHideCarCloseView(bool bShow, class AJunkyardCarWreckCustomizable* PickedCar);
    void BndEvt__WBP_ExhibitionPanel_RightButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__WBP_ExhibitionPanel_LeftButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__WBP_ExhibitionPanel_BackButton_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
    void OnGameTimeUpdated(const FTimeStruct UpdatedTime);
    void OnSaleFinished(const FSaleSlot& SaleSlot, const bool bCarSold);
    void BndEvt__WBP_ExhibitionPanel_ConfirmSoldButton_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature();
    void SetActiveSaleBinding();
    void BndEvt__WBP_ExhibitionPanel_Reset_Button_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__WBP_ExhibitionPanel_DeleteSale_Button_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature();
    void CustomEscape();
    void BndEvt__WBP_ExhibitionPanel_DetailsButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__WBP_ExhibitionPanel_Price_Slider_K2Node_ComponentBoundEvent_16_OnMouseCaptureEndEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void GamePadDeleteSale();
    void GamePadConfirmSale();
    void GamePadClickDetails();
    void GamePadClickArrowButton(bool Left);
    void GamePadReset();
    void GamePadConfirmSold();
    void GamePadCustomValueChanged(float Value);
    void CustomEvent_0();
    void Destruct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_ExhibitionPanel(int32 EntryPoint);
}; // Size: 0x5A0

#endif
