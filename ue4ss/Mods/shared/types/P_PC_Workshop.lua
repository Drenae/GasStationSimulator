---@meta

---@class UP_PC_Workshop_C : UPcBaseTab
---@field UberGraphFrame FPointerToUberGraphFrame
---@field MoneyPopup UWidgetAnimation
---@field Vibe UWidgetAnimation
---@field BatteryFilter UFilterButton_C
---@field BG_IMG UImage
---@field CapacityIcon UImage
---@field CarMirrorsFilters UFilterButton_C
---@field CoolantFilter UFilterButton_C
---@field DragoButton_105 UDragoButton
---@field EngineOilFilters UFilterButton_C
---@field ExitButton UDragoButton
---@field FilterCarItemsAll UFilterButton_C
---@field GrayButtonBlocker UImage
---@field GreenBottomLine UImage
---@field Image_74 UImage
---@field Image_222 UImage
---@field LevelUpButton UDragoButton
---@field LevelUpTXT UTextBlock
---@field MaxLevelTXT UTextBlock
---@field MoneyBox UOverlay
---@field MoreInfoWerehouseTXT UTextBlock
---@field NoMoneyForUpgradTXT UTextBlock
---@field PC_PS4_bindings UPC_PS4_bindings_C
---@field PlayerMoneytTXT UTextBlock
---@field PlayerMoneytTXT_1 UTextBlock
---@field ReqTXT UTextBlock
---@field ScratchRemoverFilter UFilterButton_C
---@field SparkPlugFilters UFilterButton_C
---@field StationLVLlowTXT UTextBlock
---@field StructureIllustration UImage
---@field Tidal_StructureIlustration UImage
---@field TiresFilter UFilterButton_C
---@field ToLeftButton UButton
---@field ToLeftButton_1 UButton
---@field UpgradeWorkshopCostTXT UTextBlock
---@field UpgradeWorkshopCostTXT_1 UTextBlock
---@field WareHouseCapacityTXT UTextBlock
---@field WarehouseLevel UTextBlock
---@field WareHouseProductsScroll UScrollBox
---@field WBP_KeyHint_LeftShoulder UWBP_KeyHint_C
---@field WBP_KeyHint_MoveLeft UWBP_KeyHint_C
---@field WBP_KeyHint_MoveLeft_1 UWBP_KeyHint_C
---@field WBP_KeyHint_RightButton UWBP_KeyHint_C
---@field QuestForUpgradeDone boolean
---@field CanUpgradeAtStationLevel boolean
---@field CanPayUpgradeMoeny boolean
---@field MiddleSegmentElements TArray<UDragoButton>
---@field keySelected1 int32
---@field LastFilteredClass EItemTypeCategory
---@field CanBePayedUpgradeTree boolean
---@field SelectedCategories TArray<EItemTypeCategory>
---@field FiltersOn int32
---@field ['Array Index'] int32
---@field GamePadFilterIndex int32
---@field FilterButtons TArray<UFilterButton_C>
---@field GamePadItemIndex int32
---@field GamePadSection int32
local UP_PC_Workshop_C = {}

---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UP_PC_Workshop_C:OnPreviewKeyDown(MyGeometry, InKeyEvent) end
---@param Visible boolean
function UP_PC_Workshop_C:HintsVisibility(Visible) end
function UP_PC_Workshop_C:HnadleAllOffOn() end
---@param Category EItemTypeCategory
function UP_PC_Workshop_C:AddRemoveCategory(Category) end
function UP_PC_Workshop_C:AchievementHandling() end
---@param WorkshopLevel FName
function UP_PC_Workshop_C:PayForWorkshop(WorkshopLevel) end
---@param Condition boolean
UP_PC_Workshop_C['Set Hovered'] = function(self, Condition) end
---@param IsChanged boolean
function UP_PC_Workshop_C:decrementsFilters(IsChanged) end
---@param IsChanged boolean
function UP_PC_Workshop_C:incrementsFilter(IsChanged) end
---@param StationLevel int32
---@param UpgradeCoast float
---@param QuestToComplite TSubclassOf<UGSSQuest>
---@param CanBePayed boolean
---@param CanPay boolean
---@param HaveLevel boolean
function UP_PC_Workshop_C:PayForUpgrade(StationLevel, UpgradeCoast, QuestToComplite, CanBePayed, CanPay, HaveLevel) end
function UP_PC_Workshop_C:SetFilterProduct() end
---@param KeyEvent FKeyEvent
function UP_PC_Workshop_C:TopMenuHandle(KeyEvent) end
function UP_PC_Workshop_C:Construct() end
function UP_PC_Workshop_C:BndEvt__Button_97_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature() end
function UP_PC_Workshop_C:BndEvt__LevelUpButton_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature() end
function UP_PC_Workshop_C:InitGamePad() end
---@param CharacterMoney float
---@param Difference float
---@param YieldType EEconomyDetailedYieldType
function UP_PC_Workshop_C:UpdateMoneyAmmount(CharacterMoney, Difference, YieldType) end
function UP_PC_Workshop_C:RefreshForGamePad() end
function UP_PC_Workshop_C:Destruct() end
function UP_PC_Workshop_C:PressGLT() end
function UP_PC_Workshop_C:PressGRT() end
function UP_PC_Workshop_C:PressLT() end
function UP_PC_Workshop_C:CustomEvent() end
function UP_PC_Workshop_C:BndEvt__ExitButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature() end
function UP_PC_Workshop_C:BndEvt__ExitButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature() end
---@param Inventory UInventoryComponent
function UP_PC_Workshop_C:Refresh(Inventory) end
function UP_PC_Workshop_C:RefreshOnInventoryUpdate() end
function UP_PC_Workshop_C:WorkShopLVLupFromUpgradeTree() end
function UP_PC_Workshop_C:BindFilterButtons() end
function UP_PC_Workshop_C:OnClickedWheelFilter() end
function UP_PC_Workshop_C:ScratchRemover() end
function UP_PC_Workshop_C:OnClickedMirrorsFilter() end
function UP_PC_Workshop_C:OnClickedEngineOilFilter() end
function UP_PC_Workshop_C:OnClickedBatteryFilter() end
function UP_PC_Workshop_C:OnClickedSparkPlugFilter() end
function UP_PC_Workshop_C:OnClickedCoolant() end
function UP_PC_Workshop_C:OnClickedAllFilters() end
function UP_PC_Workshop_C:UnbindAllFilters() end
function UP_PC_Workshop_C:RefreshJustCap() end
function UP_PC_Workshop_C:CustomEscape() end
---@param IsDesignTime boolean
function UP_PC_Workshop_C:PreConstruct(IsDesignTime) end
function UP_PC_Workshop_C:GamePadFilterClick() end
---@param Increase boolean
function UP_PC_Workshop_C:GamePadHoverNextFilter(Increase) end
---@param Increase boolean
function UP_PC_Workshop_C:GamePadHoverNextItem(Increase) end
---@param Increase boolean
function UP_PC_Workshop_C:GamePadSwitchItemButton(Increase) end
function UP_PC_Workshop_C:GamePadItemButtonClick() end
function UP_PC_Workshop_C:GamePadLevelUpButton() end
---@param EntryPoint int32
function UP_PC_Workshop_C:ExecuteUbergraph_P_PC_Workshop(EntryPoint) end


