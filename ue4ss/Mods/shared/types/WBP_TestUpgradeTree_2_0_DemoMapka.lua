---@meta

---@class UWBP_TestUpgradeTree_2_0_DemoMapka_C : UWBP_UpgradesParent_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RV_Scroll UWidgetAnimation
---@field DIC_Scroll UWidgetAnimation
---@field JY_Scroll UWidgetAnimation
---@field AS_Scroll UWidgetAnimation
---@field PT_Scroll UWidgetAnimation
---@field CTT_Scroll UWidgetAnimation
---@field BaseScroll UWidgetAnimation
---@field AirPortBuildings UHorizontalBox
---@field AirportLevel_TXT UTextBlock
---@field AirPortLvl UHorizontalBox
---@field AirPortLvl_1 UHorizontalBox
---@field AirPortLvl_2 UHorizontalBox
---@field AS_DLC_TT USizeBox
---@field BaseScroll_TT USizeBox
---@field BlockerOverlayCurrentOwned UOverlay
---@field BlockerOverlayOwned UOverlay
---@field BluePrintPricteStructure_TXT UTextBlock
---@field BluePrintsCostHorizontal UHorizontalBox
---@field ButtonDLCUpgrades_AS UButtonDLCUpgrades_WBP_C
---@field ButtonDLCUpgrades_Base UButtonDLCUpgrades_WBP_C
---@field ButtonDLCUpgrades_CTT UButtonDLCUpgrades_WBP_C
---@field ButtonDLCUpgrades_DIC UButtonDLCUpgrades_WBP_C
---@field ButtonDLCUpgrades_JY UButtonDLCUpgrades_WBP_C
---@field ButtonDLCUpgrades_PT UButtonDLCUpgrades_WBP_C
---@field ButtonDLCUpgrades_RV UButtonDLCUpgrades_WBP_C
---@field CarWashLvl_TXT UTextBlock
---@field CommunicationCenterLevel_TXT UTextBlock
---@field ContractPointsCostHorizontal UHorizontalBox
---@field ContractPointsPricteStructure_TXT UTextBlock
---@field CostHorizontal UHorizontalBox
---@field CTT_DLC_TT USizeBox
---@field DetailsInfo UOverlay
---@field DIC_DLC_TT USizeBox
---@field GasStationLvl_TXT UTextBlock
---@field IceCreamLvl_TXT UTextBlock
---@field IceCreamStandLvl UHorizontalBox
---@field Image UImage
---@field Image_1 UImage
---@field Image_2 UImage
---@field Image_3 UImage
---@field Image_4 UImage
---@field Image_67 UImage
---@field Image_95 UImage
---@field Image_204 UImage
---@field Image_205 UImage
---@field Image_327 UImage
---@field Image_363 UImage
---@field Image_photo UImage
---@field JY_DLC_TT USizeBox
---@field LevelUpButtonMain UGSSButton
---@field LevelUpButtonRedMain UDragoButton
---@field MainCanvasPanel UCanvasPanel
---@field MainCardUpgradeButtons UOverlay
---@field MoreInfo_Horizontal UVerticalBox
---@field MoreInfoButton_C_2 UMoreInfoButton_C
---@field MovableOverlayAS UOverlay
---@field MovableOverlayBase UOverlay
---@field MovableOverlayDIC UOverlay
---@field MovableOverlayJY UOverlay
---@field MovableOverlayPT UOverlay
---@field MovableOverlayRV UOverlay
---@field MovableOverlayTT UOverlay
---@field Overlay_2 UOverlay
---@field PartySpotLevel_TXT UTextBlock
---@field PartySpotLvl UHorizontalBox
---@field PartyTimeBuildings UHorizontalBox
---@field PricteContractPointsTXT UTextBlock
---@field PricteStructure_TXT UTextBlock
---@field PricteStructure_TXT_1 UTextBlock
---@field PricteStructure_TXT_2 UTextBlock
---@field PT_DLC_TT USizeBox
---@field RadioTowerLevel_TXT UTextBlock
---@field RatingLevelPricteStructure_TXT UTextBlock
---@field RatingLevelText UTextBlock
---@field RenownLevelHorizontal UHorizontalBox
---@field RenownLevelPricteStructure_TXT_1 UTextBlock
---@field RenownLevelTXT_1 UTextBlock
---@field RV_DLC_TT USizeBox
---@field RVRatingLevelHorizontal UHorizontalBox
---@field ScrollBox_0 UScrollBox
---@field Segments_Vertical UVerticalBox
---@field StorageLvl_TXT UTextBlock
---@field StorageStandLvl UHorizontalBox
---@field StructureLevel_TXT UTextBlock
---@field StructureName_TXT UTextBlock
---@field TechTreeAS UTechTreeWidget
---@field TechTreeBase UTechTreeWidget
---@field TechTreeCTT UTechTreeWidget
---@field TechTreeDIC UTechTreeWidget
---@field TechTreeJY UTechTreeWidget
---@field TechTreePT UTechTreeWidget
---@field TechTreeRV UTechTreeWidget
---@field TextBlock_unlocks UTextBlock
---@field Unlocks UVerticalBox
---@field VerticalBox_0 UVerticalBox
---@field WarehouseLvl_TXT UTextBlock
---@field WBP_KeyHint_BottomButton UWBP_KeyHint_C
---@field WorkshopLvl_TXT UTextBlock
---@field CurrentTechAsset UTechnologyAsset
---@field AnimationGoFrom UWidgetAnimation
---@field AnimationGoTo UWidgetAnimation
---@field ['BP Tech Tree Manager'] UBP_TechTreeManager_C
---@field ['Previous Technology To Unlock'] UTechnologyAsset
---@field LMB_Down boolean
---@field MovableOverlays TArray<UOverlay>
---@field CurrentOverlayToMove UOverlay
---@field FromDestroy boolean
---@field RedButtonText FText
---@field BlueprintSoftClass TSoftClassPtr<ABuildingBlueprint_BP_C>
---@field PreviousMousePosition FVector2D
---@field bClickedInUpgradeTree boolean
---@field DefaultOverlayTranslations TArray<FVector2D>
---@field GamePadTechNodes TArray<UTechNodeWidget>
---@field GamePadCurrentTechNode UTTTechNode
---@field GamePadCurrentWidget UTechNodeWidget
---@field GamePadCurrentSection int32
---@field GamePadThumbStickDirection FVector2D
---@field GamePadLastMoveFromThumbstick boolean
---@field GamePadThumbstickMoved boolean
---@field GamePadMoveDirectionValue int32
---@field GamePadLasCheckedNodeEnabled boolean
---@field GamePadTechNodeToCheck UTechnologyAsset
---@field GamePadCurrentDLCbutton int32
---@field Treshhold float
---@field NodeIndexToCheck int32
---@field TTNodeToSet UTTTechNode
local UWBP_TestUpgradeTree_2_0_DemoMapka_C = {}

