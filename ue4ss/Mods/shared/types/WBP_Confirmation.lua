---@meta

---@class UWBP_Confirmation_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field HoverCancel UWidgetAnimation
---@field HoverConfirm UWidgetAnimation
---@field ConstructAnim UWidgetAnimation
---@field Amount UTextBlock
---@field Cancel_clear UOverlay
---@field Cancel_ICON_1 UImage
---@field Confirm_ICON UImage
---@field Confirm_Overlay UOverlay
---@field Image UImage
---@field Image_8 UImage
---@field Image_279 UImage
---@field No_CLEAR UDragoButton
---@field ProductName UTextBlock
---@field WBP_KeyHint_Confirm UWBP_KeyHint_C
---@field WBP_KeyHint_Confirm_1 UWBP_KeyHint_C
---@field Yes UDragoButton
---@field DrawnProduct FDrawnProduct
---@field PartySpotTable APartySpotTable
---@field BasketFilled FWBP_Confirmation_CBasketFilled
---@field GamepadInUse boolean
local UWBP_Confirmation_C = {}

---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UWBP_Confirmation_C:OnMouseMove(MyGeometry, MouseEvent) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UWBP_Confirmation_C:OnMouseButtonDown(MyGeometry, MouseEvent) end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UWBP_Confirmation_C:OnKeyDown(MyGeometry, InKeyEvent) end
---@param GamepadInUse boolean
function UWBP_Confirmation_C:ChangeInputDevice(GamepadInUse) end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UWBP_Confirmation_C:OnPreviewKeyDown(MyGeometry, InKeyEvent) end
function UWBP_Confirmation_C:Construct() end
function UWBP_Confirmation_C:Destruct() end
function UWBP_Confirmation_C:BndEvt__Yes_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature() end
function UWBP_Confirmation_C:BndEvt__No_CLEAR_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature() end
function UWBP_Confirmation_C:BndEvt__WBP_Confirmation_No_CLEAR_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() end
function UWBP_Confirmation_C:BndEvt__WBP_Confirmation_No_CLEAR_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() end
function UWBP_Confirmation_C:BndEvt__WBP_Confirmation_Yes_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() end
function UWBP_Confirmation_C:BndEvt__WBP_Confirmation_Yes_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature() end
function UWBP_Confirmation_C:PressYes() end
function UWBP_Confirmation_C:PressNo() end
---@param EntryPoint int32
function UWBP_Confirmation_C:ExecuteUbergraph_WBP_Confirmation(EntryPoint) end
function UWBP_Confirmation_C:BasketFilled__DelegateSignature() end


