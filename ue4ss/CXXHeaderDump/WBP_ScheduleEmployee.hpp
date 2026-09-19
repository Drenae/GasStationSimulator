#ifndef UE4SS_SDK_WBP_ScheduleEmployee_HPP
#define UE4SS_SDK_WBP_ScheduleEmployee_HPP

class UWBP_ScheduleEmployee_C : public UGSSBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    class UWidgetAnimation* HoverInfo;                                                // 0x0288 (size: 0x8)
    class UWidgetAnimation* HoverHiddenInfo;                                          // 0x0290 (size: 0x8)
    class UWidgetAnimation* ShowInfo;                                                 // 0x0298 (size: 0x8)
    class UWidgetAnimation* NotPaidAnim;                                              // 0x02A0 (size: 0x8)
    class UWidgetAnimation* HoverAnim;                                                // 0x02A8 (size: 0x8)
    class UCheckBox* AutoPay_CheckBox;                                                // 0x02B0 (size: 0x8)
    class UImage* BG_Image;                                                           // 0x02B8 (size: 0x8)
    class UImage* BG_Image_1;                                                         // 0x02C0 (size: 0x8)
    class UImage* BG_Image_2;                                                         // 0x02C8 (size: 0x8)
    class UTextBlock* BonusTimerTXT;                                                  // 0x02D0 (size: 0x8)
    class UButton* Button_info;                                                       // 0x02D8 (size: 0x8)
    class UTextBlock* CostPerCashTXT;                                                 // 0x02E0 (size: 0x8)
    class UTextBlock* CostPerCleaningTXT;                                             // 0x02E8 (size: 0x8)
    class UTextBlock* CostPerFuelTXT;                                                 // 0x02F0 (size: 0x8)
    class UTextBlock* CostPerIceCreamsTXT;                                            // 0x02F8 (size: 0x8)
    class UTextBlock* CostPerRepairTXT;                                               // 0x0300 (size: 0x8)
    class UTextBlock* CostPerRestock;                                                 // 0x0308 (size: 0x8)
    class UButton* DayNightAlert_Button;                                              // 0x0310 (size: 0x8)
    class UOverlay* DayNightShift_Overlay;                                            // 0x0318 (size: 0x8)
    class UImage* Employee_Avatar_IMG;                                                // 0x0320 (size: 0x8)
    class UTextBlock* Employee_Name_TXT;                                              // 0x0328 (size: 0x8)
    class UTextBlock* Employee_Name_TXT_1;                                            // 0x0330 (size: 0x8)
    class UImage* EnergyRadialProgress;                                               // 0x0338 (size: 0x8)
    class UImage* EnergyRadialProgress_1;                                             // 0x0340 (size: 0x8)
    class UButton* FireEmployee_Button;                                               // 0x0348 (size: 0x8)
    class UImage* FirstCheckBoxBlocker_IMG;                                           // 0x0350 (size: 0x8)
    class UCheckBox* FirstJob_CheckBox;                                               // 0x0358 (size: 0x8)
    class UComboBoxString* FirstJob_Picker;                                           // 0x0360 (size: 0x8)
    class UImage* GamePadAutoPayCheckBox_IMG;                                         // 0x0368 (size: 0x8)
    class UImage* GamePadFireEmployee_IMG;                                            // 0x0370 (size: 0x8)
    class UImage* GamePadFirstCheckBox_IMG;                                           // 0x0378 (size: 0x8)
    class UImage* GamePadFirstJobPicker_IMG;                                          // 0x0380 (size: 0x8)
    class UImage* GamePadRestartEmployee_IMG;                                         // 0x0388 (size: 0x8)
    class UImage* GamePadSecondCheckBox_IMG;                                          // 0x0390 (size: 0x8)
    class UImage* GamePadSecondJobPicker_IMG;                                         // 0x0398 (size: 0x8)
    class UImage* GamePadShiftPicker_IMG;                                             // 0x03A0 (size: 0x8)
    class UImage* Image;                                                              // 0x03A8 (size: 0x8)
    class UImage* Image_1;                                                            // 0x03B0 (size: 0x8)
    class UImage* Image_65;                                                           // 0x03B8 (size: 0x8)
    class UImage* Image_68;                                                           // 0x03C0 (size: 0x8)
    class UImage* Image_141;                                                          // 0x03C8 (size: 0x8)
    class UImage* Image_144;                                                          // 0x03D0 (size: 0x8)
    class UImage* Image_208;                                                          // 0x03D8 (size: 0x8)
    class UImage* Image_day;                                                          // 0x03E0 (size: 0x8)
    class UImage* Image_night;                                                        // 0x03E8 (size: 0x8)
    class USizeBox* Job_Sizer;                                                        // 0x03F0 (size: 0x8)
    class UScrollBox* MoreInfo_ScrollBox;                                             // 0x03F8 (size: 0x8)
    class UHorizontalBox* MoreInfoContent_Horizontal;                                 // 0x0400 (size: 0x8)
    class Uneumorph_button_C* neumorph_button_1;                                      // 0x0408 (size: 0x8)
    class Uneumorph_button_C* neumorph_button_premium;                                // 0x0410 (size: 0x8)
    class UImage* NPC_ICON;                                                           // 0x0418 (size: 0x8)
    class UOverlay* Overlay_Info;                                                     // 0x0420 (size: 0x8)
    class UOverlay* Overlay_resting;                                                  // 0x0428 (size: 0x8)
    class UImage* Pay_Image;                                                          // 0x0430 (size: 0x8)
    class UTextBlock* Premium_TXT;                                                    // 0x0438 (size: 0x8)
    class UProgressBar* ProgressBar_46;                                               // 0x0440 (size: 0x8)
    class UProgressBar* ProgressBar_cash;                                             // 0x0448 (size: 0x8)
    class UProgressBar* ProgressBar_cleaning;                                         // 0x0450 (size: 0x8)
    class UProgressBar* ProgressBar_fueling;                                          // 0x0458 (size: 0x8)
    class UProgressBar* ProgressBar_ice_cream;                                        // 0x0460 (size: 0x8)
    class UProgressBar* ProgressBar_repair;                                           // 0x0468 (size: 0x8)
    class UProgressBar* ProgressBar_Restocking;                                       // 0x0470 (size: 0x8)
    class UButton* ResetEmployee_Button;                                              // 0x0478 (size: 0x8)
    class UImage* Resting_Image;                                                      // 0x0480 (size: 0x8)
    class URetainerBox* RetainerBox_0;                                                // 0x0488 (size: 0x8)
    class UTextBlock* SalaryFirstTask_TXT;                                            // 0x0490 (size: 0x8)
    class UTextBlock* SalarySecondTask_TXT;                                           // 0x0498 (size: 0x8)
    class UImage* SecondCheckBoxBlocker_IMG;                                          // 0x04A0 (size: 0x8)
    class UCheckBox* SecondJob_CheckBox;                                              // 0x04A8 (size: 0x8)
    class UComboBoxString* SecondJob_Picker;                                          // 0x04B0 (size: 0x8)
    class UTextBlock* SetAirCompressorLevelTXT;                                       // 0x04B8 (size: 0x8)
    class UTextBlock* SetCarRepairLevelTXT;                                           // 0x04C0 (size: 0x8)
    class UTextBlock* SetCashRegisterLevelTXT;                                        // 0x04C8 (size: 0x8)
    class UTextBlock* SetCleaningLevelTXT;                                            // 0x04D0 (size: 0x8)
    class UTextBlock* SetDescriptionTXT;                                              // 0x04D8 (size: 0x8)
    class UTextBlock* SetFuelingLevelTXT;                                             // 0x04E0 (size: 0x8)
    class UTextBlock* SetIceCreamsLevelTXT;                                           // 0x04E8 (size: 0x8)
    class UTextBlock* SetRestockingLevel;                                             // 0x04F0 (size: 0x8)
    class UTextBlock* Shif_houer_TXT;                                                 // 0x04F8 (size: 0x8)
    class UComboBoxString* Shift_Picker;                                              // 0x0500 (size: 0x8)
    class USizeBox* SizeBox_Paid;                                                     // 0x0508 (size: 0x8)
    class UOverlay* TimerOverlay;                                                     // 0x0510 (size: 0x8)
    class UTextBlock* TotalMoneyEarned_TXT;                                           // 0x0518 (size: 0x8)
    class UVerticalBox* VerticalBox_0;                                                // 0x0520 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_0;                                          // 0x0528 (size: 0x8)
    class AAICharacterBase* AICharacterBase;                                          // 0x0530 (size: 0x8)
    EEmployeeTask FirstJobPicked;                                                     // 0x0538 (size: 0x1)
    TArray<FText> JobsArray;                                                          // 0x0540 (size: 0x10)
    TMap<int32, EEmployeeSkill> IndexToEnum;                                          // 0x0550 (size: 0x50)
    EEmployeeTask SecondJobPicked;                                                    // 0x05A0 (size: 0x1)
    class UWBP_OptionAccept_C* OptionAccept;                                          // 0x05A8 (size: 0x8)
    class UEmployeeShift* Employee;                                                   // 0x05B0 (size: 0x8)
    FString FirstPickedTaskName;                                                      // 0x05B8 (size: 0x10)
    FString SecondPickedTaskName;                                                     // 0x05C8 (size: 0x10)
    bool bIsInfoHidden;                                                               // 0x05D8 (size: 0x1)
    bool CreatedInDialogue;                                                           // 0x05D9 (size: 0x1)
    class UWBP_OwnedEmployee_C* WBP_OwnedEmploye_REF;                                 // 0x05E0 (size: 0x8)
    TArray<FS_JobsLocalization> TaskNameToEnumx;                                      // 0x05E8 (size: 0x10)
    int32 FirstJobArrayIndex;                                                         // 0x05F8 (size: 0x4)
    int32 SecondJobArrayIndex;                                                        // 0x05FC (size: 0x4)
    TArray<FText> DayNightLocalization;                                               // 0x0600 (size: 0x10)
    FText TaskOnConstruct;                                                            // 0x0610 (size: 0x18)
    FText UpdatedTask;                                                                // 0x0628 (size: 0x18)
    bool bLock;                                                                       // 0x0640 (size: 0x1)
    TArray<UWBP_ScheduleEmployee_C*> AllWidgetsOfKind;                                // 0x0648 (size: 0x10)
    TMap<int32, UWidget*> IndexToWidget;                                              // 0x0658 (size: 0x50)
    FString SelectedItemFirstJob;                                                     // 0x06A8 (size: 0x10)
    FString SelectedItemSecondJob;                                                    // 0x06B8 (size: 0x10)
    bool FirstJobChecked;                                                             // 0x06C8 (size: 0x1)
    bool SecondJobChecked;                                                            // 0x06C9 (size: 0x1)
    int32 GamePadCurrentButton;                                                       // 0x06CC (size: 0x4)
    bool AutoPayChecked;                                                              // 0x06D0 (size: 0x1)
    int32 GamePadFirstJobOption;                                                      // 0x06D4 (size: 0x4)

    void UpdateSkillLevels(class UTextBlock* Cost, class UProgressBar* ProgressBar, class UTextBlock* Level, class AAICharacterBase* Employee, const FEmployeeSkill& EmployeeSkill);
    void SetCorrectTimeConvention();
    void GamePadSetupElements();
    void GamePadCheckIsEnabled(int32 IndextoCheck, bool& Enabled);
    void On_FirstJob_Picker_GenerateWidget_0(FString Item);
    void Update Levels and Skills();
    void SetShiftVisuals();
    void SetAvailableOptions();
    void RemoveAvailableTask(class UComboBoxString* TaskPickerToChange, FString Task, FString ChangedPickerSetTask);
    void SetAssignedTasksInfo(int32 TaskPriority);
    void Construct();
    void BndEvt__WBP_ScheduleEmployee_FirstJob_Picker_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__WBP_ScheduleEmployee_SecondJob_Picker_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void OnClickedYes();
    void OnClickedNo();
    void BndEvt__WBP_ScheduleEmployee_FireEmployee_Button_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void UpdateInfo(const FTimeStruct UpdatedTime);
    void BndEvt__WBP_ScheduleEmployee_Shift_Picker_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__WBP_ScheduleEmployee_SecondJob_CheckBox_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__WBP_ScheduleEmployee_FirstJob_CheckBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__WBP_ScheduleEmployee_Shift_Picker_K2Node_ComponentBoundEvent_6_OnOpeningEvent__DelegateSignature();
    void BndEvt__WBP_ScheduleEmployee_AutoPay_CheckBox_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__WBP_ScheduleEmployee_neumorph_button_K2Node_ComponentBoundEvent_8_ButtonClicked__DelegateSignature();
    void BndEvt__WBP_ScheduleEmployee_neumorph_button_1_K2Node_ComponentBoundEvent_11_ButtonClicked__DelegateSignature();
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void BndEvt__WBP_ScheduleEmployee_Button_info_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_ScheduleEmployee_Button_info_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_ScheduleEmployee_Button_info_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__WBP_ScheduleEmployee_FireEmployee_Button_1_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
    void Destruct();
    void BndEvt__WBP_ScheduleEmployee_FirstJob_Picker_K2Node_ComponentBoundEvent_14_OnOpeningEvent__DelegateSignature();
    void BndEvt__WBP_ScheduleEmployee_SecondJob_Picker_K2Node_ComponentBoundEvent_15_OnOpeningEvent__DelegateSignature();
    void Enabled First CheckBox();
    void Enable Second CheckBox();
    void RefreshShiftVisuals(class UTaskBase* StartedTask);
    void RefreshVisualsAfterPay();
    void BndEvt__WBP_ScheduleEmployee_Button_146_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature();
    void ForceHiden();
    void GamePadSelectionChangedShift();
    void GamePadSelectionChangedFirstJob(FString SelectedItem);
    void GamePadSelectionChangedSecondJob(FString SelectedItem);
    void GamePadFireEmployee();
    void GamePadFireEmployeeClickNo();
    void GamePadFireEmployeeClickYes();
    void GamePadClickPremium();
    void GamePadPaySallary();
    void GamePadCheckFirstJob();
    void GamePadCheckSecondJob();
    void GamePadHoverMoreInfo(bool Hover);
    void GamePadResetEmployee();
    void GamePadMoreInfo();
    void GamePadCheckAutoPay();
    void OpenJobComboBox();
    void GamePadSelectOptionFirstJob(bool Increase);
    void OpenSecondJobComboBox();
    void OpenShiftComboBox();
    void GamePadSelectOptionSecondJob(bool Increase);
    void GamePadSelectOptionShiftTime(bool Increase);
    void OnInitialized();
    void UpdateShiftHouer(bool bAppliedSetting);
    void OnFirstJobPicker();
    void ExecuteUbergraph_WBP_ScheduleEmployee(int32 EntryPoint);
}; // Size: 0x6D8

#endif
