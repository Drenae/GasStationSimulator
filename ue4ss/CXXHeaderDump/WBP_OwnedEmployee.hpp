#ifndef UE4SS_SDK_WBP_OwnedEmployee_HPP
#define UE4SS_SDK_WBP_OwnedEmployee_HPP

class UWBP_OwnedEmployee_C : public UDragoWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* OnHoverAnimation;                                         // 0x0268 (size: 0x8)
    class UTextBlock* ActionButton_TXT;                                               // 0x0270 (size: 0x8)
    class UHorizontalBox* AdditionalHints;                                            // 0x0278 (size: 0x8)
    class UDragoButton* CancelDialogue;                                               // 0x0280 (size: 0x8)
    class UMiniGames_Tutorial_C* MiniGames_Tutorial;                                  // 0x0288 (size: 0x8)
    class UPC_Notification_C* OpenPayEmploAlarm;                                      // 0x0290 (size: 0x8)
    class UOverlay* SchifOverlay;                                                     // 0x0298 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_RightButton_1;                                  // 0x02A0 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_RightButton_2;                                  // 0x02A8 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_RightButton_3;                                  // 0x02B0 (size: 0x8)
    class AAICharacterBase* AICharacter;                                              // 0x02B8 (size: 0x8)
    bool IsLocked;                                                                    // 0x02C0 (size: 0x1)
    bool IsShowStatus;                                                                // 0x02C1 (size: 0x1)
    bool OpenFromPC;                                                                  // 0x02C2 (size: 0x1)
    class AEmployee_Base_C* Employ;                                                   // 0x02C8 (size: 0x8)
    int32 selectColl;                                                                 // 0x02D0 (size: 0x4)
    int32 selectRow;                                                                  // 0x02D4 (size: 0x4)
    class UWBP_OptionAccept_C* OptionAccept;                                          // 0x02D8 (size: 0x8)
    TSubclassOf<class UTaskBase> NewLocalVar_0;                                       // 0x02E0 (size: 0x8)
    int32 OpenedComboBox;                                                             // 0x02E8 (size: 0x4)
    int32 GamePadEmployeeSchedule;                                                    // 0x02EC (size: 0x4)
    bool FromResetEmployeePicker;                                                     // 0x02F0 (size: 0x1)
    bool FromFirstJobPicker;                                                          // 0x02F1 (size: 0x1)
    int32 GamePadPreviousEmployeeButton;                                              // 0x02F4 (size: 0x4)
    int32 GamePadCurrentTab;                                                          // 0x02F8 (size: 0x4)
    class UWBP_KeyHint_C* GamePadHintSchedule;                                        // 0x0300 (size: 0x8)
    FTimerHandle GamePadHintTimer;                                                    // 0x0308 (size: 0x8)

    FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);
    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void Game Pad Schedule Navigate(FKey Key);
    void Game Pad Navigate Combo Boxes(int32 CheckBoxIndex, bool Increase);
    void Game Padon Last Card(bool& Last);
    void Game Pad Check Box Opened(bool& IsOpenw, int32& ComboBoxIndex);
    void GamePadNavigateNextTab(bool NavigateLeft);
    void ResumeWork(TSubclassOf<class UTaskBase> NewTask, bool IgnoreMoney);
    void Construct();
    void UpdateInfo(const FTimeStruct UpdatedTime);
    void Destruct();
    void BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void CancelFromPC();
    void Close();
    void CloseWidget();
    void GamePadHint();
    void GamePadAddHint();
    void ExecuteUbergraph_WBP_OwnedEmployee(int32 EntryPoint);
}; // Size: 0x310

#endif
