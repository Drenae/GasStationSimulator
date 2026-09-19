---@meta

---@class UWBP_SavedColor_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field HoverAnim UWidgetAnimation
---@field Button_48 UButton
---@field GamePadHover_IMG UImage
---@field Image_CarColor UImage
---@field ImageNoColor UImage
---@field Color FLinearColor
---@field ['Desired Size'] FVector2D
---@field Clicked FWBP_SavedColor_CClicked
---@field ColorIndex int32
---@field ['No Color'] boolean
local UWBP_SavedColor_C = {}

---@param Color FLinearColor
---@param SelectedColorIndex int32
---@param bMetal boolean
function UWBP_SavedColor_C:SetColor(Color, SelectedColorIndex, bMetal) end
---@param IsDesignTime boolean
function UWBP_SavedColor_C:PreConstruct(IsDesignTime) end
function UWBP_SavedColor_C:BndEvt__WBP_SavedColor_Button_48_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() end
function UWBP_SavedColor_C:BndEvt__WBP_SavedColor_Button_48_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() end
function UWBP_SavedColor_C:BndEvt__WBP_SavedColor_Button_48_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature() end
function UWBP_SavedColor_C:Destruct() end
---@param Hover boolean
function UWBP_SavedColor_C:GamePadHover(Hover) end
function UWBP_SavedColor_C:GamePadClick() end
---@param EntryPoint int32
function UWBP_SavedColor_C:ExecuteUbergraph_WBP_SavedColor(EntryPoint) end
---@param Color FLinearColor
---@param WidgetRef UWBP_SavedColor_C
---@param ColorIndex int32
function UWBP_SavedColor_C:Clicked__DelegateSignature(Color, WidgetRef, ColorIndex) end


