#ifndef UE4SS_SDK_WBP_SaveSlot_HPP
#define UE4SS_SDK_WBP_SaveSlot_HPP

class UWBP_SaveSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* Data;                                                           // 0x0268 (size: 0x8)
    class UTextBlock* GameTime;                                                       // 0x0270 (size: 0x8)
    class UHorizontalBox* HorizontalBox_ConnectedMaps;                                // 0x0278 (size: 0x8)
    class UImage* Image_612;                                                          // 0x0280 (size: 0x8)
    class UImage* Image_x;                                                            // 0x0288 (size: 0x8)
    class UTextBlock* IndexTXT;                                                       // 0x0290 (size: 0x8)
    class UDragoButton* Remove;                                                       // 0x0298 (size: 0x8)
    class UDragoButton* SaveLoad;                                                     // 0x02A0 (size: 0x8)
    class UTextBlock* SaveTitle_TXT;                                                  // 0x02A8 (size: 0x8)
    class UTextBlock* text_delete;                                                    // 0x02B0 (size: 0x8)
    class UTextBlock* Time;                                                           // 0x02B8 (size: 0x8)
    bool ForSave;                                                                     // 0x02C0 (size: 0x1)
    FSavedSlotStruct SaveStructure;                                                   // 0x02C8 (size: 0xC8)
    class UWBP_SaveScreen_C* SaveSlotsList;                                           // 0x0390 (size: 0x8)
    class AGSSPlayerCharacter* PlayerRef;                                             // 0x0398 (size: 0x8)
    int32 IndexSlot;                                                                  // 0x03A0 (size: 0x4)
    bool bCanBeLoaded;                                                                // 0x03A4 (size: 0x1)
    class ADarkPortal_BP_C* PortalRef;                                                // 0x03A8 (size: 0x8)
    bool bHideDeleteButton;                                                           // 0x03B0 (size: 0x1)
    FWBP_SaveSlot_COnConfirmationNeeded OnConfirmationNeeded;                         // 0x03B8 (size: 0x10)
    void OnConfirmationNeeded(class UUserWidget* SaveSlot, bool DeleteConfirmation);
    bool IsGamepadConnected;                                                          // 0x03C8 (size: 0x1)

    void Check DLCCompability(TArray<EDLCName>& Array, TArray<EDLCName>& DisactivatedDLCs);
    void OnPress_X();
    void OnPress_A();
    void Hovered(bool IsHovered);
    void Construct();
    void BndEvt__SaveActionButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__SaveActionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__SaveActionButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__remove_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__remove_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__remove_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__remove_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature();
    void GamePadHover(bool Hover);
    void LoadSlot();
    void ExecuteUbergraph_WBP_SaveSlot(int32 EntryPoint);
    void OnConfirmationNeeded__DelegateSignature(class UUserWidget* SaveSlot, bool DeleteConfirmation);
}; // Size: 0x3C9

#endif
