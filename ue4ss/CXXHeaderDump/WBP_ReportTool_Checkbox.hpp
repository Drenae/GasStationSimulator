#ifndef UE4SS_SDK_WBP_ReportTool_Checkbox_HPP
#define UE4SS_SDK_WBP_ReportTool_Checkbox_HPP

class UWBP_ReportTool_Checkbox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UCheckBox* CheckBox;                                                        // 0x0268 (size: 0x8)
    class UTextBlock* Name;                                                           // 0x0270 (size: 0x8)
    FText ReportType;                                                                 // 0x0278 (size: 0x18)
    bool IsActive;                                                                    // 0x0290 (size: 0x1)
    class UWBP_ReportTool_C* REF_ReportTool;                                          // 0x0298 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void BndEvt__WBP_ReportTool_Checkbox_Checkbox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void Construct();
    void ExecuteUbergraph_WBP_ReportTool_Checkbox(int32 EntryPoint);
}; // Size: 0x2A0

#endif
