---@meta

---@class UShelveToolBar_C : UGSSBaseWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field PlannedRefillingAnim UWidgetAnimation
---@field RefillEmployeeAnim UWidgetAnimation
---@field Airport_BUtton UDragoButton
---@field AirportText UTextBlock
---@field CapacityBarBox UVerticalBox
---@field CurrentCapacityProgressBar UProgressBar
---@field Decorations_TXT UTextBlock
---@field EmployeeIcon UImage
---@field FullRestockBackground UImage
---@field GamePadHoverAutoRestock_IMG UImage
---@field GamePadHoverCustomPlan_IMG UImage
---@field GamePadPlaceHoverSlider_IMG UImage
---@field HorizontalBox_2 UHorizontalBox
---@field InventoryWrapBox UWrapBox
---@field MainCanvas UCanvasPanel
---@field PC_ExitButton_WBP UPC_ExitButton_WBP_C
---@field PlannedFillingAmount UTextBlock
---@field PlannedRefillingProgress UProgressBar
---@field RefillingBarBox UVerticalBox
---@field RestockButton UDragoButton
---@field RestockButtonBackground UImage
---@field RestockButtonText UTextBlock
---@field Restocking_MainOverlay UOverlay
---@field Restocking_Tutorial UMiniGames_Tutorial_C
---@field RightOverlay UOverlay
---@field ScrollBoxInventory UScrollBox
---@field SetThresholdText UTextBlock
---@field ShelfCapacity_Amount UTextBlock
---@field ShelfRefillCapacityBox UVerticalBox
---@field ShelfRefilmentProgressBar UProgressBar
---@field ShelfRefilSlider USlider
---@field Sorting_VerticalBox UVerticalBox
---@field SortingComboBox UComboBoxString
---@field ThreshholdPercent UTextBlock
---@field Warehouse_BUtton_1 UDragoButton
---@field WareHouseText UTextBlock
---@field WBP_EmployeeRestockEnable UWBP_RestockCheckBox_C
---@field WBP_EmployeeRestockRandom UWBP_RestockCheckBox_C
---@field WBP_KeyHint_LeftButton UWBP_KeyHint_C
---@field WBP_KeyHint_LeftShoulder UWBP_KeyHint_C
---@field WBP_KeyHint_RightButton UWBP_KeyHint_C
---@field WBP_KeyHint_TopButton UWBP_KeyHint_C
---@field WBP_KeyHintRightShoulder UWBP_KeyHint_C
---@field ItemsSlot TArray<UInventorySlot_C>
---@field CurrentIndex int32
---@field FinalOffset float
---@field LerpOffset float
---@field CurrentItem UInventorySlot_C
---@field Shelf AShelf
---@field keySelected int32
---@field StorageType EStorageType
---@field CurrentInventory UInventoryComponent
---@field AvaliableItems TArray<TSubclassOf<AItem>>
---@field ItemAmounts TArray<int32>
---@field ShouldSortItems boolean
---@field IsSortingAscending boolean
---@field IsSortingComboBoxInitialized boolean
---@field SortOptionsArray TArray<FText>
---@field SortOptionToEnum TArray<FS_ShelveSortingOptionsLocalization>
---@field GamePadCurrentSegment int32
---@field GamePadCurrentProduct int32
---@field GamePadCurrentProductButton int32
---@field GamePadProductsBeforeAction int32
---@field GamePadComboBoxIndex int32
---@field ProductIcons TMap<EItemTypeCategory, UTexture2D>
---@field ProductIcon UTexture2D
---@field PlannedRefillingBarMat UMaterialInstanceDynamic
---@field ProductsColors2 TMap<int32, FLinearColor>
---@field CurrentCapacityBarMat UMaterialInstanceDynamic
---@field CurrentTab E_ShelveToolBarCategory::Type
---@field ShowAllProductTypes boolean
---@field NumberOfRestockColors int32
---@field ShouldBlockRestockTab boolean
---@field GamePadRestockSegment int32
---@field GamePadRestockElement int32
---@field SideMenuGamePadElements TArray<UImage>
---@field UpdatedSliderValue float
---@field GamePadReopenFilterList FTimerHandle
local UShelveToolBar_C = {}

