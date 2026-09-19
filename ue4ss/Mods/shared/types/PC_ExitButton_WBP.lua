---@meta

---@class UPC_ExitButton_WBP_C : UGSSInnerWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field HovAnim UWidgetAnimation
---@field Exit_TXT UTextBlock
---@field ExitIcon_IMG UImage
---@field GSSButton_54 UGSSButton
---@field OnExit FPC_ExitButton_WBP_COnExit
local UPC_ExitButton_WBP_C = {}

---@param InText FText
function UPC_ExitButton_WBP_C:SetText(InText) end
function UPC_ExitButton_WBP_C:BndEvt__PC_ExitButton_WBP_GSSButton_54_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature() end
function UPC_ExitButton_WBP_C:BndEvt__PC_ExitButton_WBP_GSSButton_54_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature() end
function UPC_ExitButton_WBP_C:BndEvt__PC_ExitButton_WBP_GSSButton_54_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature() end
function UPC_ExitButton_WBP_C:GamePadExitButton() end
function UPC_ExitButton_WBP_C:Hover() end
function UPC_ExitButton_WBP_C:Unhover() end
---@param EntryPoint int32
function UPC_ExitButton_WBP_C:ExecuteUbergraph_PC_ExitButton_WBP(EntryPoint) end
function UPC_ExitButton_WBP_C:OnExit__DelegateSignature() end


