---@meta

---@class UWBP_PlatformDecals_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ThreeColorsConstruct UWidgetAnimation
---@field AdjustColorConstruct UWidgetAnimation
---@field AdditionalColors_Vertical UVerticalBox
---@field BackButton UGSSButton
---@field Colors_WidgetSwitcher UWidgetSwitcher
---@field ColorSliders_WidgetSwitche UWidgetSwitcher
---@field Decal_WidgetSwitcher UWidgetSwitcher
---@field DecalCategory_TXT UTextBlock
---@field FullDecals UWrapBox
---@field HB1_WrapBox UWrapBox
---@field HB2_WrapBox UWrapBox
---@field HB3_WrapBox UWrapBox
---@field HorizontalBox_DecalsCategories UHorizontalBox
---@field MainColor UImage
---@field MainColor_Button UGSSButton
---@field MainImage UImage
---@field ScrollBox_decals UScrollBox
---@field SecondColor UImage
---@field SecondColor_Button UGSSButton
---@field ThirdColor UImage
---@field ThirdColor_Button UGSSButton
---@field ThreeColors_VerticalBox UVerticalBox
---@field VerticalBox_decals UVerticalBox
---@field WBP_ArrowButton_CategoryLeft UWBP_ArrowButton_C
---@field WBP_ArrowButton_CategoryRight UWBP_ArrowButton_C
---@field WBP_CarDecalSlot_1 UWBP_CarDecalSlot_C
---@field WBP_CarDecalSlot_2 UWBP_CarDecalSlot_C
---@field WBP_CarDecalSlot_3 UWBP_CarDecalSlot_C
---@field WBP_CarDecalSlot_4 UWBP_CarDecalSlot_C
---@field WBP_CarDecalSlot_5 UWBP_CarDecalSlot_C
---@field WBP_CarDecalSlot_6 UWBP_CarDecalSlot_C
---@field WBP_CarDecalSlot_7 UWBP_CarDecalSlot_C
---@field WBP_CarDecalSlot_8 UWBP_CarDecalSlot_C
---@field WBP_CarDecalSlot_9 UWBP_CarDecalSlot_C
---@field WBP_CarDecalSlot_10 UWBP_CarDecalSlot_C
---@field WBP_CarDecalSlot_11 UWBP_CarDecalSlot_C
---@field WBP_ColorSliders1 UWBP_ColorSliders_C
---@field WBP_ColorSliders2 UWBP_ColorSliders_C
---@field WBP_ColorSliders3 UWBP_ColorSliders_C
---@field WBP_SavedColor1 UWBP_SavedColor_C
---@field WBP_SavedColor2 UWBP_SavedColor_C
---@field WBP_SavedColor3 UWBP_SavedColor_C
---@field WrapBox_decals UWrapBox
---@field OnDecalSelected FWBP_PlatformDecals_COnDecalSelected
---@field OnColorSelected FWBP_PlatformDecals_COnColorSelected
---@field SelectedDecalOffset float
---@field MAT_TripleColors UMaterialInstanceDynamic
---@field CustomizationData FSavedCarPaint
---@field Platform ABP_JunkyardPlatform_C
---@field DecalCategories TArray<EDecalUnlockType>
---@field OnDecalCustomizationUpdated FWBP_PlatformDecals_COnDecalCustomizationUpdated
---@field CreatedDecalSlots TArray<UWBP_CarDecalSlot_C>
---@field SelectedCategory EDecalUnlockType
---@field bIsActiveThird boolean
---@field bIsActiveSecond boolean
---@field bIsActivemain boolean
---@field Hb1Colors TArray<UWBP_PlatformCustomizationColor_C>
---@field Hb2Colors TArray<UWBP_PlatformCustomizationColor_C>
---@field Hb3Colors TArray<UWBP_PlatformCustomizationColor_C>
---@field LastUsedColors TArray<FCarPaintColorWithIndex>
---@field GamePadColorsPalet TArray<UWrapBox>
---@field GamePadSavedColorList TArray<UWBP_SavedColor_C>
---@field GamePadColorSliders TArray<UWBP_ColorSliders_C>
---@field GamePadCurrentSegment int32
---@field GamePadCurrentColorWrap UWrapBox
---@field GamePadCurrentElement int32
local UWBP_PlatformDecals_C = {}

