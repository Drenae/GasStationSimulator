#ifndef UE4SS_SDK_WBP_PaintWidget_HPP
#define UE4SS_SDK_WBP_PaintWidget_HPP

class UWBP_PaintWidget_C : public UAdditionalKeyItemWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    class UOverlay* Overlay_20;                                                       // 0x0288 (size: 0x8)
    class UWBP_PanelColors_C* WBP_PanelColors;                                        // 0x0290 (size: 0x8)
    class UWBP_PanelColors_C* ColorREF;                                               // 0x0298 (size: 0x8)
    bool IsGamepad;                                                                   // 0x02A0 (size: 0x1)

    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void GamePadOpenColorPicker();
    void GetColorPallet();
    void Destruct();
    void OnDeviceChanged(bool bNewGamepadMode);
    void BindOnDeviceChanged(bool isConstruct);
    void Construct();
    void OnInitialized();
    void OnCloseColorPalletter(bool IsGamepad);
    void ExecuteUbergraph_WBP_PaintWidget(int32 EntryPoint);
}; // Size: 0x2A1

#endif
