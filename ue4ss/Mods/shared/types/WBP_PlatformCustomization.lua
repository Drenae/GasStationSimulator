---@meta

---@class UWBP_PlatformCustomization_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CheckedAnimation UWidgetAnimation
---@field TripleColorConstruct UWidgetAnimation
---@field CustomColorConstuct UWidgetAnimation
---@field AdditionalColorsAnim UWidgetAnimation
---@field AdditionalColors_Vertical UVerticalBox
---@field BackButton UGSSButton
---@field CheckBox_120 UCheckBox
---@field CheckButton UGSSButton
---@field Colors_WidgetSwitcher UWidgetSwitcher
---@field ColorSliders_WidgetSwitche UWidgetSwitcher
---@field GamePadCheckBox_IMG UImage
---@field HB1Wrap UWrapBox
---@field HB2Wrap UWrapBox
---@field HB3Wrap UWrapBox
---@field HorizontalBox_PaintWholeCar UHorizontalBox
---@field Image_96 UImage
---@field MainColor UImage
---@field MainColor_Button UGSSButton
---@field MainImage UImage
---@field Material_WrapBox UWrapBox
---@field Overlay_0 UOverlay
---@field PaintStyle_wrapbox UWrapBox
---@field SecondColor UImage
---@field SecondColor_Button UGSSButton
---@field TextBlock_53 UTextBlock
---@field ThirdColor UImage
---@field ThirdColor_Button UGSSButton
---@field ThreeColors_VerticalBox UVerticalBox
---@field VerticalBox_AdditionalColors UVerticalBox
---@field VerticalBox_colors UVerticalBox
---@field WBP_ColorSliders1 UWBP_ColorSliders_C
---@field WBP_ColorSliders2 UWBP_ColorSliders_C
---@field WBP_ColorSliders3 UWBP_ColorSliders_C
---@field WBP_KeyHint_ButtonRight_1 UWBP_KeyHint_C
---@field WBP_PlatformCustomizationColor_28 UWBP_PlatformCustomizationColor_C
---@field WBP_PlatformCustomizationColor_29 UWBP_PlatformCustomizationColor_C
---@field WBP_PlatformCustomizationColor_30 UWBP_PlatformCustomizationColor_C
---@field WBP_PlatformCustomizationColor_31 UWBP_PlatformCustomizationColor_C
---@field WBP_PlatformCustomizationColor_32 UWBP_PlatformCustomizationColor_C
---@field WBP_PlatformCustomizationColor_238 UWBP_PlatformCustomizationColor_C
---@field WBP_SavedColor1 UWBP_SavedColor_C
---@field WBP_SavedColor2 UWBP_SavedColor_C
---@field WBP_SavedColor3 UWBP_SavedColor_C
---@field CustomizationMaskNames TArray<FText>
---@field MaterialNames TArray<FText>
---@field CarCustomization FSavedCarPaint
---@field OnCustomizationUpdated FWBP_PlatformCustomization_COnCustomizationUpdated
---@field PaintWholeCarCheck FWBP_PlatformCustomization_CPaintWholeCarCheck
---@field OnMainColorHovered FWBP_PlatformCustomization_COnMainColorHovered
---@field OnMainColorUnhovered FWBP_PlatformCustomization_COnMainColorUnhovered
---@field MAT_TripleColor UMaterialInstanceDynamic
---@field TripleColorButtons TArray<UGSSButton>
---@field bIsActivemain boolean
---@field bIsActiveSecond boolean
---@field bIsActiveThird boolean
---@field CurrentPaintType ECustomizationPaintType
---@field LastUsedColors TArray<FCarPaintColorWithIndex>
---@field Hb1Colors TArray<UWBP_PlatformCustomizationColor_C>
---@field Hb2Colors TArray<UWBP_PlatformCustomizationColor_C>
---@field Hb3Colors TArray<UWBP_PlatformCustomizationColor_C>
---@field GamePadCurrentSegment int32
---@field GamePadCurrentElement int32
---@field GamePadSavedColorList TArray<UWBP_SavedColor_C>
---@field GamePadColorsPalet TArray<UWrapBox>
---@field GamePadCurrentColorWrap UWrapBox
---@field CarMaterialTypes TArray<EFinishMaskType>
---@field ['Target Slot'] EJunkyardCarPartType
---@field GamePadColorSliders TArray<UWBP_ColorSliders_C>
---@field bIsActivemain_GamePad boolean
---@field bIsActiveSecond_GamePad boolean
---@field bIsActiveThird_GamePad boolean
local UWBP_PlatformCustomization_C = {}

