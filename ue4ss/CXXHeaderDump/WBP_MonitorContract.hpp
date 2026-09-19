#ifndef UE4SS_SDK_WBP_MonitorContract_HPP
#define UE4SS_SDK_WBP_MonitorContract_HPP

class UWBP_MonitorContract_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Compare_Button;                                                    // 0x0268 (size: 0x8)
    class UHorizontalBox* CompareButton_HorizontalBox;                                // 0x0270 (size: 0x8)
    class UImage* CompareIcon_IMG;                                                    // 0x0278 (size: 0x8)
    class USizeBox* ContractCarParts_Sizer;                                           // 0x0280 (size: 0x8)
    class UVerticalBox* ContractCarParts_Vertical;                                    // 0x0288 (size: 0x8)
    class UImage* ContractPriceArrow_IMG;                                             // 0x0290 (size: 0x8)
    class UButton* ContractSell_Button;                                               // 0x0298 (size: 0x8)
    class UOverlay* ContractSell_Overlay;                                             // 0x02A0 (size: 0x8)
    class UTextBlock* MainContractTitle_TXT;                                          // 0x02A8 (size: 0x8)
    class UTextBlock* Price_TXT;                                                      // 0x02B0 (size: 0x8)
    class USpecialContract* ContractRef;                                              // 0x02B8 (size: 0x8)
    FWBP_MonitorContract_COnComparePressed OnComparePressed;                          // 0x02C0 (size: 0x10)
    void OnComparePressed(bool bCompare);
    FWBP_MonitorContract_COnSellPressed OnSellPressed;                                // 0x02D0 (size: 0x10)
    void OnSellPressed();
    bool bSellButton;                                                                 // 0x02E0 (size: 0x1)
    class AJunkyardCarWreck* CarWreck;                                                // 0x02E8 (size: 0x8)
    float Price;                                                                      // 0x02F0 (size: 0x4)
    bool bCompareArrow;                                                               // 0x02F4 (size: 0x1)
    FCarPartData ReqCarWreckStat;                                                     // 0x02F8 (size: 0x18)
    bool bReqMet;                                                                     // 0x0310 (size: 0x1)
    TArray<UContractSinglePosition_C*> WidgetsToAdd;                                  // 0x0318 (size: 0x10)

    void CheckDecals();
    void CheckCarClass();
    void CheckCarParts();
    void CheckWreckStats();
    void UpdateCompareArrow(float ComparedContractPrice);
    void Setup(class USpecialContract* Contract, class AJunkyardCarWreck* CarWreck);
    void BndEvt__PlatformPanel_Compare_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void BndEvt__WBP_MonitorContract_ContractSell_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_MonitorContract(int32 EntryPoint);
    void OnSellPressed__DelegateSignature();
    void OnComparePressed__DelegateSignature(bool bCompare);
}; // Size: 0x328

#endif
