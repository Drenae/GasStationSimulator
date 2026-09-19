---@meta

---@class UWBP_NewsButton_C : UInteractableUserWidget_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field BackgroundImage UImage
---@field MainButton UButton
---@field NormalStyle FSlateBrush
---@field HoveredStyle FSlateBrush
---@field PressedStyle FSlateBrush
---@field DisabledStyle FSlateBrush
local UWBP_NewsButton_C = {}

---@param bIsHovered boolean
function UWBP_NewsButton_C:FocusButton(bIsHovered) end
function UWBP_NewsButton_C:SetupButton() end
---@param IsDesignTime boolean
function UWBP_NewsButton_C:PreConstruct(IsDesignTime) end
---@param bIsHovered boolean
---@param bPlaySound boolean
function UWBP_NewsButton_C:OnSetHoverEffect(bIsHovered, bPlaySound) end
function UWBP_NewsButton_C:BndEvt__WBP_NewsButton_MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() end
function UWBP_NewsButton_C:OnPressedSelect() end
function UWBP_NewsButton_C:BndEvt__WBP_NewsButton_MainButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() end
---@param EntryPoint int32
function UWBP_NewsButton_C:ExecuteUbergraph_WBP_NewsButton(EntryPoint) end


