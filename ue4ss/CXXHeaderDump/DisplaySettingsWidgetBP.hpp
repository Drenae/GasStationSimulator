#ifndef UE4SS_SDK_DisplaySettingsWidgetBP_HPP
#define UE4SS_SDK_DisplaySettingsWidgetBP_HPP

class UDisplaySettingsWidgetBP_C : public UInteractableMenuWidgetBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0600 (size: 0x8)
    class UNavigationKeyButton_C* ApplyButton;                                        // 0x0608 (size: 0x8)
    class UNavigationKeyButton_C* BackButton;                                         // 0x0610 (size: 0x8)
    class UOptionsSlider_C* BrightnessOptionsSlider;                                  // 0x0618 (size: 0x8)
    class UDecisionDialogWidgetBP_C* DecisionDialogWidgetBP;                          // 0x0620 (size: 0x8)
    class UOptionsPicker_C* DisplayResolutionOptionsPicker;                           // 0x0628 (size: 0x8)
    class UOptionsPicker_C* HideHUDOptionsPicker;                                     // 0x0630 (size: 0x8)
    class UImage* Image_96;                                                           // 0x0638 (size: 0x8)
    class UBorder* LeftBorder;                                                        // 0x0640 (size: 0x8)
    class UBorder* LeftSeparatorBorder;                                               // 0x0648 (size: 0x8)
    class UBorder* LeftTitleBorder;                                                   // 0x0650 (size: 0x8)
    class UOptionsPicker_C* LockFPSOptionsPicker;                                     // 0x0658 (size: 0x8)
    class UCanvasPanel* MenuCanvasPanel;                                              // 0x0660 (size: 0x8)
    class UTextBlock* MenuTitleText;                                                  // 0x0668 (size: 0x8)
    class UNavigationKeyButton_C* ResetButton;                                        // 0x0670 (size: 0x8)
    class UOptionsSlider_C* ResolutionScaleOptionsSlider;                             // 0x0678 (size: 0x8)
    class UBorder* RightBorder;                                                       // 0x0680 (size: 0x8)
    class UBorder* RightTitleBorder;                                                  // 0x0688 (size: 0x8)
    class UOptionsPicker_C* ScreenSelector;                                           // 0x0690 (size: 0x8)
    class UTextBlock* SelectedOptionDescription;                                      // 0x0698 (size: 0x8)
    class UTextBlock* SelectedOptionName;                                             // 0x06A0 (size: 0x8)
    class UOptionsPicker_C* VSyncOptionsPicker;                                       // 0x06A8 (size: 0x8)
    class UOptionsPicker_C* WindowModeOptionsPicker;                                  // 0x06B0 (size: 0x8)
    FDisplaySettingsWidgetBP_COnClickedBack OnClickedBack;                            // 0x06B8 (size: 0x10)
    void OnClickedBack();
    class UOptionsOverviewWidgetBP_C* OptionsOverviewWidget;                          // 0x06C8 (size: 0x8)
    bool bIsDirty;                                                                    // 0x06D0 (size: 0x1)
    int32 LoadedWindowMode;                                                           // 0x06D4 (size: 0x4)
    int32 LoadedScreenResolution;                                                     // 0x06D8 (size: 0x4)
    float LoadedFrameRateLimit;                                                       // 0x06DC (size: 0x4)
    bool LoadedVSyncEnabled;                                                          // 0x06E0 (size: 0x1)
    float LoadedResolutionScale;                                                      // 0x06E4 (size: 0x4)
    float LoadedBrightness;                                                           // 0x06E8 (size: 0x4)
    int32 LoadedMonitorIndex;                                                         // 0x06EC (size: 0x4)

    void SetupMonitorWidget();
    void GetFrameRateIndex(float InFrameRate, int32& OutIndex);
    void GetSavedDisplaySettings();
    void DirtyCheck(bool& bIsReallyDirty);
    void SetFrameRatePicker(float InFrameRate);
    void SetGlobalSettings();
    void UpdateDescription(class UInteractableUserWidget_C* InWidget);
    void ShowDecisionDialog();
    void SetGammaCorrection(float InGammaValue);
    void ResetDisplaySettings();
    void MarkSettingsAsDirty();
    void SetupDisplayResolutions();
    void LoadDisplaySettings();
    void SplitResolution(FText Resolution, int32& X, int32& Y);
    void ApplyDisplaySettings();
    void BndEvt__ResetButton_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature();
    void BndEvt__VSyncOptionsPicker_K2Node_ComponentBoundEvent_12_OnOptionChanged__DelegateSignature(int32 ActiveIndex);
    void BndEvt__BrightnessOptionsSlider_K2Node_ComponentBoundEvent_15_OnOptionChanged__DelegateSignature();
    void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__LockFPSOptionsPicker_K2Node_ComponentBoundEvent_10_OnOptionChanged__DelegateSignature(int32 ActiveIndex);
    void OnPressedBack();
    void OnNavigationEnter(class UInteractableMenuWidgetBP_C* NavigateFromMenu, bool bIsGamepadBeingUsed);
    void OnNavigationExit(class UInteractableMenuWidgetBP_C* NavigateToMenu, class UInteractableMenuWidgetBP_C* NavigateFromMenu);
    void BndEvt__DisplayResolutionOptionsPicker_K2Node_ComponentBoundEvent_9_OnOptionChanged__DelegateSignature(int32 ActiveIndex);
    void BndEvt__WindowModeOptionsPicker_K2Node_ComponentBoundEvent_1_OnFocussed__DelegateSignature();
    void BndEvt__DisplayResolutionOptionsPicker_K2Node_ComponentBoundEvent_3_OnFocussed__DelegateSignature();
    void BndEvt__LockFPSOptionsPicker_K2Node_ComponentBoundEvent_4_OnFocussed__DelegateSignature();
    void BndEvt__VSyncOptionsPicker_K2Node_ComponentBoundEvent_6_OnFocussed__DelegateSignature();
    void BndEvt__BrightnessOptionsSlider_K2Node_ComponentBoundEvent_16_OnFocussed__DelegateSignature();
    void BndEvt__WindowModeOptionsPicker_K2Node_ComponentBoundEvent_2_OnOptionChanged__DelegateSignature(int32 ActiveIndex);
    void OnGlobalSettingsApply();
    void BndEvt__DecisionDialogWidgetBP_K2Node_ComponentBoundEvent_5_DecisionAccept__DelegateSignature();
    void BndEvt__DecisionDialogWidgetBP_K2Node_ComponentBoundEvent_17_DecisionDecline__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnPressedReset();
    void OnPressedSelect();
    void BndEvt__ApplyButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
    void BndEvt__ScreenSelector_K2Node_ComponentBoundEvent_18_OnOptionChanged__DelegateSignature(int32 ActiveIndex);
    void BndEvt__ScreenSelector_K2Node_ComponentBoundEvent_19_OnFocussed__DelegateSignature();
    void BndEvt__DisplaySettingsWidgetBP_HideHUD_K2Node_ComponentBoundEvent_7_OnOptionChanged__DelegateSignature(int32 ActiveIndex);
    void BndEvt__DisplaySettingsWidgetBP_HideHUD_K2Node_ComponentBoundEvent_11_OnFocussed__DelegateSignature();
    void DisableHideHudPicker();
    void ExecuteUbergraph_DisplaySettingsWidgetBP(int32 EntryPoint);
    void OnClickedBack__DelegateSignature();
}; // Size: 0x6F0

#endif
