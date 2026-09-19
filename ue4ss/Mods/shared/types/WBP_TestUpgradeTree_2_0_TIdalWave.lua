---@meta

---@class UWBP_TestUpgradeTree_2_0_TIdalWave_C : UWBP_UpgradesParent_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AS_Scroll UWidgetAnimation
---@field PT_Scroll UWidgetAnimation
---@field CTT_Scroll UWidgetAnimation
---@field BaseScroll UWidgetAnimation
---@field BaseScroll_TT USizeBox
---@field BlockerOverlayCurrentOwned UOverlay
---@field BlockerOverlayOwned UOverlay
---@field ButtonDLCUpgrades_Base UButtonDLCUpgrades_WBP_C
---@field ButtonDLCUpgrades_PT UButtonDLCUpgrades_WBP_C
---@field CarWashLvl_TXT UTextBlock
---@field CostHorizontal UHorizontalBox
---@field DetailsInfo UOverlay
---@field GasStationLvl_TXT UTextBlock
---@field IceCreamLvl_TXT UTextBlock
---@field IceCreamStandLvl UHorizontalBox
---@field Image_1 UImage
---@field Image_67 UImage
---@field Image_95 UImage
---@field Image_204 UImage
---@field Image_205 UImage
---@field Image_327 UImage
---@field Image_363 UImage
---@field Image_photo UImage
---@field LevelUpButtonMain UGSSButton
---@field LevelUpButtonRedMain UDragoButton
---@field MainCanvasPanel UCanvasPanel
---@field MainCardUpgradeButtons UOverlay
---@field MoreInfo_Horizontal UVerticalBox
---@field MoreInfoButton_C_2 UMoreInfoButton_C
---@field MovableOverlayBase UOverlay
---@field MovableOverlayPT UOverlay
---@field Overlay_2 UOverlay
---@field PartySpotLevel_TXT UTextBlock
---@field PartySpotLvl UHorizontalBox
---@field PartyTimeBuildings UHorizontalBox
---@field PricteStructure_TXT UTextBlock
---@field PricteStructure_TXT_1 UTextBlock
---@field PT_DLC_TT USizeBox
---@field ScrollBox_0 UScrollBox
---@field Scuba UHorizontalBox
---@field ScubaLevel UTextBlock
---@field Segments_Vertical UVerticalBox
---@field Shower UHorizontalBox
---@field ShowerLEvel UTextBlock
---@field StructureLevel_TXT UTextBlock
---@field StructureName_TXT UTextBlock
---@field Surfing UHorizontalBox
---@field SurfingLevel UTextBlock
---@field TechTreeBase UTechTreeWidget
---@field TechTreePT UTechTreeWidget
---@field TextBlock_unlocks UTextBlock
---@field TidalBuildings UHorizontalBox
---@field ToiletLevel UTextBlock
---@field Unlocks UVerticalBox
---@field VerticalBox_0 UVerticalBox
---@field WarehouseLvl_TXT UTextBlock
---@field WBP_KeyHint_BottomButton UWBP_KeyHint_C
---@field WC UHorizontalBox
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
---@field PreviousMousePosition FVector2D
---@field bClickedInUpgradeTree boolean
---@field DefaultOverlayTranslations TArray<FVector2D>
---@field GamePadTechNodes TArray<UTechNodeWidget>
---@field GamePadCurrentTechNode UTTTechNode
---@field GamePadCurrentWidget UTechNodeWidget
---@field GamePadThumbStickDirection FVector2D
---@field GamePadMoveDirectionValue int32
---@field GamePadMoveOffsetY float
---@field GamePadMoveOffsetX float
---@field GamePadTechNodeToCheck UTechnologyAsset
---@field GamePadLasCheckedNodeEnabled boolean
---@field GamePadLastMoveFromThumbstick boolean
---@field GamePadLastButtonNavigation FVector2D
---@field GamePadThumbstickMoved boolean
---@field GamePadCurrentSection int32
---@field GamePadCurrentDLCbutton int32
---@field Treshhold float
local UWBP_TestUpgradeTree_2_0_TIdalWave_C = {}

