#ifndef UE4SS_SDK_WBP_TopButton_HPP
#define UE4SS_SDK_WBP_TopButton_HPP

class UWBP_TopButton_C : public UPC_TopMenuButton
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B8 (size: 0x8)
    class UWidgetAnimation* Animation;                                                // 0x02C0 (size: 0x8)
    class UCanvasPanel* AnimationAndHoverCanvas;                                      // 0x02C8 (size: 0x8)
    class UImage* hover_BeginState;                                                   // 0x02D0 (size: 0x8)
    class UImage* hover_bg;                                                           // 0x02D8 (size: 0x8)
    bool Is Active;                                                                   // 0x02E0 (size: 0x1)

    void BndEvt__Menu_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Menu_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void SetSelectedButton(bool bIsActive);
    void SetHovered(bool bIsHovered);
    void GamePadHover();
    void ExecuteUbergraph_WBP_TopButton(int32 EntryPoint);
}; // Size: 0x2E1

#endif
