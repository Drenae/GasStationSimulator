---@meta

---@class UWBP_TopButton_C : UPC_TopMenuButton
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Animation UWidgetAnimation
---@field AnimationAndHoverCanvas UCanvasPanel
---@field hover_BeginState UImage
---@field hover_bg UImage
---@field ['Is Active'] boolean
local UWBP_TopButton_C = {}

function UWBP_TopButton_C:BndEvt__Menu_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() end
function UWBP_TopButton_C:BndEvt__Menu_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() end
---@param bIsActive boolean
function UWBP_TopButton_C:SetSelectedButton(bIsActive) end
---@param bIsHovered boolean
function UWBP_TopButton_C:SetHovered(bIsHovered) end
function UWBP_TopButton_C:GamePadHover() end
---@param EntryPoint int32
function UWBP_TopButton_C:ExecuteUbergraph_WBP_TopButton(EntryPoint) end


