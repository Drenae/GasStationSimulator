#ifndef UE4SS_SDK_GraphicChanges_PopUp_HPP
#define UE4SS_SDK_GraphicChanges_PopUp_HPP

class UGraphicChanges_PopUp_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* OnHovConfirm;                                             // 0x0268 (size: 0x8)
    class UWidgetAnimation* ConstructAnim;                                            // 0x0270 (size: 0x8)
    class UImage* Cancel_ICON_PAD;                                                    // 0x0278 (size: 0x8)
    class UCanvasPanel* Canvas_Panel_Area;                                            // 0x0280 (size: 0x8)
    class UImage* Confirm_ICON;                                                       // 0x0288 (size: 0x8)
    class UOverlay* Confirm_Overlay;                                                  // 0x0290 (size: 0x8)
    class UTextBlock* DescriptionText;                                                // 0x0298 (size: 0x8)
    class UImage* Image;                                                              // 0x02A0 (size: 0x8)
    class UImage* Image_279;                                                          // 0x02A8 (size: 0x8)
    class UDragoButton* Yes;                                                          // 0x02B0 (size: 0x8)
    FGraphicChanges_PopUp_COnSaveDeleted OnSaveDeleted;                               // 0x02B8 (size: 0x10)
    void OnSaveDeleted();
    class UInteractableMenuWidgetBP_C* Parent;                                        // 0x02C8 (size: 0x8)

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void BndEvt__Yes_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void BndEvt__Yes_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Yes_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void ClickYes();
    void ExecuteUbergraph_GraphicChanges_PopUp(int32 EntryPoint);
    void OnSaveDeleted__DelegateSignature();
}; // Size: 0x2D0

#endif
