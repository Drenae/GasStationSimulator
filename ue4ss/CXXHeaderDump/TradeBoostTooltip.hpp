#ifndef UE4SS_SDK_TradeBoostTooltip_HPP
#define UE4SS_SDK_TradeBoostTooltip_HPP

class UTradeBoostTooltip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0268 (size: 0x8)
    class UImage* Image_178;                                                          // 0x0270 (size: 0x8)
    class UImage* Image_Icon;                                                         // 0x0278 (size: 0x8)
    class UTextBlock* TextBlock_description;                                          // 0x0280 (size: 0x8)
    class UTextBlock* TextBlock_Name;                                                 // 0x0288 (size: 0x8)
    ETradingBoosts TradeBoost;                                                        // 0x0290 (size: 0x1)

    void Construct();
    void ExecuteUbergraph_TradeBoostTooltip(int32 EntryPoint);
}; // Size: 0x291

#endif
