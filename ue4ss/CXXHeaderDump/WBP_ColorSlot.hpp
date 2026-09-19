#ifndef UE4SS_SDK_WBP_ColorSlot_HPP
#define UE4SS_SDK_WBP_ColorSlot_HPP

class UWBP_ColorSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* OnHovered;                                                // 0x0268 (size: 0x8)
    class UDragoButton* Color_Action_Button;                                          // 0x0270 (size: 0x8)
    class UImage* Colour_IMG;                                                         // 0x0278 (size: 0x8)
    class UImage* Frame_IMG;                                                          // 0x0280 (size: 0x8)
    class UGSSButton* GSSButton_62;                                                   // 0x0288 (size: 0x8)
    class UImage* Image_44;                                                           // 0x0290 (size: 0x8)
    class UOverlay* MainOverlay;                                                      // 0x0298 (size: 0x8)
    class UImage* Metalic;                                                            // 0x02A0 (size: 0x8)
    FWBP_ColorSlot_COnColorCLicked OnColorCLicked;                                    // 0x02A8 (size: 0x10)
    void OnColorCLicked(FLinearColor Color);
    FLinearColor Color;                                                               // 0x02B8 (size: 0x10)
    class USoundBase* OnHooverSound;                                                  // 0x02C8 (size: 0x8)
    class USoundBase* OnClickSound;                                                   // 0x02D0 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void BndEvt__WBP_ColorSlot_GSSButton_62_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__WBP_ColorSlot_GSSButton_62_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_ColorSlot_GSSButton_62_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void GamePadHover(bool Active);
    void GamePadColorClick();
    void ExecuteUbergraph_WBP_ColorSlot(int32 EntryPoint);
    void OnColorCLicked__DelegateSignature(FLinearColor Color);
}; // Size: 0x2D8

#endif
