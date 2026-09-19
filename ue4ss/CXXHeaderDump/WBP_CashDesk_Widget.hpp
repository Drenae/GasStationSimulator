#ifndef UE4SS_SDK_WBP_CashDesk_Widget_HPP
#define UE4SS_SDK_WBP_CashDesk_Widget_HPP

class UWBP_CashDesk_Widget_C : public UGSSBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    class UTextBlock* CategoryTitle_TXT;                                              // 0x0288 (size: 0x8)
    class UTextBlock* CategoryTitle_TXT_1;                                            // 0x0290 (size: 0x8)
    class UImage* GamePadAccept_IMG;                                                  // 0x0298 (size: 0x8)
    class UHorizontalBox* HorizontalBox_63;                                           // 0x02A0 (size: 0x8)
    class UImage* Image;                                                              // 0x02A8 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02B0 (size: 0x8)
    class UImage* Image_2;                                                            // 0x02B8 (size: 0x8)
    class UImage* Image_8;                                                            // 0x02C0 (size: 0x8)
    class UImage* Image_10;                                                           // 0x02C8 (size: 0x8)
    class UImage* Image_34;                                                           // 0x02D0 (size: 0x8)
    class UImage* Image_76;                                                           // 0x02D8 (size: 0x8)
    class UOverlay* PreviewSegment_2;                                                 // 0x02E0 (size: 0x8)
    class UWBP_Button_Cash_Edit_C* WBP_Button_Cash_Edit;                              // 0x02E8 (size: 0x8)
    class UWBP_CashEditButton_C* WBP_CashEditButton;                                  // 0x02F0 (size: 0x8)
    class UWBP_CashEditButton_C* WBP_CashEditButton_1;                                // 0x02F8 (size: 0x8)
    class UWBP_CashEditButton_C* WBP_CashEditButton_2;                                // 0x0300 (size: 0x8)
    class UWBP_ColorSlot_C* WBP_ColorSlot;                                            // 0x0308 (size: 0x8)
    class UWBP_ColorSlot_C* WBP_ColorSlot_1;                                          // 0x0310 (size: 0x8)
    class UWBP_ColorSlot_C* WBP_ColorSlot_2;                                          // 0x0318 (size: 0x8)
    class UWBP_ColorSlot_C* WBP_ColorSlot_3;                                          // 0x0320 (size: 0x8)
    class UWBP_ColorSlot_C* WBP_ColorSlot_4;                                          // 0x0328 (size: 0x8)
    class UWBP_ColorSlot_C* WBP_ColorSlot_5;                                          // 0x0330 (size: 0x8)
    class UWBP_ColorSlot_C* WBP_ColorSlot_6;                                          // 0x0338 (size: 0x8)
    class UWBP_ColorSlot_C* WBP_ColorSlot_7;                                          // 0x0340 (size: 0x8)
    class UWBP_ColorSlot_C* WBP_ColorSlot_8;                                          // 0x0348 (size: 0x8)
    class UWBP_ColorSlot_C* WBP_ColorSlot_9;                                          // 0x0350 (size: 0x8)
    class UWBP_ColorSlot_C* WBP_ColorSlot_10;                                         // 0x0358 (size: 0x8)
    class UWBP_ColorSlot_C* WBP_ColorSlot_11;                                         // 0x0360 (size: 0x8)
    class UWrapBox* WrapBox_1;                                                        // 0x0368 (size: 0x8)
    class ACashShop* CashShopRef;                                                     // 0x0370 (size: 0x8)
    FLinearColor SelectedColor;                                                       // 0x0378 (size: 0x10)
    int32 MeshIndex;                                                                  // 0x0388 (size: 0x4)
    class USoundBase* OnClickSound;                                                   // 0x0390 (size: 0x8)
    int32 GamePadCurrentSegment;                                                      // 0x0398 (size: 0x4)
    int32 GamePadCurrentCashRegister;                                                 // 0x039C (size: 0x4)
    int32 GamePadCurrentColor;                                                        // 0x03A0 (size: 0x4)
    int32 GamePadColorsRowSizeIndex;                                                  // 0x03A4 (size: 0x4)

    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void OnMeshChanged(int32 MeshIndex, class UWBP_CashEditButton_C* CashWidgetRef);
    void GetSelectedColor(FLinearColor& SelectedColor);
    void OnColorSelected(FLinearColor Color);
    void CustomEscape();
    void Destruct();
    void Construct();
    void BndEvt__WBP_CashDesk_Widget_WBP_Button_Cash_Edit_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void BndEvt__WBP_CashDesk_Widget_WBP_CashEditButton_K2Node_ComponentBoundEvent_0_OnCashClicked__DelegateSignature(int32 MeshIndex, class UWBP_CashEditButton_C* Widget);
    void BndEvt__WBP_CashDesk_Widget_WBP_CashEditButton_1_K2Node_ComponentBoundEvent_2_OnCashClicked__DelegateSignature(int32 MeshIndex, class UWBP_CashEditButton_C* Widget);
    void BndEvt__WBP_CashDesk_Widget_WBP_CashEditButton_2_K2Node_ComponentBoundEvent_3_OnCashClicked__DelegateSignature(int32 MeshIndex, class UWBP_CashEditButton_C* Widget);
    void GamePadClickAccept();
    void ExecuteUbergraph_WBP_CashDesk_Widget(int32 EntryPoint);
}; // Size: 0x3A8

#endif
