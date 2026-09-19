---@meta

---@class UWBP_PlatformPanelNew_C : UJunkyardPlatformPanel
---@field UberGraphFrame FPointerToUberGraphFrame
---@field HighlightSwitchCategoryButtons UWidgetAnimation
---@field PriceHorizontalBoxAnimRed UWidgetAnimation
---@field PriceHorizontalBoxAnimGreen UWidgetAnimation
---@field EvaluationButtonHide UWidgetAnimation
---@field CarPartsAnim UWidgetAnimation
---@field CategoryChangeAnim UWidgetAnimation
---@field FadeOut UWidgetAnimation
---@field BGGradient1 UImage
---@field CancelButton UGSSButton
---@field CanvasPanel_64 UCanvasPanel
---@field CarName UTextBlock
---@field CarParts_VerticalBox UVerticalBox
---@field CarPartsInventoryHorizontal UHorizontalBox
---@field CarPartsScroll UScrollBox
---@field CarSlotButtons UHorizontalBox
---@field CarTier_TXT UTextBlock
---@field Categories_ScrollBox UScrollBox
---@field Categories_vertical UVerticalBox
---@field Categories_WidgetSwitcher UWidgetSwitcher
---@field Category_button UGSSButton
---@field CategoryName_Text UTextBlock
---@field Checkboard UImage
---@field EditableTextBox_WreckName UEditableTextBox
---@field EvaluationButton UGSSButton
---@field FlipDecalBox UHorizontalBox
---@field Footer_MainOverlay UOverlay
---@field GSS_Button_Apply UGSS_Button_WBP_C
---@field Headline_Horizontal UHorizontalBox
---@field HighlightContracts UImage
---@field HighlightPainting UImage
---@field HighlightPart UImage
---@field HorizontalBox_categories UVerticalBox
---@field Image_6 UImage
---@field Image_75 UImage
---@field Image_95 UImage
---@field Image_143 UImage
---@field Image_191 UImage
---@field Input1_HorizontalBox UHorizontalBox
---@field Input1_HorizontalBox_1 UHorizontalBox
---@field KeyBindedAction_DeleteDecal UWBP_KeyBindedAction_C
---@field KeyBindedAction_FlipDecal UWBP_KeyBindedAction_C
---@field KeyBindedAction_NextCategory UWBP_KeyBindedAction_C
---@field KeyBindedAction_NextSegment UWBP_KeyBindedAction_C
---@field KeyBindedAction_PlaceDecal UWBP_KeyBindedAction_C
---@field KeyBindedAction_PrevCategory UWBP_KeyBindedAction_C
---@field KeyBindedAction_PreviousSegment UWBP_KeyBindedAction_C
---@field KeyBindedAction_RotateCameraDown UWBP_KeyBindedAction_C
---@field KeyBindedAction_RotateCameraUp UWBP_KeyBindedAction_C
---@field KeyBindedAction_RotateDecalLeft UWBP_KeyBindedAction_C
---@field KeyBindedAction_RotateDecalRight UWBP_KeyBindedAction_C
---@field KeyBindedAction_RotateLeft UWBP_KeyBindedAction_C
---@field KeyBindedAction_RotateRight UWBP_KeyBindedAction_C
---@field KeyBindedAction_ScaleDecalDown UWBP_KeyBindedAction_C
---@field KeyBindedAction_ScaleDecalUp UWBP_KeyBindedAction_C
---@field KeyBindedAction_Tutorial UWBP_KeyBindedAction_C
---@field LeftArrow UWBP_ArrowButton_C
---@field MiniGames_Tutorial_109 UMiniGames_Tutorial_C
---@field NextCategory_Button_1 UGSSButton
---@field Overlay_Tip UOverlay
---@field Overlay_Tutorial UOverlay
---@field PlaceDecal UHorizontalBox
---@field PreviousCategory_Button UGSSButton
---@field Price_HorizontalBox UHorizontalBox
---@field RemoveDecalBox UHorizontalBox
---@field RightArrow UWBP_ArrowButton_C
---@field RotateDecal UHorizontalBox
---@field ScaleDecal UHorizontalBox
---@field SegmentsBox UHorizontalBox
---@field Spacer_97 USpacer
---@field Statistic_MainHorziontal UHorizontalBox
---@field Stats_Acceleration UPlatformCarStats_C
---@field Stats_Handling UPlatformCarStats_C
---@field Stats_Overlay UOverlay
---@field Stats_Strenght UPlatformCarStats_C
---@field Stats_TopSpeed UPlatformCarStats_C
---@field Text_Price UTextBlock
---@field TextBlock_2 UTextBlock
---@field TextBlock_tip UTextBlock
---@field TopNavigation_HorizontalBox UHorizontalBox
---@field WBP_KeyHint_ButtonLeft UWBP_KeyHint_C
---@field WBP_KeyHint_ButtonRight UWBP_KeyHint_C
---@field WBP_KeyHint_ButtonRight_1 UWBP_KeyHint_C
---@field WBP_KeyHint_ButtonTop UWBP_KeyHint_C
---@field WBP_KeyHint_LeftShoulder UWBP_KeyHint_C
---@field WBP_KeyHint_MoveLeft UWBP_KeyHint_C
---@field WBP_KeyHint_MoveRight UWBP_KeyHint_C
---@field WBP_KeyHint_MoveRight_1 UWBP_KeyHint_C
---@field WBP_KeyHint_RightShoulder UWBP_KeyHint_C
---@field WBP_PlatformButton_decals UWBP_PlatformButton_C
---@field WBP_PlatformButton_paint UWBP_PlatformButton_C
---@field WBP_PlatformContractHolder UWBP_PlatformContractHolder_C
---@field WBP_PlatformCustomization UWBP_PlatformCustomization_C
---@field WBP_PlatformDecals UWBP_PlatformDecals_C
---@field WBP_PlatformEvaluationTooltip UWBP_PlatformEvaluationTooltip_C
---@field WBP_PlatformPrice UWBP_PlatformPrice_C
---@field WidgetSwitcher_categories UWidgetSwitcher
---@field Platform ABP_JunkyardPlatform_C
---@field ExhibitionConfirmation UWBP_ConfirmCarExhibition_C
---@field bMoveToExhibitionOnClose boolean
---@field NameCharLimit int32
---@field ExhibitionSpotSlot AExhibitionSpotSlot
---@field EvaluationHoverTimer FTimerHandle
---@field bRotateCarRight boolean
---@field bRotateCarLeft boolean
---@field MAT_INST_GearProgressBar UMaterialInstanceDynamic
---@field CurrentlySelectedSlot EJunkyardCarPartType
---@field bPaintWholeCar boolean
---@field PlatformSlotButtons_Array TArray<UWBP_PlatformSlotButton_C>
---@field CarPartsButtons_Array TArray<UWBP_CarPartsButton_C>
---@field PlatformButtons_Array TArray<UWBP_PlatformButton_C>
---@field bRotateDecalRight boolean
---@field DecalTraceActor AActor
---@field DecalTraceComponent UPrimitiveComponent
---@field bRotateDecalLeft boolean
---@field DecalRotationOffset float
---@field PreviewPartButton UPlatformPanelCarPart_C
---@field CarWidgetIndex int32
---@field bRotateCameraUp boolean
---@field bRotateCameraDown boolean
---@field ActiveSlotButtonCategory UWBP_PlatformSlotButton_C
---@field bShowTutorial boolean
---@field bWasTutorial5Shown boolean
---@field bWasTutorial6Shown boolean
---@field bWasTutorial15Shown boolean
---@field bWasTutorial4Shown boolean
---@field TipText FText
---@field bLpmHeld boolean
---@field bCancelChanges boolean
---@field PartsToAddToStorage TArray<FStorageCarPart>
---@field bIsExpanded boolean
---@field bWasTutorial8Shown boolean
---@field bWasTutorial9Shown boolean
---@field bWasTutorial10Shown boolean
---@field ClickedOffset float
---@field bShiftHeld boolean
---@field bWasTutorial11Shown boolean
---@field bWasTutorial14Shown boolean
---@field bWasTutorial5NewShown boolean
---@field Categories TArray<EJunkyardCarPartType>
---@field bWasTutorial17Shown boolean
---@field bWasTutorial18Shown boolean
---@field bWasTutorial13Shown boolean
---@field bContractTutorial boolean
---@field bSecondTutorial2 boolean
---@field bDecalTraceHitCar boolean
---@field bAnyChanges boolean
---@field PartsToRemoveFromStorage TArray<FStorageCarPart>
---@field DecalOffset FVector
---@field GamePadCurrentSegment int32
---@field GamePadCurrentCategory int32
---@field GamePadCurrentCarPart int32
---@field GamePadCurrentWheelSize int32
---@field DecalSpline ASoulCoaster_SimpleSplineRuntime_C
---@field GamePadDecalPicked int32
---@field PrevPrice float
---@field VariantFront FStorageCarPart
---@field VariantBack FStorageCarPart
---@field IsGamepadNavigationLimited boolean
---@field GamepadUnlockedKeys TMap<FKey, boolean>
---@field IsBindedNextTutorial boolean
---@field ApplyButtonUnlocked boolean
---@field LastPrice float
local UWBP_PlatformPanelNew_C = {}

