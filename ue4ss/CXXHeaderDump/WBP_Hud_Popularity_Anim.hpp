#ifndef UE4SS_SDK_WBP_Hud_Popularity_Anim_HPP
#define UE4SS_SDK_WBP_Hud_Popularity_Anim_HPP

class UWBP_Hud_Popularity_Anim_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* popularity_minus;                                         // 0x0268 (size: 0x8)
    class UWidgetAnimation* popularity_plus;                                          // 0x0270 (size: 0x8)
    class UImage* Glow;                                                               // 0x0278 (size: 0x8)
    class UImage* image_thumbdown;                                                    // 0x0280 (size: 0x8)
    class UImage* image_thumbup;                                                      // 0x0288 (size: 0x8)
    bool PlusAnimationPlaying;                                                        // 0x0290 (size: 0x1)
    bool MinusAnimationPlaying;                                                       // 0x0291 (size: 0x1)

    void PlayPlusAnimation();
    void PlayMinusAnimation();
    void PlusAnimationDone();
    void MinusAnimationDone();
    void ExecuteUbergraph_WBP_Hud_Popularity_Anim(int32 EntryPoint);
}; // Size: 0x292

#endif
