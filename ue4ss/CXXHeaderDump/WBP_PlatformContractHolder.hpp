#ifndef UE4SS_SDK_WBP_PlatformContractHolder_HPP
#define UE4SS_SDK_WBP_PlatformContractHolder_HPP

class UWBP_PlatformContractHolder_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* Hide;                                                     // 0x0268 (size: 0x8)
    class UImage* BG_Body;                                                            // 0x0270 (size: 0x8)
    class UOverlay* Body_overlay;                                                     // 0x0278 (size: 0x8)
    class USpacer* ContractNone;                                                      // 0x0280 (size: 0x8)
    class UImage* GamePadBorder_IMG;                                                  // 0x0288 (size: 0x8)
    class UGSS_Button_WBP_C* GSS_Button_WBP;                                          // 0x0290 (size: 0x8)
    class UImage* Image_66;                                                           // 0x0298 (size: 0x8)
    class UOverlay* Overlay_Header;                                                   // 0x02A0 (size: 0x8)
    class UScrollBox* ScrollBox_0;                                                    // 0x02A8 (size: 0x8)
    class UTextBlock* SelectContractMainButton_Text;                                  // 0x02B0 (size: 0x8)
    class UTextBlock* TextBlock_ContractNumber;                                       // 0x02B8 (size: 0x8)
    class UWBP_ArrowButton_C* WBP_ArrowButton_Left;                                   // 0x02C0 (size: 0x8)
    class UWBP_ArrowButton_C* WBP_ArrowButton_Right;                                  // 0x02C8 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_MoveLeft;                                       // 0x02D0 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_MoveRight;                                      // 0x02D8 (size: 0x8)
    class UWBP_SingleContractPlatform_C* WBP_SingleContractPlatform;                  // 0x02E0 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_Contracts;                                  // 0x02E8 (size: 0x8)
    bool bIsExpanded;                                                                 // 0x02F0 (size: 0x1)
    int32 ContactWidgetIndex;                                                         // 0x02F4 (size: 0x4)
    FName ContractCode;                                                               // 0x02F8 (size: 0x8)
    FWBP_PlatformContractHolder_COnPressed OnPressed;                                 // 0x0300 (size: 0x10)
    void OnPressed();
    bool bIsUsedInCustomization;                                                      // 0x0310 (size: 0x1)

    void HintsVisibility(bool Visible);
    void Update Contracts(class UObject* WreckRef);
    void Finished_6F833006496E63E905B1FE844A2D812C();
    void Finished_DE5FE3AB42936A221992699948110E49();
    void Construct();
    void BndEvt__WBP_PlatformContract_GSS_Button_WBP_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
    void BndEvt__WBP_PlatformContractHolder_WBP_ArrowButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
    void BndEvt__WBP_PlatformContractHolder_WBP_ArrowButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature();
    void SetContracts(class AJunkyardCarWreckCustomizable* Wreck);
    void PressNextContract();
    void GamePadOpenContractList();
    void PressPreviousContract();
    void GamePadHover(bool Hover);
    void CustomEvent_0();
    void Destruct();
    void ExecuteUbergraph_WBP_PlatformContractHolder(int32 EntryPoint);
    void OnPressed__DelegateSignature();
}; // Size: 0x311

#endif
