#ifndef UE4SS_SDK_ConfirmAirplaneRemove_WBP_HPP
#define UE4SS_SDK_ConfirmAirplaneRemove_WBP_HPP

class UConfirmAirplaneRemove_WBP_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* OnHovConfirm;                                             // 0x0268 (size: 0x8)
    class UWidgetAnimation* OnHovCancel;                                              // 0x0270 (size: 0x8)
    class UWidgetAnimation* ConstructAnim;                                            // 0x0278 (size: 0x8)
    class UImage* Cancel_ICON;                                                        // 0x0280 (size: 0x8)
    class UOverlay* Cancel_Overlay;                                                   // 0x0288 (size: 0x8)
    class UCanvasPanel* Canvas_Panel_Area;                                            // 0x0290 (size: 0x8)
    class UImage* Confirm_ICON;                                                       // 0x0298 (size: 0x8)
    class UOverlay* Confirm_Overlay;                                                  // 0x02A0 (size: 0x8)
    class UTextBlock* DescriptionText;                                                // 0x02A8 (size: 0x8)
    class UImage* Image;                                                              // 0x02B0 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02B8 (size: 0x8)
    class UImage* Image_279;                                                          // 0x02C0 (size: 0x8)
    class UDragoButton* No;                                                           // 0x02C8 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_Confirm;                                        // 0x02D0 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_Confirm_1;                                      // 0x02D8 (size: 0x8)
    class UDragoButton* Yes;                                                          // 0x02E0 (size: 0x8)
    class UWBP_DepartureScreenSinglePosition_C* DepartureSinglePositionREF;           // 0x02E8 (size: 0x8)
    int32 RunwayIndex;                                                                // 0x02F0 (size: 0x4)
    bool NewVar_1;                                                                    // 0x02F4 (size: 0x1)
    int32 AirplaneIndex;                                                              // 0x02F8 (size: 0x4)
    bool LandedPlane;                                                                 // 0x02FC (size: 0x1)

    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void BndEvt__No_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void BndEvt__Yes_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Yes_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__No_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__No_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void CustomEvent_0();
    void CustomEvent_1();
    void ClickYes();
    void Destruct();
    void OnClickNo();
    void BndEvt__Yes_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_ConfirmAirplaneRemove_WBP(int32 EntryPoint);
}; // Size: 0x2FD

#endif
