#ifndef UE4SS_SDK_PC_TrafficStatsBoard_WBP_HPP
#define UE4SS_SDK_PC_TrafficStatsBoard_WBP_HPP

class UPC_TrafficStatsBoard_WBP_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* hoveranimtext;                                            // 0x0268 (size: 0x8)
    class UWidgetAnimation* AnimIcon;                                                 // 0x0270 (size: 0x8)
    class UDragoButton* ExitButton;                                                   // 0x0278 (size: 0x8)
    class UOverlay* ReturnOveraly;                                                    // 0x0280 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_BottomButtonUpload_1;                           // 0x0288 (size: 0x8)
    class UWBP_TrafficStats_C* WBP_TrafficStats;                                      // 0x0290 (size: 0x8)
    FText CurrentTrafficLabel;                                                        // 0x0298 (size: 0x18)
    int32 CurrentEventID;                                                             // 0x02B0 (size: 0x4)
    int32 UpcomingEventID;                                                            // 0x02B4 (size: 0x4)
    bool CurrentEventValid;                                                           // 0x02B8 (size: 0x1)
    bool UpcomingEventValid;                                                          // 0x02B9 (size: 0x1)
    FText DefaultCurrentEventTooltip;                                                 // 0x02C0 (size: 0x18)
    FText DefaultUpcomingEventTooltip;                                                // 0x02D8 (size: 0x18)
    class UTrafficInfluence_Tooltip_C* ImpactTooltip;                                 // 0x02F0 (size: 0x8)
    class UTrafficInfluence_Tooltip_C* UpcomingEventTooltip;                          // 0x02F8 (size: 0x8)
    FPC_TrafficStatsBoard_WBP_COnClosed OnClosed;                                     // 0x0300 (size: 0x10)
    void OnClosed();
    int32 CurrentIndex;                                                               // 0x0310 (size: 0x4)

    void BndEvt__PC_TrafficStats_WBP_ExitButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void Return();
    void OnInitialized();
    void CustomEvent_0();
    void CustomEvent_1();
    void Construct();
    void Remove();
    void ExecuteUbergraph_PC_TrafficStatsBoard_WBP(int32 EntryPoint);
    void OnClosed__DelegateSignature();
}; // Size: 0x314

#endif
