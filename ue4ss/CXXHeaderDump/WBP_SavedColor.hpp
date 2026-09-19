#ifndef UE4SS_SDK_WBP_SavedColor_HPP
#define UE4SS_SDK_WBP_SavedColor_HPP

class UWBP_SavedColor_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* HoverAnim;                                                // 0x0268 (size: 0x8)
    class UButton* Button_48;                                                         // 0x0270 (size: 0x8)
    class UImage* GamePadHover_IMG;                                                   // 0x0278 (size: 0x8)
    class UImage* Image_CarColor;                                                     // 0x0280 (size: 0x8)
    class UImage* ImageNoColor;                                                       // 0x0288 (size: 0x8)
    FLinearColor Color;                                                               // 0x0290 (size: 0x10)
    FVector2D Desired Size;                                                           // 0x02A0 (size: 0x8)
    FWBP_SavedColor_CClicked Clicked;                                                 // 0x02A8 (size: 0x10)
    void Clicked(FLinearColor Color, class UWBP_SavedColor_C* WidgetRef, int32 ColorIndex);
    int32 ColorIndex;                                                                 // 0x02B8 (size: 0x4)
    bool No Color;                                                                    // 0x02BC (size: 0x1)

    void SetColor(FLinearColor Color, int32 SelectedColorIndex, bool bMetal);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__WBP_SavedColor_Button_48_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_SavedColor_Button_48_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_SavedColor_Button_48_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void Destruct();
    void GamePadHover(bool Hover);
    void GamePadClick();
    void ExecuteUbergraph_WBP_SavedColor(int32 EntryPoint);
    void Clicked__DelegateSignature(FLinearColor Color, class UWBP_SavedColor_C* WidgetRef, int32 ColorIndex);
}; // Size: 0x2BD

#endif
