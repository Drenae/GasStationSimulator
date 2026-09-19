---@meta

---@class UWBP_FuelPriceBoardConfirmation_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field OnHovConfirm UWidgetAnimation
---@field OnHovCancel UWidgetAnimation
---@field ConstructAnim UWidgetAnimation
---@field AutofillCheckBox UCheckBox
---@field Cancel_ICON UImage
---@field Cancel_Overlay UOverlay
---@field CheckBoxBox UHorizontalBox
---@field Confirm_ICON UImage
---@field Confirm_Overlay UOverlay
---@field Image UImage
---@field Image_1 UImage
---@field Image_86 UImage
---@field Image_279 UImage
---@field InfoText UTextBlock
---@field InfoText_1 UTextBlock
---@field InitialPriceText UTextBlock
---@field NewPriceText UTextBlock
---@field No UDragoButton
---@field RestockText UTextBlock
---@field WBP_KeyHint_BottomButtonUpload UWBP_KeyHint_C
---@field WBP_KeyHint_BottomButtonUpload_1 UWBP_KeyHint_C
---@field WBP_KeyHint_DontShowAgain UWBP_KeyHint_C
---@field Yes UDragoButton
---@field FuelPriceBoardRef AFuelPriceBoard
---@field InitialPrice float
---@field NewPrice float
---@field UpdateHourText FText
---@field CloseWidgetOnConfirm boolean
---@field Tag FGameplayTag
---@field OnPopupExit FWBP_FuelPriceBoardConfirmation_COnPopupExit
local UWBP_FuelPriceBoardConfirmation_C = {}

---@param Visible boolean
function UWBP_FuelPriceBoardConfirmation_C:HintsVisibility(Visible) end
function UWBP_FuelPriceBoardConfirmation_C:BndEvt__Yes_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UWBP_FuelPriceBoardConfirmation_C:BndEvt__No_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() end
function UWBP_FuelPriceBoardConfirmation_C:Construct() end
function UWBP_FuelPriceBoardConfirmation_C:BndEvt__Yes_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() end
function UWBP_FuelPriceBoardConfirmation_C:BndEvt__Yes_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() end
function UWBP_FuelPriceBoardConfirmation_C:BndEvt__No_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature() end
function UWBP_FuelPriceBoardConfirmation_C:BndEvt__No_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature() end
function UWBP_FuelPriceBoardConfirmation_C:CustomEvent_0() end
function UWBP_FuelPriceBoardConfirmation_C:CustomEvent_1() end
function UWBP_FuelPriceBoardConfirmation_C:Destruct() end
function UWBP_FuelPriceBoardConfirmation_C:LockPopup() end
function UWBP_FuelPriceBoardConfirmation_C:CustomEvent() end
function UWBP_FuelPriceBoardConfirmation_C:CustomEvent_2() end
---@param EntryPoint int32
function UWBP_FuelPriceBoardConfirmation_C:ExecuteUbergraph_WBP_FuelPriceBoardConfirmation(EntryPoint) end
---@param Accepted boolean
function UWBP_FuelPriceBoardConfirmation_C:OnPopupExit__DelegateSignature(Accepted) end