---@param NewPrice float
function UWBP_PlatformPanelNew_C:UpdateAnimationPrice(NewPrice) end
---@param Segment int32
function UWBP_PlatformPanelNew_C:ChangePadCategoriesHighlight(Segment) end
function UWBP_PlatformPanelNew_C:UnlockGamepadNavigation() end
---@param Input FKeyEvent
---@param IsAllowed boolean
function UWBP_PlatformPanelNew_C:IsNavigationAllowed(Input, IsAllowed) end
---@param UnlockedKeys TArray<FKey>
function UWBP_PlatformPanelNew_C:LimitGamepadNavigation(UnlockedKeys) end
---@param RemovedPart FStorageCarPart
function UWBP_PlatformPanelNew_C:HandlePartVariantRemoval(RemovedPart) end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UWBP_PlatformPanelNew_C:OnPreviewKeyDown(MyGeometry, InKeyEvent) end
---@param Visible boolean
function UWBP_PlatformPanelNew_C:HintsVisibility(Visible) end
---@param EndLocation FVector
function UWBP_PlatformPanelNew_C:UpdateDecalSplinePosition(EndLocation) end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UWBP_PlatformPanelNew_C:OnKeyUp(MyGeometry, InKeyEvent) end
---@param MyGeometry FGeometry
---@param InAnalogInputEvent FAnalogInputEvent
---@return FEventReply
function UWBP_PlatformPanelNew_C:OnAnalogValueChanged(MyGeometry, InAnalogInputEvent) end
---@param Action FString
---@param DirectionLeftOrUp boolean
function UWBP_PlatformPanelNew_C:GamePadNavigateBottomBar(Action, DirectionLeftOrUp) end
---@param Content UWidget
---@param Widget UWidget
UWBP_PlatformPanelNew_C['Add Tut to Overlay'] = function(self, Content, Widget) end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UWBP_PlatformPanelNew_C:OnKeyDown(MyGeometry, InKeyEvent) end
function UWBP_PlatformPanelNew_C:ThirdTutorialEnd() end
function UWBP_PlatformPanelNew_C:ThirdTutorial0() end
function UWBP_PlatformPanelNew_C:ThirdTutorial2() end
function UWBP_PlatformPanelNew_C:ThirdTutorial1() end
function UWBP_PlatformPanelNew_C:SecondTutorialEnd() end
function UWBP_PlatformPanelNew_C:SecondTutorial2() end
function UWBP_PlatformPanelNew_C:SecondTutorial1() end
function UWBP_PlatformPanelNew_C:Tutorial16() end
---@param InParts TArray<FStorageCarPart>
---@param OutParts TArray<FStorageCarPart>
function UWBP_PlatformPanelNew_C:SortByMatching(InParts, OutParts) end
---@param InParts TArray<FStorageCarPart>
---@param OutParts TArray<FStorageCarPart>
function UWBP_PlatformPanelNew_C:SortByDirty(InParts, OutParts) end
---@param bShow boolean
function UWBP_PlatformPanelNew_C:ShowDecalInputs(bShow) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UWBP_PlatformPanelNew_C:OnMouseButtonUp(MyGeometry, MouseEvent) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UWBP_PlatformPanelNew_C:OnMouseButtonDown(MyGeometry, MouseEvent) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UWBP_PlatformPanelNew_C:OnMouseMove(MyGeometry, MouseEvent) end
function UWBP_PlatformPanelNew_C:ShowTip() end
function UWBP_PlatformPanelNew_C:Tutorial15() end
function UWBP_PlatformPanelNew_C:Tutorial13() end
function UWBP_PlatformPanelNew_C:Tutorial12_OLD() end
function UWBP_PlatformPanelNew_C:Tutorial11() end
function UWBP_PlatformPanelNew_C:Tutorial10() end
function UWBP_PlatformPanelNew_C:Tutorial9_OLD() end
function UWBP_PlatformPanelNew_C:Tutorial8_OLD() end
function UWBP_PlatformPanelNew_C:Tutorial7_OLD() end
function UWBP_PlatformPanelNew_C:Tutorial6() end
function UWBP_PlatformPanelNew_C:Tutorial5_NEW() end
function UWBP_PlatformPanelNew_C:Tutorial18() end
function UWBP_PlatformPanelNew_C:TryCallTutorial18() end
function UWBP_PlatformPanelNew_C:Tutorial17() end
function UWBP_PlatformPanelNew_C:Tutorial5() end
function UWBP_PlatformPanelNew_C:Tutorial14() end
function UWBP_PlatformPanelNew_C:Tutorial4() end
function UWBP_PlatformPanelNew_C:Tutorial3() end
---@param ImpactPoint FVector
---@param TraceEnd FVector
---@param ImpactAverage FVector
function UWBP_PlatformPanelNew_C:GetCalculatedDecalPosition(ImpactPoint, TraceEnd, ImpactAverage) end
---@param HitActor AActor
---@param HitComponent UPrimitiveComponent
---@param ImpactPoint FVector
---@param TraceEnd FVector
function UWBP_PlatformPanelNew_C:UpdateDecalPosition(HitActor, HitComponent, ImpactPoint, TraceEnd) end
---@param InputValue float
function UWBP_PlatformPanelNew_C:MoveCamera(InputValue) end
function UWBP_PlatformPanelNew_C:OnPartAddedOrRemoved() end
---@param CarPaintData FSavedCarPaint
function UWBP_PlatformPanelNew_C:ChangePlannedPaint(CarPaintData) end
---@param bIncrease boolean
function UWBP_PlatformPanelNew_C:ChangeDecalSize(bIncrease) end
function UWBP_PlatformPanelNew_C:RemoveDecal() end
---@param bRemovingDecal boolean
---@param TargetDecal ADecalToPaint
function UWBP_PlatformPanelNew_C:SpawnDecalEffect(bRemovingDecal, TargetDecal) end
function UWBP_PlatformPanelNew_C:ApplyDecal() end
---@param Button UWBP_PlatformButton_C
---@param WidgetIndex int32
function UWBP_PlatformPanelNew_C:ClickCategoryButton(Button, WidgetIndex) end
---@param bPreview boolean
---@param TargetSlot EJunkyardCarPartType
---@param PartToAddData FStorageCarPart
---@param PartButton UPlatformPanelCarPart_C
function UWBP_PlatformPanelNew_C:PreviewPartInVehicle(bPreview, TargetSlot, PartToAddData, PartButton) end
---@param InParts TArray<FStorageCarPart>
---@param Slot EJunkyardCarPartType
---@param OutParts TArray<FStorageCarPart>
function UWBP_PlatformPanelNew_C:FilterBySlot(InParts, Slot, OutParts) end
---@param parts TArray<FStorageCarPart>
---@param OurParts TArray<FStorageCarPart>
function UWBP_PlatformPanelNew_C:CheckIfPartIsUniversal(parts, OurParts) end
---@param Inpart FStorageCarPart
---@param bFits boolean
function UWBP_PlatformPanelNew_C:FitsVehicleModel(Inpart, bFits) end
---@param PartToAddData FStorageCarPart
---@param TargetSlot EJunkyardCarPartType
---@param CarPartWidget UPlatformPanelCarPart_C
---@param bRemove boolean
UWBP_PlatformPanelNew_C['Add Part To Vehicle'] = function(self, PartToAddData, TargetSlot, CarPartWidget, bRemove) end
function UWBP_PlatformPanelNew_C:HidePriceEvaluationTooltip() end
function UWBP_PlatformPanelNew_C:TimerPriceEvaluationTooltip() end
function UWBP_PlatformPanelNew_C:ShowPriceEvaluationTooltip() end
function UWBP_PlatformPanelNew_C:UpdateCarParts() end
---@param InParts TArray<FStorageCarPart>
---@param OutParts TArray<FStorageCarPart>
function UWBP_PlatformPanelNew_C:SortByEquipped(InParts, OutParts) end
---@param AttachedPlatform ABP_JunkyardPlatform_C
function UWBP_PlatformPanelNew_C:SetupWidget(AttachedPlatform) end
---@param OptionalModifier FStorageCarPart
---@param PlayAnimation boolean
function UWBP_PlatformPanelNew_C:UpdateCarStats(OptionalModifier, PlayAnimation) end
function UWBP_PlatformPanelNew_C:Finished_4BD03A884656E1349CC1C19435219B5A() end
function UWBP_PlatformPanelNew_C:Finished_F4EA3D78493DAC26D9BC9DB1933EE9E1() end
function UWBP_PlatformPanelNew_C:Construct() end
function UWBP_PlatformPanelNew_C:Destruct() end
---@param bSendToExhibition boolean
function UWBP_PlatformPanelNew_C:OnExhibitionOptionSelected(bSendToExhibition) end
---@param Text FText
---@param CommitMethod ETextCommit::Type
function UWBP_PlatformPanelNew_C:BndEvt__WBP_MonitorPanel_EditableTextBox_WreckName_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(Text, CommitMethod) end
---@param Text FText
function UWBP_PlatformPanelNew_C:BndEvt__WBP_MonitorPanel_EditableTextBox_WreckName_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(Text) end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UWBP_PlatformPanelNew_C:Tick(MyGeometry, InDeltaTime) end
---@param NewCarPaint FSavedCarPaint
function UWBP_PlatformPanelNew_C:OnCustomizationUpdated(NewCarPaint) end
---@param Slot EJunkyardCarPartType
---@param Button UWBP_PlatformSlotButton_C
function UWBP_PlatformPanelNew_C:OnCarPartSlotPressed(Slot, Button) end
---@param Button UWBP_PlatformButton_C
function UWBP_PlatformPanelNew_C:BndEvt__WBP_PlatformPanelNew_WBP_PlatformButton_decals_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature(Button) end
---@param Button UWBP_PlatformButton_C
function UWBP_PlatformPanelNew_C:BndEvt__WBP_PlatformPanelNew_WBP_PlatformButton_paint_K2Node_ComponentBoundEvent_11_Clicked__DelegateSignature(Button) end
function UWBP_PlatformPanelNew_C:SetupInputs() end
function UWBP_PlatformPanelNew_C:StartRotatingRight() end
function UWBP_PlatformPanelNew_C:StopRotatingRight() end
function UWBP_PlatformPanelNew_C:StopRotatingLeft() end
function UWBP_PlatformPanelNew_C:StartRotatingLeft() end
function UWBP_PlatformPanelNew_C:OnScrollUp() end
function UWBP_PlatformPanelNew_C:OnScrollDown() end
function UWBP_PlatformPanelNew_C:OnDecalRotateLeftPressed() end
function UWBP_PlatformPanelNew_C:OnDecalRotateLeftReleased() end
function UWBP_PlatformPanelNew_C:OnDecalRotateRightPressed() end
function UWBP_PlatformPanelNew_C:OnDecalRotateRightReleased() end
function UWBP_PlatformPanelNew_C:FlipDecal() end
---@param PaintWholeCar boolean
function UWBP_PlatformPanelNew_C:BndEvt__WBP_PlatformPanelNew_WBP_PlatformCustomization_K2Node_ComponentBoundEvent_4_PaintWholeCarCheck__DelegateSignature(PaintWholeCar) end
---@param DecalSelected TSubclassOf<ADecalToPaint>
function UWBP_PlatformPanelNew_C:OnDecalSelected(DecalSelected) end
---@param Color FLinearColor
---@param ColorIndex int32
---@param bNoColor boolean
function UWBP_PlatformPanelNew_C:ClickedColor1_Event_0(Color, ColorIndex, bNoColor) end
---@param Color FLinearColor
---@param ColorIndex int32
---@param bNoColor boolean
function UWBP_PlatformPanelNew_C:ClickedColor2_Event_0(Color, ColorIndex, bNoColor) end
---@param Color FLinearColor
---@param ColorIndex int32
---@param bNoColor boolean
function UWBP_PlatformPanelNew_C:ClickedColor3_Event_0(Color, ColorIndex, bNoColor) end
function UWBP_PlatformPanelNew_C:CreateSlotButtons() end
function UWBP_PlatformPanelNew_C:BndEvt__WBP_PlatformPanelNew_GSS_Button_WBP_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature() end
function UWBP_PlatformPanelNew_C:BndEvt__WBP_PlatformPanelNew_EvaluationButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature() end
function UWBP_PlatformPanelNew_C:BndEvt__WBP_PlatformPanelNew_Category_Button_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature() end
function UWBP_PlatformPanelNew_C:BndEvt__WBP_PlatformPanelNew_CancelButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature() end
function UWBP_PlatformPanelNew_C:BndEvt__WBP_RewardList_RightArrow_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature() end
function UWBP_PlatformPanelNew_C:BndEvt__WBP_RewardList_LeftArrow_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature() end
function UWBP_PlatformPanelNew_C:OnShiftHeld() end
function UWBP_PlatformPanelNew_C:OnShiftReleased() end
function UWBP_PlatformPanelNew_C:BndEvt__WBP_PlatformPanelNew_NextCategory_Button_1_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature() end
function UWBP_PlatformPanelNew_C:BndEvt__WBP_PlatformPanelNew_PreviousCategory_Button_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature() end
---@param Platform ABP_JunkyardPlatform_C
function UWBP_PlatformPanelNew_C:Setup(Platform) end
function UWBP_PlatformPanelNew_C:OnZPressed() end
function UWBP_PlatformPanelNew_C:OnXPressed() end
function UWBP_PlatformPanelNew_C:PressNextCategory() end
function UWBP_PlatformPanelNew_C:PressPrevCategory() end
function UWBP_PlatformPanelNew_C:BndEvt__WBP_PlatformPanelNew_WBP_PlatformContractHolder_K2Node_ComponentBoundEvent_13_OnPressed__DelegateSignature() end
---@param bSendToExhibition boolean
function UWBP_PlatformPanelNew_C:OnCancelOptionSelected(bSendToExhibition) end
function UWBP_PlatformPanelNew_C:CustomEscape() end
function UWBP_PlatformPanelNew_C:GamePadClickCancel() end
function UWBP_PlatformPanelNew_C:GamePadClickBackCategory() end
---@param Left boolean
function UWBP_PlatformPanelNew_C:GamePadNavigateCategory(Left) end
function UWBP_PlatformPanelNew_C:GamePadClickEvaluation() end
---@param Paint boolean
function UWBP_PlatformPanelNew_C:GamePadClickDecalsPaint(Paint) end
function UWBP_PlatformPanelNew_C:GamepadFlipDecal() end
function UWBP_PlatformPanelNew_C:GamePadApply() end
function UWBP_PlatformPanelNew_C:CustomEvent_0() end
---@param EntryPoint int32
function UWBP_PlatformPanelNew_C:ExecuteUbergraph_WBP_PlatformPanelNew(EntryPoint) end


