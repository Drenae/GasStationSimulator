#ifndef UE4SS_SDK_UI_CommandButton_HPP
#define UE4SS_SDK_UI_CommandButton_HPP

class UUI_CommandButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button;                                                            // 0x0268 (size: 0x8)
    class UImage* ButtonIcon;                                                         // 0x0270 (size: 0x8)
    class UTextBlock* ButtonTitle;                                                    // 0x0278 (size: 0x8)
    class UOverlay* Overlay_80;                                                       // 0x0280 (size: 0x8)
    class USpacer* Spacer_219;                                                        // 0x0288 (size: 0x8)
    FUI_CommandButton_COnPressed OnPressed;                                           // 0x0290 (size: 0x10)
    void OnPressed();
    class UTexture2D* Icon;                                                           // 0x02A0 (size: 0x8)
    FText Text;                                                                       // 0x02A8 (size: 0x18)
    bool bIsClickable;                                                                // 0x02C0 (size: 0x1)
    FDataTableRowHandle IconDT;                                                       // 0x02C8 (size: 0x10)
    int32 LastIndex;                                                                  // 0x02D8 (size: 0x4)
    bool bUseSpacer;                                                                  // 0x02DC (size: 0x1)

    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void UpdateIconByIndex(int32 Index);
    void UpdateIconDT(FDataTableRowHandle IconDT);
    void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_CommandButton(int32 EntryPoint);
    void OnPressed__DelegateSignature();
}; // Size: 0x2DD

#endif
