#ifndef UE4SS_SDK_UI_TabButton_HPP
#define UE4SS_SDK_UI_TabButton_HPP

class UUI_TabButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* Hover;                                                    // 0x0268 (size: 0x8)
    class UImage* Border_Image;                                                       // 0x0270 (size: 0x8)
    class UButton* Button;                                                            // 0x0278 (size: 0x8)
    int32 TabToOpen;                                                                  // 0x0280 (size: 0x4)
    class UUI_PhotoMode_C* PhotoModeWidgetRef;                                        // 0x0288 (size: 0x8)
    class UObject* TabIcon;                                                           // 0x0290 (size: 0x8)
    FVector2D ButtonSize;                                                             // 0x0298 (size: 0x8)
    FVector2D ButtonSizeWhenSelected;                                                 // 0x02A0 (size: 0x8)
    FSlateColor SelectedTabColor;                                                     // 0x02A8 (size: 0x28)
    FSlateColor UnselectedTabColor;                                                   // 0x02D0 (size: 0x28)

    void Initialize(class UUI_PhotoMode_C* PhotoModeWidgetRef);
    void SetSelectedTabStyle();
    void SetUnselectedTabStyle();
    void BndEvt__Button_99_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_TabButton(int32 EntryPoint);
}; // Size: 0x2F8

#endif
