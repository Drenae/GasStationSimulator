#ifndef UE4SS_SDK_P_PC_Warehouse_HPP
#define UE4SS_SDK_P_PC_Warehouse_HPP

class UP_PC_Warehouse_C : public UPcBaseTab
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UWidgetAnimation* MoneyPopup;                                               // 0x0298 (size: 0x8)
    class UWidgetAnimation* Vibe;                                                     // 0x02A0 (size: 0x8)
    class UFilterButton_C* AlcocholFilter;                                            // 0x02A8 (size: 0x8)
    class UFilterButton_C* AllFilter;                                                 // 0x02B0 (size: 0x8)
    class UImage* BG_IMG;                                                             // 0x02B8 (size: 0x8)
    class UImage* CapacityIcon;                                                       // 0x02C0 (size: 0x8)
    class UFilterButton_C* CarCareFilter;                                             // 0x02C8 (size: 0x8)
    class UFilterButton_C* CigaretesFilter;                                           // 0x02D0 (size: 0x8)
    class UFilterButton_C* DrinksFilter;                                              // 0x02D8 (size: 0x8)
    class UDragoButton* ExitButton;                                                   // 0x02E0 (size: 0x8)
    class UTextBlock* FuelAmmountTXT;                                                 // 0x02E8 (size: 0x8)
    class UFilterButton_C* GlassesFilter;                                             // 0x02F0 (size: 0x8)
    class UImage* GrayButtonBlocker;                                                  // 0x02F8 (size: 0x8)
    class UImage* GreenBottomLine;                                                    // 0x0300 (size: 0x8)
    class UFilterButton_C* HatsFilter;                                                // 0x0308 (size: 0x8)
    class UFilterButton_C* IceCreamsFilter;                                           // 0x0310 (size: 0x8)
    class UImage* Image_74;                                                           // 0x0318 (size: 0x8)
    class UImage* Image_222;                                                          // 0x0320 (size: 0x8)
    class UDragoButton* LevelUpButton;                                                // 0x0328 (size: 0x8)
    class UTextBlock* LevelUpTXT;                                                     // 0x0330 (size: 0x8)
    class UTextBlock* MaxLevelTXT;                                                    // 0x0338 (size: 0x8)
    class UOverlay* MoneyBox;                                                         // 0x0340 (size: 0x8)
    class UTextBlock* MoreInfoWerehouseTXT;                                           // 0x0348 (size: 0x8)
    class UFilterButton_C* NewsPapersFilter;                                          // 0x0350 (size: 0x8)
    class UFilterButton_C* PasteriesFilter;                                           // 0x0358 (size: 0x8)
    class UPC_PS4_bindings_C* PC_PS4_bindings;                                        // 0x0360 (size: 0x8)
    class UTextBlock* PlayerMoneytTXT;                                                // 0x0368 (size: 0x8)
    class UTextBlock* PlayerMoneytTXT_1;                                              // 0x0370 (size: 0x8)
    class UDragoButton* RepaintButton;                                                // 0x0378 (size: 0x8)
    class UTextBlock* ReqTXT;                                                         // 0x0380 (size: 0x8)
    class UFilterButton_C* SnacksFilter;                                              // 0x0388 (size: 0x8)
    class UFilterButton_C* SoftToysFilter;                                            // 0x0390 (size: 0x8)
    class UImage* StructureIllustration;                                              // 0x0398 (size: 0x8)
    class UImage* Tidal_StructureIlustration;                                         // 0x03A0 (size: 0x8)
    class UButton* ToLeftButton;                                                      // 0x03A8 (size: 0x8)
    class UButton* ToLeftButton_1;                                                    // 0x03B0 (size: 0x8)
    class UFilterButton_C* ToysFilter;                                                // 0x03B8 (size: 0x8)
    class UTextBlock* UpgradeWarehouseCostTXT;                                        // 0x03C0 (size: 0x8)
    class UTextBlock* UpgradeWarehouseCostTXT_1;                                      // 0x03C8 (size: 0x8)
    class UTextBlock* WareHouseCapacityTXT;                                           // 0x03D0 (size: 0x8)
    class UTextBlock* WarehouseLevel;                                                 // 0x03D8 (size: 0x8)
    class UScrollBox* WareHouseProductsScroll;                                        // 0x03E0 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_LeftShoulder;                                   // 0x03E8 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_MoveLeft;                                       // 0x03F0 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_MoveLeft_1;                                     // 0x03F8 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_RightButton;                                    // 0x0400 (size: 0x8)
    bool QuestForUpgradeDone;                                                         // 0x0408 (size: 0x1)
    bool CanUpgradeAtStationLevel;                                                    // 0x0409 (size: 0x1)
    bool CanPayUpgradeMoeny;                                                          // 0x040A (size: 0x1)
    TArray<UDragoButton*> MiddleSegmentElements;                                      // 0x0410 (size: 0x10)
    int32 keySelected1;                                                               // 0x0420 (size: 0x4)
    bool CanBePayedUpgradeTree;                                                       // 0x0424 (size: 0x1)
    int32 ShelfItemsAmmount;                                                          // 0x0428 (size: 0x4)
    TArray<EItemTypeCategory> SelectedCategories;                                     // 0x0430 (size: 0x10)
    int32 FiltersOn;                                                                  // 0x0440 (size: 0x4)
    int32 CurrentIndex;                                                               // 0x0444 (size: 0x4)
    TArray<UFilterButton_C*> FilterButtons;                                           // 0x0448 (size: 0x10)
    int32 GamePadFilterIndex;                                                         // 0x0458 (size: 0x4)
    int32 GamePadSection;                                                             // 0x045C (size: 0x4)
    int32 GamePadItemIndex;                                                           // 0x0460 (size: 0x4)

    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void HintsVisibility(bool Visible);
    void HnadleAllOffOn();
    void AddRemoveCategory(EItemTypeCategory Category);
    void AchievementHandling();
    void PayForWarehouse(FName Level);
    void Set Hovered();
    void decrementsFilters();
    void incrementsFilter();
    void PayForUpgrade(int32 StationLevel, float UpgradeCoast, TSubclassOf<class UGSSQuest> QuestToComplite, bool& CanBePayed, bool& CanPay, bool& HaveStationLevel);
    void SetFilterProduct();
    void TopMenuHandle(FKeyEvent KeyEvent);
    void BndEvt__DragoButton_8_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void BndEvt__LevelUpButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature();
    void InitGamePad();
    void PressGLT();
    void PressGRT();
    void PressLT();
    void CustomEvent();
    void Destruct();
    void BndEvt__ExitButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void UpdateMoneyAmmount(const float CharacterMoney, const float Difference, EEconomyDetailedYieldType YieldType);
    void RefreshForGamePad();
    void UpdateFuel(const float CurrentFuelAmount);
    void BndEvt__ExitButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ExitButton_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature();
    void Refresh(const class UInventoryComponent* Inventory);
    void RefreshOnInventoryUpdate();
    void WareHouseLVLupFromUpgradeTree();
    void RefreshOnInventoryCap();
    void BindFilters();
    void OnClickedIceCreamFilter();
    void OnClickedSoftDrinksFilter();
    void OnClickedFilterFood();
    void OnClickedAlcohol();
    void OnClickedCigaretesFilter();
    void OnClickedCarCareFilter();
    void OnClickedNewsPapersFilter();
    void OnClickedHatsFilter();
    void OnClickedGlassesFilter();
    void OnClickedSoftToysFilter();
    void OnClickedToysFilter();
    void OnClickedPasteriesFilter();
    void OnClickedAllFilters();
    void RefreshJustCap();
    void CustomEscape();
    void PreConstruct(bool IsDesignTime);
    void GamePadHoverNextFilter(bool Increase);
    void GamePadHoverNextItem(bool Increase);
    void GamePadSwitchItemButton(bool Increase);
    void GamePadItemButtonClick();
    void GamePadFilterClick();
    void GamePadLevelUpButton();
    void ExecuteUbergraph_P_PC_Warehouse(int32 EntryPoint);
}; // Size: 0x464

#endif
