---@meta

---@class UConfirmAirplaneRemove_WBP_C : UUserWidget
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
---@field Image UImage
---@field Image_1 UImage
---@field Image_279 UImage
---@field No UDragoButton
---@field WBP_KeyHint_Confirm UWBP_KeyHint_C
---@field WBP_KeyHint_Confirm_1 UWBP_KeyHint_C
---@field Yes UDragoButton
---@field DepartureSinglePositionREF UWBP_DepartureScreenSinglePosition_C
---@field RunwayIndex int32
---@field NewVar_1 boolean
---@field AirplaneIndex int32
---@field LandedPlane boolean
local UConfirmAirplaneRemove_WBP_C = {}

---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UConfirmAirplaneRemove_WBP_C:OnPreviewKeyDown(MyGeometry, InKeyEvent) end
function UConfirmAirplaneRemove_WBP_C:BndEvt__No_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() end
function UConfirmAirplaneRemove_WBP_C:Construct() end
function UConfirmAirplaneRemove_WBP_C:BndEvt__Yes_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() end
function UConfirmAirplaneRemove_WBP_C:BndEvt__Yes_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() end
function UConfirmAirplaneRemove_WBP_C:BndEvt__No_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature() end
function UConfirmAirplaneRemove_WBP_C:BndEvt__No_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature() end
function UConfirmAirplaneRemove_WBP_C:CustomEvent_0() end
function UConfirmAirplaneRemove_WBP_C:CustomEvent_1() end
function UConfirmAirplaneRemove_WBP_C:ClickYes() end
function UConfirmAirplaneRemove_WBP_C:Destruct() end
function UConfirmAirplaneRemove_WBP_C:OnClickNo() end
function UConfirmAirplaneRemove_WBP_C:BndEvt__Yes_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
---@param EntryPoint int32
function UConfirmAirplaneRemove_WBP_C:ExecuteUbergraph_ConfirmAirplaneRemove_WBP(EntryPoint) end


