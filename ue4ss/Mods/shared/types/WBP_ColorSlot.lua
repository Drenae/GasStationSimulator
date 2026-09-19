---@meta

---@class UWBP_ColorSlot_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field OnHovered UWidgetAnimation
---@field Color_Action_Button UDragoButton
---@field Colour_IMG UImage
---@field Frame_IMG UImage
---@field GSSButton_62 UGSSButton
---@field Image_44 UImage
---@field MainOverlay UOverlay
---@field Metalic UImage
---@field OnColorCLicked FWBP_ColorSlot_COnColorCLicked
---@field Color FLinearColor
---@field OnHooverSound USoundBase
---@field OnClickSound USoundBase
local UWBP_ColorSlot_C = {}

---@param IsDesignTime boolean
function UWBP_ColorSlot_C:PreConstruct(IsDesignTime) end
function UWBP_ColorSlot_C:BndEvt__WBP_ColorSlot_GSSButton_62_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UWBP_ColorSlot_C:BndEvt__WBP_ColorSlot_GSSButton_62_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() end
function UWBP_ColorSlot_C:BndEvt__WBP_ColorSlot_GSSButton_62_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() end
---@param Active boolean
function UWBP_ColorSlot_C:GamePadHover(Active) end
function UWBP_ColorSlot_C:GamePadColorClick() end
---@param EntryPoint int32
function UWBP_ColorSlot_C:ExecuteUbergraph_WBP_ColorSlot(EntryPoint) end
---@param Color FLinearColor
function UWBP_ColorSlot_C:OnColorCLicked__DelegateSignature(Color) end