---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UShelveToolBar_C:OnPreviewKeyDown(MyGeometry, InKeyEvent) end
function UShelveToolBar_C:UpdateCurrentStock() end
function UShelveToolBar_C:UpdateCurrentStockValue() end
function UShelveToolBar_C:UnlockRestockTab() end
function UShelveToolBar_C:LoadValuesFromShelf() end
function UShelveToolBar_C:RefreshHints() end
function UShelveToolBar_C:HooverFirstSlot() end
UShelveToolBar_C['BuildCurrentCapacityProgress Bar'] = function(self, ) end
function UShelveToolBar_C:SetupRestocking() end
function UShelveToolBar_C:UpdateFilling() end
function UShelveToolBar_C:ShowRestockingTutorial() end
function UShelveToolBar_C:SetFocusToShelf() end
---@param Visible boolean
function UShelveToolBar_C:HintsVisibility(Visible) end
---@param ItemToFind TSubclassOf<AItem>
---@return int32
function UShelveToolBar_C:FindProductMaterialIndex(ItemToFind) end
---@param ItemToFind TSubclassOf<AItem>
---@param Color FLinearColor
function UShelveToolBar_C:FindProductColor(ItemToFind, Color) end
function UShelveToolBar_C:CreateItemSlots() end
function UShelveToolBar_C:FindAvailableItems() end
UShelveToolBar_C['BuildPlannedRefilling Progress Bar'] = function(self, ) end
function UShelveToolBar_C:CreateDynamicMaterialForProgressBar() end
function UShelveToolBar_C:UpdateShelfCapacity() end
---@param CurrentTab E_ShelveToolBarCategory::Type
function UShelveToolBar_C:OnTabChange(CurrentTab) end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UShelveToolBar_C:OnKeyDown(MyGeometry, InKeyEvent) end
---@param Class UClass
---@param CanPass boolean
function UShelveToolBar_C:CheckDLCItem(Class, CanPass) end
function UShelveToolBar_C:RefreshShelfCap() end
function UShelveToolBar_C:Clicked() end
---@param IsChanged boolean
function UShelveToolBar_C:SetHovered(IsChanged) end
---@param IsChanged boolean
function UShelveToolBar_C:decrementsKey(IsChanged) end
---@param IsChanged boolean
function UShelveToolBar_C:incrementsKey(IsChanged) end
function UShelveToolBar_C:Construct() end
function UShelveToolBar_C:MouseWhelledUp() end
function UShelveToolBar_C:MouseWhelledDown() end
function UShelveToolBar_C:Escape() end
---@param InventorySlot UInventorySlot_C
---@param IsRemoved boolean
function UShelveToolBar_C:OnClicked(InventorySlot, IsRemoved) end
function UShelveToolBar_C:InitGamePad() end
function UShelveToolBar_C:Destruct() end
function UShelveToolBar_C:OnPressedGLT() end
function UShelveToolBar_C:OnPressedGRT() end
function UShelveToolBar_C:OnPressedRight() end
function UShelveToolBar_C:OnPressedLeft() end
function UShelveToolBar_C:OnPressedUp() end
function UShelveToolBar_C:OnPressedDown() end
function UShelveToolBar_C:BndEvt__ShelveToolBar_Airport_BUtton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UShelveToolBar_C:BndEvt__ShelveToolBar_Warehouse_BUtton_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() end
function UShelveToolBar_C:Refresh() end
function UShelveToolBar_C:AirportClicked() end
function UShelveToolBar_C:WarehouseClicked() end
function UShelveToolBar_C:GoAirportTab() end
---@param SelectedItem FString
---@param SelectionType ESelectInfo::Type
function UShelveToolBar_C:BndEvt__ShelveToolBar_ComboBoxString_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(SelectedItem, SelectionType) end
function UShelveToolBar_C:unbind() end
---@param Index int32
function UShelveToolBar_C:GamePadSwitchWarehouseAirport(Index) end
function UShelveToolBar_C:BndEvt__ShelveToolBar_Fillbutton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature() end
---@param CapacityChange FRestockProductData
function UShelveToolBar_C:OnShelfRefillChanged(CapacityChange) end
---@param Value float
function UShelveToolBar_C:BndEvt__ShelveToolBar_ShelfRefilSlider_K2Node_ComponentBoundEvent_6_OnFloatValueChangedEvent__DelegateSignature(Value) end
---@param IsDesignTime boolean
function UShelveToolBar_C:PreConstruct(IsDesignTime) end
---@param IsEnabled boolean
function UShelveToolBar_C:EnableRestockingOnShelf(IsEnabled) end
---@param CheckBoxIsSet boolean
function UShelveToolBar_C:ChangeAutoRestocking(CheckBoxIsSet) end
---@param IsChecked boolean
function UShelveToolBar_C:EmployeeRestockClicked(IsChecked) end
function UShelveToolBar_C:GoWarehouseTab() end
---@param Slot UInventorySlot_C
---@param Value float
function UShelveToolBar_C:ChangeRestockSlotValue(Slot, Value) end
function UShelveToolBar_C:BndEvt__ShelveToolBar_PC_ExitButton_WBP_K2Node_ComponentBoundEvent_4_OnExit__DelegateSignature() end
function UShelveToolBar_C:BndEvt__ShelveToolBar_SortingComboBox_K2Node_ComponentBoundEvent_5_OnOpeningEvent__DelegateSignature() end
function UShelveToolBar_C:SyncSlots() end
---@param Add boolean
function UShelveToolBar_C:GamePadChangeValueSlider(Add) end
---@param bNewGamepadMode boolean
function UShelveToolBar_C:OnDeviceChanged(bNewGamepadMode) end
---@param isConstruct boolean
function UShelveToolBar_C:BindOnDeviceChanged(isConstruct) end
function UShelveToolBar_C:GamePadOpenAgainFilers() end
function UShelveToolBar_C:GamePadReopenFilters() end
---@param EntryPoint int32
function UShelveToolBar_C:ExecuteUbergraph_ShelveToolBar(EntryPoint) end


