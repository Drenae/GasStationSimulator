#ifndef UE4SS_SDK_DecisionDialogWidgetBP_HPP
#define UE4SS_SDK_DecisionDialogWidgetBP_HPP

class UDecisionDialogWidgetBP_C : public UInteractableMenuWidgetBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0600 (size: 0x8)
    class UBorder* BackgroundBorder;                                                  // 0x0608 (size: 0x8)
    class UOverlay* Cancel_Overlay;                                                   // 0x0610 (size: 0x8)
    class UImage* CircularGradient;                                                   // 0x0618 (size: 0x8)
    class UOverlay* Confirm_Overlay;                                                  // 0x0620 (size: 0x8)
    class UDecisionButton_C* DecisionButton_No;                                       // 0x0628 (size: 0x8)
    class UDecisionButton_C* DecisionButton_Yes;                                      // 0x0630 (size: 0x8)
    class UTextBlock* HeadlineTitleText;                                              // 0x0638 (size: 0x8)
    class UImage* Image;                                                              // 0x0640 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0648 (size: 0x8)
    class UImage* Image_279;                                                          // 0x0650 (size: 0x8)
    class UCanvasPanel* MenuCanvasPanel;                                              // 0x0658 (size: 0x8)
    class UBorder* SeparatorBorder;                                                   // 0x0660 (size: 0x8)
    class UTextBlock* TextBody;                                                       // 0x0668 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_Confirm;                                        // 0x0670 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_Confirm_1;                                      // 0x0678 (size: 0x8)
    FDecisionDialogWidgetBP_CDecisionAccept DecisionAccept;                           // 0x0680 (size: 0x10)
    void DecisionAccept();
    FText HeaderText;                                                                 // 0x0690 (size: 0x18)
    FText BodyText;                                                                   // 0x06A8 (size: 0x18)
    FText AcceptText;                                                                 // 0x06C0 (size: 0x18)
    FText DeclineText;                                                                // 0x06D8 (size: 0x18)
    FDecisionDialogWidgetBP_CDecisionDecline DecisionDecline;                         // 0x06F0 (size: 0x10)
    void DecisionDecline();
    bool bDecisionDialogIsReady;                                                      // 0x0700 (size: 0x1)

    void SetGlobalSettings();
    void OnNavigationEnter(class UInteractableMenuWidgetBP_C* NavigateFromMenu, bool bIsGamepadBeingUsed);
    void OnNavigationExit(class UInteractableMenuWidgetBP_C* NavigateToMenu, class UInteractableMenuWidgetBP_C* NavigateFromMenu);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__DecisionButton_Yes_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void BndEvt__DecisionButton_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void Construct();
    void OnGlobalSettingsApply();
    void OnChangeInputDeviceMenuUI(bool bIsGamepadBeingUsed);
    void OnPressedSelect();
    void OnPressedBack();
    void ExecuteUbergraph_DecisionDialogWidgetBP(int32 EntryPoint);
    void DecisionDecline__DelegateSignature();
    void DecisionAccept__DelegateSignature();
}; // Size: 0x701

#endif