---@param IsGamepadConnected boolean
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:OnGamepadConnected(IsGamepadConnected) end
---@param XAxis boolean
---@return float
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:GetScaledViewportHalfSize(XAxis) end
---@param DirectionIndex int32
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:MoveTechNodesOverlay(DirectionIndex) end
---@param TechnologyAsset UBP_AdvencedTechnologyAsset_C
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:SetDatafromTechnologyAsset(TechnologyAsset) end
---@param self2 UWidget
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:GameplayConstruct(self2) end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:OnPreviewKeyDown(MyGeometry, InKeyEvent) end
---@param Visible boolean
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:HintsVisibility(Visible) end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:OnKeyDown(MyGeometry, InKeyEvent) end
---@param MyGeometry FGeometry
---@param InAnalogInputEvent FAnalogInputEvent
---@return FEventReply
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:OnAnalogValueChanged(MyGeometry, InAnalogInputEvent) end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:OnKeyUp(MyGeometry, InKeyEvent) end
---@param Down boolean
UWBP_TestUpgradeTree_2_0_DemoMapka_C['Game Pad Navigate DLCbuttons'] = function(self, Down) end
---@param NodeOffset float
---@param MoveOffset FVector2D
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:GamePadMoveOffsetCalculate(NodeOffset, MoveOffset) end
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:SetButtonsREFs() end
---@param TechTree UTechTreeWidget
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:RefreshUpgrades(TechTree) end
---@param RequiredItems TArray<FRequiredItems>
---@param RequiresZeroBLueprints boolean
---@param RequriedAmount int32
UWBP_TestUpgradeTree_2_0_DemoMapka_C['Check Required Amount Of Blueprints'] = function(self, RequiredItems, RequiresZeroBLueprints, RequriedAmount) end
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:SetUpVisibleDLC() end
---@param money boolean
---@param Quest boolean
---@param BuildingLevel boolean
---@param Items boolean
---@param ContractPoints boolean
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:SetUpNeeds(money, Quest, BuildingLevel, Items, ContractPoints) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:OnMouseMove(MyGeometry, MouseEvent) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:OnMouseButtonUp(MyGeometry, MouseEvent) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:OnMouseButtonDown(MyGeometry, MouseEvent) end
---@param Vector2D FVector2D
---@param Out boolean
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:MapOutOfBoundaries(Vector2D, Out) end
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:Finished_55B35E3F448C18BE3F502DA5EEC7FD28() end
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:Finished_5E64FF874E2C24C59D490DBE7F9C84AF() end
---@param KeyEvent FKeyEvent
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:TopMenuHandle(KeyEvent) end
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:Construct() end
---@param TechNode UTTTechNode
---@param IsUnLocked boolean
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:OnTechnologyUnlockStateChanged(TechNode, IsUnLocked) end
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:BndEvt__WBP_TestUpgradeTree_2_0_LevelUpButtonMain_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() end
---@param AnimationToSet UWidgetAnimation
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:SwitchAnimations(AnimationToSet) end
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:UnBindAssignedTechTree() end
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:Destruct() end
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:BndEvt__WBP_TestUpgradeTree_2_0_LevelUpButtonRedMain_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature() end
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:BindCheckForCanBeUpgraded() end
---@param TechnologyToHightLight UTechnologyAsset
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:HightlightSpecificUpgrade(TechnologyToHightLight) end
---@param LeftMoney float
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:OnMoneyReceived(LeftMoney) end
---@param bInLmbDown boolean
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:SetLMBState(bInLmbDown) end
---@param HideUggradeButton boolean
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:OnTechSelectedHideUpgradeButton(HideUggradeButton) end
---@param PreviousPosition FVector2D
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:CustomMoveUpgrades(PreviousPosition) end
---@param TechTree UTechnologyTree
---@param OverlayIndex int32
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:BndEvt__WBP_TestUpgradeTree_2_0_ButtonDLCUpgrades_WBP_K2Node_ComponentBoundEvent_8_ClickEvent__DelegateSignature(TechTree, OverlayIndex) end
---@param TechTree UTechnologyTree
---@param OverlayIndex int32
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:BndEvt__WBP_TestUpgradeTree_2_0_ButtonDLCUpgrades_Base_1_K2Node_ComponentBoundEvent_9_ClickEvent__DelegateSignature(TechTree, OverlayIndex) end
---@param TechTree UTechnologyTree
---@param OverlayIndex int32
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:BndEvt__WBP_TestUpgradeTree_2_0_ButtonDLCUpgrades_PT_K2Node_ComponentBoundEvent_0_ClickEvent__DelegateSignature(TechTree, OverlayIndex) end
---@param TechTree UTechnologyTree
---@param OverlayIndex int32
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:BndEvt__WBP_TestUpgradeTree_2_0_ButtonDLCUpgrades_PT_1_K2Node_ComponentBoundEvent_5_ClickEvent__DelegateSignature(TechTree, OverlayIndex) end
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:BndEvt__WBP_TestUpgradeTree_2_0_MoreInfoButton_C_2_K2Node_ComponentBoundEvent_11_ClickEvent__DelegateSignature() end
---@param TechAsset UTechnologyAsset
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:RefreshassetToUnlock(TechAsset) end
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:SetButtonsNormal() end
---@param TechTree UTechnologyTree
---@param OverlayIndex int32
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:BndEvt__WBP_TestUpgradeTree_2_0_DemoMapka_ButtonDLCUpgrades_JY_K2Node_ComponentBoundEvent_2_ClickEvent__DelegateSignature(TechTree, OverlayIndex) end
---@param TechTree UTechnologyTree
---@param OverlayIndex int32
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:BndEvt__WBP_TestUpgradeTree_2_0_DemoMapka_ButtonDLCUpgrades_DIC_K2Node_ComponentBoundEvent_3_ClickEvent__DelegateSignature(TechTree, OverlayIndex) end
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:GamePadClickRedUpgradeButton() end
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:CustomHideMoreInfo() end
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:GamePadClickGreenButton() end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:Tick(MyGeometry, InDeltaTime) end
---@param Direction int32
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:GamePadNavigateTechNodes(Direction) end
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:SetHintsVisibility() end
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:ForceOpenCinemaTab() end
---@param TechTree UTechnologyTree
---@param OverlayIndex int32
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:BndEvt__WBP_TestUpgradeTree_2_0_DemoMapka_ButtonDLCUpgrades_RV_K2Node_ComponentBoundEvent_4_ClickEvent__DelegateSignature(TechTree, OverlayIndex) end
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:OnTabChanged() end
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:OnTabChangedToAnother() end
---@param EntryPoint int32
function UWBP_TestUpgradeTree_2_0_DemoMapka_C:ExecuteUbergraph_WBP_TestUpgradeTree_2_0_DemoMapka(EntryPoint) end


