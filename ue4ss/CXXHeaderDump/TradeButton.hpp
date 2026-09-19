#ifndef UE4SS_SDK_TradeButton_HPP
#define UE4SS_SDK_TradeButton_HPP

class UTradeButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* ClickAnim;                                                // 0x0268 (size: 0x8)
    class UWidgetAnimation* HoverAnim;                                                // 0x0270 (size: 0x8)
    class UWidgetAnimation* PulseAnim;                                                // 0x0278 (size: 0x8)
    class UButton* Button_trade;                                                      // 0x0280 (size: 0x8)
    class UImage* Image;                                                              // 0x0288 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0290 (size: 0x8)
    class UImage* Image_16;                                                           // 0x0298 (size: 0x8)
    class UImage* Image_tut;                                                          // 0x02A0 (size: 0x8)
    FTradeButton_CClickTrade ClickTrade;                                              // 0x02A8 (size: 0x10)
    void ClickTrade();
    bool bIsTutorial;                                                                 // 0x02B8 (size: 0x1)
    bool bIsLastTutorial;                                                             // 0x02B9 (size: 0x1)

    void Construct();
    void BndEvt__TradeButton_Button_trade_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__TradeButton_Button_trade_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__TradeButton_Button_trade_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void GamePadClick();
    void GamePadHover(bool Hover);
    void ExecuteUbergraph_TradeButton(int32 EntryPoint);
    void ClickTrade__DelegateSignature();
}; // Size: 0x2BA

#endif
