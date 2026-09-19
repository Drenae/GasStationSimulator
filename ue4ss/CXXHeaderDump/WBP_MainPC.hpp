#ifndef UE4SS_SDK_WBP_MainPC_HPP
#define UE4SS_SDK_WBP_MainPC_HPP

class UWBP_MainPC_C : public UMainPC
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02F8 (size: 0x8)
    class UWidgetAnimation* FadeIn;                                                   // 0x0300 (size: 0x8)
    class UWidgetAnimation* FadeOut;                                                  // 0x0308 (size: 0x8)
    class UImage* Image_22;                                                           // 0x0310 (size: 0x8)
    class UMoney_Widget_WBP_C* Money_Widget_WBP;                                      // 0x0318 (size: 0x8)
    class UPC_ExitButton_WBP_C* PC_ExitButton_WBP;                                    // 0x0320 (size: 0x8)
    class UWBP_GamepadHintsBlock_C* WBP_GamepadHints;                                 // 0x0328 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_LeftShoulder;                                   // 0x0330 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_RightButton;                                    // 0x0338 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_Up_RightShoulder;                               // 0x0340 (size: 0x8)
    bool FromRight;                                                                   // 0x0348 (size: 0x1)
    int32 TopMenuIndex;                                                               // 0x034C (size: 0x4)
    bool IsAnyChildEnabled;                                                           // 0x0350 (size: 0x1)

    void CreateAdditionalHints(TMap<FKey, FText> Hints);
    void SetAdditionalHintsVisibility(bool ShowAdditionalHints);
    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void HintsVisibility(bool Visible);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void TopMenuGamePadNavigation(FKeyEvent& Input, bool& ClickedOther);
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void Finished_66CB033E4C18546B6C5D9A95ABC4FEB6();
    void CustomFadeOut();
    void TopMenuHandle(FKeyEvent KeyEvent);
    void GamePadExitButton();
    void Construct();
    void Destruct();
    void CustomEvent_0();
    void CustomEscape();
    void OnDeviceChange(bool bNewGamepadMode);
    void ExecuteUbergraph_WBP_MainPC(int32 EntryPoint);
}; // Size: 0x351

#endif
