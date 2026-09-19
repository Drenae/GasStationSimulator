---@meta

---@class UOptionsPickerSubButton_C : UGlobalInteractableUserWidget_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ButtonBorder UBorder
---@field ButtonSizeBox USizeBox
---@field SubButton UButton
---@field Width float
---@field Height float
---@field OnClickSubButton FOptionsPickerSubButton_COnClickSubButton
---@field Index int32
---@field SubButtonMainColor FLinearColor
---@field SubButtonHighlightColor FLinearColor
---@field SubButtonExtraHightlightColor FLinearColor
---@field OptionPickerColor FLinearColor
local UOptionsPickerSubButton_C = {}

---@param bIsActive boolean
function UOptionsPickerSubButton_C:SetSubButtonActiveColor(bIsActive) end
---@param bIsHovered boolean
function UOptionsPickerSubButton_C:SetSubButtonHoverEffect(bIsHovered) end
---@param OutIndex int32
function UOptionsPickerSubButton_C:GetIndex(OutIndex) end
---@param InIndex int32
function UOptionsPickerSubButton_C:SetIndex(InIndex) end
function UOptionsPickerSubButton_C:SetGlobalSettings() end
function UOptionsPickerSubButton_C:BndEvt__SubButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UOptionsPickerSubButton_C:OnGlobalSettingsApply() end
---@param IsDesignTime boolean
function UOptionsPickerSubButton_C:PreConstruct(IsDesignTime) end
function UOptionsPickerSubButton_C:BndEvt__SubButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() end
function UOptionsPickerSubButton_C:BndEvt__SubButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() end
---@param EntryPoint int32
function UOptionsPickerSubButton_C:ExecuteUbergraph_OptionsPickerSubButton(EntryPoint) end
---@param InIndex int32
function UOptionsPickerSubButton_C:OnClickSubButton__DelegateSignature(InIndex) end


