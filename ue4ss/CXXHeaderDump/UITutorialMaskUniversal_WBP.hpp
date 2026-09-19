#ifndef UE4SS_SDK_UITutorialMaskUniversal_WBP_HPP
#define UE4SS_SDK_UITutorialMaskUniversal_WBP_HPP

class UUITutorialMaskUniversal_WBP_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* ShopTip;                                                  // 0x0268 (size: 0x8)
    class UButton* Button_69;                                                         // 0x0270 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0278 (size: 0x8)
    class UHorizontalBox* GamePadHint;                                                // 0x0280 (size: 0x8)
    class UImage* Image;                                                              // 0x0288 (size: 0x8)
    class UImage* Image_24;                                                           // 0x0290 (size: 0x8)
    class UImage* Image_75;                                                           // 0x0298 (size: 0x8)
    class UImage* Image_143;                                                          // 0x02A0 (size: 0x8)
    class UOverlay* Overlay_Tip;                                                      // 0x02A8 (size: 0x8)
    class UTextBlock* TextBlock;                                                      // 0x02B0 (size: 0x8)
    class UTextBlock* TextBlock_65;                                                   // 0x02B8 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_ButtonLeft;                                     // 0x02C0 (size: 0x8)
    int32 ViewportX;                                                                  // 0x02C8 (size: 0x4)
    int32 ViewportY;                                                                  // 0x02CC (size: 0x4)
    float RadiusTo;                                                                   // 0x02D0 (size: 0x4)
    class UWidget* Widget;                                                            // 0x02D8 (size: 0x8)
    float TipPositionX;                                                               // 0x02E0 (size: 0x4)
    float TipPositionY;                                                               // 0x02E4 (size: 0x4)
    FUITutorialMaskUniversal_WBP_CNextTut NextTut;                                    // 0x02E8 (size: 0x10)
    void NextTut();
    FText In Text;                                                                    // 0x02F8 (size: 0x18)
    FText Title;                                                                      // 0x0310 (size: 0x18)
    float LocalTopLeft;                                                               // 0x0328 (size: 0x4)
    float RadiusModification;                                                         // 0x032C (size: 0x4)
    float ADditionalYOffset;                                                          // 0x0330 (size: 0x4)
    float ADditionalXOffset;                                                          // 0x0334 (size: 0x4)
    bool ForceTipToCenterOnScreen;                                                    // 0x0338 (size: 0x1)
    float XOffsetOnBorder;                                                            // 0x033C (size: 0x4)
    float YOffsetOnBorder;                                                            // 0x0340 (size: 0x4)
    bool IsClickOnlyTutorial;                                                         // 0x0344 (size: 0x1)
    bool ConsumeFocus;                                                                // 0x0345 (size: 0x1)
    float ViewportX_Offset;                                                           // 0x0348 (size: 0x4)
    float ViewportY_Offset;                                                           // 0x034C (size: 0x4)

    void SetTipPositionOnCanvas();
    void CalculateTipPosition();
    void SetupMaterialMaskMask();
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void Construct();
    void BndEvt__UITutorialMask_WBP_Button_69_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ChagneInputDevice(bool bNewGamepadMode);
    void GamePadProgressTutorial();
    void ExecuteUbergraph_UITutorialMaskUniversal_WBP(int32 EntryPoint);
    void NextTut__DelegateSignature();
}; // Size: 0x350

#endif
