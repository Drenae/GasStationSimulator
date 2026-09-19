---@meta

---@class UOptionsText_NoChoices_C : UInteractableUserWidget_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field HoverButton UButton
---@field LeftBorder UBorder
---@field OptionNameText UTextBlock
---@field OuterBorder UBorder
---@field OnOptionChanged FOptionsText_NoChoices_COnOptionChanged
---@field bInEditMode boolean
---@field TextTemp FText
---@field DefaultText FText
---@field OptionsTextInputBgColor FLinearColor
---@field OptionsTextInputHighlightColor FLinearColor
---@field MaximumCharacters int32
---@field bOnlyNumeric boolean
local UOptionsText_NoChoices_C = {}

---@param InText FText
---@param ModifiedText FText
function UOptionsText_NoChoices_C:ValidateInputIsNumeric(InText, ModifiedText) end
---@param InText FText
function UOptionsText_NoChoices_C:ValidateInputText(InText) end
function UOptionsText_NoChoices_C:SetGlobalSettings() end
function UOptionsText_NoChoices_C:SetupOptionNameText() end
---@param IsON boolean
function UOptionsText_NoChoices_C:SetHoverEffect(IsON) end
---@param bIsHovered boolean
---@param bPlaySound boolean
function UOptionsText_NoChoices_C:OnSetHoverEffect(bIsHovered, bPlaySound) end
function UOptionsText_NoChoices_C:OnGlobalSettingsApply() end
---@param Text FText
function UOptionsText_NoChoices_C:BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_7_OnEditableTextBoxChangedEvent__DelegateSignature(Text) end
function UOptionsText_NoChoices_C:BndEvt__HoverButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() end
---@param Text FText
---@param CommitMethod ETextCommit::Type
function UOptionsText_NoChoices_C:BndEvt__TextInputBox_K2Node_ComponentBoundEvent_11_OnEditableTextBoxCommittedEvent__DelegateSignature(Text, CommitMethod) end
function UOptionsText_NoChoices_C:OnPressedSelect() end
function UOptionsText_NoChoices_C:BndEvt__HoverButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
---@param IsDesignTime boolean
function UOptionsText_NoChoices_C:PreConstruct(IsDesignTime) end
---@param EntryPoint int32
function UOptionsText_NoChoices_C:ExecuteUbergraph_OptionsText_NoChoices(EntryPoint) end
function UOptionsText_NoChoices_C:OnOptionChanged__DelegateSignature() end


