#ifndef UE4SS_SDK_ControlsOverviewWidgetBP_HPP
#define UE4SS_SDK_ControlsOverviewWidgetBP_HPP

class UControlsOverviewWidgetBP_C : public UInteractableMenuWidgetBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0600 (size: 0x8)
    class UNavigationKeyButton_C* ApplyButton;                                        // 0x0608 (size: 0x8)
    class UNavigationKeyButton_C* BackButton;                                         // 0x0610 (size: 0x8)
    class UVerticalBox* ControlsVerticalBox;                                          // 0x0618 (size: 0x8)
    class UDecisionDialogWidgetBP_C* DecisionDialogWidgetBP;                          // 0x0620 (size: 0x8)
    class UOptionsButton_C* GamepadBindingsOptionsButton;                             // 0x0628 (size: 0x8)
    class UImage* Image_96;                                                           // 0x0630 (size: 0x8)
    class UOptionsPicker_C* InspectModeToggleOptionsPicker;                           // 0x0638 (size: 0x8)
    class UOptionsPicker_C* InvertXOptionsPicker;                                     // 0x0640 (size: 0x8)
    class UOptionsPicker_C* InvertYOptionsPicker;                                     // 0x0648 (size: 0x8)
    class UOptionsButton_C* KeyBindingsOptionsButton;                                 // 0x0650 (size: 0x8)
    class UBorder* LeftBorder;                                                        // 0x0658 (size: 0x8)
    class UBorder* LeftTitleBorder;                                                   // 0x0660 (size: 0x8)
    class UCanvasPanel* MenuCanvasPanel;                                              // 0x0668 (size: 0x8)
    class UTextBlock* MenuTitleText;                                                  // 0x0670 (size: 0x8)
    class UNavigationKeyButton_C* ResetButton;                                        // 0x0678 (size: 0x8)
    class UBorder* RightBorder;                                                       // 0x0680 (size: 0x8)
    class UBorder* RightTitleBorder;                                                  // 0x0688 (size: 0x8)
    class UOptionsPicker_C* RumbleOptionsPicker;                                      // 0x0690 (size: 0x8)
    class UTextBlock* SelectedOptionDescription;                                      // 0x0698 (size: 0x8)
    class UTextBlock* SelectedOptionName;                                             // 0x06A0 (size: 0x8)
    class UOptionsPicker_C* SprintToggleOptionPicker;                                 // 0x06A8 (size: 0x8)
    class UOptionsSlider_C* XSensitivityOptionsSlider;                                // 0x06B0 (size: 0x8)
    class UOptionsSlider_C* YSensitivityOptionsSlider;                                // 0x06B8 (size: 0x8)
    class UControlsSettingsContainerWidgetBP_C* ControlsSettingsWidgetBP;             // 0x06C0 (size: 0x8)

    void RumblePreview();
    void RumbleOptionChanged();
    void SetGlobalSettings();
    void UpdateDescription(class UInteractableUserWidget_C* InWidget);
    void ShowDecisionDialog();
    void OnNavigationEnter(class UInteractableMenuWidgetBP_C* NavigateFromMenu, bool bIsGamepadBeingUsed);
    void OnNavigationExit(class UInteractableMenuWidgetBP_C* NavigateToMenu, class UInteractableMenuWidgetBP_C* NavigateFromMenu);
    void BndEvt__InvertXOptionsPicker_K2Node_ComponentBoundEvent_1_OnOptionChanged__DelegateSignature(int32 ActiveIndex);
    void BndEvt__InvertYOptionsPicker_K2Node_ComponentBoundEvent_2_OnOptionChanged__DelegateSignature(int32 ActiveIndex);
    void BndEvt__XSensitivityOptionsSlider_K2Node_ComponentBoundEvent_3_OnOptionChanged__DelegateSignature();
    void BndEvt__YSensitivityOptionsSlider_K2Node_ComponentBoundEvent_4_OnOptionChanged__DelegateSignature();
    void BndEvt__KeyBindingsOptionsButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
    void BndEvt__GamepadBindingsOptionsButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
    void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void OnPressedBack();
    void BndEvt__InvertXOptionsPicker_K2Node_ComponentBoundEvent_7_OnFocussed__DelegateSignature();
    void BndEvt__InvertYOptionsPicker_K2Node_ComponentBoundEvent_8_OnFocussed__DelegateSignature();
    void BndEvt__XSensitivityOptionsSlider_K2Node_ComponentBoundEvent_9_OnFocussed__DelegateSignature();
    void BndEvt__YSensitivityOptionsSlider_K2Node_ComponentBoundEvent_10_OnFocussed__DelegateSignature();
    void BndEvt__KeyBindingsOptionsButton_K2Node_ComponentBoundEvent_11_OnFocussed__DelegateSignature();
    void BndEvt__GamepadBindingsOptionsButton_K2Node_ComponentBoundEvent_12_OnFocussed__DelegateSignature();
    void BndEvt__ApplyButton_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature();
    void BndEvt__ResetButton_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature();
    void OnGlobalSettingsApply();
    void BndEvt__DecisionDialogWidgetBP_K2Node_ComponentBoundEvent_15_DecisionAccept__DelegateSignature();
    void BndEvt__DecisionDialogWidgetBP_K2Node_ComponentBoundEvent_16_DecisionDecline__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void OnPressedReset();
    void OnPressedSelect();
    void BndEvt__RumbleOptionsPicker_K2Node_ComponentBoundEvent_17_OnOptionChanged__DelegateSignature(int32 ActiveIndex);
    void BndEvt__RumbleOptionsPicker_K2Node_ComponentBoundEvent_19_OnFocussed__DelegateSignature();
    void BndEvt__DisableController_K2Node_ComponentBoundEvent_18_OnOptionChanged__DelegateSignature(int32 ActiveIndex);
    void BndEvt__DisableController_K2Node_ComponentBoundEvent_20_OnFocussed__DelegateSignature();
    void BndEvt__ControlsOverviewWidgetBP_InspectModeToggleOptionsPicker_K2Node_ComponentBoundEvent_21_OnFocussed__DelegateSignature();
    void BndEvt__ControlsOverviewWidgetBP_InspectModeToggleOptionsPicker_K2Node_ComponentBoundEvent_22_OnOptionChanged__DelegateSignature(int32 ActiveIndex);
    void ExecuteUbergraph_ControlsOverviewWidgetBP(int32 EntryPoint);
}; // Size: 0x6C8

#endif
