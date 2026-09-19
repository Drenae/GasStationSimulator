#ifndef UE4SS_SDK_WBP_PC_Card_HPP
#define UE4SS_SDK_WBP_PC_Card_HPP

class UWBP_PC_Card_C : public UPC_Base_Card
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class UWidgetAnimation* Hover;                                                    // 0x0318 (size: 0x8)
    class UImage* CardIllustration_IMG;                                               // 0x0320 (size: 0x8)
    class UImage* FrontStraps_IMG;                                                    // 0x0328 (size: 0x8)
    class UImage* GrayBlocking_IMG;                                                   // 0x0330 (size: 0x8)
    class UImage* GrayGradient;                                                       // 0x0338 (size: 0x8)
    class UGSSButton* GSSButton_86;                                                   // 0x0340 (size: 0x8)
    class UImage* NameBG_IMG_1;                                                       // 0x0348 (size: 0x8)
    class UPC_CollectedStuff_WBP_C* PC_CollectedStuff_WBP;                            // 0x0350 (size: 0x8)
    class UTextBlock* Title_TXT;                                                      // 0x0358 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_BottomButton;                                   // 0x0360 (size: 0x8)
    class UTextBlock* WorkshopBlockedTXT;                                             // 0x0368 (size: 0x8)
    bool IsHovererd;                                                                  // 0x0370 (size: 0x1)
    bool bHideCount;                                                                  // 0x0371 (size: 0x1)
    int32 RequiredLevel;                                                              // 0x0374 (size: 0x4)
    EBuildingType BuildingType;                                                       // 0x0378 (size: 0x1)

    void SetHovered(bool IsHovered);
    void Construct();
    void CheckForUnlockedState(FGameplayTag Tag);
    void BndEvt__WBP_PC_Card_GSSButton_86_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__WBP_PC_Card_GSSButton_86_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_PC_Card_GSSButton_86_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_PC_Card(int32 EntryPoint);
}; // Size: 0x379

#endif
