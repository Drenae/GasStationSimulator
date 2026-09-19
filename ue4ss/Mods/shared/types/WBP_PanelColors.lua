---@meta

---@class UWBP_PanelColors_C : UGSSBaseWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ConstructAnimation UWidgetAnimation
---@field AllFilterWallPaper_v2 UColorWallPaperCategoryButton_All_C
---@field BlockerLVL2 UOverlay
---@field BlockerLVL3 UOverlay
---@field BlockerLVL4 UOverlay
---@field BlockerLvl5 UImage
---@field BlockerLvl5_1 UImage
---@field BlockerLvl5_2 UImage
---@field BlockerLvl5_3 UImage
---@field BlockerLvl5_4 UImage
---@field BlockerLVL6 UOverlay
---@field BlockerLVLLast UOverlay
---@field BlockerVertical UVerticalBox
---@field CanvasPanel_0 UCanvasPanel
---@field ColorsFilter_v2 UColorWallPaperCategoryButton_All_C
---@field ColorsSpotSizebox USizeBox
---@field ColorsWrapBox UWrapBox
---@field HalloweenFilterWallPaper_v2 UColorWallPaperCategoryButton_All_C
---@field HorizontalBox_71 UHorizontalBox
---@field Image_76 UImage
---@field PC_PS4_bindings UPC_PS4_bindings_C
---@field ScrollBoxWallpapers UScrollBox
---@field SizeBoxHalloween USizeBox
---@field SizeBoxXmas USizeBox
---@field SizeBoxXvalentine USizeBox
---@field Title_TXT UTextBlock
---@field ValentinesFilterWallPaper_v2 UColorWallPaperCategoryButton_All_C
---@field WallPaintFilters_Vertical UVerticalBox
---@field WallPaperFilter_v2 UColorWallPaperCategoryButton_All_C
---@field WallpapersSpotSizebox USizeBox
---@field WallPapersValentine UWrapBox
---@field WallPapersWrap UWrapBox
---@field WallPapersXmas UWrapBox
---@field XmasFilterWallPaper_v2 UColorWallPaperCategoryButton_All_C
---@field ForGameProducerIsXmas boolean
---@field ColorsName TMap<FName, int32>
---@field OwnerActor AActor
---@field WidgetParent UUserWidget
---@field CurrentStationLevel int32
---@field ArrayButtonColors TArray<UWBP_ButtonColor_C>
---@field keySelected int32
---@field selectRow int32
---@field DefaultColors TArray<FPaintingColor>
---@field DefaultWallPapers TArray<FPaintingColor>
---@field TabTag FString
---@field XmasWallPapers TArray<FPaintingColor>
---@field ValentineWallPapers TArray<FPaintingColor>
---@field GamePadFilterArray TArray<UWrapBox>
---@field GamePadCategoryButtons TArray<UColorWallPaperCategoryButton_All_C>
---@field GamePadSizeBoxes TArray<USizeBox>
---@field GamePadCurrentElement int32
---@field GamePadCurrentCategory int32
---@field GamePadFindLastElement boolean
---@field GamePadOnCategory boolean
---@field GamePadCurrentCategoryButton int32
---@field IsGamepad boolean
---@field OnClose FWBP_PanelColors_COnClose
local UWBP_PanelColors_C = {}

---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UWBP_PanelColors_C:OnKeyDown(MyGeometry, InKeyEvent) end
---@param IsGamepad boolean
---@param ForceCheck boolean
function UWBP_PanelColors_C:OnchangedInputDevice(IsGamepad, ForceCheck) end
function UWBP_PanelColors_C:Close() end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UWBP_PanelColors_C:OnMouseMove(MyGeometry, MouseEvent) end
function UWBP_PanelColors_C:ShowColorBlockers() end
function UWBP_PanelColors_C:SetupGamepadArrays() end
function UWBP_PanelColors_C:CreateColors() end
function UWBP_PanelColors_C:SetupFilterReferences() end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UWBP_PanelColors_C:OnPreviewKeyDown(MyGeometry, InKeyEvent) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UWBP_PanelColors_C:OnMouseButtonDown(MyGeometry, MouseEvent) end
---@param IsChanged boolean
UWBP_PanelColors_C['Decrement Row'] = function(self, IsChanged) end
---@param IsChanged boolean
function UWBP_PanelColors_C:IncrementRow(IsChanged) end
---@param IsChanged boolean
function UWBP_PanelColors_C:SetHovered(IsChanged) end
function UWBP_PanelColors_C:Click() end
---@param IsChanged boolean
function UWBP_PanelColors_C:decrementsKey(IsChanged) end
---@param IsChanged boolean
function UWBP_PanelColors_C:incrementsKey(IsChanged) end
function UWBP_PanelColors_C:Construct() end
---@param NewParam FLinearColor
---@param PaintingColor FPaintingColor
---@param ButtonColor UWBP_ButtonColor_C
function UWBP_PanelColors_C:OnClickedColor(NewParam, PaintingColor, ButtonColor) end
function UWBP_PanelColors_C:DeconstructAnimation() end
function UWBP_PanelColors_C:OnPressedLeft() end
function UWBP_PanelColors_C:OnPressedRight() end
function UWBP_PanelColors_C:OnPressedDown() end
function UWBP_PanelColors_C:OnPressedUp() end
function UWBP_PanelColors_C:OnPressed_A() end
---@param bIsPressed boolean
function UWBP_PanelColors_C:RPM_Event(bIsPressed) end
---@param Colors boolean
---@param SubCategory boolean
function UWBP_PanelColors_C:OnClickCategory(Colors, SubCategory) end
---@param NewParam FLinearColor
---@param PaintingColor FPaintingColor
function UWBP_PanelColors_C:Clicked_Event_0(NewParam, PaintingColor) end
---@param NewParam FLinearColor
---@param PaintingColor FPaintingColor
function UWBP_PanelColors_C:CustomEvent_1(NewParam, PaintingColor) end
function UWBP_PanelColors_C:AllFiltersWallPaper() end
function UWBP_PanelColors_C:HalloweenFilterWallPape() end
function UWBP_PanelColors_C:XmasFilterWallPape() end
---@param UnlockType EDecalUnlockType
function UWBP_PanelColors_C:BndEvt__WBP_PanelColors_ColorsFilter_v2_K2Node_ComponentBoundEvent_2_OnClickedButton__DelegateSignature(UnlockType) end
---@param UnlockType EDecalUnlockType
function UWBP_PanelColors_C:BndEvt__WBP_PanelColors_WallPaperFilter_v2_K2Node_ComponentBoundEvent_3_OnClickedButton__DelegateSignature(UnlockType) end
function UWBP_PanelColors_C:ValentineFilterWallPape() end
---@param NewParam FLinearColor
---@param PaintingColor FPaintingColor
function UWBP_PanelColors_C:PopulateValentineWallPape(NewParam, PaintingColor) end
function UWBP_PanelColors_C:GamePadPickColor() end
function UWBP_PanelColors_C:GamePadColors() end
function UWBP_PanelColors_C:GamePadWallPaper() end
---@param Direction int32
function UWBP_PanelColors_C:GamePadNavigate(Direction) end
---@param BrushActor AActor
---@param IsGamepad boolean
function UWBP_PanelColors_C:Show(BrushActor, IsGamepad) end
---@param EntryPoint int32
function UWBP_PanelColors_C:ExecuteUbergraph_WBP_PanelColors(EntryPoint) end
---@param IsGamepad boolean
function UWBP_PanelColors_C:OnClose__DelegateSignature(IsGamepad) end


