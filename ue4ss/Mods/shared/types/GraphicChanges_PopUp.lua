---@meta

---@class UGraphicChanges_PopUp_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field OnHovConfirm UWidgetAnimation
---@field ConstructAnim UWidgetAnimation
---@field Cancel_ICON_PAD UImage
---@field Canvas_Panel_Area UCanvasPanel
---@field Confirm_ICON UImage
---@field Confirm_Overlay UOverlay
---@field DescriptionText UTextBlock
---@field Image UImage
---@field Image_279 UImage
---@field Yes UDragoButton
---@field OnSaveDeleted FGraphicChanges_PopUp_COnSaveDeleted
---@field Parent UInteractableMenuWidgetBP_C
local UGraphicChanges_PopUp_C = {}

---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UGraphicChanges_PopUp_C:OnKeyUp(MyGeometry, InKeyEvent) end
function UGraphicChanges_PopUp_C:BndEvt__Yes_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UGraphicChanges_PopUp_C:Construct() end
function UGraphicChanges_PopUp_C:BndEvt__Yes_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() end
function UGraphicChanges_PopUp_C:BndEvt__Yes_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() end
function UGraphicChanges_PopUp_C:ClickYes() end
---@param EntryPoint int32
function UGraphicChanges_PopUp_C:ExecuteUbergraph_GraphicChanges_PopUp(EntryPoint) end
function UGraphicChanges_PopUp_C:OnSaveDeleted__DelegateSignature() end


