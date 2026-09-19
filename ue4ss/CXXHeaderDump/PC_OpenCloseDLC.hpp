#ifndef UE4SS_SDK_PC_OpenCloseDLC_HPP
#define UE4SS_SDK_PC_OpenCloseDLC_HPP

class UPC_OpenCloseDLC_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_88;                                                         // 0x0268 (size: 0x8)
    class UImage* DLC_Icon;                                                           // 0x0270 (size: 0x8)
    class UImage* Image;                                                              // 0x0278 (size: 0x8)
    class UImage* Image_border;                                                       // 0x0280 (size: 0x8)
    class UPC_open_close_switcher_simple_C* PC_open_close_switcher_simple;            // 0x0288 (size: 0x8)
    class UTextBlock* TextBlock_158;                                                  // 0x0290 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_BottomButton;                                   // 0x0298 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_Left;                                           // 0x02A0 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_Right;                                          // 0x02A8 (size: 0x8)
    FText StructureName;                                                              // 0x02B0 (size: 0x18)
    class AInteractableBuilding* GasStationSection;                                   // 0x02C8 (size: 0x8)
    bool bIsOn;                                                                       // 0x02D0 (size: 0x1)
    EDLCName DLC_NAME;                                                                // 0x02D1 (size: 0x1)
    bool IsLocked;                                                                    // 0x02D2 (size: 0x1)
    class UTexture2D* DLC Icon Texture;                                               // 0x02D8 (size: 0x8)

    void HintsVisibility(bool Visible);
    void SetClosedState();
    void BndEvt__Button_88_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_88_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_88_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void GamePadHover(bool Hover);
    void GamePadClickedSection();
    void OnSwitchingAnimationFinished(bool IsON);
    void On Yes Clicked();
    void ExecuteUbergraph_PC_OpenCloseDLC(int32 EntryPoint);
}; // Size: 0x2E0

#endif
