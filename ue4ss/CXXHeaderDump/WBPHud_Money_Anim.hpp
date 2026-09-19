#ifndef UE4SS_SDK_WBPHud_Money_Anim_HPP
#define UE4SS_SDK_WBPHud_Money_Anim_HPP

class UWBPHud_Money_Anim_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* money_plus_hud_anim;                                      // 0x0268 (size: 0x8)
    class UWidgetAnimation* money_minus_hud_anim;                                     // 0x0270 (size: 0x8)
    class UImage* EqBG_Image;                                                         // 0x0278 (size: 0x8)
    class UImage* EqIcon;                                                             // 0x0280 (size: 0x8)
    class UImage* Image_glow;                                                         // 0x0288 (size: 0x8)
    class UTextBlock* MoneyAmmount;                                                   // 0x0290 (size: 0x8)
    class UTexture2D* IconToAssign;                                                   // 0x0298 (size: 0x8)
    bool UseCustomImageSize;                                                          // 0x02A0 (size: 0x1)
    float BgImageSize;                                                                // 0x02A4 (size: 0x4)
    float IconImageSize;                                                              // 0x02A8 (size: 0x4)
    FVector2D GlowPosition;                                                           // 0x02AC (size: 0x8)

    void PlayPlusAnimation(FText money, EEconomyDetailedYieldType YieldType);
    void PlayMinusAnimation(FText money);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBPHud_Money_Anim(int32 EntryPoint);
}; // Size: 0x2B4

#endif
