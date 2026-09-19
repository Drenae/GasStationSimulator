#ifndef UE4SS_SDK_AudioSettingsWidgetBP_HPP
#define UE4SS_SDK_AudioSettingsWidgetBP_HPP

class UAudioSettingsWidgetBP_C : public UInteractableMenuWidgetBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0600 (size: 0x8)
    class UOptionsSlider_C* AmbientSoundSlider;                                       // 0x0608 (size: 0x8)
    class UNavigationKeyButton_C* BackButton;                                         // 0x0610 (size: 0x8)
    class UOptionsPicker_C* CarHonks;                                                 // 0x0618 (size: 0x8)
    class UImage* Image_96;                                                           // 0x0620 (size: 0x8)
    class UBorder* LeftBorder;                                                        // 0x0628 (size: 0x8)
    class UBorder* LeftTitleBorder;                                                   // 0x0630 (size: 0x8)
    class UOptionsSlider_C* MasterOptionsSlider;                                      // 0x0638 (size: 0x8)
    class UCanvasPanel* MenuCanvasPanel;                                              // 0x0640 (size: 0x8)
    class UTextBlock* MenuTitleText;                                                  // 0x0648 (size: 0x8)
    class UOptionsSlider_C* MusicOptionsSlider;                                       // 0x0650 (size: 0x8)
    class UNavigationKeyButton_C* ResetButton;                                        // 0x0658 (size: 0x8)
    class UBorder* RightBorder;                                                       // 0x0660 (size: 0x8)
    class UBorder* RightTitleBorder;                                                  // 0x0668 (size: 0x8)
    class UTextBlock* SelectedOptionDescription;                                      // 0x0670 (size: 0x8)
    class UTextBlock* SelectedOptionName;                                             // 0x0678 (size: 0x8)
    class UOptionsSlider_C* SFXOptionsSlider;                                         // 0x0680 (size: 0x8)
    class UOptionsSlider_C* UISoundSlider;                                            // 0x0688 (size: 0x8)
    class UOptionsSlider_C* VoiceOptionsSlider;                                       // 0x0690 (size: 0x8)
    FAudioSettingsWidgetBP_COnClickedBack OnClickedBack;                              // 0x0698 (size: 0x10)
    void OnClickedBack();
    class UOptionsOverviewWidgetBP_C* OptionsOverviewWidget;                          // 0x06A8 (size: 0x8)
    class USoundClass* MasterSoundClassDefault;                                       // 0x06B0 (size: 0x8)
    class USoundClass* MusicSoundClassDefault;                                        // 0x06B8 (size: 0x8)
    class USoundClass* SFXSoundClassDefault;                                          // 0x06C0 (size: 0x8)
    class USoundClass* VoiceSoundClassDefault;                                        // 0x06C8 (size: 0x8)
    class USoundClass* UISoundClassDefault;                                           // 0x06D0 (size: 0x8)
    class USoundClass* AmbientSoundClassDefault;                                      // 0x06D8 (size: 0x8)

    void SetAudioVolumeSlider(class UOptionsSlider_C* InVolumeSlider, float InValue);
    void SetGlobalSettings();
    void ApplyAudioSettings();
    void ResetAudioSettings();
    void LoadAudioSettings();
    void UpdateDescription(class UInteractableUserWidget_C* InWidget);
    void BndEvt__OptionsSlider_C_0_K2Node_ComponentBoundEvent_8_OnOptionChanged__DelegateSignature();
    void BndEvt__MusicOptionsSlider_K2Node_ComponentBoundEvent_6_OnOptionChanged__DelegateSignature();
    void BndEvt__ResetButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature();
    void BndEvt__SFXOptionsSlider_K2Node_ComponentBoundEvent_5_OnOptionChanged__DelegateSignature();
    void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__MasterOptionsSlider_K2Node_ComponentBoundEvent_4_OnOptionChanged__DelegateSignature();
    void OnPressedBack();
    void OnNavigationEnter(class UInteractableMenuWidgetBP_C* NavigateFromMenu, bool bIsGamepadBeingUsed);
    void OnNavigationExit(class UInteractableMenuWidgetBP_C* NavigateToMenu, class UInteractableMenuWidgetBP_C* NavigateFromMenu);
    void Construct();
    void BndEvt__MasterOptionsSlider_K2Node_ComponentBoundEvent_9_OnFocussed__DelegateSignature();
    void BndEvt__SFXOptionsSlider_K2Node_ComponentBoundEvent_10_OnFocussed__DelegateSignature();
    void BndEvt__MusicOptionsSlider_K2Node_ComponentBoundEvent_12_OnFocussed__DelegateSignature();
    void BndEvt__VoiceOptionsSlider_K2Node_ComponentBoundEvent_13_OnFocussed__DelegateSignature();
    void OnGlobalSettingsApply();
    void PreConstruct(bool IsDesignTime);
    void OnPressedReset();
    void BndEvt__AmbientSoundSlider_K2Node_ComponentBoundEvent_1_OnOptionChanged__DelegateSignature();
    void BndEvt__AmbientSoundSlider_K2Node_ComponentBoundEvent_2_OnFocussed__DelegateSignature();
    void BndEvt__UISoundSlider_K2Node_ComponentBoundEvent_3_OnOptionChanged__DelegateSignature();
    void BndEvt__UISoundSlider_K2Node_ComponentBoundEvent_7_OnFocussed__DelegateSignature();
    void BndEvt__CarHonks_K2Node_ComponentBoundEvent_14_OnOptionChanged__DelegateSignature(int32 ActiveIndex);
    void BndEvt__AudioSettingsWidgetBP_CarHonks_K2Node_ComponentBoundEvent_15_OnFocussed__DelegateSignature();
    void ExecuteUbergraph_AudioSettingsWidgetBP(int32 EntryPoint);
    void OnClickedBack__DelegateSignature();
}; // Size: 0x6E0

#endif