---@param IsGamepadConnected boolean
function UWBP_TestUpgradeTree_2_0_TIdalWave_C:OnGamepadConnected(IsGamepadConnected) end
---@param NodeOffset float
---@param MoveOffset FVector2D
function UWBP_TestUpgradeTree_2_0_TIdalWave_C:GamePadMoveOffsetCalculate(NodeOffset, MoveOffset) end
---@param DirectionIndex int32
function UWBP_TestUpgradeTree_2_0_TIdalWave_C:MoveTechNodesOverlay(DirectionIndex) end
---@param XAxis boolean
---@return float
function UWBP_TestUpgradeTree_2_0_TIdalWave_C:GetScaledViewportHalfSize(XAxis) end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UWBP_TestUpgradeTree_2_0_TIdalWave_C:OnPreviewKeyDown(MyGeometry, InKeyEvent) end
---@param Visible boolean
function UWBP_TestUpgradeTree_2_0_TIdalWave_C:HintsVisibility(Visible) end
---@param MyGeometry FGeometry
---@param InAnalogInputEvent FAnalogInputEvent
---@return FEventReply
function UWBP_TestUpgradeTree_2_0_TIdalWave_C:OnAnalogValueChanged(MyGeometry, InAnalogInputEvent) end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UWBP_TestUpgradeTree_2_0_TIdalWave_C:OnKeyUp(MyGeometry, InKeyEvent) end
---@param Down boolean
UWBP_TestUpgradeTree_2_0_TIdalWave_C['Game Pad Navigate DLCbuttons'] = function(self, Down) end
UWBP_TestUpgradeTree_2_0_TIdalWave_C['Center On Last Upgraded Gas Station'] = function(self, ) end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UWBP_TestUpgradeTree_2_0_TIdalWave_C:OnKeyDown(MyGeometry, InKeyEvent) end
function UWBP_TestUpgradeTree_2_0_TIdalWave_C:CenterOnLastUpgradedGasStation() end
function UWBP_TestUpgradeTree_2_0_TIdalWave_C:CheckAchievement() end
function UWBP_TestUpgradeTree_2_0_TIdalWave_C:SetButtonsREFs() end
---@param TechTree UTechTreeWidget
function UWBP_TestUpgradeTree_2_0_TIdalWave_C:RefreshUpgrades(TechTree) end
function UWBP_TestUpgradeTree_2_0_TIdalWave_C:SetUpVisibleDLC() end
---@param money boolean
---@param Quest boolean
---@param BuildingLevel boolean
---@param Items boolean
function UWBP_TestUpgradeTree_2_0_TIdalWave_C:SetUpNeeds(money, Quest, BuildingLevel, Items) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UWBP_TestUpgradeTree_2_0_TIdalWave_C:OnMouseMove(MyGeometry, MouseEvent) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UWBP_TestUpgradeTree_2_0_TIdalWave_C:OnMouseButtonUp(MyGeometry, MouseEvent) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UWBP_TestUpgradeTree_2_0_TIdalWave_C:OnMouseButtonDown(MyGeometry, MouseEvent) end
---@param Vector2D FVector2D
---@param Out boolean
function UWBP_TestUpgradeTree_2_0_TIdalWave_C:MapOutOfBoundaries(Vector2D, Out) end
function UWBP_TestUpgradeTree_2_0_TIdalWave_C:Finished_139005D3460843DAB958408D7111623A() end
function UWBP_TestUpgradeTree_2_0_TIdalWave_C:Finished_431D5CB541DB50A4444A85BC3BF68E1E() end
---@param KeyEvent FKeyEvent
function UWBP_TestUpgradeTree_2_0_TIdalWave_C:TopMenuHandle(KeyEvent) end
function UWBP_TestUpgradeTree_2_0_TIdalWave_C:Construct() end
---@param TechNode UTTTechNode
---@param IsUnLocked boolean
function UWBP_TestUpgradeTree_2_0_TIdalWave_C:OnTechnologyUnlockStateChanged(TechNode, IsUnLocked) end
function UWBP_TestUpgradeTree_2_0_TIdalWave_C:BndEvt__WBP_TestUpgradeTree_2_0_LevelUpButtonMain_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() end
---@param AnimationToSet UWidgetAnimation
function UWBP_TestUpgradeTree_2_0_TIdalWave_C:SwitchAnimations(AnimationToSet) end
function UWBP_TestUpgradeTree_2_0_TIdalWave_C:UnBindAssignedTechTree() end
function UWBP_TestUpgradeTree_2_0_TIdalWave_C:Destruct() end
function UWBP_TestUpgradeTree_2_0_TIdalWave_C:BndEvt__WBP_TestUpgradeTree_2_0_LevelUpButtonRedMain_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature() end
function UWBP_TestUpgradeTree_2_0_TIdalWave_C:BindCheckForCanBeUpgraded() end
---@param TechnologyToHightLight UTechnologyAsset
function UWBP_TestUpgradeTree_2_0_TIdalWave_C:HightlightSpecificUpgrade(TechnologyToHightLight) end
---@param LeftMoney float
function UWBP_TestUpgradeTree_2_0_TIdalWave_C:OnMoneyReceived(LeftMoney) end
---@param bInLmbDown boolean
function UWBP_TestUpgradeTree_2_0_TIdalWave_C:SetLMBState(bInLmbDown) end
---@param HideUggradeButton boolean
function UWBP_TestUpgradeTree_2_0_TIdalWave_C:OnTechSelectedHideUpgradeButton(HideUggradeButton) end
---@param PreviousPosition FVector2D
function UWBP_TestUpgradeTree_2_0_TIdalWave_C:CustomMoveUpgrades(PreviousPosition) end
---@param TechTree UTechnologyTree
---@param OverlayIndex int32
function UWBP_TestUpgradeTree_2_0_TIdalWave_C:BndEvt__WBP_TestUpgradeTree_2_0_ButtonDLCUpgrades_WBP_K2Node_ComponentBoundEvent_8_ClickEvent__DelegateSignature(TechTree, OverlayIndex) end
---@param TechTree UTechnologyTree
---@param OverlayIndex int32
function UWBP_TestUpgradeTree_2_0_TIdalWave_C:BndEvt__WBP_TestUpgradeTree_2_0_ButtonDLCUpgrades_PT_K2Node_ComponentBoundEvent_0_ClickEvent__DelegateSignature(TechTree, OverlayIndex) end
function UWBP_TestUpgradeTree_2_0_TIdalWave_C:BndEvt__WBP_TestUpgradeTree_2_0_MoreInfoButton_C_2_K2Node_ComponentBoundEvent_11_ClickEvent__DelegateSignature() end
---@param TechAsset UTechnologyAsset
function UWBP_TestUpgradeTree_2_0_TIdalWave_C:RefreshassetToUnlock(TechAsset) end
function UWBP_TestUpgradeTree_2_0_TIdalWave_C:SetButtonsNormal() end
function UWBP_TestUpgradeTree_2_0_TIdalWave_C:GamePadClickGreenButton() end
function UWBP_TestUpgradeTree_2_0_TIdalWave_C:GamePadClickRedUpgradeButton() end
function UWBP_TestUpgradeTree_2_0_TIdalWave_C:CustomHideMoreInfo() end
---@param Direction int32
function UWBP_TestUpgradeTree_2_0_TIdalWave_C:GamePadNavigateTechNodes(Direction) end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UWBP_TestUpgradeTree_2_0_TIdalWave_C:Tick(MyGeometry, InDeltaTime) end
function UWBP_TestUpgradeTree_2_0_TIdalWave_C:CustomEvent_0() end
function UWBP_TestUpgradeTree_2_0_TIdalWave_C:OnTabChanged() end
function UWBP_TestUpgradeTree_2_0_TIdalWave_C:OnTabChangedToAnother() end
---@param EntryPoint int32
function UWBP_TestUpgradeTree_2_0_TIdalWave_C:ExecuteUbergraph_WBP_TestUpgradeTree_2_0_TIdalWave(EntryPoint) end


