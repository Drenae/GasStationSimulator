#ifndef UE4SS_SDK_WBP_PaintBrush_HPP
#define UE4SS_SDK_WBP_PaintBrush_HPP

class UWBP_PaintBrush_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UVerticalBox* ControllsHorizontal;                                          // 0x0268 (size: 0x8)
    class UWBP_KeyBindedAction_C* F_1;                                                // 0x0270 (size: 0x8)
    class UImage* Image_278;                                                          // 0x0278 (size: 0x8)
    class UWBP_KeyBindedAction_C* LEFTSHIFT_INTERACTION;                              // 0x0280 (size: 0x8)
    class UMiniGames_Tutorial_C* MiniGames_Tutorial;                                  // 0x0288 (size: 0x8)
    class UOverlay* PressWASD_Overlay;                                                // 0x0290 (size: 0x8)
    class UOverlay* StartPaintingInfoPad;                                             // 0x0298 (size: 0x8)
    class UWBP_PanelColors_C* ColorPanelWidget;                                       // 0x02A0 (size: 0x8)
    class UWBP_KeyBindedAction_C* RMB_INTERACTION;                                    // 0x02A8 (size: 0x8)

    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void GetColorPallet();
    void Construct();
    void KeybindingChanged(const FName ActionName);
    void KeybindingReset();
    void Destruct();
    void OnWallPaintStarted();
    void OnWallPaintEnded();
    void GamePadOpenColorPicker();
    void OnDeviceChanged(bool bNewGamepadMode);
    void BindOnDeviceChanged(bool isConstruct);
    void ExecuteUbergraph_WBP_PaintBrush(int32 EntryPoint);
}; // Size: 0x2B0

#endif
