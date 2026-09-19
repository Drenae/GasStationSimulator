#ifndef UE4SS_SDK_ShelveToolBar_HPP
#define UE4SS_SDK_ShelveToolBar_HPP

class UShelveToolBar_C : public UGSSBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    class UWidgetAnimation* PlannedRefillingAnim;                                     // 0x0288 (size: 0x8)
    class UWidgetAnimation* RefillEmployeeAnim;                                       // 0x0290 (size: 0x8)
    class UDragoButton* Airport_BUtton;                                               // 0x0298 (size: 0x8)
    class UTextBlock* AirportText;                                                    // 0x02A0 (size: 0x8)
    class UVerticalBox* CapacityBarBox;                                               // 0x02A8 (size: 0x8)
    class UProgressBar* CurrentCapacityProgressBar;                                   // 0x02B0 (size: 0x8)
    class UTextBlock* Decorations_TXT;                                                // 0x02B8 (size: 0x8)
    class UImage* EmployeeIcon;                                                       // 0x02C0 (size: 0x8)
    class UImage* FullRestockBackground;                                              // 0x02C8 (size: 0x8)
    class UImage* GamePadHoverAutoRestock_IMG;                                        // 0x02D0 (size: 0x8)
    class UImage* GamePadHoverCustomPlan_IMG;                                         // 0x02D8 (size: 0x8)
    class UImage* GamePadPlaceHoverSlider_IMG;                                        // 0x02E0 (size: 0x8)
    class UHorizontalBox* HorizontalBox_2;                                            // 0x02E8 (size: 0x8)
    class UWrapBox* InventoryWrapBox;                                                 // 0x02F0 (size: 0x8)
    class UCanvasPanel* MainCanvas;                                                   // 0x02F8 (size: 0x8)
    class UPC_ExitButton_WBP_C* PC_ExitButton_WBP;                                    // 0x0300 (size: 0x8)
    class UTextBlock* PlannedFillingAmount;                                           // 0x0308 (size: 0x8)
    class UProgressBar* PlannedRefillingProgress;                                     // 0x0310 (size: 0x8)
    class UVerticalBox* RefillingBarBox;                                              // 0x0318 (size: 0x8)
    class UDragoButton* RestockButton;                                                // 0x0320 (size: 0x8)
    class UImage* RestockButtonBackground;                                            // 0x0328 (size: 0x8)
    class UTextBlock* RestockButtonText;                                              // 0x0330 (size: 0x8)
    class UOverlay* Restocking_MainOverlay;                                           // 0x0338 (size: 0x8)
    class UMiniGames_Tutorial_C* Restocking_Tutorial;                                 // 0x0340 (size: 0x8)
    class UOverlay* RightOverlay;                                                     // 0x0348 (size: 0x8)
    class UScrollBox* ScrollBoxInventory;                                             // 0x0350 (size: 0x8)
    class UTextBlock* SetThresholdText;                                               // 0x0358 (size: 0x8)
    class UTextBlock* ShelfCapacity_Amount;                                           // 0x0360 (size: 0x8)
    class UVerticalBox* ShelfRefillCapacityBox;                                       // 0x0368 (size: 0x8)
    class UProgressBar* ShelfRefilmentProgressBar;                                    // 0x0370 (size: 0x8)
    class USlider* ShelfRefilSlider;                                                  // 0x0378 (size: 0x8)
    class UVerticalBox* Sorting_VerticalBox;                                          // 0x0380 (size: 0x8)
    class UComboBoxString* SortingComboBox;                                           // 0x0388 (size: 0x8)
    class UTextBlock* ThreshholdPercent;                                              // 0x0390 (size: 0x8)
    class UDragoButton* Warehouse_BUtton_1;                                           // 0x0398 (size: 0x8)
    class UTextBlock* WareHouseText;                                                  // 0x03A0 (size: 0x8)
    class UWBP_RestockCheckBox_C* WBP_EmployeeRestockEnable;                          // 0x03A8 (size: 0x8)
    class UWBP_RestockCheckBox_C* WBP_EmployeeRestockRandom;                          // 0x03B0 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_LeftButton;                                     // 0x03B8 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_LeftShoulder;                                   // 0x03C0 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_RightButton;                                    // 0x03C8 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_TopButton;                                      // 0x03D0 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHintRightShoulder;                                   // 0x03D8 (size: 0x8)
    TArray<UInventorySlot_C*> ItemsSlot;                                              // 0x03E0 (size: 0x10)
    int32 CurrentIndex;                                                               // 0x03F0 (size: 0x4)
    float FinalOffset;                                                                // 0x03F4 (size: 0x4)
    float LerpOffset;                                                                 // 0x03F8 (size: 0x4)
    class UInventorySlot_C* CurrentItem;                                              // 0x0400 (size: 0x8)
    class AShelf* Shelf;                                                              // 0x0408 (size: 0x8)
    int32 keySelected;                                                                // 0x0410 (size: 0x4)
    EStorageType StorageType;                                                         // 0x0414 (size: 0x1)
    class UInventoryComponent* CurrentInventory;                                      // 0x0418 (size: 0x8)
    TArray<TSubclassOf<class AItem>> AvaliableItems;                                  // 0x0420 (size: 0x10)
    TArray<int32> ItemAmounts;                                                        // 0x0430 (size: 0x10)
    bool ShouldSortItems;                                                             // 0x0440 (size: 0x1)
    bool IsSortingAscending;                                                          // 0x0441 (size: 0x1)
    bool IsSortingComboBoxInitialized;                                                // 0x0442 (size: 0x1)
    TArray<FText> SortOptionsArray;                                                   // 0x0448 (size: 0x10)
    TArray<FS_ShelveSortingOptionsLocalization> SortOptionToEnum;                     // 0x0458 (size: 0x10)
    int32 GamePadCurrentSegment;                                                      // 0x0468 (size: 0x4)
    int32 GamePadCurrentProduct;                                                      // 0x046C (size: 0x4)
    int32 GamePadCurrentProductButton;                                                // 0x0470 (size: 0x4)
    int32 GamePadProductsBeforeAction;                                                // 0x0474 (size: 0x4)
    int32 GamePadComboBoxIndex;                                                       // 0x0478 (size: 0x4)
    TMap<EItemTypeCategory, UTexture2D*> ProductIcons;                                // 0x0480 (size: 0x50)
    class UTexture2D* ProductIcon;                                                    // 0x04D0 (size: 0x8)
    class UMaterialInstanceDynamic* PlannedRefillingBarMat;                           // 0x04D8 (size: 0x8)
    TMap<int32, FLinearColor> ProductsColors2;                                        // 0x04E0 (size: 0x50)
    class UMaterialInstanceDynamic* CurrentCapacityBarMat;                            // 0x0530 (size: 0x8)
    TEnumAsByte<E_ShelveToolBarCategory::Type> CurrentTab;                            // 0x0538 (size: 0x1)
    bool ShowAllProductTypes;                                                         // 0x0539 (size: 0x1)
    int32 NumberOfRestockColors;                                                      // 0x053C (size: 0x4)
    bool ShouldBlockRestockTab;                                                       // 0x0540 (size: 0x1)
    int32 GamePadRestockSegment;                                                      // 0x0544 (size: 0x4)
    int32 GamePadRestockElement;                                                      // 0x0548 (size: 0x4)
    TArray<UImage*> SideMenuGamePadElements;                                          // 0x0550 (size: 0x10)
    float UpdatedSliderValue;                                                         // 0x0560 (size: 0x4)
    FTimerHandle GamePadReopenFilterList;                                             // 0x0568 (size: 0x8)

    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void UpdateCurrentStock();
    void UpdateCurrentStockValue();
    void UnlockRestockTab();
    void LoadValuesFromShelf();
    void RefreshHints();
    void HooverFirstSlot();
    void BuildCurrentCapacityProgress Bar();
    void SetupRestocking();
    void UpdateFilling();
    void ShowRestockingTutorial();
    void SetFocusToShelf();
    void HintsVisibility(bool Visible);
    int32 FindProductMaterialIndex(const TSubclassOf<class AItem>& ItemToFind);
    void FindProductColor(const TSubclassOf<class AItem>& ItemToFind, FLinearColor& Color);
    void CreateItemSlots();
    void FindAvailableItems();
    void BuildPlannedRefilling Progress Bar();
    void CreateDynamicMaterialForProgressBar();
    void UpdateShelfCapacity();
    void OnTabChange(TEnumAsByte<E_ShelveToolBarCategory::Type> CurrentTab);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void CheckDLCItem(UClass* Class, bool& CanPass);
    void RefreshShelfCap();
    void Clicked();
    void SetHovered(bool IsChanged);
    void decrementsKey(bool& IsChanged);
    void incrementsKey(bool& IsChanged);
    void Construct();
    void MouseWhelledUp();
    void MouseWhelledDown();
    void Escape();
    void OnClicked(class UInventorySlot_C* InventorySlot, bool IsRemoved);
    void InitGamePad();
    void Destruct();
    void OnPressedGLT();
    void OnPressedGRT();
    void OnPressedRight();
    void OnPressedLeft();
    void OnPressedUp();
    void OnPressedDown();
    void BndEvt__ShelveToolBar_Airport_BUtton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ShelveToolBar_Warehouse_BUtton_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void Refresh();
    void AirportClicked();
    void WarehouseClicked();
    void GoAirportTab();
    void BndEvt__ShelveToolBar_ComboBoxString_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void unbind();
    void GamePadSwitchWarehouseAirport(int32 Index);
    void BndEvt__ShelveToolBar_Fillbutton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void OnShelfRefillChanged(const FRestockProductData& CapacityChange);
    void BndEvt__ShelveToolBar_ShelfRefilSlider_K2Node_ComponentBoundEvent_6_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void PreConstruct(bool IsDesignTime);
    void EnableRestockingOnShelf(bool IsEnabled);
    void ChangeAutoRestocking(bool CheckBoxIsSet);
    void EmployeeRestockClicked(bool IsChecked);
    void GoWarehouseTab();
    void ChangeRestockSlotValue(class UInventorySlot_C* Slot, float Value);
    void BndEvt__ShelveToolBar_PC_ExitButton_WBP_K2Node_ComponentBoundEvent_4_OnExit__DelegateSignature();
    void BndEvt__ShelveToolBar_SortingComboBox_K2Node_ComponentBoundEvent_5_OnOpeningEvent__DelegateSignature();
    void SyncSlots();
    void GamePadChangeValueSlider(bool Add);
    void OnDeviceChanged(bool bNewGamepadMode);
    void BindOnDeviceChanged(bool isConstruct);
    void GamePadOpenAgainFilers();
    void GamePadReopenFilters();
    void ExecuteUbergraph_ShelveToolBar(int32 EntryPoint);
}; // Size: 0x570

#endif
