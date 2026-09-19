#ifndef UE4SS_SDK_WBP_MonitorPanel_HPP
#define UE4SS_SDK_WBP_MonitorPanel_HPP

class UWBP_MonitorPanel_C : public UGSSBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    class UOverlay* ContractCompare_Overlay;                                          // 0x0288 (size: 0x8)
    class UVerticalBox* ContractList_Vertical;                                        // 0x0290 (size: 0x8)
    class UWBP_MonitorContract_C* WBP_MonitorContract_Selected;                       // 0x0298 (size: 0x8)
    bool CompareMode;                                                                 // 0x02A0 (size: 0x1)
    class ABP_JunkyardPlatform_C* Platform;                                           // 0x02A8 (size: 0x8)
    class ABP_JunkyardMonitor_C* Monitor;                                             // 0x02B0 (size: 0x8)

    void CompleteContract();
    void ToggleCompareMode(bool bCompare);
    void OnContractButtonPicked(class USpecialContract* Contract);
    void SetupWidget(class ABP_JunkyardPlatform_C* AttachedPlatform, class ABP_JunkyardMonitor_C* AttachedMonitor, class USpecialContract* SelectedContract);
    void Construct();
    void Destruct();
    void CustomEscape();
    void CloseWidget();
    void ExecuteUbergraph_WBP_MonitorPanel(int32 EntryPoint);
}; // Size: 0x2B8

#endif
