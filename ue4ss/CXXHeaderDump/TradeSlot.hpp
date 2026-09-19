#ifndef UE4SS_SDK_TradeSlot_HPP
#define UE4SS_SDK_TradeSlot_HPP

class UTradeSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* HoverButton;                                              // 0x0268 (size: 0x8)
    class UWidgetAnimation* MouseEnterAnim;                                           // 0x0270 (size: 0x8)
    class UWidgetAnimation* AddAnim;                                                  // 0x0278 (size: 0x8)
    class UButton* ActionButtonOnTable;                                               // 0x0280 (size: 0x8)
    class UAmount_button_C* Amount_button_minus;                                      // 0x0288 (size: 0x8)
    class UAmount_button_C* Amount_button_plus;                                       // 0x0290 (size: 0x8)
    class USlider* Amount_Slider;                                                     // 0x0298 (size: 0x8)
    class UOverlay* ContentOverlay;                                                   // 0x02A0 (size: 0x8)
    class UImage* Image;                                                              // 0x02A8 (size: 0x8)
    class UImage* Image_65;                                                           // 0x02B0 (size: 0x8)
    class UImage* Item_ICON;                                                          // 0x02B8 (size: 0x8)
    class UTextBlock* ItemName_TXT;                                                   // 0x02C0 (size: 0x8)
    class USpinBox* ItemValue_SpingBox;                                               // 0x02C8 (size: 0x8)
    class UOverlay* MainOverlay;                                                      // 0x02D0 (size: 0x8)
    class UProgressBar* ProgressBar_62;                                               // 0x02D8 (size: 0x8)
    class UTextBlock* TextBlock;                                                      // 0x02E0 (size: 0x8)
    class UVerticalBox* VerticalBox_select_amount;                                    // 0x02E8 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_Up_RightShoulder;                               // 0x02F0 (size: 0x8)
    bool IsEmpty;                                                                     // 0x02F8 (size: 0x1)
    bool IsPlayerItem;                                                                // 0x02F9 (size: 0x1)
    TSubclassOf<class AItem> Item;                                                    // 0x0300 (size: 0x8)
    int32 IndexThatMoved;                                                             // 0x0308 (size: 0x4)
    class UAirStripTrade_Test_C* ParenRef;                                            // 0x0310 (size: 0x8)
    float Trade Value;                                                                // 0x0318 (size: 0x4)
    int32 Max Ammount;                                                                // 0x031C (size: 0x4)
    FGeneratedItem GeneratedItem;                                                     // 0x0320 (size: 0x78)
    int32 CurrentAmount;                                                              // 0x0398 (size: 0x4)
    ETradingBoosts ItemTradingBoost;                                                  // 0x039C (size: 0x1)
    bool bIsTutorial;                                                                 // 0x039D (size: 0x1)
    bool bIsTequilaTutorialItem;                                                      // 0x039E (size: 0x1)
    FText ItemName;                                                                   // 0x03A0 (size: 0x18)
    TSoftObjectPtr<class UTexture2D> ItemIcon;                                        // 0x03B8 (size: 0x28)
    TSoftClassPtr<AItem> ItemClass;                                                   // 0x03E0 (size: 0x28)
    int32 Old Amount;                                                                 // 0x0408 (size: 0x4)

    void HintsVisibility(bool Visible);
    void UpdateMainWidget();
    float GetPercent_0();
    void Finished_5244035D417B0E4AD439EDA878793CE4();
    void BndEvt__TradeSlot_SpinBox_85_K2Node_ComponentBoundEvent_4_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void UpdateAfterAction(int32 IndexThatMovedIt, class UAirStripTrade_Test_C* Parent, bool IsPlayerItem, float TradeValue, int32 MaxAmmount, ETradingBoosts TradingBoost, FText ItemName, TSoftObjectPtr<class UTexture2D> ItemIcon, TSoftClassPtr<AItem> ItemClass);
    void BndEvt__TradeSlot_ActionButtonOnTable_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__TradeSlot_Amount_button_K2Node_ComponentBoundEvent_2_ClickAmountChange__DelegateSignature();
    void BndEvt__TradeSlot_Amount_button_1_K2Node_ComponentBoundEvent_1_ClickAmountChange__DelegateSignature();
    void BndEvt__TradeSlot_ActionButtonOnTable_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__TradeSlot_ActionButtonOnTable_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__TradeSlot_Amount_Slider_K2Node_ComponentBoundEvent_7_OnControllerCaptureEndEvent__DelegateSignature();
    void BndEvt__TradeSlot_Amount_Slider_K2Node_ComponentBoundEvent_8_OnMouseCaptureEndEvent__DelegateSignature();
    void BndEvt__TradeSlot_Amount_Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void GamePadClick();
    void GamePadHover(bool Hover);
    void GamePadClickAmount(bool Increase);
    void Construct();
    void Destruct();
    void CustomEvent_0();
    void ExecuteUbergraph_TradeSlot(int32 EntryPoint);
}; // Size: 0x40C

#endif
