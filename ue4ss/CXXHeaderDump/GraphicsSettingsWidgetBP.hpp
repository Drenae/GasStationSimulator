#ifndef UE4SS_SDK_GraphicsSettingsWidgetBP_HPP
#define UE4SS_SDK_GraphicsSettingsWidgetBP_HPP

class UGraphicsSettingsWidgetBP_C : public UInteractableMenuWidgetBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0600 (size: 0x8)
    class UTextBlock* AdvancedHeaderText;                                             // 0x0608 (size: 0x8)
    class UOptionsPicker_C* AmbientOcclusionOptionsPicker;                            // 0x0610 (size: 0x8)
    class UOptionsPicker_C* AntiAliasingMethodOptionPicker;                           // 0x0618 (size: 0x8)
    class UOptionsPicker_C* AntiAliasingOptionsPicker;                                // 0x0620 (size: 0x8)
    class UNavigationKeyButton_C* ApplyButton;                                        // 0x0628 (size: 0x8)
    class UNavigationKeyButton_C* BackButton;                                         // 0x0630 (size: 0x8)
    class UNavigationKeyButton_C* BenchmarkButton;                                    // 0x0638 (size: 0x8)
    class UOptionsPicker_C* BloomOptionsPicker;                                       // 0x0640 (size: 0x8)
    class UDecisionDialogWidgetBP_C* DecisionDialogWidgetBP;                          // 0x0648 (size: 0x8)
    class UOptionsPicker_C* EffectsOptionsPicker;                                     // 0x0650 (size: 0x8)
    class UOptionsPicker_C* FoliageOptionsPicker;                                     // 0x0658 (size: 0x8)
    class UImage* Image_96;                                                           // 0x0660 (size: 0x8)
    class UBorder* LeftBorder;                                                        // 0x0668 (size: 0x8)
    class UBorder* LeftSeparatorBorder;                                               // 0x0670 (size: 0x8)
    class UBorder* LeftTitleBorder2;                                                  // 0x0678 (size: 0x8)
    class UOptionsPicker_C* LensFlaresOptionsPicker;                                  // 0x0680 (size: 0x8)
    class ULoadingScreenWidgetBP_C* LoadingScreenWidgetBP;                            // 0x0688 (size: 0x8)
    class UCanvasPanel* MenuCanvasPanel;                                              // 0x0690 (size: 0x8)
    class UTextBlock* MenuTitleText;                                                  // 0x0698 (size: 0x8)
    class UOptionsPicker_C* MotionBlurOptionsPicker;                                  // 0x06A0 (size: 0x8)
    class UOptionsPicker_C* PostProcessingOptionsPicker;                              // 0x06A8 (size: 0x8)
    class UOptionsPicker_C* PresetOptionsPicker;                                      // 0x06B0 (size: 0x8)
    class UBorder* PreviewBorder;                                                     // 0x06B8 (size: 0x8)
    class UTextBlock* QualityHeaderText;                                              // 0x06C0 (size: 0x8)
    class UNavigationKeyButton_C* ResetButton;                                        // 0x06C8 (size: 0x8)
    class UOptionsSlider_C* ResolutionScaleOptionsSlider;                             // 0x06D0 (size: 0x8)
    class UBorder* RightTitleBorder;                                                  // 0x06D8 (size: 0x8)
    class UTextBlock* SelectedOptionDescription;                                      // 0x06E0 (size: 0x8)
    class UImage* SelectedOptionImage;                                                // 0x06E8 (size: 0x8)
    class UTextBlock* SelectedOptionName;                                             // 0x06F0 (size: 0x8)
    class UOptionsPicker_C* ShadowsOptionsPicker;                                     // 0x06F8 (size: 0x8)
    class UOptionsPicker_C* SSGIPicker;                                               // 0x0700 (size: 0x8)
    class UOptionsPicker_C* SSROptionsPicker;                                         // 0x0708 (size: 0x8)
    class UOptionsPicker_C* TexturesOptionsPicker;                                    // 0x0710 (size: 0x8)
    class UOptionsPicker_C* ViewDistanceOptionsPicker;                                // 0x0718 (size: 0x8)
    FGraphicsSettingsWidgetBP_COnClickedBack OnClickedBack;                           // 0x0720 (size: 0x10)
    void OnClickedBack();
    class UOptionsOverviewWidgetBP_C* OptionsOverviewWidget;                          // 0x0730 (size: 0x8)
    bool bIsDirty;                                                                    // 0x0738 (size: 0x1)
    int32 LoadedPreset;                                                               // 0x073C (size: 0x4)
    int32 LoadedAntiAliasingQuality;                                                  // 0x0740 (size: 0x4)
    int32 LoadedEffectQuality;                                                        // 0x0744 (size: 0x4)
    int32 LoadedShadowQuality;                                                        // 0x0748 (size: 0x4)
    bool LoadedMotionBlur;                                                            // 0x074C (size: 0x1)
    int32 LoadedTextureQuality;                                                       // 0x0750 (size: 0x4)
    int32 LoadedViewDistanceQuality;                                                  // 0x0754 (size: 0x4)
    bool LoadedLensFlares;                                                            // 0x0758 (size: 0x1)
    bool LoadedSSR;                                                                   // 0x0759 (size: 0x1)
    bool LoadedBloom;                                                                 // 0x075A (size: 0x1)
    int32 LoadedPostProcessingQuality;                                                // 0x075C (size: 0x4)
    int32 LoadedAntiAliasingMethod;                                                   // 0x0760 (size: 0x4)
    bool LoadedAmbientOcclusion;                                                      // 0x0764 (size: 0x1)
    int32 LoadedFoliageQuality;                                                       // 0x0768 (size: 0x4)
    float LoadedResolutionScale;                                                      // 0x076C (size: 0x4)
    float FanTickInterval;                                                            // 0x0770 (size: 0x4)
    int32 LoadedSSGI;                                                                 // 0x0774 (size: 0x4)
    int32 LocalScalabilityValue;                                                      // 0x0778 (size: 0x4)

    void Additional Scalability Commands to be executed();
    void ShowLoadingScreen(bool bIsVisible);
    void GetSavedGraphicsSettings();
    void DownscaleEpicSetting(int32 InEpic, class UOptionsPicker_C* Options, int32& OutHigh);
    void DirtyCheck(bool& bIsReallyDirty);
    void RunBenchmark();
    void SetGlobalSettings();
    void ShowDecisionDialog();
    void ResetGraphicsSettings();
    void SetCustomPreset();
    void SetGraphicsPreset(int32 InActiveIndex);
    void ApplyGraphicsSettings();
    void LoadGraphicsSettings();
    void MarkSettingsAsDirty();
    void UpdateDescription(class UInteractableUserWidget_C* InWidget);
    void BndEvt__EffectsOptionsPicker_K2Node_ComponentBoundEvent_12_OnOptionChanged__DelegateSignature(int32 ActiveIndex);
    void BndEvt__FoliageOptionsPicker_K2Node_ComponentBoundEvent_13_OnOptionChanged__DelegateSignature(int32 ActiveIndex);
    void BndEvt__ViewDistanceOptionsPicker_K2Node_ComponentBoundEvent_14_OnOptionChanged__DelegateSignature(int32 ActiveIndex);
    void BndEvt__AntiAliasingOptionsPicker_K2Node_ComponentBoundEvent_15_OnOptionChanged__DelegateSignature(int32 ActiveIndex);
    void BndEvt__PostProcessingOptionsPicker_K2Node_ComponentBoundEvent_16_OnOptionChanged__DelegateSignature(int32 ActiveIndex);
    void BndEvt__ShadowsOptionsPicker_K2Node_ComponentBoundEvent_17_OnOptionChanged__DelegateSignature(int32 ActiveIndex);
    void BndEvt__TexturesOptionsPicker_K2Node_ComponentBoundEvent_11_OnOptionChanged__DelegateSignature(int32 ActiveIndex);
    void BndEvt__PresetOptionsPicker_K2Node_ComponentBoundEvent_10_OnOptionChanged__DelegateSignature(int32 ActiveIndex);
    void BndEvt__ApplyButton_K2Node_ComponentBoundEvent_23_OnClicked__DelegateSignature();
    void BndEvt__ResolutionScaleOptionsSlider_K2Node_ComponentBoundEvent_25_OnOptionChanged__DelegateSignature();
    void BndEvt__MotionBlurOptionsPicker_K2Node_ComponentBoundEvent_8_OnOptionChanged__DelegateSignature(int32 ActiveIndex);
    void BndEvt__AntiAliasingMethodOptionPicker_K2Node_ComponentBoundEvent_24_OnOptionChanged__DelegateSignature(int32 ActiveIndex);
    void BndEvt__LensFlaresOptionsPicker_K2Node_ComponentBoundEvent_27_OnOptionChanged__DelegateSignature(int32 ActiveIndex);
    void BndEvt__SSROptionsPicker_K2Node_ComponentBoundEvent_29_OnOptionChanged__DelegateSignature(int32 ActiveIndex);
    void BndEvt__BloomOptionsPicker_K2Node_ComponentBoundEvent_31_OnOptionChanged__DelegateSignature(int32 ActiveIndex);
    void BndEvt__AmbientOcclusionOptionsPicker_K2Node_ComponentBoundEvent_33_OnOptionChanged__DelegateSignature(int32 ActiveIndex);
    void BndEvt__ResetButton_K2Node_ComponentBoundEvent_34_OnClicked__DelegateSignature();
    void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void OnPressedBack();
    void OnNavigationEnter(class UInteractableMenuWidgetBP_C* NavigateFromMenu, bool bIsGamepadBeingUsed);
    void OnNavigationExit(class UInteractableMenuWidgetBP_C* NavigateToMenu, class UInteractableMenuWidgetBP_C* NavigateFromMenu);
    void BndEvt__PresetOptionsPicker_K2Node_ComponentBoundEvent_22_OnFocussed__DelegateSignature();
    void BndEvt__TexturesOptionsPicker_K2Node_ComponentBoundEvent_36_OnFocussed__DelegateSignature();
    void BndEvt__EffectsOptionsPicker_K2Node_ComponentBoundEvent_37_OnFocussed__DelegateSignature();
    void BndEvt__FoliageOptionsPicker_K2Node_ComponentBoundEvent_38_OnFocussed__DelegateSignature();
    void BndEvt__ViewDistanceOptionsPicker_K2Node_ComponentBoundEvent_39_OnFocussed__DelegateSignature();
    void BndEvt__AntiAliasingMethodOptionPicker_K2Node_ComponentBoundEvent_40_OnFocussed__DelegateSignature();
    void BndEvt__AntiAliasingOptionsPicker_K2Node_ComponentBoundEvent_41_OnFocussed__DelegateSignature();
    void BndEvt__PostProcessingOptionsPicker_K2Node_ComponentBoundEvent_42_OnFocussed__DelegateSignature();
    void BndEvt__ShadowsOptionsPicker_K2Node_ComponentBoundEvent_43_OnFocussed__DelegateSignature();
    void BndEvt__MotionBlurOptionsPicker_K2Node_ComponentBoundEvent_44_OnFocussed__DelegateSignature();
    void BndEvt__LensFlaresOptionsPicker_K2Node_ComponentBoundEvent_45_OnFocussed__DelegateSignature();
    void BndEvt__SSROptionsPicker_K2Node_ComponentBoundEvent_46_OnFocussed__DelegateSignature();
    void BndEvt__BloomOptionsPicker_K2Node_ComponentBoundEvent_47_OnFocussed__DelegateSignature();
    void BndEvt__AmbientOcclusionOptionsPicker_K2Node_ComponentBoundEvent_48_OnFocussed__DelegateSignature();
    void OnGlobalSettingsApply();
    void BndEvt__DecisionDialogWidgetBP_K2Node_ComponentBoundEvent_1_DecisionAccept__DelegateSignature();
    void BndEvt__DecisionDialogWidgetBP_K2Node_ComponentBoundEvent_2_DecisionDecline__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnPressedReset();
    void OnPressedSelect();
    void OnPressedExtra();
    void BndEvt__BenchmarkButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
    void BndEvt__ResolutionScaleOptionsSlider_K2Node_ComponentBoundEvent_4_OnFocussed__DelegateSignature();
    void BndEvt__SSGIPicker_K2Node_ComponentBoundEvent_5_OnOptionChanged__DelegateSignature(int32 ActiveIndex);
    void BndEvt__SSGIPicker_K2Node_ComponentBoundEvent_6_OnFocussed__DelegateSignature();
    void unbind();
    void OnMenuStarted();
    void ExecuteUbergraph_GraphicsSettingsWidgetBP(int32 EntryPoint);
    void OnClickedBack__DelegateSignature();
}; // Size: 0x77C

#endif
