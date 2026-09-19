#ifndef UE4SS_SDK_GlobalInteractableUserWidget_HPP
#define UE4SS_SDK_GlobalInteractableUserWidget_HPP

class UGlobalInteractableUserWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    FLinearColor MainColor;                                                           // 0x0268 (size: 0x10)
    FLinearColor HighlightColor;                                                      // 0x0278 (size: 0x10)
    FSlateFontInfo MainFont;                                                          // 0x0288 (size: 0x58)
    FSlateFontInfo SmallTitleFont;                                                    // 0x02E0 (size: 0x58)
    class USoundCue* SelectSound;                                                     // 0x0338 (size: 0x8)
    class USoundCue* BackSound;                                                       // 0x0340 (size: 0x8)
    class USoundCue* HoverSound;                                                      // 0x0348 (size: 0x8)
    class USoundCue* ChangeSound;                                                     // 0x0350 (size: 0x8)
    class USoundCue* SliderSound;                                                     // 0x0358 (size: 0x8)
    FLinearColor HighlightExtraColor;                                                 // 0x0360 (size: 0x10)
    FSlateFontInfo MediumTitleFont;                                                   // 0x0370 (size: 0x58)
    FSlateFontInfo LargeTitleFont;                                                    // 0x03C8 (size: 0x58)
    FSlateFontInfo ValueFont;                                                         // 0x0420 (size: 0x58)
    bool OnlyUppercase;                                                               // 0x0478 (size: 0x1)
    FLinearColor MenuBackgroundColor;                                                 // 0x047C (size: 0x10)
    FLinearColor WidgetBackgroundColor;                                               // 0x048C (size: 0x10)
    FLinearColor SymbolColor;                                                         // 0x049C (size: 0x10)
    class USoundCue* BackgroundMusic;                                                 // 0x04B0 (size: 0x8)
    bool bIsGamepadBeingUsed;                                                         // 0x04B8 (size: 0x1)
    FGlobalInteractableUserWidget_COnChangeInputDeviceUI OnChangeInputDeviceUI;       // 0x04C0 (size: 0x10)
    void OnChangeInputDeviceUI(bool bIsGamepadBeingUsed);
    bool bIsMenu;                                                                     // 0x04D0 (size: 0x1)
    bool bIsActiveMenu;                                                               // 0x04D1 (size: 0x1)
    TArray<FKey> KeybindingsUp;                                                       // 0x04D8 (size: 0x10)
    TArray<FKey> KeybindingsDown;                                                     // 0x04E8 (size: 0x10)
    TArray<FKey> KeybindingsLeft;                                                     // 0x04F8 (size: 0x10)
    TArray<FKey> KeybindingsRight;                                                    // 0x0508 (size: 0x10)
    TArray<FKey> KeybindingsSelect;                                                   // 0x0518 (size: 0x10)
    TArray<FKey> KeybindingsBack;                                                     // 0x0528 (size: 0x10)
    bool bAllowNavigation;                                                            // 0x0538 (size: 0x1)
    bool bIsNavigationCooledDown;                                                     // 0x0539 (size: 0x1)
    FTimerHandle CooldownTimerHandle;                                                 // 0x0540 (size: 0x8)
    FKey PressedKey;                                                                  // 0x0548 (size: 0x18)
    bool bPlayFadeAnimations;                                                         // 0x0560 (size: 0x1)
    float PlayFadeAnimationLength;                                                    // 0x0564 (size: 0x4)
    FLinearColor SubtleColor;                                                         // 0x0568 (size: 0x10)
    TArray<FKey> KeybindingsReset;                                                    // 0x0578 (size: 0x10)
    TArray<FKey> KeybindingsExtra;                                                    // 0x0588 (size: 0x10)
    bool bIntroLogosSkippable;                                                        // 0x0598 (size: 0x1)
    FLinearColor DecisionButtonColor;                                                 // 0x059C (size: 0x10)
    FLinearColor SliderBackgroundColor;                                               // 0x05AC (size: 0x10)

    void SetProperCursor(bool IsGamepad);
    void GetGlobalFontsWithExec(FSlateFontInfo& MainFont, FSlateFontInfo& SmallTitleFont, FSlateFontInfo& MediumTitleFont, FSlateFontInfo& LargeTitleFont, FSlateFontInfo& ValueFont, bool& OnlyUppercase);
    void GetGlobalColorsWithExec(FLinearColor& MainColor, FLinearColor& HighlightColor, FLinearColor& HighlightExtraColor, FLinearColor& MenuBackgroundColor, FLinearColor& WidgetBackgroundColor, FLinearColor& SymbolColor, FLinearColor& SubtleColor, FLinearColor& DecisionButtonColor, FLinearColor& SliderBackgroundColor);
    void SetIsGamepadBeingUsed(bool bIsGamepadBeingUsed);
    void SetGlobalSettingsMenuKeybindings();
    void SetGlobalSettingsFonts();
    void SetGlobalSettingsSounds();
    void SetGlobalSettingsColors();
    void SetGlobalSettingsGeneral();
    void GetIsGamepadBeingUsed(bool& bIsGamepadBeingUsed);
    void GetIsMenu(bool& bIsMenu);
    void SetIsMenu(bool bIsMenu);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void GetAllowNavigation(bool& bAllowNavigation);
    void SetAllowNavigation(bool bAllowNavigation);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void GetIsActiveMenu(bool& bIsActiveMenu);
    void SetActiveMenu(bool bIsActiveMenu);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseMove(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void GetCurrentInputDeviceUI(bool& bIsGamepadBeingUsed);
    void SetCurrentInputDeviceUI(FKey InKey, bool bIsMouseInput);
    void SetGlobalVariableValues();
    void GetGlobalColors(FLinearColor& MainColor, FLinearColor& HighlightColor, FLinearColor& HighlightExtraColor, FLinearColor& MenuBackgroundColor, FLinearColor& WidgetBackgroundColor, FLinearColor& SymbolColor, FLinearColor& SubtleColor, FLinearColor& DecisionButtonColor, FLinearColor& SliderBackgroundColor);
    void GetGlobalSounds(class USoundCue*& SelectSound, class USoundCue*& BackSound, class USoundCue*& HoverSound, class USoundCue*& ChangeSound, class USoundCue*& SliderSound, class USoundCue*& BackgroundMusic);
    void GetGlobalFonts(FSlateFontInfo& MainFont, FSlateFontInfo& SmallTitleFont, FSlateFontInfo& MediumTitleFont, FSlateFontInfo& LargeTitleFont, FSlateFontInfo& ValueFont, bool& OnlyUppercase);
    void GetGlobalGeneralData(bool& bPlayFadeAnimations, float& PlayFadeAnimationLength, bool& bIntroLogosSkippable);
    void SetTextAppearence(class UTextBlock* TextObject, FSlateFontInfo Font, FLinearColor Color);
    void OnGlobalSettingsApply();
    void OnPressedAnyKey();
    void PreConstruct(bool IsDesignTime);
    void OnPressedUp();
    void OnPressedDown();
    void OnPressedRight();
    void OnPressedLeft();
    void OnPressedSelect();
    void OnPressedBack();
    void OnPressedReset();
    void OnPressedExtra();
    void OnNavigationCooldownStart();
    void OnNavigationCooldownEnd();
    void ExecuteUbergraph_GlobalInteractableUserWidget(int32 EntryPoint);
    void OnChangeInputDeviceUI__DelegateSignature(bool bIsGamepadBeingUsed);
}; // Size: 0x5BC

#endif
