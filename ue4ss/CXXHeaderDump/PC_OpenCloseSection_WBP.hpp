#ifndef UE4SS_SDK_PC_OpenCloseSection_WBP_HPP
#define UE4SS_SDK_PC_OpenCloseSection_WBP_HPP

class UPC_OpenCloseSection_WBP_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_88;                                                         // 0x0268 (size: 0x8)
    class UImage* Icon;                                                               // 0x0270 (size: 0x8)
    class UImage* Image;                                                              // 0x0278 (size: 0x8)
    class UImage* Image_border;                                                       // 0x0280 (size: 0x8)
    class UPC_open_close_switcher_simple_C* PC_open_close_switcher_simple;            // 0x0288 (size: 0x8)
    class USizeBox* SizeBox_Icon;                                                     // 0x0290 (size: 0x8)
    class UTextBlock* TextBlock_158;                                                  // 0x0298 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_BottomButton;                                   // 0x02A0 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_Left;                                           // 0x02A8 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_Right;                                          // 0x02B0 (size: 0x8)
    FText StructureName;                                                              // 0x02B8 (size: 0x18)
    class AInteractableBuilding* GasStationSection;                                   // 0x02D0 (size: 0x8)
    bool bIsOn;                                                                       // 0x02D8 (size: 0x1)
    TSoftObjectPtr<class UTexture2D> MapIcon;                                         // 0x02E0 (size: 0x28)
    bool IsLocked;                                                                    // 0x0308 (size: 0x1)

    bool Is Drive In Cinema();
    void HintsVisibility(bool Visible);
    void SetClosedState();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_88_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_88_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_88_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void PrepareeSwitcherState();
    void Construct();
    void GamePadHover(bool Hover);
    void GamePadClickedSection();
    void OnSwitchingAnimationFinished(bool IsON);
    void On Confirm();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_PC_OpenCloseSection_WBP(int32 EntryPoint);
}; // Size: 0x309

#endif