---@param Index int32
function UWBP_PlatformCustomization_C:HighlightColor(Index) end
function UWBP_PlatformCustomization_C:GamePadTripleColorUpdateHover() end
function UWBP_PlatformCustomization_C:RefreshColorSquares() end
function UWBP_PlatformCustomization_C:RefreshSelectedColors() end
---@param bOn boolean
---@param bBlock boolean
function UWBP_PlatformCustomization_C:TogglePaintWholeCar(bOn, bBlock) end
---@param Linear_Color FLinearColor
function UWBP_PlatformCustomization_C:ChangeRecentColorValue(Linear_Color) end
---@param SetColor FLinearColor
---@param bMetal boolean
---@param ColorIndex int32
function UWBP_PlatformCustomization_C:ClickRecentColor(SetColor, bMetal, ColorIndex) end
function UWBP_PlatformCustomization_C:UpdateLastUsedColors() end
---@param Color FLinearColor
---@param Color2 FLinearColor
---@param Color3 FLinearColor
function UWBP_PlatformCustomization_C:OnPlainSelected(Color, Color2, Color3) end
function UWBP_PlatformCustomization_C:TripleColorUpdate() end
function UWBP_PlatformCustomization_C:SetUnchecked() end
---@param bLock boolean
function UWBP_PlatformCustomization_C:SetChecked(bLock) end
---@param Button UWBP_PlatformCustomizationPaintStyle_C
---@param HorizontalBox UPanelWidget
function UWBP_PlatformCustomization_C:SetActivePaintStyle(Button, HorizontalBox) end
---@param Button UWBP_PlatformCustomizationPaintStyle_C
---@param HorizontalBox UPanelWidget
function UWBP_PlatformCustomization_C:OnPaintStyleSelected(Button, HorizontalBox) end
---@param Button UWBP_PlatformCustomizationMaterial_C
---@param HorizontalBox UPanelWidget
function UWBP_PlatformCustomization_C:SetActiveMaterial(Button, HorizontalBox) end
---@param Button UWBP_PlatformCustomizationMaterial_C
---@param HorizontalBox UPanelWidget
function UWBP_PlatformCustomization_C:OnMaterialSelected(Button, HorizontalBox) end
---@param PaintData FSavedCarPaint
---@param TargetSlot EJunkyardCarPartType
function UWBP_PlatformCustomization_C:RefreshToShowAppliedColors(PaintData, TargetSlot) end
---@param Button UWBP_PlatformCustomizationColor_C
---@param Index int32
---@param Color FLinearColor
---@param HorizontalBox UPanelWidget
---@param ColorSlider UWBP_ColorSliders_C
---@param bNoColor boolean
function UWBP_PlatformCustomization_C:OnColorSelected(Button, Index, Color, HorizontalBox, ColorSlider, bNoColor) end
---@param PaintWholeCar boolean
function UWBP_PlatformCustomization_C:PaintCheckChange(PaintWholeCar) end
---@param Button UWBP_PlatformCustomizationColor_C
---@param HorizontalBox UPanelWidget
function UWBP_PlatformCustomization_C:SetActiveColor(Button, HorizontalBox) end
---@param CurrentPaintData FSavedCarPaint
function UWBP_PlatformCustomization_C:Setup(CurrentPaintData) end
function UWBP_PlatformCustomization_C:UpdateCarPaint() end
function UWBP_PlatformCustomization_C:Finished_F049FB9E4EB57E27C0D4528FEB55787A() end
function UWBP_PlatformCustomization_C:Finished_DB80279D4BD9775468759F850FA3C2C0() end
function UWBP_PlatformCustomization_C:Finished_250644D345941107C495299943F15FBA() end
function UWBP_PlatformCustomization_C:Finished_5E4E8E844C6225F22C18979B00C50A2C() end
function UWBP_PlatformCustomization_C:Finished_8F1E462A4A685ADC2FCDBE937E5A3DA2() end
function UWBP_PlatformCustomization_C:Finished_B40736224E7B932FD5E1D1B7321796C9() end
function UWBP_PlatformCustomization_C:Construct() end
---@param Color FLinearColor
---@param Button UWBP_PlatformCustomizationColor_C
---@param Index int32
---@param bNoColor boolean
function UWBP_PlatformCustomization_C:OnColor1Selected(Color, Button, Index, bNoColor) end
---@param Color FLinearColor
---@param Button UWBP_PlatformCustomizationColor_C
---@param Index int32
---@param bNoColor boolean
function UWBP_PlatformCustomization_C:OnColor2Selected(Color, Button, Index, bNoColor) end
---@param Color FLinearColor
---@param Button UWBP_PlatformCustomizationColor_C
---@param Index int32
---@param bNoColor boolean
function UWBP_PlatformCustomization_C:OnColor3Selected(Color, Button, Index, bNoColor) end
---@param Color FLinearColor
function UWBP_PlatformCustomization_C:ChangeColor_Event_0(Color) end
---@param Color FLinearColor
function UWBP_PlatformCustomization_C:ChangeColor_Event_1(Color) end
---@param Color FLinearColor
function UWBP_PlatformCustomization_C:ChangeColor_Event_2(Color) end
function UWBP_PlatformCustomization_C:Destruct() end
---@param Color FLinearColor
---@param WidgetRef UWBP_SavedColor_C
---@param ColorIndex int32
function UWBP_PlatformCustomization_C:BndEvt__WBP_PlatformCustomization_WBP_SavedColor_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(Color, WidgetRef, ColorIndex) end
---@param Color FLinearColor
---@param WidgetRef UWBP_SavedColor_C
---@param ColorIndex int32
function UWBP_PlatformCustomization_C:BndEvt__WBP_PlatformCustomization_WBP_SavedColor_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(Color, WidgetRef, ColorIndex) end
---@param Color FLinearColor
---@param WidgetRef UWBP_SavedColor_C
---@param ColorIndex int32
function UWBP_PlatformCustomization_C:BndEvt__WBP_PlatformCustomization_WBP_SavedColor_2_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(Color, WidgetRef, ColorIndex) end
---@param CarColor FCarPaintColor
function UWBP_PlatformCustomization_C:OnColorHovered_Event_0(CarColor) end
function UWBP_PlatformCustomization_C:OnColorUnhovered_Event_0() end
---@param Button UWBP_PlatformCustomizationMaterial_C
---@param mask EFinishMaskType
function UWBP_PlatformCustomization_C:OnMaterialChanged(Button, mask) end
function UWBP_PlatformCustomization_C:ViewColorSlidersMain() end
function UWBP_PlatformCustomization_C:BndEvt__WBP_PlatformCustomization_BackButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature() end
function UWBP_PlatformCustomization_C:BndEvt__WBP_PlatformCustomization_SecondColor_Button_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature() end
function UWBP_PlatformCustomization_C:BndEvt__WBP_PlatformCustomization_ThirdColor_Button_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature() end
function UWBP_PlatformCustomization_C:ViewSlidersSecond() end
function UWBP_PlatformCustomization_C:ViewSlidersThird() end
function UWBP_PlatformCustomization_C:BndEvt__WBP_PlatformCustomization_MainColor_Button_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature() end
---@param Button UWBP_PlatformCustomizationPaintStyle_C
---@param PaintType ECustomizationPaintType
function UWBP_PlatformCustomization_C:OnPaintStyleSelected_Event_0(Button, PaintType) end
function UWBP_PlatformCustomization_C:BndEvt__WBP_PlatformCustomization_CheckButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature() end
---@param Direction FString
function UWBP_PlatformCustomization_C:GamePadNavigate(Direction) end
---@param Index int32
function UWBP_PlatformCustomization_C:GamePadSetActiveColor(Index) end
---@param Index int32
---@param Deactive boolean
function UWBP_PlatformCustomization_C:GamePadSetHoverActiveColor(Index, Deactive) end
function UWBP_PlatformCustomization_C:GamePadActionClicked() end
function UWBP_PlatformCustomization_C:GamePadClickPaintAllCheckBox() end
function UWBP_PlatformCustomization_C:GamePadClickSliderBackButton() end
function UWBP_PlatformCustomization_C:GamePadTurnOffAll() end
function UWBP_PlatformCustomization_C:GamePadHoverFirstElement() end
---@param EntryPoint int32
function UWBP_PlatformCustomization_C:ExecuteUbergraph_WBP_PlatformCustomization(EntryPoint) end
function UWBP_PlatformCustomization_C:OnMainColorUnhovered__DelegateSignature() end
---@param CarColor FCarPaintColor
function UWBP_PlatformCustomization_C:OnMainColorHovered__DelegateSignature(CarColor) end
---@param PaintWholeCar boolean
function UWBP_PlatformCustomization_C:PaintWholeCarCheck__DelegateSignature(PaintWholeCar) end
---@param NewCarPaint FSavedCarPaint
function UWBP_PlatformCustomization_C:OnCustomizationUpdated__DelegateSignature(NewCarPaint) end


