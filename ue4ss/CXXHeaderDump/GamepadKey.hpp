#ifndef UE4SS_SDK_GamepadKey_HPP
#define UE4SS_SDK_GamepadKey_HPP

class UGamepadKey_C : public UGlobalInteractableUserWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05C0 (size: 0x8)
    class UButton* GamepadButton;                                                     // 0x05C8 (size: 0x8)
    class UImage* GamepadButtonImage;                                                 // 0x05D0 (size: 0x8)
    class UTextBlock* GamepadButtonText;                                              // 0x05D8 (size: 0x8)
    class UTexture2D* KeyTexture;                                                     // 0x05E0 (size: 0x8)
    FKey KeyGamepad;                                                                  // 0x05E8 (size: 0x18)
    FLinearColor GamepadButtonBgColor;                                                // 0x0600 (size: 0x10)
    FLinearColor GamepadButtonHighlightColor;                                         // 0x0610 (size: 0x10)

    void GetPSGamepadButtonImage(class UObject* B, class UTexture2D*& GamePadPlaystation);
    void SetGamepadTexture(class UTexture2D* Texture);
    void Highlight(bool bHighlight);
    void SetTexture(class UTexture2D* Texture);
    void SetText(FText InText);
    void SetGlobalSettings();
    void PreConstruct(bool IsDesignTime);
    void OnGlobalSettingsApply();
    void ExecuteUbergraph_GamepadKey(int32 EntryPoint);
}; // Size: 0x620

#endif
