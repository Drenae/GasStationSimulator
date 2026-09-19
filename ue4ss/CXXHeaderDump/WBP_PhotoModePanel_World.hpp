#ifndef UE4SS_SDK_WBP_PhotoModePanel_World_HPP
#define UE4SS_SDK_WBP_PhotoModePanel_World_HPP

class UWBP_PhotoModePanel_World_C : public UGSSBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    class UImage* Image_120;                                                          // 0x0288 (size: 0x8)
    class UWBP_PanelPlatform_Button_C* MoveToExhibitionSpot;                          // 0x0290 (size: 0x8)
    class UWBP_PanelPlatform_Button_C* MoveToPlatform;                                // 0x0298 (size: 0x8)
    class UWidgetSwitcher* OnOffSwitcher;                                             // 0x02A0 (size: 0x8)
    class UOverlay* Overlay_151;                                                      // 0x02A8 (size: 0x8)
    class UWBP_PanelPlatform_Button_C* TakePhoto;                                     // 0x02B0 (size: 0x8)
    class UWBP_ClosedDLCText_C* WBP_ClosedDLCText;                                    // 0x02B8 (size: 0x8)
    class AJunkyardCarWreck* WreckRef;                                                // 0x02C0 (size: 0x8)
    class ACarWreckPlaceableArea* AreaRef;                                            // 0x02C8 (size: 0x8)

    void BndEvt__WBP_PhotoModePanel_World_WBP_PanelPlatform_Button_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
    void BndEvt__WBP_PhotoModePanel_World_MoveToExhibitionSpot_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
    void BndEvt__WBP_PhotoModePanel_World_MoveToPlatform_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
    void OnAnyOptionClicked();
    void CustomEvent_0(EDLCName DLCName, bool bActivated);
    void OnInitialized();
    void ExecuteUbergraph_WBP_PhotoModePanel_World(int32 EntryPoint);
}; // Size: 0x2D0

#endif
