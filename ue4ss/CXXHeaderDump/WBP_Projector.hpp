#ifndef UE4SS_SDK_WBP_Projector_HPP
#define UE4SS_SDK_WBP_Projector_HPP

class UWBP_Projector_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* OnHoverUp;                                                // 0x0268 (size: 0x8)
    class UWidgetAnimation* OhHoverDown;                                              // 0x0270 (size: 0x8)
    class UScrollBox* ContractReq_ScrollBox;                                          // 0x0278 (size: 0x8)
    class UWrapBox* ContractRequirements_WrapBox;                                     // 0x0280 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0288 (size: 0x8)
    class UImage* Image_92;                                                           // 0x0290 (size: 0x8)
    class UImage* Image_101;                                                          // 0x0298 (size: 0x8)
    class UImage* Image_161;                                                          // 0x02A0 (size: 0x8)
    class UTextBlock* MainContractTitle_TXT;                                          // 0x02A8 (size: 0x8)
    class UTextBlock* Price_TXT;                                                      // 0x02B0 (size: 0x8)
    class UGSSButton* ScrollDown_Button;                                              // 0x02B8 (size: 0x8)
    class UGSSButton* ScrollUp_Button;                                                // 0x02C0 (size: 0x8)
    class UProgressBar* Time_ProgressBa;                                              // 0x02C8 (size: 0x8)
    class UTextBlock* TimeLeftAmount;                                                 // 0x02D0 (size: 0x8)
    class UTextBlock* TypeOfContract_text;                                            // 0x02D8 (size: 0x8)
    class UWBP_SingleRequirement_C* WBP_SingleRequirement;                            // 0x02E0 (size: 0x8)
    class UWBP_SingleRequirement_C* WBP_SingleRequirement_1;                          // 0x02E8 (size: 0x8)
    class UWBP_SingleRequirement_C* WBP_SingleRequirement_2;                          // 0x02F0 (size: 0x8)
    class UWBP_SingleRequirement_C* WBP_SingleRequirement_3;                          // 0x02F8 (size: 0x8)
    class UWBP_SingleRequirement_C* WBP_SingleRequirement_4;                          // 0x0300 (size: 0x8)
    class UWBP_SingleRequirement_C* WBP_SingleRequirement_5;                          // 0x0308 (size: 0x8)
    class UWBP_SingleRequirement_C* WBP_SingleRequirement_6;                          // 0x0310 (size: 0x8)
    class UWBP_SingleRequirement_C* WBP_SingleRequirement_7;                          // 0x0318 (size: 0x8)
    class UWBP_SingleRequirement_C* WBP_SingleRequirement_8;                          // 0x0320 (size: 0x8)
    class USpecialContract* ContractRef;                                              // 0x0328 (size: 0x8)
    FWBP_Projector_COnComparePressed OnComparePressed;                                // 0x0330 (size: 0x10)
    void OnComparePressed(bool bCompare);
    FWBP_Projector_COnSellPressed OnSellPressed;                                      // 0x0340 (size: 0x10)
    void OnSellPressed();
    bool bSellButton;                                                                 // 0x0350 (size: 0x1)
    class AJunkyardCarWreck* CarWreck;                                                // 0x0358 (size: 0x8)
    float Price;                                                                      // 0x0360 (size: 0x4)
    bool bCompareArrow;                                                               // 0x0364 (size: 0x1)
    float MaxTime;                                                                    // 0x0368 (size: 0x4)
    float TimeProgressBar;                                                            // 0x036C (size: 0x4)
    EJunkyardCarPartType PartSlot;                                                    // 0x0370 (size: 0x1)

    void CheckWreckStats();
    void Update Time();
    void NamePartType(FText& Value);
    void CheckDecals();
    void CheckCarClass();
    void CheckCarParts();
    void Setup(class USpecialContract* Contract, class AJunkyardCarWreck* CarWreck);
    void Construct();
    void BndEvt__WBP_Projector_ScrollDown_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_Projector_ScrollDown_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_Projector_ScrollUp_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_Projector_ScrollUp_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_Projector_ScrollDown_Button_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__WBP_Projector_ScrollUp_Button_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void OnGameTimeUpdated(FTimeStruct Time);
    void Destruct();
    void ExecuteUbergraph_WBP_Projector(int32 EntryPoint);
    void OnSellPressed__DelegateSignature();
    void OnComparePressed__DelegateSignature(bool bCompare);
}; // Size: 0x371

#endif
