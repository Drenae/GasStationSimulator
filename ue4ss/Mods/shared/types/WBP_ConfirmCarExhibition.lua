---@meta

---@class UWBP_ConfirmCarExhibition_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field OnHovConfirm UWidgetAnimation
---@field OnHovCancel UWidgetAnimation
---@field ConstructAnim UWidgetAnimation
---@field DescriptionText UTextBlock
---@field GamePadGuidA UImage
---@field GamePadGuideB UImage
---@field No UDragoButton
---@field Yes UDragoButton
---@field IsRemoveFunction boolean
---@field OnOptionSelected FWBP_ConfirmCarExhibition_COnOptionSelected
---@field Description FText
local UWBP_ConfirmCarExhibition_C = {}

function UWBP_ConfirmCarExhibition_C:BndEvt__Yes_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UWBP_ConfirmCarExhibition_C:BndEvt__No_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() end
function UWBP_ConfirmCarExhibition_C:Construct() end
function UWBP_ConfirmCarExhibition_C:BndEvt__Yes_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() end
function UWBP_ConfirmCarExhibition_C:BndEvt__Yes_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() end
function UWBP_ConfirmCarExhibition_C:BndEvt__No_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature() end
function UWBP_ConfirmCarExhibition_C:BndEvt__No_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature() end
---@param EntryPoint int32
function UWBP_ConfirmCarExhibition_C:ExecuteUbergraph_WBP_ConfirmCarExhibition(EntryPoint) end
---@param bSendToExhibition boolean
function UWBP_ConfirmCarExhibition_C:OnOptionSelected__DelegateSignature(bSendToExhibition) end


