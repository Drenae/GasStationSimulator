#ifndef UE4SS_SDK_WBP_OwnedEmployee_New_HPP
#define UE4SS_SDK_WBP_OwnedEmployee_New_HPP

class UWBP_OwnedEmployee_New_C : public UGSSBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    class UWidgetAnimation* OnHoverAnimation;                                         // 0x0288 (size: 0x8)
    class UTextBlock* ActionButton_TXT;                                               // 0x0290 (size: 0x8)
    class UDragoButton* CancelDialogue;                                               // 0x0298 (size: 0x8)
    class UOverlay* SchifOverlay;                                                     // 0x02A0 (size: 0x8)
    class AAICharacterBase* AICharacter;                                              // 0x02A8 (size: 0x8)
    bool IsLocked;                                                                    // 0x02B0 (size: 0x1)
    bool IsActiveForChanged;                                                          // 0x02B1 (size: 0x1)
    bool IsShowStatus;                                                                // 0x02B2 (size: 0x1)
    int32 AmountToPay;                                                                // 0x02B4 (size: 0x4)
    class AEmployee_Base_C* Employ;                                                   // 0x02B8 (size: 0x8)
    TArray<UButton*> ButtonDialog;                                                    // 0x02C0 (size: 0x10)
    int32 selectColl;                                                                 // 0x02D0 (size: 0x4)
    int32 selectRow;                                                                  // 0x02D4 (size: 0x4)
    class UWBP_OptionAccept_C* OptionAccept;                                          // 0x02D8 (size: 0x8)
    TSubclassOf<class UTaskBase> NewLocalVar_0;                                       // 0x02E0 (size: 0x8)
    float Pay10;                                                                      // 0x02E8 (size: 0x4)
    float Pay50;                                                                      // 0x02EC (size: 0x4)
    float Pay100;                                                                     // 0x02F0 (size: 0x4)
    bool LastCardInPC;                                                                // 0x02F4 (size: 0x1)

    void AfterPayingHidePayGraphic();
    void SetNewPos(int32 Row, int32 Coll);
    void ResumeWork(TSubclassOf<class UTaskBase> NewTask, bool IgnoreMoney);
    void Clicked(bool& IsOpenDialog);
    void DecrermentRow();
    void IncrementRow();
    void Change Row();
    void ClickShowStatus();
    void Destruct();
    void OnDialogOpen();
    void UpdateTextInfo(const FTimeStruct UpdatedTime);
    void OnDialogClosed();
    void InitGamePad();
    void UpdateInfo(const FTimeStruct UpdatedTime);
    void BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void CancelFromPC();
    void DPadUp_Press_1();
    void DPadDown_Press_1();
    void AButton_Press_1();
    void CustomEscape();
    void Construct();
    void ExecuteUbergraph_WBP_OwnedEmployee_New(int32 EntryPoint);
}; // Size: 0x2F5

#endif
