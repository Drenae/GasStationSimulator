#ifndef UE4SS_SDK_DecorationManagementEntry_WBP_HPP
#define UE4SS_SDK_DecorationManagementEntry_WBP_HPP

class UDecorationManagementEntry_WBP_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_63;                                                         // 0x0268 (size: 0x8)
    class UCheckBox* IsON;                                                            // 0x0270 (size: 0x8)
    class UTextBlock* MapNameText;                                                    // 0x0278 (size: 0x8)
    FName Description;                                                                // 0x0280 (size: 0x8)
    FName LevelName;                                                                  // 0x0288 (size: 0x8)
    class ADecorationCamera* DecorationCamera;                                        // 0x0290 (size: 0x8)
    FText Item;                                                                       // 0x0298 (size: 0x18)
    class UDecorationManagementContainer_WBP_C* ParentContainer;                      // 0x02B0 (size: 0x8)

    void Construct();
    void BndEvt__IsOn_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__Button_63_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_63_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_63_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void GamePadHover(bool SetActive);
    void GamePadClicked();
    void ExecuteUbergraph_DecorationManagementEntry_WBP(int32 EntryPoint);
}; // Size: 0x2B8

#endif
