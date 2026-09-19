---@meta

---@class UConfirmSaveLoad_WBP_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field OnHovConfirm UWidgetAnimation
---@field OnHovCancel UWidgetAnimation
---@field ConstructAnim UWidgetAnimation
---@field Cancel_ICON_PAD UImage
---@field Cancel_ICON_PC UImage
---@field Cancel_Overlay UOverlay
---@field Canvas_Panel_Area UCanvasPanel
---@field Confirm_ICON_PAD UImage
---@field Confirm_ICON_PC UImage
---@field Confirm_Overlay UOverlay
---@field DescriptionText UTextBlock
---@field Image UImage
---@field Image_1 UImage
---@field Image_279 UImage
---@field No UDragoButton
---@field Yes UDragoButton
---@field SaveStruct FSavedSlotStruct
---@field SaveSlotsList UWBP_SaveScreen_C
---@field IsRemoveFunction boolean
---@field OnSaveDeleted FConfirmSaveLoad_WBP_COnSaveDeleted
---@field ['Is Gamepad Beeing Used'] boolean
---@field Parent UWidget
local UConfirmSaveLoad_WBP_C = {}

---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UConfirmSaveLoad_WBP_C:OnKeyUp(MyGeometry, InKeyEvent) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UConfirmSaveLoad_WBP_C:OnMouseButtonDown(MyGeometry, MouseEvent) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UConfirmSaveLoad_WBP_C:OnMouseMove(MyGeometry, MouseEvent) end
---@param InVisibility ESlateVisibility
function UConfirmSaveLoad_WBP_C:ChangeVisiblityKeyboardIcons(InVisibility) end
---@param InVisibility ESlateVisibility
function UConfirmSaveLoad_WBP_C:ChangeVisiblityPadIcons(InVisibility) end
function UConfirmSaveLoad_WBP_C:BndEvt__Yes_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UConfirmSaveLoad_WBP_C:BndEvt__No_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() end
function UConfirmSaveLoad_WBP_C:Construct() end
function UConfirmSaveLoad_WBP_C:BndEvt__Yes_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() end
function UConfirmSaveLoad_WBP_C:BndEvt__Yes_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() end
function UConfirmSaveLoad_WBP_C:BndEvt__No_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature() end
function UConfirmSaveLoad_WBP_C:BndEvt__No_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature() end
function UConfirmSaveLoad_WBP_C:ClickYes() end
function UConfirmSaveLoad_WBP_C:ClickNo() end
---@param ForceChange boolean
---@param IsGamepadBeeingUsed boolean
function UConfirmSaveLoad_WBP_C:OnChangeInputDeviceUI(ForceChange, IsGamepadBeeingUsed) end
---@param EntryPoint int32
function UConfirmSaveLoad_WBP_C:ExecuteUbergraph_ConfirmSaveLoad_WBP(EntryPoint) end
function UConfirmSaveLoad_WBP_C:OnSaveDeleted__DelegateSignature() end


