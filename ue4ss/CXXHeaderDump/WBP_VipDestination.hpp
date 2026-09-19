#ifndef UE4SS_SDK_WBP_VipDestination_HPP
#define UE4SS_SDK_WBP_VipDestination_HPP

class UWBP_VipDestination_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UHorizontalBox* HorizontalBox_bonus_time;                                   // 0x0268 (size: 0x8)
    class UImage* Image;                                                              // 0x0270 (size: 0x8)
    class UImage* Image_132;                                                          // 0x0278 (size: 0x8)
    class UImage* Image_bonus_icon;                                                   // 0x0280 (size: 0x8)
    class UImage* Image_bonus_rays;                                                   // 0x0288 (size: 0x8)
    class UImage* Image_Icon;                                                         // 0x0290 (size: 0x8)
    class UImage* Image_screen;                                                       // 0x0298 (size: 0x8)
    class URetainerBox* RetainerBox_desaturate;                                       // 0x02A0 (size: 0x8)
    class UTextBlock* Text_Progress_Current;                                          // 0x02A8 (size: 0x8)
    class UTextBlock* Text_Progress_Max;                                              // 0x02B0 (size: 0x8)
    class UTextBlock* text_time;                                                      // 0x02B8 (size: 0x8)
    class UTextBlock* TextBlock_Name;                                                 // 0x02C0 (size: 0x8)
    bool bBonusActive;                                                                // 0x02C8 (size: 0x1)
    class UTexture2D* Icon;                                                           // 0x02D0 (size: 0x8)
    class UTexture2D* Screen;                                                         // 0x02D8 (size: 0x8)
    FText Name;                                                                       // 0x02E0 (size: 0x18)
    float MaxProgression;                                                             // 0x02F8 (size: 0x4)
    float CurrentProgression;                                                         // 0x02FC (size: 0x4)
    float desaturation;                                                               // 0x0300 (size: 0x4)
    bool bIsAvailable;                                                                // 0x0304 (size: 0x1)
    EDLCName DLCDestination;                                                          // 0x0305 (size: 0x1)

    void SetNotAvailable(bool IsAvailable);
    void SetProgress(float CurrentProgress, float MaxProgress);
    void ShowHideBonus(float RemaningBonusTime);
    void PreConstruct(bool IsDesignTime);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_VipDestination(int32 EntryPoint);
}; // Size: 0x306

#endif
