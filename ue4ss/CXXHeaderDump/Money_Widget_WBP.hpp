#ifndef UE4SS_SDK_Money_Widget_WBP_HPP
#define UE4SS_SDK_Money_Widget_WBP_HPP

class UMoney_Widget_WBP_C : public UGSSInnerWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0288 (size: 0x8)
    class UWidgetAnimation* ConstructAnim;                                            // 0x0290 (size: 0x8)
    class UWidgetAnimation* PlusMoneyAnim;                                            // 0x0298 (size: 0x8)
    class UImage* Image_370;                                                          // 0x02A0 (size: 0x8)
    class UImage* Image_412;                                                          // 0x02A8 (size: 0x8)
    class UTextBlock* Money_TXT;                                                      // 0x02B0 (size: 0x8)
    class UTextBlock* PlusMinusText;                                                  // 0x02B8 (size: 0x8)
    class UTextBlock* PlusMoney_TXT;                                                  // 0x02C0 (size: 0x8)
    class UWBPHud_Money_Anim_C* WBPHud_Money_Anim;                                    // 0x02C8 (size: 0x8)
    bool SkipConstructAnimation;                                                      // 0x02D0 (size: 0x1)

    void Construct();
    void MoneyUpdate(const float CharacterMoney, const float Difference, EEconomyDetailedYieldType YieldType);
    void ExecuteUbergraph_Money_Widget_WBP(int32 EntryPoint);
}; // Size: 0x2D1

#endif
