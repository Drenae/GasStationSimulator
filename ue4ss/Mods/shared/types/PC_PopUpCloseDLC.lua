---@meta

---@class UPC_PopUpCloseDLC_C : UGSSBaseWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field OnHoverConfirm UWidgetAnimation
---@field OnHoverCancel UWidgetAnimation
---@field ConstructAnim UWidgetAnimation
---@field NoButton UDragoButton
---@field PrimaryText UTextBlock
---@field SecondaryText UTextBlock
---@field WBP_KeyHint_Cancel UWBP_KeyHint_C
---@field WBP_KeyHint_Confirm UWBP_KeyHint_C
---@field YesButton UDragoButton
---@field OnYesClicked FPC_PopUpCloseDLC_COnYesClicked
---@field BookingSettings URVBookingSettings
---@field OnNoClicked FPC_PopUpCloseDLC_COnNoClicked
---@field ClearErrorMessageTimer FTimerHandle
---@field ErrorMessageDuration float
---@field OnClosed FPC_PopUpCloseDLC_COnClosed
---@field ['DLC Name'] EDLCName
---@field ['Structure Name'] FText
local UPC_PopUpCloseDLC_C = {}

function UPC_PopUpCloseDLC_C:BndEvt__WBP_RefreshPopup_No_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature() end
function UPC_PopUpCloseDLC_C:BndEvt__WBP_RefreshPopup_Yes_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature() end
function UPC_PopUpCloseDLC_C:Construct() end
function UPC_PopUpCloseDLC_C:BndEvt__WBP_RefreshPopup_Yes_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature() end
function UPC_PopUpCloseDLC_C:BndEvt__WBP_RefreshPopup_Yes_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature() end
function UPC_PopUpCloseDLC_C:BndEvt__WBP_RefreshPopup_No_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature() end
function UPC_PopUpCloseDLC_C:BndEvt__WBP_RefreshPopup_No_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature() end
---@param Yes boolean
function UPC_PopUpCloseDLC_C:GamePadClickConfirm(Yes) end
function UPC_PopUpCloseDLC_C:OnDefaultEscape() end
function UPC_PopUpCloseDLC_C:CleanUp() end
---@param IsDesignTime boolean
function UPC_PopUpCloseDLC_C:PreConstruct(IsDesignTime) end
---@param DLC_Name EDLCName
---@param Structure_Name FText
function UPC_PopUpCloseDLC_C:Init(DLC_Name, Structure_Name) end
---@param EntryPoint int32
function UPC_PopUpCloseDLC_C:ExecuteUbergraph_PC_PopUpCloseDLC(EntryPoint) end
function UPC_PopUpCloseDLC_C:OnClosed__DelegateSignature() end
function UPC_PopUpCloseDLC_C:OnNoClicked__DelegateSignature() end
function UPC_PopUpCloseDLC_C:OnYesClicked__DelegateSignature() end


