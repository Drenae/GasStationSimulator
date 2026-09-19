#ifndef UE4SS_SDK_GamepadWidgetBP_HPP
#define UE4SS_SDK_GamepadWidgetBP_HPP

class UGamepadWidgetBP_C : public UGlobalInteractableUserWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05C0 (size: 0x8)
    class UCanvasPanel* GamepadCanvasPanel;                                           // 0x05C8 (size: 0x8)
    class UImage* GamepadImage;                                                       // 0x05D0 (size: 0x8)
    class UGamepadKey_C* GamepadKey_DpadDown;                                         // 0x05D8 (size: 0x8)
    class UGamepadKey_C* GamepadKey_DpadLeft;                                         // 0x05E0 (size: 0x8)
    class UGamepadKey_C* GamepadKey_DpadRight;                                        // 0x05E8 (size: 0x8)
    class UGamepadKey_C* GamepadKey_DpadUp;                                           // 0x05F0 (size: 0x8)
    class UGamepadKey_C* GamepadKey_FaceBtnBottom;                                    // 0x05F8 (size: 0x8)
    class UGamepadKey_C* GamepadKey_FaceBtnLeft;                                      // 0x0600 (size: 0x8)
    class UGamepadKey_C* GamepadKey_FaceBtnRight;                                     // 0x0608 (size: 0x8)
    class UGamepadKey_C* GamepadKey_FaceBtnTop;                                       // 0x0610 (size: 0x8)
    class UGamepadKey_C* GamepadKey_LeftShoulder;                                     // 0x0618 (size: 0x8)
    class UGamepadKey_C* GamepadKey_LeftThumbstick;                                   // 0x0620 (size: 0x8)
    class UGamepadKey_C* GamepadKey_LeftTrigger;                                      // 0x0628 (size: 0x8)
    class UGamepadKey_C* GamepadKey_RightShoulder;                                    // 0x0630 (size: 0x8)
    class UGamepadKey_C* GamepadKey_RightThumbstick;                                  // 0x0638 (size: 0x8)
    class UGamepadKey_C* GamepadKey_RightTrigger;                                     // 0x0640 (size: 0x8)
    class UGamepadKey_C* GamepadKey_SpecialLeft;                                      // 0x0648 (size: 0x8)
    class UGamepadKey_C* GamepadKey_SpecialRight;                                     // 0x0650 (size: 0x8)
    class UImage* GamepadLinesImage;                                                  // 0x0658 (size: 0x8)
    TArray<UGamepadKey_C*> GamepadKeys;                                               // 0x0660 (size: 0x10)

    void ResetGamepadVisualization();
    void SetGamepadBindingText(FText InBindingName, FKey InSelectedKey, FKey InLastSelectedKey);
    void SetGlobalSettings();
    void SetupGamepadKeys();
    void PreConstruct(bool IsDesignTime);
    void OnGlobalSettingsApply();
    void ExecuteUbergraph_GamepadWidgetBP(int32 EntryPoint);
}; // Size: 0x670

#endif
