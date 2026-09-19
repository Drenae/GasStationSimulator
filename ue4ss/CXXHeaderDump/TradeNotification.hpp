#ifndef UE4SS_SDK_TradeNotification_HPP
#define UE4SS_SDK_TradeNotification_HPP

class UTradeNotification_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* Show;                                                     // 0x0268 (size: 0x8)
    class UTextBlock* TextBlock;                                                      // 0x0270 (size: 0x8)

    void TradeFail();
    void TradeSuccess();
    void ExecuteUbergraph_TradeNotification(int32 EntryPoint);
}; // Size: 0x278

#endif
