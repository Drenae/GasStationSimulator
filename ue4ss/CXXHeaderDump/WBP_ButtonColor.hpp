#ifndef UE4SS_SDK_WBP_ButtonColor_HPP
#define UE4SS_SDK_WBP_ButtonColor_HPP

class UWBP_ButtonColor_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* OnHovered;                                                // 0x0268 (size: 0x8)
    class UDragoButton* Color_Action_Button;                                          // 0x0270 (size: 0x8)
    class UImage* Colour_IMG;                                                         // 0x0278 (size: 0x8)
    class UImage* Frame_IMG;                                                          // 0x0280 (size: 0x8)
    class UOverlay* MainOverlay;                                                      // 0x0288 (size: 0x8)
    class UImage* Metalic;                                                            // 0x0290 (size: 0x8)
    FWBP_ButtonColor_CClicked Clicked;                                                // 0x0298 (size: 0x10)
    void Clicked(FLinearColor NewParam, FPaintingColor PaintingColor, class UWBP_ButtonColor_C* ButtonColor);
    FLinearColor SetColor;                                                            // 0x02A8 (size: 0x10)
    bool IsBlocked;                                                                   // 0x02B8 (size: 0x1)
    FPaintingColor ColorStructure;                                                    // 0x02C0 (size: 0x50)

    void SetHovered(bool IsHovered);
    void Construct();
    void BndEvt__Button_111_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Color_Action_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Color_Action_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_ButtonColor(int32 EntryPoint);
    void Clicked__DelegateSignature(FLinearColor NewParam, FPaintingColor PaintingColor, class UWBP_ButtonColor_C* ButtonColor);
}; // Size: 0x310

#endif
