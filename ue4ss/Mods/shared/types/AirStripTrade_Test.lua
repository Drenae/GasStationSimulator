---@meta

---@class UAirStripTrade_Test_C : UAirstripTradeWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field TradeSuccessAnim UWidgetAnimation
---@field TimeRunningOff UWidgetAnimation
---@field NoCapacity UWidgetAnimation
---@field ShowAndHideTequilaTip UWidgetAnimation
---@field ShowTequilaTip UWidgetAnimation
---@field CalmSkillUsed UWidgetAnimation
---@field GratitudeSkillUsed UWidgetAnimation
---@field CogencySkillUsed UWidgetAnimation
---@field TimeSkillUsed UWidgetAnimation
---@field CogencyUsed_Anim UWidgetAnimation
---@field ImpatienceGrowAnim UWidgetAnimation
---@field TradeChanceChange UWidgetAnimation
---@field HoverCancel UWidgetAnimation
---@field HoverHold UWidgetAnimation
---@field BorderSandstorm UBorder
---@field Button_Cancel UButton
---@field button_hold UButton
---@field ChangeTradeChanceArrow_C UChangeTradeChanceArrow_C
---@field ChangeTradeChanceArrow_C_1 UChangeTradeChanceArrow_C
---@field DenyCD_Overlay UOverlay
---@field FlagTrade_IMG UFlagTrade_C
---@field HorizontalBox_buttons UHorizontalBox
---@field Image UImage
---@field Image_1 UImage
---@field Image_2 UImage
---@field Image_3 UImage
---@field Image_4 UImage
---@field Image_5 UImage
---@field Image_6 UImage
---@field Image_7 UImage
---@field Image_8 UImage
---@field Image_9 UImage
---@field Image_10 UImage
---@field Image_11 UImage
---@field Image_15 UImage
---@field Image_19 UImage
---@field Image_64 UImage
---@field Image_71 UImage
---@field Image_74 UImage
---@field Image_75 UImage
---@field Image_89 UImage
---@field Image_129 UImage
---@field Image_133 UImage
---@field Image_143 UImage
---@field Image_158 UImage
---@field Image_162 UImage
---@field Image_170 UImage
---@field Image_171 UImage
---@field Image_287 UImage
---@field Image_arrow UImage
---@field Image_blocker UImage
---@field Image_border UImage
---@field Image_calm_icon UImage
---@field Image_cogency UImage
---@field Image_cogency_icon UImage
---@field Image_glow UImage
---@field Image_gratitude_icon UImage
---@field Image_high UImage
---@field Image_low UImage
---@field Image_medium UImage
---@field Image_table UImage
---@field Image_time_icon UImage
---@field Image_very_high UImage
---@field Image_very_low UImage
---@field ImpatienceMeter UImpatienceMeter_C
---@field NiagaraSystemWidget_74 UNiagaraSystemWidget
---@field Overlay_18 UOverlay
---@field Overlay_28 UOverlay
---@field Overlay_high UOverlay
---@field Overlay_low UOverlay
---@field Overlay_medium UOverlay
---@field Overlay_pointer UOverlay
---@field Overlay_skills UCanvasPanel
---@field Overlay_Tip UOverlay
---@field Overlay_very_high UOverlay
---@field Overlay_very_low UOverlay
---@field PilotSlot1 UTradeSlot_C
---@field PilotSlot2 UTradeSlot_C
---@field PilotSlot3 UTradeSlot_C
---@field PilotSlot4 UTradeSlot_C
---@field PilotSlot5 UTradeSlot_C
---@field PilotSlot6 UTradeSlot_C
---@field PilotsProducts_Wrap UWrapBox
---@field PilotTradeSlotWrap UWrapBox
---@field PlainID_Txt UTextBlock
---@field PlayersProducts_Wrap UWrapBox
---@field PlayerTradeSlotWrap UWrapBox
---@field PlayerTradingSlot1 UTradeSlot_C
---@field PlayerTradingSlot2 UTradeSlot_C
---@field PlayerTradingSlot3 UTradeSlot_C
---@field PlayerTradingSlot4 UTradeSlot_C
---@field PlayerTradingSlot5 UTradeSlot_C
---@field PlayerTradingSlot6 UTradeSlot_C
---@field SizeBox_1 USizeBox
---@field SkillCD_TXT UTextBlock
---@field Spacer_137 USpacer
---@field Spacer_230 USpacer
---@field Spacer_382 USpacer
---@field Spacer_458 USpacer
---@field TextBlock_11 UTextBlock
---@field TextBlock_airstrip UTextBlock
---@field TextBlock_tip UTextBlock
---@field TextBlock_warehouse UTextBlock
---@field TimeToDeparture_TXT UTextBlock
---@field TradeButton UTradeButton_C
---@field TradeNotification UTradeNotification_C
---@field TradeSkill UTradeSkill_C
---@field TradeSkill_1 UTradeSkill_C
---@field TradeSkill_3 UTradeSkill_C
---@field TradeSkill_calm UTradeSkill_C
---@field TutorialOverlay UOverlay
---@field VerticalBox_4 UVerticalBox
---@field VerticalBox_aistrip UVerticalBox
---@field WBP_KeyHint_MoveLeft UWBP_KeyHint_C
---@field WBP_KeyHint_MoveRight UWBP_KeyHint_C
---@field WBP_KeyHint_RightButton UWBP_KeyHint_C
---@field ValuationMap TMap<FString, int32>
---@field PreviousValue FString
---@field CurrentValue FString
---@field PlayerItemsAmount int32
---@field ItemsLoaded FAirStripTrade_Test_CItemsLoaded
---@field CurrentChanceValue float
---@field LastChanceValue float
---@field AreBothProductsOnTable boolean
---@field bIsTradeChanceSetToDefault boolean
---@field ['Is Any Pilot Item'] boolean
---@field ['Is Any Player Item'] boolean
---@field bDoesPlayerHaveAnyItems boolean
---@field TutorialTradeValue float
---@field IsGraditudeItemGot boolean
---@field GamePadCurrentButton int32
---@field GamePadCurrentSegment int32
---@field GamePadCurrentElement int32
---@field GamePadCurrentElementItems int32
---@field GamePadFindElement boolean
---@field GamePadCurrentSkill int32
---@field GamePadWrapToClick UWrapBox
---@field GamePadSegmentBeforeCards int32
---@field IsGamepadNavigationLimited boolean
---@field GamepadUnlockedKeys TMap<FKey, boolean>
---@field IsBindedNextTutorial boolean
---@field BlockContinousInput boolean
---@field ContinousInputKeyLocks TMap<FKey, boolean>
local UAirStripTrade_Test_C = {}

