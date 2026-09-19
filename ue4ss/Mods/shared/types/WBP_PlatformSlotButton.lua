---@meta

---@class UWBP_PlatformSlotButton_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field HoverAnim UWidgetAnimation
---@field CarPart_BG_IMG_1 UImage
---@field CategoryBG_Overlay UOverlay
---@field CategoryName_Text UTextBlock
---@field CheckBox_120 UCheckBox
---@field PartButton UGSSButton
---@field WBP_SavedColor UWBP_SavedColor_C
---@field WBP_SavedColor_1 UWBP_SavedColor_C
---@field WBP_SavedColor_2 UWBP_SavedColor_C
---@field ['Car Part Type'] EJunkyardCarPartType
---@field OnPressed FWBP_PlatformSlotButton_COnPressed
---@field bIsActive boolean
---@field CarPaint FSavedCarPaint
---@field ClickedColor1 FWBP_PlatformSlotButton_CClickedColor1
---@field ClickedColor2 FWBP_PlatformSlotButton_CClickedColor2
---@field ClickedColor3 FWBP_PlatformSlotButton_CClickedColor3
---@field MAT_CarCategory UMaterialInstanceDynamic
local UWBP_PlatformSlotButton_C = {}

function UWBP_PlatformSlotButton_C:SetUnchecked() end
function UWBP_PlatformSlotButton_C:SetChecked() end
---@param SavedCarPaint FSavedCarPaint
function UWBP_PlatformSlotButton_C:ShowCurrentPartColors(SavedCarPaint) end
function UWBP_PlatformSlotButton_C:Construct() end
function UWBP_PlatformSlotButton_C:BndEvt__PlatformPanelCarPart_PartButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UWBP_PlatformSlotButton_C:BndEvt__WBP_PlatformSlotButton_PartButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() end
function UWBP_PlatformSlotButton_C:BndEvt__WBP_PlatformSlotButton_PartButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() end
---@param Color FLinearColor
---@param WidgetRef UWBP_SavedColor_C
---@param ColorIndex int32
function UWBP_PlatformSlotButton_C:BndEvt__WBP_PlatformSlotButton_WBP_SavedColor_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature(Color, WidgetRef, ColorIndex) end
---@param Color FLinearColor
---@param WidgetRef UWBP_SavedColor_C
---@param ColorIndex int32
function UWBP_PlatformSlotButton_C:BndEvt__WBP_PlatformSlotButton_WBP_SavedColor_1_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(Color, WidgetRef, ColorIndex) end
---@param Color FLinearColor
---@param WidgetRef UWBP_SavedColor_C
---@param ColorIndex int32
function UWBP_PlatformSlotButton_C:BndEvt__WBP_PlatformSlotButton_WBP_SavedColor_2_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature(Color, WidgetRef, ColorIndex) end
function UWBP_PlatformSlotButton_C:Destruct() end
function UWBP_PlatformSlotButton_C:GamePadClickCategory() end
---@param Hover boolean
function UWBP_PlatformSlotButton_C:GamePadHover(Hover) end
---@param EntryPoint int32
function UWBP_PlatformSlotButton_C:ExecuteUbergraph_WBP_PlatformSlotButton(EntryPoint) end
---@param Color FLinearColor
---@param ColorIndex int32
---@param bNoColor boolean
function UWBP_PlatformSlotButton_C:ClickedColor3__DelegateSignature(Color, ColorIndex, bNoColor) end
---@param Color FLinearColor
---@param ColorIndex int32
---@param bNoColor boolean
function UWBP_PlatformSlotButton_C:ClickedColor2__DelegateSignature(Color, ColorIndex, bNoColor) end
---@param Color FLinearColor
---@param ColorIndex int32
---@param bNoColor boolean
function UWBP_PlatformSlotButton_C:ClickedColor1__DelegateSignature(Color, ColorIndex, bNoColor) end
---@param Slot EJunkyardCarPartType
---@param Button UWBP_PlatformSlotButton_C
function UWBP_PlatformSlotButton_C:OnPressed__DelegateSignature(Slot, Button) end


