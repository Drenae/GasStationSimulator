#ifndef UE4SS_SDK_P_PC_Workshop_HPP
#define UE4SS_SDK_P_PC_Workshop_HPP

class UP_PC_Workshop_C : public UPcBaseTab
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UWidgetAnimation* MoneyPopup;                                               // 0x0298 (size: 0x8)
    class UWidgetAnimation* Vibe;                                                     // 0x02A0 (size: 0x8)
    class UFilterButton_C* BatteryFilter;                                             // 0x02A8 (size: 0x8)
    class UImage* BG_IMG;                                                             // 0x02B0 (size: 0x8)
    class UImage* CapacityIcon;                                                       // 0x02B8 (size: 0x8)
    class UFilterButton_C* CarMirrorsFilters;                                         // 0x02C0 (size: 0x8)
    class UFilterButton_C* CoolantFilter;                                             // 0x02C8 (size: 0x8)
    class UDragoButton* DragoButton_105;                                              // 0x02D0 (size: 0x8)
    class UFilterButton_C* EngineOilFilters;                                          // 0x02D8 (size: 0x8)
    class UDragoButton* ExitButton;                                                   // 0x02E0 (size: 0x8)
    class UFilterButton_C* FilterCarItemsAll;                                         // 0x02E8 (size: 0x8)
    class UImage* GrayButtonBlocker;                                                  // 0x02F0 (size: 0x8)
    class UImage* GreenBottomLine;                                                    // 0x02F8 (size: 0x8)
    class UImage* Image_74;                                                           // 0x0300 (size: 0x8)
    class UImage* Image_222;                                                          // 0x0308 (size: 0x8)
    class UDragoButton* LevelUpButton;                                                // 0x0310 (size: 0x8)
    class UTextBlock* LevelUpTXT;                                                     // 0x0318 (size: 0x8)
    class UTextBlock* MaxLevelTXT;                                                    // 0x0320 (size: 0x8)
    class UOverlay* MoneyBox;                                                         // 0x0328 (size: 0x8)
    class UTextBlock* MoreInfoWerehouseTXT;                                           // 0x0330 (size: 0x8)
    class UTextBlock* NoMoneyForUpgradTXT;                                            // 0x0338 (size: 0x8)
    class UPC_PS4_bindings_C* PC_PS4_bindings;                                        // 0x0340 (size: 0x8)
    class UTextBlock* PlayerMoneytTXT;                                                // 0x0348 (size: 0x8)
    class UTextBlock* PlayerMoneytTXT_1;                                              // 0x0350 (size: 0x8)
    class UTextBlock* ReqTXT;                                                         // 0x0358 (size: 0x8)
    class UFilterButton_C* ScratchRemoverFilter;                                      // 0x0360 (size: 0x8)
    class UFilterButton_C* SparkPlugFilters;                                          // 0x0368 (size: 0x8)
    class UTextBlock* StationLVLlowTXT;                                               // 0x0370 (size: 0x8)
    class UImage* StructureIllustration;                                              // 0x0378 (size: 0x8)
    class UImage* Tidal_StructureIlustration;                                         // 0x0380 (size: 0x8)
    class UFilterButton_C* TiresFilter;                                               // 0x0388 (size: 0x8)
    class UButton* ToLeftButton;                                                      // 0x0390 (size: 0x8)
    class UButton* ToLeftButton_1;                                                    // 0x0398 (size: 0x8)
    class UTextBlock* UpgradeWorkshopCostTXT;                                         // 0x03A0 (size: 0x8)
    class UTextBlock* UpgradeWorkshopCostTXT_1;                                       // 0x03A8 (size: 0x8)
    class UTextBlock* WareHouseCapacityTXT;                                           // 0x03B0 (size: 0x8)
    class UTextBlock* WarehouseLevel;                                                 // 0x03B8 (size: 0x8)
    class UScrollBox* WareHouseProductsScroll;                                        // 0x03C0 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_LeftShoulder;                                   // 0x03C8 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_MoveLeft;                                       // 0x03D0 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_MoveLeft_1;                                     // 0x03D8 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_RightButton;                                    // 0x03E0 (size: 0x8)
    bool QuestForUpgradeDone;                                                         // 0x03E8 (size: 0x1)
    bool CanUpgradeAtStationLevel;                                                    // 0x03E9 (size: 0x1)
    bool CanPayUpgradeMoeny;                                                          // 0x03EA (size: 0x1)
    TArray<UDragoButton*> MiddleSegmentElements;                                      // 0x03F0 (size: 0x10)
    int32 keySelected1;                                                               // 0x0400 (size: 0x4)
    EItemTypeCategory LastFilteredClass;                                              // 0x0404 (size: 0x1)
    bool CanBePayedUpgradeTree;                                                       // 0x0405 (size: 0x1)
    TArray<EItemTypeCategory> SelectedCategories;                                     // 0x0408 (size: 0x10)
    int32 FiltersOn;                                                                  // 0x0418 (size: 0x4)
    int32 Array Index;                                                                // 0x041C (size: 0x4)
    int32 GamePadFilterIndex;                                                         // 0x0420 (size: 0x4)
    TArray<UFilterButton_C*> FilterButtons;                                           // 0x0428 (size: 0x10)
    int32 GamePadItemIndex;                                                           // 0x0438 (size: 0x4)
    int32 GamePadSection;                                                             // 0x043C (size: 0x4)

    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void HintsVisibility(bool Visible);
    void HnadleAllOffOn();
    void AddRemoveCategory(EItemTypeCategory Category);
    void AchievementHandling();
    void PayForWorkshop(FName WorkshopLevel);
    void Set Hovered(bool Condition);
    void decrementsFilters(bool& IsChanged);
    void incrementsFilter(bool& IsChanged);
    void PayForUpgrade(int32 StationLevel, float UpgradeCoast, TSubclassOf<class UGSSQuest> QuestToComplite, bool& CanBePayed, bool& CanPay, bool& HaveLevel);
    void SetFilterProduct();
    void TopMenuHandle(FKeyEvent KeyEvent);
    void Construct();
    void BndEvt__Button_97_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__LevelUpButton_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
    void InitGamePad();
    void UpdateMoneyAmmount(const float CharacterMoney, const float Difference, EEconomyDetailedYieldType YieldType);
    void RefreshForGamePad();
    void Destruct();
    void PressGLT();
    void PressGRT();
    void PressLT();
    void CustomEvent();
    void BndEvt__ExitButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ExitButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
    void Refresh(const class UInventoryComponent* Inventory);
    void RefreshOnInventoryUpdate();
    void WorkShopLVLupFromUpgradeTree();
    void BindFilterButtons();
    void OnClickedWheelFilter();
    void ScratchRemover();
    void OnClickedMirrorsFilter();
    void OnClickedEngineOilFilter();
    void OnClickedBatteryFilter();
    void OnClickedSparkPlugFilter();
    void OnClickedCoolant();
    void OnClickedAllFilters();
    void UnbindAllFilters();
    void RefreshJustCap();
    void CustomEscape();
    void PreConstruct(bool IsDesignTime);
    void GamePadFilterClick();
    void GamePadHoverNextFilter(bool Increase);
    void GamePadHoverNextItem(bool Increase);
    void GamePadSwitchItemButton(bool Increase);
    void GamePadItemButtonClick();
    void GamePadLevelUpButton();
    void ExecuteUbergraph_P_PC_Workshop(int32 EntryPoint);
}; // Size: 0x440

#endif