---@param NiagaraSystemWidget_74 UNiagaraSystemWidget
function UAirStripTrade_Test_C:SequenceEvent__ENTRYPOINTAirStripTrade_Test_1(NiagaraSystemWidget_74) end
function UAirStripTrade_Test_C:SequenceEvent__ENTRYPOINTAirStripTrade_Test_0() end
---@param Key FKey
---@param IsKeyUnlocked boolean
function UAirStripTrade_Test_C:ChangeLockStatusOfContinousInput(Key, IsKeyUnlocked) end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UAirStripTrade_Test_C:OnKeyUp(MyGeometry, InKeyEvent) end
function UAirStripTrade_Test_C:BlockInputTrade() end
function UAirStripTrade_Test_C:BlockPlayerProductInput() end
function UAirStripTrade_Test_C:BlockInputTequila() end
function UAirStripTrade_Test_C:FindFirstPlayerItem() end
function UAirStripTrade_Test_C:FindfFirstPilotItem() end
function UAirStripTrade_Test_C:GamepadHandleSelection() end
function UAirStripTrade_Test_C:MoveThePilotItems_Right() end
function UAirStripTrade_Test_C:MoveThePlayerItems_Right() end
function UAirStripTrade_Test_C:GamepadNavigateRight() end
function UAirStripTrade_Test_C:GamepadNavigateLeft() end
function UAirStripTrade_Test_C:MoveThePilotItems_Left() end
function UAirStripTrade_Test_C:MoveThePlayersItem_Left() end
function UAirStripTrade_Test_C:GamepadNavigationUp() end
function UAirStripTrade_Test_C:GamepadNavigationDown() end
function UAirStripTrade_Test_C:HooverFirstPlayerItem() end
function UAirStripTrade_Test_C:UnlockGamepadNavigation() end
---@param Input FKeyEvent
---@param IsAllowed boolean
function UAirStripTrade_Test_C:IsNavigationAllowed(Input, IsAllowed) end
---@param UnlockedKeys TArray<FKey>
function UAirStripTrade_Test_C:LimitGamepadNavigation(UnlockedKeys) end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UAirStripTrade_Test_C:OnPreviewKeyDown(MyGeometry, InKeyEvent) end
---@param Visible boolean
function UAirStripTrade_Test_C:HintsVisibility(Visible) end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UAirStripTrade_Test_C:OnKeyDown(MyGeometry, InKeyEvent) end
---@param ThereWasTutorial boolean
function UAirStripTrade_Test_C:GamePadCloseTutorial(ThereWasTutorial) end
function UAirStripTrade_Test_C:CalculateSpaceLeft() end
function UAirStripTrade_Test_C:SetGratitudeSkillToUsed() end
function UAirStripTrade_Test_C:SetCalmSkillToUsed() end
function UAirStripTrade_Test_C:SetCogencySkillToUsed() end
---@param HaveCappacity boolean
function UAirStripTrade_Test_C:CheckCapacity(HaveCappacity) end
function UAirStripTrade_Test_C:CheckUsedSkills() end
function UAirStripTrade_Test_C:SetTimeSkillToUsed() end
---@param GeneratedItem FGeneratedItem
---@param PlayerItem boolean
---@param ItemIndex int32
---@param PlayerItemsAmountTotal int32
function UAirStripTrade_Test_C:CreateTradeItem(GeneratedItem, PlayerItem, ItemIndex, PlayerItemsAmountTotal) end
function UAirStripTrade_Test_C:ShowTequilaAmountTip() end
UAirStripTrade_Test_C['Tut_Propose trade again'] = function(self, ) end
UAirStripTrade_Test_C['Tut_Deny & Hold buttons'] = function(self, ) end
UAirStripTrade_Test_C['Tut_Increase the quantity'] = function(self, ) end
UAirStripTrade_Test_C['Tut_The Power of Calm'] = function(self, ) end
function UAirStripTrade_Test_C:Tut_Skills() end
UAirStripTrade_Test_C['Tut_Impatience indicator'] = function(self, ) end
UAirStripTrade_Test_C['Tut_Propose trade'] = function(self, ) end
UAirStripTrade_Test_C['Tut_Trade Chances'] = function(self, ) end
UAirStripTrade_Test_C['Tut_Player products'] = function(self, ) end
UAirStripTrade_Test_C['Tut_Quantity selection'] = function(self, ) end
UAirStripTrade_Test_C['Tut_Trade space'] = function(self, ) end
function UAirStripTrade_Test_C:Tut_Tequila() end
UAirStripTrade_Test_C['Tut_Pilot’s products'] = function(self, ) end
UAirStripTrade_Test_C['Tut_Time counter'] = function(self, ) end
function UAirStripTrade_Test_C:Tut_TRADING() end
---@param Content UWidget
---@param Widget UWidget
UAirStripTrade_Test_C['Add Tut to Overlay'] = function(self, Content, Widget) end
function UAirStripTrade_Test_C:RefreshImpatienceMeter() end
UAirStripTrade_Test_C['Calm Skill Impatience Meter'] = function(self, ) end
function UAirStripTrade_Test_C:SetTradeChanceToDefault() end
---@param AreBothProductsOnTable boolean
---@param IsAnyPilotItem boolean
---@param IsAnyPlayerItem boolean
function UAirStripTrade_Test_C:CheckIfTradeIsActive(AreBothProductsOnTable, IsAnyPilotItem, IsAnyPlayerItem) end
function UAirStripTrade_Test_C:Finished_54253FCF4F91FFBBDBC8D2929F3B235A() end
function UAirStripTrade_Test_C:Finished_0991331F4A29FC3D1B0B5A86BB84CCBA() end
function UAirStripTrade_Test_C:Finished_520F8BF14666D701BB615D9939E9A085() end
---@param NiagaraSystemWidget_74 UNiagaraSystemWidget
---@param Reset boolean
function UAirStripTrade_Test_C:NiagaraSystemWidget_74_Event_0(NiagaraSystemWidget_74, Reset) end
---@param IsDesignTime boolean
function UAirStripTrade_Test_C:PreConstruct(IsDesignTime) end
function UAirStripTrade_Test_C:Construct() end
function UAirStripTrade_Test_C:BndEvt__AirStripTrade_Test_Button_hold_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() end
function UAirStripTrade_Test_C:BndEvt__AirStripTrade_Test_Button_hold_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature() end
function UAirStripTrade_Test_C:BndEvt__AirStripTrade_Test_Button_cancel_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature() end
function UAirStripTrade_Test_C:BndEvt__AirStripTrade_Test_Button_cancel_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature() end
function UAirStripTrade_Test_C:BndEvt__AirStripTrade_Test_Button_hold_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature() end
---@param CardIndex int32
---@param IsPlayerItem boolean
---@param TradeValue float
---@param MaxAmount int32
---@param Boost ETradingBoosts
---@param ItemName FText
---@param ItemIcom TSoftObjectPtr<UTexture2D>
---@param ItemClass TSoftClassPtr<AItem>
function UAirStripTrade_Test_C:OnMoveToTable(CardIndex, IsPlayerItem, TradeValue, MaxAmount, Boost, ItemName, ItemIcom, ItemClass) end
---@param CardIndex int32
---@param IsPlayerItem boolean
function UAirStripTrade_Test_C:OnMoveFromTable(CardIndex, IsPlayerItem) end
function UAirStripTrade_Test_C:Destruct() end
---@param Runway ERunway
function UAirStripTrade_Test_C:OnTakeOff(Runway) end
---@param TimeUpdated int32
function UAirStripTrade_Test_C:OnTimeToTakeOffUpdated(TimeUpdated) end
function UAirStripTrade_Test_C:UpdateChancesTier() end
function UAirStripTrade_Test_C:BndEvt__AirStripTrade_Test_TradeButton_K2Node_ComponentBoundEvent_0_ClickTrade__DelegateSignature() end
function UAirStripTrade_Test_C:UpdateVizual() end
---@param GraditudeItem FGeneratedLootInfo
function UAirStripTrade_Test_C:OnGraditudeItemGot_Event_0(GraditudeItem) end
---@param bIsTradeAccepted boolean
---@param AddedImpatience float
---@param PilotGender ENPCGender
---@param CountryOfOrigin ECountryOfOrigin
function UAirStripTrade_Test_C:OnTradeAccepted(bIsTradeAccepted, AddedImpatience, PilotGender, CountryOfOrigin) end
function UAirStripTrade_Test_C:BndEvt__AirStripTrade_Test_Button_cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() end
function UAirStripTrade_Test_C:CustomEvent_0() end
function UAirStripTrade_Test_C:SandstormStarted() end
function UAirStripTrade_Test_C:SandstormFinished() end
function UAirStripTrade_Test_C:GamePadClickHold() end
function UAirStripTrade_Test_C:GamePadClickCancel() end
---@param Hover boolean
function UAirStripTrade_Test_C:GamePadHoverHold(Hover) end
---@param Hover boolean
function UAirStripTrade_Test_C:GamePadHoverCancel(Hover) end
---@param Hover boolean
function UAirStripTrade_Test_C:GamePadHoverTrade(Hover) end
---@param Hover boolean
---@param Index int32
function UAirStripTrade_Test_C:GamePadNavigateButtons(Hover, Index) end
function UAirStripTrade_Test_C:GamePadEnterTradeButton() end
function UAirStripTrade_Test_C:CustomEvent() end
---@param EntryPoint int32
function UAirStripTrade_Test_C:ExecuteUbergraph_AirStripTrade_Test(EntryPoint) end
function UAirStripTrade_Test_C:ItemsLoaded__DelegateSignature() end


