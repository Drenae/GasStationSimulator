#ifndef UE4SS_SDK_WBP_Employee_HPP
#define UE4SS_SDK_WBP_Employee_HPP

class UWBP_Employee_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* BG_IMG;                                                             // 0x0268 (size: 0x8)
    class UImage* Blocker_IMG;                                                        // 0x0270 (size: 0x8)
    class USizeBox* ButtonSiceBox;                                                    // 0x0278 (size: 0x8)
    class UTextBlock* CharacterLore_TXT;                                              // 0x0280 (size: 0x8)
    class UTextBlock* CostPerCashTXT;                                                 // 0x0288 (size: 0x8)
    class UTextBlock* CostPerCleaningTXT;                                             // 0x0290 (size: 0x8)
    class UTextBlock* CostPerFuelTXT;                                                 // 0x0298 (size: 0x8)
    class UTextBlock* CostPerIceCreamsTXT;                                            // 0x02A0 (size: 0x8)
    class UTextBlock* CostPerRepairTXT;                                               // 0x02A8 (size: 0x8)
    class UTextBlock* CostPerRestockTXT_1;                                            // 0x02B0 (size: 0x8)
    class UOverlay* DescriptionSegment;                                               // 0x02B8 (size: 0x8)
    class UTextBlock* EmployeeTXT;                                                    // 0x02C0 (size: 0x8)
    class UGSSButton* HireButton;                                                     // 0x02C8 (size: 0x8)
    class UOverlay* MainOverlay;                                                      // 0x02D0 (size: 0x8)
    class UImage* NPC_ICON;                                                           // 0x02D8 (size: 0x8)
    class UImage* Pointer_IMG;                                                        // 0x02E0 (size: 0x8)
    class UOverlay* RestockSkills;                                                    // 0x02E8 (size: 0x8)
    class UTextBlock* SetAirCompressorLevelTXT;                                       // 0x02F0 (size: 0x8)
    class UTextBlock* SetCarRepairLevelTXT;                                           // 0x02F8 (size: 0x8)
    class UTextBlock* SetCashRegisterLevelTXT;                                        // 0x0300 (size: 0x8)
    class UTextBlock* SetCleaningLevelTXT;                                            // 0x0308 (size: 0x8)
    class UTextBlock* SetDescriptionTXT;                                              // 0x0310 (size: 0x8)
    class UTextBlock* SetEmployeeNameTXT;                                             // 0x0318 (size: 0x8)
    class UTextBlock* SetFuelingLevelTXT;                                             // 0x0320 (size: 0x8)
    class UTextBlock* SetIceCreamsLevelTXT;                                           // 0x0328 (size: 0x8)
    class UTextBlock* SetRestockLevelTXT_1;                                           // 0x0330 (size: 0x8)
    class UVerticalBox* StatsSegment;                                                 // 0x0338 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_RightButton;                                    // 0x0340 (size: 0x8)
    FWBP_Employee_COnClicked OnClicked;                                               // 0x0348 (size: 0x10)
    void OnClicked(class UWBP_Employee_C* EmployeeWidgetREF);
    bool WasBought;                                                                   // 0x0358 (size: 0x1)
    TSubclassOf<class AAICharacterBase> AICharacter;                                  // 0x0360 (size: 0x8)
    bool IsLeftSidedWidget;                                                           // 0x0368 (size: 0x1)
    bool IsHovererd;                                                                  // 0x0369 (size: 0x1)

    void HintsVisibility(bool Visible);
    void GetAICharacter(TSubclassOf<class AAICharacterBase>& EmployeeREF);
    void Clicked();
    void Hovered(bool Condition);
    void CardLostFocuseVizaul();
    void CardIsFocusedVizual();
    void BndEvt__Action1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void BndEvt__Action1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Action1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void GamePadHoverEmployee(bool Hover);
    void GamePadHireEmployee();
    void OnInitialized();
    void CustomEvent();
    void CustomEvent_1();
    void ExecuteUbergraph_WBP_Employee(int32 EntryPoint);
    void OnClicked__DelegateSignature(class UWBP_Employee_C* EmployeeWidgetREF);
}; // Size: 0x36A

#endif
