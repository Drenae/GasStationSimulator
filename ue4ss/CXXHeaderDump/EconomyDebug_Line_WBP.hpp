#ifndef UE4SS_SDK_EconomyDebug_Line_WBP_HPP
#define UE4SS_SDK_EconomyDebug_Line_WBP_HPP

class UEconomyDebug_Line_WBP_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* AmountBought;                                                   // 0x0268 (size: 0x8)
    class UTextBlock* AmountSold;                                                     // 0x0270 (size: 0x8)
    class UTextBlock* BuyValue;                                                       // 0x0278 (size: 0x8)
    class UTextBlock* Name;                                                           // 0x0280 (size: 0x8)
    class UTextBlock* PlusMinus;                                                      // 0x0288 (size: 0x8)
    class UTextBlock* SellValue;                                                      // 0x0290 (size: 0x8)
    FText NameText;                                                                   // 0x0298 (size: 0x18)
    FText AmountBought;                                                               // 0x02B0 (size: 0x18)
    FText BuyValue;                                                                   // 0x02C8 (size: 0x18)
    FText AmountSold;                                                                 // 0x02E0 (size: 0x18)
    FText SellValue;                                                                  // 0x02F8 (size: 0x18)
    int32 AmountProductBought;                                                        // 0x0310 (size: 0x4)
    int32 AmountProductSold;                                                          // 0x0314 (size: 0x4)
    float MoneySpentBuying;                                                           // 0x0318 (size: 0x4)
    float MoneyEarnedSelling;                                                         // 0x031C (size: 0x4)

    void Construct();
    void ExecuteUbergraph_EconomyDebug_Line_WBP(int32 EntryPoint);
}; // Size: 0x320

#endif
