#ifndef UE4SS_SDK_WBP_PhotoModePanel_Platform_HPP
#define UE4SS_SDK_WBP_PhotoModePanel_Platform_HPP

class UWBP_PhotoModePanel_Platform_C : public UGSSBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    class UImage* Image_34;                                                           // 0x0288 (size: 0x8)
    class UWBP_ClosedDLCText_C* WBP_ClosedDLCText;                                    // 0x0290 (size: 0x8)
    class UWBP_PanelPlatform_Button_C* WBP_PanelPlatform_Button;                      // 0x0298 (size: 0x8)
    class UWBP_PanelPlatform_Button_C* WBP_PanelPlatform_Button_1;                    // 0x02A0 (size: 0x8)
    class UWBP_PanelPlatform_Button_C* WBP_PanelPlatform_Button_2;                    // 0x02A8 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_1;                                          // 0x02B0 (size: 0x8)
    TSoftObjectPtr<class AActor> PlatformRef;                                         // 0x02B8 (size: 0x28)
    class AJunkyardCarWreck* TempWreck;                                               // 0x02E0 (size: 0x8)
    FWBP_PhotoModePanel_Platform_COnCustomizeButtonClicked OnCustomizeButtonClicked;  // 0x02E8 (size: 0x10)
    void OnCustomizeButtonClicked();
    class AJunkyardCarWreck* WreckRef;                                                // 0x02F8 (size: 0x8)
    class ACarWreckPlaceableArea* AreaRef;                                            // 0x0300 (size: 0x8)

    void CheckCarHasPart(class AJunkyardCarWreck* self2, const EJunkyardCarPartType Key, bool& Missingpart);
    void BndEvt__WBP_PhotoModePanel_Platform_WBP_PanelPlatform_Button_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void BndEvt__WBP_PhotoModePanel_Platform_WBP_PanelPlatform_Button_2_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
    void BndEvt__WBP_PhotoModePanel_Platform_WBP_PanelPlatform_Button_1_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
    void OnAnyOptionClicked();
    void CustomEvent_0(EDLCName DLCName, bool bActivated);
    void OnInitialized();
    void ExecuteUbergraph_WBP_PhotoModePanel_Platform(int32 EntryPoint);
    void OnCustomizeButtonClicked__DelegateSignature();
}; // Size: 0x308

#endif
