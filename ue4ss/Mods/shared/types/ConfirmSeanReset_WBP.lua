---@meta

---@class UConfirmSeanReset_WBP_C : UGSSBaseWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field OnHovConfirm UWidgetAnimation
---@field OnHovCancel UWidgetAnimation
---@field ConstructAnim UWidgetAnimation
---@field Cancel_ICON UImage
---@field Cancel_Overlay UOverlay
---@field Canvas_Panel_Area UCanvasPanel
---@field Confirm_ICON UImage
---@field Confirm_Overlay UOverlay
---@field DescriptionText UTextBlock
---@field GamePadGuidA UImage
---@field GamePadGuideB UImage
---@field Image UImage
---@field Image_1 UImage
---@field Image_279 UImage
---@field No UDragoButton
---@field WBP_KeyHint UWBP_KeyHint_C
---@field WBP_KeyHint_1 UWBP_KeyHint_C
---@field Yes UDragoButton
---@field Click_Yes FConfirmSeanReset_WBP_CClick_Yes
---@field Click_No FConfirmSeanReset_WBP_CClick_No
---@field LoanAmount int32
local UConfirmSeanReset_WBP_C = {}

---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UConfirmSeanReset_WBP_C:OnKeyDown(MyGeometry, InKeyEvent) end
function UConfirmSeanReset_WBP_C:Construct() end
function UConfirmSeanReset_WBP_C:BndEvt__Yes_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature() end
function UConfirmSeanReset_WBP_C:BndEvt__No_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature() end
function UConfirmSeanReset_WBP_C:BndEvt__WBP_BorrowMoney_No_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() end
function UConfirmSeanReset_WBP_C:BndEvt__WBP_BorrowMoney_No_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() end
function UConfirmSeanReset_WBP_C:BndEvt__WBP_BorrowMoney_Yes_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() end
function UConfirmSeanReset_WBP_C:BndEvt__WBP_BorrowMoney_Yes_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() end
---@param Yes boolean
function UConfirmSeanReset_WBP_C:GamePadClickButton(Yes) end
---@param EntryPoint int32
function UConfirmSeanReset_WBP_C:ExecuteUbergraph_ConfirmSeanReset_WBP(EntryPoint) end
function UConfirmSeanReset_WBP_C:Click_No__DelegateSignature() end
function UConfirmSeanReset_WBP_C:Click_Yes__DelegateSignature() end


