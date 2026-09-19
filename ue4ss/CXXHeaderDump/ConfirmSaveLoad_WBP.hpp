#ifndef UE4SS_SDK_ConfirmSaveLoad_WBP_HPP
#define UE4SS_SDK_ConfirmSaveLoad_WBP_HPP

class UConfirmSaveLoad_WBP_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* OnHovConfirm;                                             // 0x0268 (size: 0x8)
    class UWidgetAnimation* OnHovCancel;                                              // 0x0270 (size: 0x8)
    class UWidgetAnimation* ConstructAnim;                                            // 0x0278 (size: 0x8)
    class UImage* Cancel_ICON_PAD;                                                    // 0x0280 (size: 0x8)
    class UImage* Cancel_ICON_PC;                                                     // 0x0288 (size: 0x8)
    class UOverlay* Cancel_Overlay;                                                   // 0x0290 (size: 0x8)
    class UCanvasPanel* Canvas_Panel_Area;                                            // 0x0298 (size: 0x8)
    class UImage* Confirm_ICON_PAD;                                                   // 0x02A0 (size: 0x8)
    class UImage* Confirm_ICON_PC;                                                    // 0x02A8 (size: 0x8)
    class UOverlay* Confirm_Overlay;                                                  // 0x02B0 (size: 0x8)
    class UTextBlock* DescriptionText;                                                // 0x02B8 (size: 0x8)
    class UImage* Image;                                                              // 0x02C0 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02C8 (size: 0x8)
    class UImage* Image_279;                                                          // 0x02D0 (size: 0x8)
    class UDragoButton* No;                                                           // 0x02D8 (size: 0x8)
    class UDragoButton* Yes;                                                          // 0x02E0 (size: 0x8)
    FSavedSlotStruct SaveStruct;                                                      // 0x02E8 (size: 0xC8)
    class UWBP_SaveScreen_C* SaveSlotsList;                                           // 0x03B0 (size: 0x8)
    bool IsRemoveFunction;                                                            // 0x03B8 (size: 0x1)
    FConfirmSaveLoad_WBP_COnSaveDeleted OnSaveDeleted;                                // 0x03C0 (size: 0x10)
    void OnSaveDeleted();
    bool Is Gamepad Beeing Used;                                                      // 0x03D0 (size: 0x1)
    class UWidget* Parent;                                                            // 0x03D8 (size: 0x8)

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseMove(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void ChangeVisiblityKeyboardIcons(ESlateVisibility InVisibility);
    void ChangeVisiblityPadIcons(ESlateVisibility InVisibility);
    void BndEvt__Yes_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__No_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void BndEvt__Yes_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Yes_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__No_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__No_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void ClickYes();
    void ClickNo();
    void OnChangeInputDeviceUI(bool ForceChange, bool IsGamepadBeeingUsed);
    void ExecuteUbergraph_ConfirmSaveLoad_WBP(int32 EntryPoint);
    void OnSaveDeleted__DelegateSignature();
}; // Size: 0x3E0

#endif
