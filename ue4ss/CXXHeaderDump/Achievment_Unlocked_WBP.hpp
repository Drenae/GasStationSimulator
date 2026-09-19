#ifndef UE4SS_SDK_Achievment_Unlocked_WBP_HPP
#define UE4SS_SDK_Achievment_Unlocked_WBP_HPP

class UAchievment_Unlocked_WBP_C : public UAchievementWidgetBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* FadeIn;                                                   // 0x0268 (size: 0x8)
    class UFlipbook_C* Flipbook;                                                      // 0x0270 (size: 0x8)
    class UImage* Image;                                                              // 0x0278 (size: 0x8)
    class UImage* Image_134;                                                          // 0x0280 (size: 0x8)
    class UImage* Image_Icon;                                                         // 0x0288 (size: 0x8)
    class UTextBlock* TextBlock_Ach_Name;                                             // 0x0290 (size: 0x8)

    void Construct();
    void SetAchievementValues(class UTexture2D* Icon, const FText& Name);
    void Unanimate();
    void ExecuteUbergraph_Achievment_Unlocked_WBP(int32 EntryPoint);
}; // Size: 0x298

#endif
