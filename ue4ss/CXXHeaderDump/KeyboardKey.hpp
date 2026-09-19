#ifndef UE4SS_SDK_KeyboardKey_HPP
#define UE4SS_SDK_KeyboardKey_HPP

class UKeyboardKey_C : public UGlobalInteractableUserWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05C0 (size: 0x8)
    class UButton* KeyButton;                                                         // 0x05C8 (size: 0x8)
    class UImage* KeyImage;                                                           // 0x05D0 (size: 0x8)
    class UTexture2D* KeyTexture;                                                     // 0x05D8 (size: 0x8)
    FKey MappedKey;                                                                   // 0x05E0 (size: 0x18)
    FVector2D KeySize;                                                                // 0x05F8 (size: 0x8)
    FKeyboardKey_COnHoveredKeyboardKey OnHoveredKeyboardKey;                          // 0x0600 (size: 0x10)
    void OnHoveredKeyboardKey(FKey InKey);
    FLinearColor KeyboardKeyBgColor;                                                  // 0x0610 (size: 0x10)
    FLinearColor KeyboardKeyHighlightColor;                                           // 0x0620 (size: 0x10)
    FLinearColor KeyboardKeyExtraHightlightColor;                                     // 0x0630 (size: 0x10)
    bool bIsHighlighted;                                                              // 0x0640 (size: 0x1)

    void SetGlobalSettings();
    void Highlight(bool bHighlight, bool bFocusHighlight);
    void BndEvt__KeyButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void OnGlobalSettingsApply();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_KeyboardKey(int32 EntryPoint);
    void OnHoveredKeyboardKey__DelegateSignature(FKey InKey);
}; // Size: 0x641

#endif
