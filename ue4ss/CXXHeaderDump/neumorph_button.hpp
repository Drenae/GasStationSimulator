#ifndef UE4SS_SDK_neumorph_button_HPP
#define UE4SS_SDK_neumorph_button_HPP

class Uneumorph_button_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* PressedAnim;                                              // 0x0268 (size: 0x8)
    class UWidgetAnimation* HoverAnim;                                                // 0x0270 (size: 0x8)
    class UButton* Button_38;                                                         // 0x0278 (size: 0x8)
    class UImage* GamePadHover_IMG;                                                   // 0x0280 (size: 0x8)
    class UImage* Image;                                                              // 0x0288 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0290 (size: 0x8)
    class UWBP_KeyHint_C* SelectSaveHint;                                             // 0x0298 (size: 0x8)
    class UTextBlock* TextBlock_58;                                                   // 0x02A0 (size: 0x8)
    FText In Text;                                                                    // 0x02A8 (size: 0x18)
    FLinearColor Color1;                                                              // 0x02C0 (size: 0x10)
    FLinearColor Color2;                                                              // 0x02D0 (size: 0x10)
    Fneumorph_button_CButtonClicked ButtonClicked;                                    // 0x02E0 (size: 0x10)
    void ButtonClicked();
    int32 SoundIndex;                                                                 // 0x02F0 (size: 0x4)
    Fneumorph_button_CButtonHover ButtonHover;                                        // 0x02F8 (size: 0x10)
    void ButtonHover();
    bool ShouldPlaySound;                                                             // 0x0308 (size: 0x1)
    bool UseCustomSound;                                                              // 0x0309 (size: 0x1)
    class USoundBase* CustomSound;                                                    // 0x0310 (size: 0x8)

    void PlayButtonSound();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__neumorph_button_Button_38_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__neumorph_button_Button_38_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__neumorph_button_Button_38_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void GamePadHover(bool Hover);
    void GamePadClick();
    void Set Text(FText New Text);
    void ExecuteUbergraph_neumorph_button(int32 EntryPoint);
    void ButtonHover__DelegateSignature();
    void ButtonClicked__DelegateSignature();
}; // Size: 0x318

#endif
