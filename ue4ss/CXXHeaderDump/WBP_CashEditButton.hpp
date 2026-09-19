#ifndef UE4SS_SDK_WBP_CashEditButton_HPP
#define UE4SS_SDK_WBP_CashEditButton_HPP

class UWBP_CashEditButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* Hover;                                                    // 0x0268 (size: 0x8)
    class UTextBlock* AtInventoryAmmount_TXT_1;                                       // 0x0270 (size: 0x8)
    class UImage* CashDesk_01;                                                        // 0x0278 (size: 0x8)
    class UImage* GamePadMarker;                                                      // 0x0280 (size: 0x8)
    class UGSSButton* GSSButton_67;                                                   // 0x0288 (size: 0x8)
    class UImage* HoveredVizualSupply;                                                // 0x0290 (size: 0x8)
    class UImage* Image_17;                                                           // 0x0298 (size: 0x8)
    class UImage* Image_53;                                                           // 0x02A0 (size: 0x8)
    class UImage* LockedIcon;                                                         // 0x02A8 (size: 0x8)
    class UOverlay* SupplyCardOverlay;                                                // 0x02B0 (size: 0x8)
    int32 RequiredLevel;                                                              // 0x02B8 (size: 0x4)
    TSoftObjectPtr<class UStaticMesh> CashMesh;                                       // 0x02C0 (size: 0x28)
    class UWBP_CashDesk_Widget_C* CashDeskWidgetRef;                                  // 0x02E8 (size: 0x8)
    int32 MeshIndex;                                                                  // 0x02F0 (size: 0x4)
    FWBP_CashEditButton_COnCashClicked OnCashClicked;                                 // 0x02F8 (size: 0x10)
    void OnCashClicked(int32 MeshIndex, class UWBP_CashEditButton_C* Widget);
    class UTexture2D* Texture;                                                        // 0x0308 (size: 0x8)

    bool CheckLevel();
    void SetUnselected();
    void SetSelected();
    void OnLoaded_56BF05D746F00BD88941E199D431C239(class UObject* Loaded);
    void Construct();
    void BndEvt__WBP_CashEditButton_GSSButton_67_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__WBP_CashEditButton_GSSButton_67_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_CashEditButton_GSSButton_67_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void GamePadHover(bool Active);
    void GamePadClickCashRegister();
    void ExecuteUbergraph_WBP_CashEditButton(int32 EntryPoint);
    void OnCashClicked__DelegateSignature(int32 MeshIndex, class UWBP_CashEditButton_C* Widget);
}; // Size: 0x310

#endif
