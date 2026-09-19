---@meta

---@class UWBP_FuelPriceBoardDefaultPrice_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field OnHovConfirm UWidgetAnimation
---@field OnHovCancel UWidgetAnimation
---@field ConstructAnim UWidgetAnimation
---@field AutofillCheckBox UCheckBox
---@field Cancel_ICON UImage
---@field Cancel_Overlay UOverlay
---@field Confirm_ICON UImage
---@field Confirm_Overlay UOverlay
---@field Image UImage
---@field Image_1 UImage
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
---@field NewPrice float
---@field UpdateHourText FText
---@field OnPopupExit FWBP_FuelPriceBoardDefaultPrice_COnPopupExit
---@field Tag FGameplayTag
local UWBP_FuelPriceBoardDefaultPrice_C = {}

---@param Visible boolean
function UWBP_FuelPriceBoardDefaultPrice_C:HintsVisibility(Visible) end
function UWBP_FuelPriceBoardDefaultPrice_C:BndEvt__Yes_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UWBP_FuelPriceBoardDefaultPrice_C:BndEvt__No_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() end
function UWBP_FuelPriceBoardDefaultPrice_C:Construct() end
function UWBP_FuelPriceBoardDefaultPrice_C:BndEvt__Yes_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() end
function UWBP_FuelPriceBoardDefaultPrice_C:BndEvt__Yes_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() end
function UWBP_FuelPriceBoardDefaultPrice_C:BndEvt__No_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature() end
function UWBP_FuelPriceBoardDefaultPrice_C:BndEvt__No_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature() end
function UWBP_FuelPriceBoardDefaultPrice_C:CustomEvent_0() end
function UWBP_FuelPriceBoardDefaultPrice_C:CustomEvent_1() end
function UWBP_FuelPriceBoardDefaultPrice_C:Destruct() end
function UWBP_FuelPriceBoardDefaultPrice_C:LockPopup() end
function UWBP_FuelPriceBoardDefaultPrice_C:CustomEvent_2() end
function UWBP_FuelPriceBoardDefaultPrice_C:CustomEvent() end
---@param EntryPoint int32
function UWBP_FuelPriceBoardDefaultPrice_C:ExecuteUbergraph_WBP_FuelPriceBoardDefaultPrice(EntryPoint) end
---@param Accepted boolean
function UWBP_FuelPriceBoardDefaultPrice_C:OnPopupExit__DelegateSignature(Accepted) end


