#ifndef UE4SS_SDK_WBP_ChangeCampSpotNamePopup_HPP
#define UE4SS_SDK_WBP_ChangeCampSpotNamePopup_HPP

class UWBP_ChangeCampSpotNamePopup_C : public UGSSBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    class UWidgetAnimation* CharacterCountShake;                                      // 0x0288 (size: 0x8)
    class UWidgetAnimation* OnHoverConfirm;                                           // 0x0290 (size: 0x8)
    class UWidgetAnimation* OnHoverCancel;                                            // 0x0298 (size: 0x8)
    class UWidgetAnimation* ConstructAnim;                                            // 0x02A0 (size: 0x8)
    class UEditableTextBox* CampNameTextBox;                                          // 0x02A8 (size: 0x8)
    class UTextBlock* CharactersCountText;                                            // 0x02B0 (size: 0x8)
    class UOverlay* Confirm_Overlay;                                                  // 0x02B8 (size: 0x8)
    class UDragoButton* NoButton;                                                     // 0x02C0 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_Cancel;                                         // 0x02C8 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_Confirm;                                        // 0x02D0 (size: 0x8)
    class UDragoButton* YesButton;                                                    // 0x02D8 (size: 0x8)
    FWBP_ChangeCampSpotNamePopup_COnYesClicked OnYesClicked;                          // 0x02E0 (size: 0x10)
    void OnYesClicked();
    FWBP_ChangeCampSpotNamePopup_COnNoClicked OnNoClicked;                            // 0x02F0 (size: 0x10)
    void OnNoClicked();
    class ARVCampSpot* CampSpot;                                                      // 0x0300 (size: 0x8)
    FString DefaultName;                                                              // 0x0308 (size: 0x10)
    int32 MaxNameLength;                                                              // 0x0318 (size: 0x4)
    TArray<FString> Alphabet;                                                         // 0x0320 (size: 0x10)
    TArray<FString> CorrectedTextArray;                                               // 0x0330 (size: 0x10)
    bool WasApplied;                                                                  // 0x0340 (size: 0x1)
    bool WasTextValid;                                                                // 0x0341 (size: 0x1)

    void Construct();
    void Init(class ARVCampSpot* CampSpot, FString DefaultName, const TArray<FString>& Alphabet);
    void BndEvt__WBP_ChangeCampSpotNamePopup_CampNameTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__WBP_ChangeCampSpotNamePopup_CampNameTextBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void Apply();
    void BndEvt__WBP_ChangeCampSpotNamePopup_NoButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__WBP_ChangeCampSpotNamePopup_YesButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void Exit();
    void BndEvt__WBP_RefreshPopup_Yes_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_RefreshPopup_Yes_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_RefreshPopup_No_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_RefreshPopup_No_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature();
    void OnDefaultEscape();
    void ExecuteUbergraph_WBP_ChangeCampSpotNamePopup(int32 EntryPoint);
    void OnNoClicked__DelegateSignature();
    void OnYesClicked__DelegateSignature();
}; // Size: 0x342

#endif
