#ifndef UE4SS_SDK_GameSettingsWidgetBP_HPP
#define UE4SS_SDK_GameSettingsWidgetBP_HPP

class UGameSettingsWidgetBP_C : public UInteractableMenuWidgetBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0600 (size: 0x8)
    class UNavigationKeyButton_C* ApplyButton;                                        // 0x0608 (size: 0x8)
    class UNavigationKeyButton_C* BackButton;                                         // 0x0610 (size: 0x8)
    class UOptionsPicker_C* BusOptionsPicker;                                         // 0x0618 (size: 0x8)
    class UOptionsPicker_C* CameraHeadBob;                                            // 0x0620 (size: 0x8)
    class UOptionsPicker_C* CashRegisterSoundActive;                                  // 0x0628 (size: 0x8)
    class UOptionsPicker_C* ChristmasHats;                                            // 0x0630 (size: 0x8)
    class UDecisionDialogWidgetBP_C* DecisionDialogWidgetBP;                          // 0x0638 (size: 0x8)
    class UOptionsPicker_C* DennisOptionPicker;                                       // 0x0640 (size: 0x8)
    class UOptionsSlider_C* FOVSlider;                                                // 0x0648 (size: 0x8)
    class UOptionsPicker_C* GhostofRocknRoll;                                         // 0x0650 (size: 0x8)
    class UImage* Image_96;                                                           // 0x0658 (size: 0x8)
    class UOptionsPicker_C* JunkyardCustomizationEffects;                             // 0x0660 (size: 0x8)
    class UOptionsPicker_C* JunkyardCustomizationMusic;                               // 0x0668 (size: 0x8)
    class UOptionsPicker_C* LanguageOptionsPicker;                                    // 0x0670 (size: 0x8)
    class UOptionsPicker_C* LateGameChallengesPicker;                                 // 0x0678 (size: 0x8)
    class UBorder* LeftBorder;                                                        // 0x0680 (size: 0x8)
    class UBorder* LeftTitleBorder;                                                   // 0x0688 (size: 0x8)
    class UCanvasPanel* MenuCanvasPanel;                                              // 0x0690 (size: 0x8)
    class UTextBlock* MenuTitleText;                                                  // 0x0698 (size: 0x8)
    class UNavigationKeyButton_C* ResetButton;                                        // 0x06A0 (size: 0x8)
    class UBorder* RightBorder;                                                       // 0x06A8 (size: 0x8)
    class UBorder* RightTitleBorder;                                                  // 0x06B0 (size: 0x8)
    class UOptionsPicker_C* SandstormOptionsPicker_1;                                 // 0x06B8 (size: 0x8)
    class UOptionsPicker_C* SantasSleigh;                                             // 0x06C0 (size: 0x8)
    class UTextBlock* SelectedOptionDescription;                                      // 0x06C8 (size: 0x8)
    class UTextBlock* SelectedOptionName;                                             // 0x06D0 (size: 0x8)
    class UOptionsPicker_C* SharkOptionPicker;                                        // 0x06D8 (size: 0x8)
    class UOptionsPicker_C* StreamerMode;                                             // 0x06E0 (size: 0x8)
    class UOptionsPicker_C* TimeConventionPicker;                                     // 0x06E8 (size: 0x8)
    class UOptionsPicker_C* VipOptionPicker;                                          // 0x06F0 (size: 0x8)
    class UOptionsPicker_C* WarehouseStealingPicker;                                  // 0x06F8 (size: 0x8)
    FGameSettingsWidgetBP_COnClickedBack OnClickedBack;                               // 0x0700 (size: 0x10)
    void OnClickedBack();
    FName LanguagesStringTable;                                                       // 0x0710 (size: 0x8)
    int32 LanguageDefault;                                                            // 0x0718 (size: 0x4)
    bool bIsDirty;                                                                    // 0x071C (size: 0x1)
    int32 Loaded Language;                                                            // 0x0720 (size: 0x4)
    TArray<FString> LanguageCodeArray;                                                // 0x0728 (size: 0x10)
    bool LoadedDennisCanActivate;                                                     // 0x0738 (size: 0x1)
    float LoadedFOV;                                                                  // 0x073C (size: 0x4)
    bool LoadedBusCanActivate;                                                        // 0x0740 (size: 0x1)
    bool LoadedSandstormCanActivate;                                                  // 0x0741 (size: 0x1)
    bool LoadedLateGameChallenges;                                                    // 0x0742 (size: 0x1)
    bool LoadedStealingCanActivate;                                                   // 0x0743 (size: 0x1)
    bool LoadedElvisEventCanActivate;                                                 // 0x0744 (size: 0x1)
    bool LoadedSanta'sSleighCanActivate;                                              // 0x0745 (size: 0x1)
    bool LoadedChristmasHatsCanActivate;                                              // 0x0746 (size: 0x1)
    bool LoadedJunkyardEffects;                                                       // 0x0747 (size: 0x1)
    bool LoadedJunkyardMusic;                                                         // 0x0748 (size: 0x1)
    bool LoadedSharkCanActivate;                                                      // 0x0749 (size: 0x1)
    bool LoadedTimeFormatIs24Hours;                                                   // 0x074A (size: 0x1)
    bool LoadedCashRegisterSound;                                                     // 0x074B (size: 0x1)
    bool LoadedVIPCanActivate;                                                        // 0x074C (size: 0x1)

    void HandleDLCOptions();
    void SetLanguageCodeArray(TArray<FText>& LanguageCodeArray);
    void GetSystemLanguage();
    void SetCurrentLanguage(int32 InIndex);
    void GetSavedGameSettings();
    void DirtyCheck(bool& bIsReallyDirty);
    void ResetGameSettings();
    void SetGlobalSettings();
    void ShowDecisionDialog();
    void SetupLanguageOptions();
    void MarkSettingsAsDirty();
    void LoadGameSettings();
    void ApplyGameSettings();
    void UpdateDescription(class UInteractableUserWidget_C* InWidget);
    void BndEvt__LanguageOptionsPicker_K2Node_ComponentBoundEvent_6_OnOptionChanged__DelegateSignature(int32 ActiveIndex);
    void OnPressedBack();
    void OnNavigationEnter(class UInteractableMenuWidgetBP_C* NavigateFromMenu, bool bIsGamepadBeingUsed);
    void OnNavigationExit(class UInteractableMenuWidgetBP_C* NavigateToMenu, class UInteractableMenuWidgetBP_C* NavigateFromMenu);
    void BndEvt__ApplyButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
    void BndEvt__LanguageOptionsPicker_K2Node_ComponentBoundEvent_13_OnFocussed__DelegateSignature();
    void BndEvt__DecisionDialogWidgetBP_K2Node_ComponentBoundEvent_11_DecisionAccept__DelegateSignature();
    void BndEvt__DecisionDialogWidgetBP_K2Node_ComponentBoundEvent_15_DecisionDecline__DelegateSignature();
    void BndEvt__ResetButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void OnGlobalSettingsApply();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void Construct();
    void OnPressedReset();
    void OnPressedSelect();
    void BndEvt__OptionsSlider_K2Node_ComponentBoundEvent_1_OnOptionChanged__DelegateSignature();
    void BndEvt__OptionsSlider_K2Node_ComponentBoundEvent_3_OnFocussed__DelegateSignature();
    void BndEvt__DennisOptionPicker_K2Node_ComponentBoundEvent_8_OnOptionChanged__DelegateSignature(int32 ActiveIndex);
    void BndEvt__DennisOptionPicker_K2Node_ComponentBoundEvent_9_OnFocussed__DelegateSignature();
    void BndEvt__SandstormOptionsPicker_K2Node_ComponentBoundEvent_16_OnOptionChanged__DelegateSignature(int32 ActiveIndex);
    void BndEvt__SandstormOptionsPicker_K2Node_ComponentBoundEvent_17_OnFocussed__DelegateSignature();
    void BndEvt__SandstormOptionsPicker_1_K2Node_ComponentBoundEvent_18_OnOptionChanged__DelegateSignature(int32 ActiveIndex);
    void BndEvt__SandstormOptionsPicker_1_K2Node_ComponentBoundEvent_19_OnFocussed__DelegateSignature();
    void BndEvt__CameraWobble_K2Node_ComponentBoundEvent_21_OnOptionChanged__DelegateSignature(int32 ActiveIndex);
    void BndEvt__CameraWobble_K2Node_ComponentBoundEvent_22_OnFocussed__DelegateSignature();
    void BndEvt__GameSettingsWidgetBP_ElvisPicker_K2Node_ComponentBoundEvent_23_OnOptionChanged__DelegateSignature(int32 ActiveIndex);
    void BndEvt__GameSettingsWidgetBP_ElvisPicker_K2Node_ComponentBoundEvent_24_OnFocussed__DelegateSignature();
    void BndEvt__GameSettingsWidgetBP_Christmas_K2Node_ComponentBoundEvent_25_OnOptionChanged__DelegateSignature(int32 ActiveIndex);
    void BndEvt__GameSettingsWidgetBP_Christmas_K2Node_ComponentBoundEvent_26_OnFocussed__DelegateSignature();
    void BndEvt__GameSettingsWidgetBP_ChristmasHats_K2Node_ComponentBoundEvent_27_OnOptionChanged__DelegateSignature(int32 ActiveIndex);
    void BndEvt__GameSettingsWidgetBP_ChristmasHats_K2Node_ComponentBoundEvent_28_OnFocussed__DelegateSignature();
    void BndEvt__GameSettingsWidgetBP_WarehouseStealingPicker_K2Node_ComponentBoundEvent_5_OnOptionChanged__DelegateSignature(int32 ActiveIndex);
    void BndEvt__GameSettingsWidgetBP_WarehouseStealingPicker_K2Node_ComponentBoundEvent_7_OnFocussed__DelegateSignature();
    void BndEvt__GameSettingsWidgetBP_LateGameChallengesPicker_K2Node_ComponentBoundEvent_10_OnOptionChanged__DelegateSignature(int32 ActiveIndex);
    void BndEvt__GameSettingsWidgetBP_LateGameChallengesPicker_K2Node_ComponentBoundEvent_12_OnFocussed__DelegateSignature();
    void BndEvt__GameSettingsWidgetBP_StreamerMode_K2Node_ComponentBoundEvent_14_OnOptionChanged__DelegateSignature(int32 ActiveIndex);
    void BndEvt__GameSettingsWidgetBP_StreamerMode_K2Node_ComponentBoundEvent_20_OnFocussed__DelegateSignature();
    void BndEvt__GameSettingsWidgetBP_JunkyardCustomizationEffects_K2Node_ComponentBoundEvent_29_OnFocussed__DelegateSignature();
    void BndEvt__GameSettingsWidgetBP_JunkyardCustomizationMusic_K2Node_ComponentBoundEvent_30_OnFocussed__DelegateSignature();
    void BndEvt__GameSettingsWidgetBP_JunkyardCustomizationMusic_K2Node_ComponentBoundEvent_31_OnOptionChanged__DelegateSignature(int32 ActiveIndex);
    void BndEvt__GameSettingsWidgetBP_JunkyardCustomizationEffects_K2Node_ComponentBoundEvent_32_OnOptionChanged__DelegateSignature(int32 ActiveIndex);
    void BndEvt__GameSettingsWidgetBP_SharkOptionPickerTidalWave_K2Node_ComponentBoundEvent_33_OnOptionChanged__DelegateSignature(int32 ActiveIndex);
    void BndEvt__GameSettingsWidgetBP_SharkOptionPickerTidalWave_K2Node_ComponentBoundEvent_34_OnFocussed__DelegateSignature();
    void BndEvt__GameSettingsWidgetBP_TimeConventionPicker_K2Node_ComponentBoundEvent_35_OnOptionChanged__DelegateSignature(int32 ActiveIndex);
    void BndEvt__GameSettingsWidgetBP_TimeConventionPicker_K2Node_ComponentBoundEvent_36_OnFocussed__DelegateSignature();
    void BndEvt__GameSettingsWidgetBP_CashRegisterSoundActive_K2Node_ComponentBoundEvent_37_OnFocussed__DelegateSignature();
    void BndEvt__GameSettingsWidgetBP_CashRegisterSoundActive_K2Node_ComponentBoundEvent_38_OnOptionChanged__DelegateSignature(int32 ActiveIndex);
    void BndEvt__GameSettingsWidgetBP_VipOptionPicker_K2Node_ComponentBoundEvent_39_OnOptionChanged__DelegateSignature(int32 ActiveIndex);
    void BndEvt__GameSettingsWidgetBP_VipOptionPicker_K2Node_ComponentBoundEvent_40_OnFocussed__DelegateSignature();
    void ExecuteUbergraph_GameSettingsWidgetBP(int32 EntryPoint);
    void OnClickedBack__DelegateSignature();
}; // Size: 0x74D

#endif
