#ifndef UE4SS_SDK_WBP_ServiceDifficultyButton_HPP
#define UE4SS_SDK_WBP_ServiceDifficultyButton_HPP

class UWBP_ServiceDifficultyButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* OnHoverAnim;                                              // 0x0268 (size: 0x8)
    class UButton* Action_Button;                                                     // 0x0270 (size: 0x8)
    class UImage* BG_Image;                                                           // 0x0278 (size: 0x8)
    class UImage* Difficulty_Image;                                                   // 0x0280 (size: 0x8)
    class UTextBlock* Difficulty_TXT;                                                 // 0x0288 (size: 0x8)
    class UImage* Image_182;                                                          // 0x0290 (size: 0x8)
    class UTextBlock* LockedText;                                                     // 0x0298 (size: 0x8)
    class UTextBlock* TextBlock_68;                                                   // 0x02A0 (size: 0x8)
    FText Label;                                                                      // 0x02A8 (size: 0x18)
    FWBP_ServiceDifficultyButton_COn Button Clicked On Button Clicked;                // 0x02C0 (size: 0x10)
    void On Button Clicked(class UWBP_ServiceDifficultyButton_C* Difficulty Button);
    EGuestServiceDifficulty Difficulty;                                               // 0x02D0 (size: 0x1)
    bool Uppercase;                                                                   // 0x02D1 (size: 0x1)
    bool IsDifficultyUnlocked;                                                        // 0x02D2 (size: 0x1)
    class UTexture2D* DifficultyImageToSet;                                           // 0x02D8 (size: 0x8)
    FText DifficultyDescriptionToSet;                                                 // 0x02E0 (size: 0x18)

    void PreConstruct(bool IsDesignTime);
    void BndEvt__WBP_ServiceDifficultyButton_Button_103_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__WBP_ServiceDifficultyButton_Button_103_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_ServiceDifficultyButton_Button_103_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void Hover();
    void Unhover();
    void ChangeLockedStatus(bool bShouldBeUnlocked);
    void Construct();
    void SetupVisual(const FText& InText, TSoftObjectPtr<class UTexture2D> SoftTexture);
    void ExecuteUbergraph_WBP_ServiceDifficultyButton(int32 EntryPoint);
    void On Button Clicked__DelegateSignature(class UWBP_ServiceDifficultyButton_C* Difficulty Button);
}; // Size: 0x2F8

#endif