function UWBP_PlatformDecals_C:GamePadTripleColorUpdateHover() end
function UWBP_PlatformDecals_C:UpdateLastUsedColors() end
---@param Linear_Color FLinearColor
function UWBP_PlatformDecals_C:ChangeRecentColorValue(Linear_Color) end
---@param SetColor FLinearColor
---@param bMetal boolean
---@param ColorIndex int32
function UWBP_PlatformDecals_C:ClickRecentColor(SetColor, bMetal, ColorIndex) end
function UWBP_PlatformDecals_C:TripleColorUpdate() end
---@param Selection EDecalUnlockType
function UWBP_PlatformDecals_C:FilterDecalsByType(Selection) end
function UWBP_PlatformDecals_C:Setup() end
---@param Button UWBP_PlatformCustomizationColor_C
---@param HorizontalBox UPanelWidget
function UWBP_PlatformDecals_C:SetActiveColor(Button, HorizontalBox) end
function UWBP_PlatformDecals_C:Finished_3ECEFF5C4B50957B32EA3D93C7B1E433() end
function UWBP_PlatformDecals_C:Construct() end
---@param DecalSelected TSubclassOf<ADecalToPaint>
---@param DecalType EDecalColor
function UWBP_PlatformDecals_C:SelectDecal(DecalSelected, DecalType) end
function UWBP_PlatformDecals_C:Destruct() end
---@param Color FLinearColor
function UWBP_PlatformDecals_C:ChangeColor3(Color) end
---@param Color FLinearColor
function UWBP_PlatformDecals_C:ChangeColor2(Color) end
---@param Color FLinearColor
function UWBP_PlatformDecals_C:ChangeColor1(Color) end
---@param Color FLinearColor
---@param Button UWBP_PlatformCustomizationColor_C
---@param Index int32
---@param bNoColor boolean
function UWBP_PlatformDecals_C:OnColor1Selected(Color, Button, Index, bNoColor) end
---@param Color FLinearColor
---@param Button UWBP_PlatformCustomizationColor_C
---@param Index int32
---@param bNoColor boolean
function UWBP_PlatformDecals_C:OnColor2Selected(Color, Button, Index, bNoColor) end
---@param Color FLinearColor
---@param Button UWBP_PlatformCustomizationColor_C
---@param Index int32
---@param bNoColor boolean
function UWBP_PlatformDecals_C:OnColor3Selected(Color, Button, Index, bNoColor) end
function UWBP_PlatformDecals_C:BndEvt__WBP_PlatformDecals_MainColor_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UWBP_PlatformDecals_C:BndEvt__WBP_PlatformDecals_SecondColor_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() end
function UWBP_PlatformDecals_C:BndEvt__WBP_PlatformDecals_ThirdColor_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature() end
function UWBP_PlatformDecals_C:BndEvt__WBP_PlatformDecals_BackButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature() end
function UWBP_PlatformDecals_C:ViewColorSlidersMain() end
function UWBP_PlatformDecals_C:ViewSlidersSecond() end
function UWBP_PlatformDecals_C:ViewSlidersThird() end
function UWBP_PlatformDecals_C:BndEvt__WBP_PlatformDecals_WBP_ArrowButton_CategoryLeft_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature() end
function UWBP_PlatformDecals_C:BndEvt__WBP_PlatformDecals_WBP_ArrowButton_CategoryRight_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature() end
---@param Color FLinearColor
---@param WidgetRef UWBP_SavedColor_C
---@param ColorIndex int32
function UWBP_PlatformDecals_C:BndEvt__WBP_PlatformCustomization_WBP_SavedColor_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(Color, WidgetRef, ColorIndex) end
---@param Color FLinearColor
---@param WidgetRef UWBP_SavedColor_C
---@param ColorIndex int32
function UWBP_PlatformDecals_C:BndEvt__WBP_PlatformCustomization_WBP_SavedColor_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(Color, WidgetRef, ColorIndex) end
---@param Color FLinearColor
---@param WidgetRef UWBP_SavedColor_C
---@param ColorIndex int32
function UWBP_PlatformDecals_C:BndEvt__WBP_PlatformCustomization_WBP_SavedColor_2_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(Color, WidgetRef, ColorIndex) end
---@param Left boolean
function UWBP_PlatformDecals_C:GamePadClickArrow(Left) end
function UWBP_PlatformDecals_C:GamePadSliderBackButton() end
---@param Direction FString
function UWBP_PlatformDecals_C:GamePadNavigate(Direction) end
---@param Index int32
function UWBP_PlatformDecals_C:GamePadSetActiveColor(Index) end
---@param Index int32
---@param Deactive boolean
function UWBP_PlatformDecals_C:GamePadSetHoverActiveColor(Index, Deactive) end
function UWBP_PlatformDecals_C:GamePadActionClicked() end
function UWBP_PlatformDecals_C:GamePadTurnOffAll() end
function UWBP_PlatformDecals_C:GamePadHoverFirstElement() end
---@param EntryPoint int32
function UWBP_PlatformDecals_C:ExecuteUbergraph_WBP_PlatformDecals(EntryPoint) end
---@param CarCustomization FSavedCarPaint
function UWBP_PlatformDecals_C:OnDecalCustomizationUpdated__DelegateSignature(CarCustomization) end
---@param Color FLinearColor
---@param Index int32
function UWBP_PlatformDecals_C:OnColorSelected__DelegateSignature(Color, Index) end
---@param DecalSelected TSubclassOf<ADecalToPaint>
function UWBP_PlatformDecals_C:OnDecalSelected__DelegateSignature(DecalSelected) end


