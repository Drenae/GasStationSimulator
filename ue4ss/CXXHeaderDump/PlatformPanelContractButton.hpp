#ifndef UE4SS_SDK_PlatformPanelContractButton_HPP
#define UE4SS_SDK_PlatformPanelContractButton_HPP

class UPlatformPanelContractButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* ActionButton;                                                      // 0x0268 (size: 0x8)
    class UProgressBar* ContractProgressBar;                                          // 0x0270 (size: 0x8)
    class UTextBlock* ContractTitle_TXT;                                              // 0x0278 (size: 0x8)
    class UTextBlock* None_TXT;                                                       // 0x0280 (size: 0x8)
    class UImage* PickedBorder_IMG;                                                   // 0x0288 (size: 0x8)
    class UWBP_MonitorPanel_C* MonitorPanelREF;                                       // 0x0290 (size: 0x8)
    bool CurrentPicked;                                                               // 0x0298 (size: 0x1)
    int32 ContractIndex;                                                              // 0x029C (size: 0x4)
    class USpecialContract* ContractRef;                                              // 0x02A0 (size: 0x8)
    class AJunkyardCarWreck* WreckRef;                                                // 0x02A8 (size: 0x8)

    void Construct();
    void BndEvt__PlatformPanelContractButton_ActionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__PlatformPanelContractButton_ActionButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__PlatformPanelContractButton_ActionButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void SetNormal();
    void SetPicked();
    void ExecuteUbergraph_PlatformPanelContractButton(int32 EntryPoint);
}; // Size: 0x2B0

#endif
