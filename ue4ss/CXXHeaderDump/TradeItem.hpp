#ifndef UE4SS_SDK_TradeItem_HPP
#define UE4SS_SDK_TradeItem_HPP

class UTradeItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* NoItemsAlert;                                             // 0x0268 (size: 0x8)
    class UWidgetAnimation* TutorialAnim;                                             // 0x0270 (size: 0x8)
    class UWidgetAnimation* LostDelivery;                                             // 0x0278 (size: 0x8)
    class UWidgetAnimation* StealAnim;                                                // 0x0280 (size: 0x8)
    class UWidgetAnimation* ClickAnimPilots;                                          // 0x0288 (size: 0x8)
    class UWidgetAnimation* ClickAnimPlayers;                                         // 0x0290 (size: 0x8)
    class UWidgetAnimation* Hover;                                                    // 0x0298 (size: 0x8)
    class UButton* ActionButton;                                                      // 0x02A0 (size: 0x8)
    class UImage* Image;                                                              // 0x02A8 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02B0 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02B8 (size: 0x8)
    class UImage* Image_2;                                                            // 0x02C0 (size: 0x8)
    class UImage* Image_242;                                                          // 0x02C8 (size: 0x8)
    class UImage* Image_arrow;                                                        // 0x02D0 (size: 0x8)
    class UImage* Image_blocker;                                                      // 0x02D8 (size: 0x8)
    class UImage* Image_delivery_lost;                                                // 0x02E0 (size: 0x8)
    class UImage* Image_hot_suff;                                                     // 0x02E8 (size: 0x8)
    class UImage* Image_Roundabout;                                                   // 0x02F0 (size: 0x8)
    class UImage* Image_steal;                                                        // 0x02F8 (size: 0x8)
    class UTextBlock* ItemAmount_TXT;                                                 // 0x0300 (size: 0x8)
    class UImage* ItemIcon_IMG;                                                       // 0x0308 (size: 0x8)
    class UTextBlock* ItemName_TXT;                                                   // 0x0310 (size: 0x8)
    class UOverlay* Overlay_1;                                                        // 0x0318 (size: 0x8)
    class UOverlay* Overlay_hot_stuff;                                                // 0x0320 (size: 0x8)
    class UOverlay* Overlay_Steal;                                                    // 0x0328 (size: 0x8)
    class UTextBlock* TextBlock_alert;                                                // 0x0330 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_Up_RightShoulder;                               // 0x0338 (size: 0x8)
    FTradeItem_CClickAdd ClickAdd;                                                    // 0x0340 (size: 0x10)
    void ClickAdd();
    bool IsPlayerItem;                                                                // 0x0350 (size: 0x1)
    ETradingBoosts TradeBoost;                                                        // 0x0351 (size: 0x1)
    int32 Index;                                                                      // 0x0354 (size: 0x4)
    bool IsMovedToTable;                                                              // 0x0358 (size: 0x1)
    int32 CurrentPickedValue;                                                         // 0x035C (size: 0x4)
    int32 MaxAmount;                                                                  // 0x0360 (size: 0x4)
    float TradeValue;                                                                 // 0x0364 (size: 0x4)
    class UAirStripTrade_Test_C* ParentREF;                                           // 0x0368 (size: 0x8)
    bool bIsTutorial;                                                                 // 0x0370 (size: 0x1)
    FText ItemName;                                                                   // 0x0378 (size: 0x18)
    TSoftObjectPtr<class UTexture2D> ItemIcon;                                        // 0x0390 (size: 0x28)
    TSoftClassPtr<AItem> ItemClass;                                                   // 0x03B8 (size: 0x28)

    class UWidget* GetToolTipWidget_0();
    void Finished_A66A9E7444CDB2973E04749CB96C5776();
    void Finished_C235ACBF4A402ECE6896AAB3F2C9EB08();
    void BndEvt__TradeItem_Button_57_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__TradeItem_Button_57_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__TradeItem_Button_57_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void GamePadHover(bool Hover);
    void GamePadClick();
    void ExecuteUbergraph_TradeItem(int32 EntryPoint);
    void ClickAdd__DelegateSignature();
}; // Size: 0x3E0

#endif
