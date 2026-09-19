---@meta

---@class UWBP_ButtonColor_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field OnHovered UWidgetAnimation
---@field Color_Action_Button UDragoButton
---@field Colour_IMG UImage
---@field Frame_IMG UImage
---@field MainOverlay UOverlay
---@field Metalic UImage
---@field Clicked FWBP_ButtonColor_CClicked
---@field SetColor FLinearColor
---@field IsBlocked boolean
---@field ColorStructure FPaintingColor
local UWBP_ButtonColor_C = {}

---@param IsHovered boolean
function UWBP_ButtonColor_C:SetHovered(IsHovered) end
function UWBP_ButtonColor_C:Construct() end
function UWBP_ButtonColor_C:BndEvt__Button_111_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UWBP_ButtonColor_C:BndEvt__Color_Action_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() end
function UWBP_ButtonColor_C:BndEvt__Color_Action_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() end
---@param EntryPoint int32
function UWBP_ButtonColor_C:ExecuteUbergraph_WBP_ButtonColor(EntryPoint) end
---@param NewParam FLinearColor
---@param PaintingColor FPaintingColor
---@param ButtonColor UWBP_ButtonColor_C
function UWBP_ButtonColor_C:Clicked__DelegateSignature(NewParam, PaintingColor, ButtonColor) end


