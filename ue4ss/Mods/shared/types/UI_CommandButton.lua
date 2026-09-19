---@meta

---@class UUI_CommandButton_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Button UButton
---@field ButtonIcon UImage
---@field ButtonTitle UTextBlock
---@field Overlay_80 UOverlay
---@field Spacer_219 USpacer
---@field OnPressed FUI_CommandButton_COnPressed
---@field Icon UTexture2D
---@field Text FText
---@field bIsClickable boolean
---@field IconDT FDataTableRowHandle
---@field LastIndex int32
---@field bUseSpacer boolean
local UUI_CommandButton_C = {}

---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
function UUI_CommandButton_C:OnMouseEnter(MyGeometry, MouseEvent) end
---@param MouseEvent FPointerEvent
function UUI_CommandButton_C:OnMouseLeave(MouseEvent) end
---@param Index int32
function UUI_CommandButton_C:UpdateIconByIndex(Index) end
---@param IconDT FDataTableRowHandle
function UUI_CommandButton_C:UpdateIconDT(IconDT) end
function UUI_CommandButton_C:BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature() end
---@param IsDesignTime boolean
function UUI_CommandButton_C:PreConstruct(IsDesignTime) end
---@param EntryPoint int32
function UUI_CommandButton_C:ExecuteUbergraph_UI_CommandButton(EntryPoint) end
function UUI_CommandButton_C:OnPressed__DelegateSignature() end


