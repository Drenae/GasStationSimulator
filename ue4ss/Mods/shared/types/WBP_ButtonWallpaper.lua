---@meta

---@class UWBP_ButtonWallpaper_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field OnHovered UWidgetAnimation
---@field Colour_IMG UImage
---@field Frame_IMG UImage
---@field MainOverlay UOverlay
---@field Metalic UImage
---@field Wallpaper_Action_Button UDragoButton
---@field Clicked FWBP_ButtonWallpaper_CClicked
---@field SetColor FLinearColor
---@field IsBlocked boolean
---@field ColorStructure FPaintingColor
local UWBP_ButtonWallpaper_C = {}

---@param IsHovered boolean
function UWBP_ButtonWallpaper_C:SetHovered(IsHovered) end
function UWBP_ButtonWallpaper_C:Construct() end
function UWBP_ButtonWallpaper_C:BndEvt__Button_111_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UWBP_ButtonWallpaper_C:BndEvt__Color_Action_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() end
function UWBP_ButtonWallpaper_C:BndEvt__Color_Action_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() end
---@param EntryPoint int32
function UWBP_ButtonWallpaper_C:ExecuteUbergraph_WBP_ButtonWallpaper(EntryPoint) end
---@param NewParam FLinearColor
---@param PaintingColor FPaintingColor
function UWBP_ButtonWallpaper_C:Clicked__DelegateSignature(NewParam, PaintingColor) end


