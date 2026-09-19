#ifndef UE4SS_SDK_WBP_PC_Home_Card_HPP
#define UE4SS_SDK_WBP_PC_Home_Card_HPP

class UWBP_PC_Home_Card_C : public UPC_Base_Card
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class UWidgetAnimation* OnHovAnimation;                                           // 0x0318 (size: 0x8)
    class UButton* ActionWidget;                                                      // 0x0320 (size: 0x8)
    class UGSSButton* BuyWorkshopButton;                                              // 0x0328 (size: 0x8)
    class UOverlay* BuyWorkShopOverlay;                                               // 0x0330 (size: 0x8)
    class UTextBlock* BuyWorkshopTXT;                                                 // 0x0338 (size: 0x8)
    class UImage* CardIllustration_IMG;                                               // 0x0340 (size: 0x8)
    class UImage* FrontStraps_IMG;                                                    // 0x0348 (size: 0x8)
    class UImage* GrayBlocking_IMG;                                                   // 0x0350 (size: 0x8)
    class UImage* GrayGradient;                                                       // 0x0358 (size: 0x8)
    class UTextBlock* MoreInfoFuelStationTXT;                                         // 0x0360 (size: 0x8)
    class USizeBox* MoreInfoSizer;                                                    // 0x0368 (size: 0x8)
    class UGSSButton* MoreInfoStation;                                                // 0x0370 (size: 0x8)
    class UImage* NameBG_IMG_1;                                                       // 0x0378 (size: 0x8)
    class USizeBox* SizeBox_0;                                                        // 0x0380 (size: 0x8)
    class USizeBox* SizeBox_9;                                                        // 0x0388 (size: 0x8)
    class UTextBlock* StationLevelTXT;                                                // 0x0390 (size: 0x8)
    class UTextBlock* TextBlock_2;                                                    // 0x0398 (size: 0x8)
    class UTextBlock* Title_TXT;                                                      // 0x03A0 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_BottomButton;                                   // 0x03A8 (size: 0x8)
    class UTextBlock* WorkshopBlockedTXT;                                             // 0x03B0 (size: 0x8)
    class UOverlay* WorkshopBuyCondition;                                             // 0x03B8 (size: 0x8)
    class UTextBlock* WorkshopBuyConditionTXT;                                        // 0x03C0 (size: 0x8)
    TSoftClassPtr<AInteractableActor> BuildingClass;                                  // 0x03C8 (size: 0x28)
    class AInteractableActor* Inter;                                                  // 0x03F0 (size: 0x8)
    class UGSSBaseWidget* WidgetRef;                                                  // 0x03F8 (size: 0x8)
    class AInteractableActor* BuidingReference;                                       // 0x0400 (size: 0x8)
    class UTechnologyAsset* TechnologyToUnlock;                                       // 0x0408 (size: 0x8)
    int32 OtherBuildingRequiredLevel;                                                 // 0x0410 (size: 0x4)
    EBuildingType OtherBUidlingType;                                                  // 0x0414 (size: 0x1)
    bool GamePadVisibleBeforeColapsed;                                                // 0x0415 (size: 0x1)

    void HintsVisibility(bool Visible);
    void RestoreBuilding();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__WBP_PC_Home_Card_MoreInfoStation_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__WBP_PC_Home_Card_BuyWorkshopButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__WBP_PC_Home_Card_BuyWorkshopButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_PC_Home_Card_BuyWorkshopButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_PC_Home_Card_GSSButton_234_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void GamePadHoverRestore(bool Hovered);
    void GamePadHoverMoreIfon(bool Hover);
    void CustomEvent_0();
    void Destruct();
    void ExecuteUbergraph_WBP_PC_Home_Card(int32 EntryPoint);
}; // Size: 0x416

#endif
