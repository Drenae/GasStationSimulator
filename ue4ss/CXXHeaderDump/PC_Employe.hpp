#ifndef UE4SS_SDK_PC_Employe_HPP
#define UE4SS_SDK_PC_Employe_HPP

class UPC_Employe_C : public UPcBaseTab
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UWidgetAnimation* FadeOutAnimation;                                         // 0x0298 (size: 0x8)
    class UWidgetAnimation* FadeInAnimation;                                          // 0x02A0 (size: 0x8)
    class UWidgetAnimation* CONSTRUCT_ANIMATION;                                      // 0x02A8 (size: 0x8)
    class UBorder* BackgroundBorder;                                                  // 0x02B0 (size: 0x8)
    class UBorder* BuyCaravanasBlocker;                                               // 0x02B8 (size: 0x8)
    class UBorder* CampersStatusSpot;                                                 // 0x02C0 (size: 0x8)
    class UImage* CaravanasFrame_IMG;                                                 // 0x02C8 (size: 0x8)
    class UGSSButton* CaravanasTab;                                                   // 0x02D0 (size: 0x8)
    class UImage* EmployeeFrame_IMG;                                                  // 0x02D8 (size: 0x8)
    class UHorizontalBox* EmployEmployeeHorizontal;                                   // 0x02E0 (size: 0x8)
    class UGSSButton* HireEmployeeTab;                                                // 0x02E8 (size: 0x8)
    class UImage* HireFrame_IMG;                                                      // 0x02F0 (size: 0x8)
    class UImage* Image_83;                                                           // 0x02F8 (size: 0x8)
    class UImage* Image_240;                                                          // 0x0300 (size: 0x8)
    class UImage* Image_420;                                                          // 0x0308 (size: 0x8)
    class UOverlay* NewWorkers;                                                       // 0x0310 (size: 0x8)
    class UScrollBox* OwnedEmploye;                                                   // 0x0318 (size: 0x8)
    class UButton* OwnedEmployeeTab;                                                  // 0x0320 (size: 0x8)
    class UWrapBox* OwnedEmployeeWrap;                                                // 0x0328 (size: 0x8)
    class UButton* PayAllEmployeeSalary;                                              // 0x0330 (size: 0x8)
    class UOverlay* PayAllEmployeOverlay;                                             // 0x0338 (size: 0x8)
    class UTextBlock* RightNextClickTXT;                                              // 0x0340 (size: 0x8)
    class UScaleBox* ScaleBox_Schedule;                                               // 0x0348 (size: 0x8)
    class UImage* ScheduleFrame_IMG;                                                  // 0x0350 (size: 0x8)
    class UGSSButton* ScheduleTab;                                                    // 0x0358 (size: 0x8)
    class UButton* ToLeftButton;                                                      // 0x0360 (size: 0x8)
    class UButton* ToRightButton;                                                     // 0x0368 (size: 0x8)
    class UTextBlock* TotalAllEmployeSalaryTXT;                                       // 0x0370 (size: 0x8)
    class UWBP_CampersStatus_C* WBP_CampersStatus;                                    // 0x0378 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_RightButton;                                    // 0x0380 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_RightButton_1;                                  // 0x0388 (size: 0x8)
    class UWBP_NextEmployeeTimer_C* WBP_NextEmployeeTimer;                            // 0x0390 (size: 0x8)
    class UWBP_ScheduleMain_C* WBP_ScheduleMain;                                      // 0x0398 (size: 0x8)
    class UEvent_NewEmployee_C* EmployeEvent;                                         // 0x03A0 (size: 0x8)
    TArray<AActor*> EmployeeList;                                                     // 0x03A8 (size: 0x10)
    FString CurrentTab;                                                               // 0x03B8 (size: 0x10)
    bool IsAditionalRow;                                                              // 0x03C8 (size: 0x1)
    int32 isNext;                                                                     // 0x03CC (size: 0x4)
    int32 KeyRowSelected;                                                             // 0x03D0 (size: 0x4)
    TArray<UButton*> ButtonArray;                                                     // 0x03D8 (size: 0x10)
    int32 keySelected;                                                                // 0x03E8 (size: 0x4)
    TMap<int32, int32> MapViewMax;                                                    // 0x03F0 (size: 0x50)
    TArray<UWBP_Employee_C*> ArrayEmployee;                                           // 0x0440 (size: 0x10)
    int32 keySelected2;                                                               // 0x0450 (size: 0x4)
    TArray<UWBP_OwnedEmployee_New_C*> OwnedEmployeeArray;                             // 0x0458 (size: 0x10)
    int32 AditionalRow;                                                               // 0x0468 (size: 0x4)
    TMap<int32, int32> ControlMap;                                                    // 0x0470 (size: 0x50)
    bool IsOpenEmployeeDialog;                                                        // 0x04C0 (size: 0x1)
    bool NewVar_0;                                                                    // 0x04C1 (size: 0x1)
    float AllEmployeMoneyEarned;                                                      // 0x04C4 (size: 0x4)
    float BeforeResetValue;                                                           // 0x04C8 (size: 0x4)
    int32 GamePadCurrentTab;                                                          // 0x04CC (size: 0x4)
    int32 GamePadEmployeeSchedule;                                                    // 0x04D0 (size: 0x4)
    int32 OpenedComboBox;                                                             // 0x04D4 (size: 0x4)
    bool FromFirstJobPicker;                                                          // 0x04D8 (size: 0x1)
    bool FromResetEmployeePicker;                                                     // 0x04D9 (size: 0x1)
    int32 GamePadPreviousEmployeeButton;                                              // 0x04DC (size: 0x4)
    int32 GamePadHireEmployee;                                                        // 0x04E0 (size: 0x4)
    class UWBP_KeyHint_C* GamePadHintSchedule;                                        // 0x04E8 (size: 0x8)
    FTimerHandle GamePadHintTimer;                                                    // 0x04F0 (size: 0x8)

    FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);
    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void HintsVisibility(bool Visible);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void Game Pad Schedule Navigate(FKey Key);
    void Game Pad Navigate Combo Boxes(int32 CheckBoxIndex, bool Increase);
    void Game Pad Check Box Opened(bool& IsOpenw, int32& ComboBoxIndex);
    void Game Padon Last Card(bool& Last);
    void PayAllEmployeSalary();
    void RefreshEmployeeWidget();
    void Clicked();
    void Clicked Employee(class UWBP_Employee_C* InputPin);
    void Click Button(bool IsLeft);
    void SetHovered();
    void decrementsRow();
    void IncrementsRow();
    void decrementsKey();
    void incrementsKey();
    void OnLoaded_8CBB680D4BCAC49325AB5597F5EDCFC6(UClass* Loaded);
    void OnLoaded_6CD0C7914EF1BD250357609C20880BAF(UClass* Loaded);
    void OnLoaded_AAB4DED34C3DD571AFC863949EFA814E(UClass* Loaded);
    void TopMenuHandle(FKeyEvent KeyEvent);
    void Construct();
    void OnClicked_Event_0(class UWBP_Employee_C* EmployeeWidgetREF);
    void RefreshEmployWorker();
    void RefreshOwnedEmployee();
    void BndEvt__ToLeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ToRightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void FadeOut();
    void FadeIn();
    void CustomEvent_0(const int32 UpdatedTime);
    void Destruct();
    void BndEvt__Caravanas_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Employee_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__OwnedEmployee_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__PayAllEmployeeSalary_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
    void CalculateAllEmployeSalary(const FTimeStruct UpdatedTime);
    void BndEvt__P_PC_Employee_ScheduleTab_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void GamePadNavigateNextTab(bool NavigationLeft);
    void CustomEvent_1();
    void GamePadHoverFirstEmployee();
    void GamePadAddHint();
    void GamePadHint();
    void ExecuteUbergraph_PC_Employe(int32 EntryPoint);
}; // Size: 0x4F8

#endif
