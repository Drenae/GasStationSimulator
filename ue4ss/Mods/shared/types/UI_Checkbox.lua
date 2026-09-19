---@meta

---@class UUI_Checkbox_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CheckBox UCheckBox
---@field CheckboxName UTextBlock
---@field CheckboxValue UTextBlock
---@field ['HorizontalBox-ElementsContainer'] UHorizontalBox
---@field ToggleTitle FText
---@field CheckboxDefaultValueTip FText
---@field bDefaultValue boolean
---@field bChangeCheckboxColorWhenFocused boolean
---@field bChangeTextColorWhenFocused boolean
---@field FocusedToggleAndTextColor FLinearColor
---@field UnfocusedToggleAndTextColor FLinearColor
---@field PhotoModeWidget UUI_PhotoMode_C
---@field OptionFalse FText
---@field OptionTrue FText
---@field OnCheckboxValueChanged FUI_Checkbox_COnCheckboxValueChanged
---@field bShouldFocus boolean
---@field CheckboxMargin FMargin
local UUI_Checkbox_C = {}

---@param Navigation EUINavigation
---@return UWidget
function UUI_Checkbox_C:ToggleUsingArrows(Navigation) end
---@param bChangeCheckboxColorWhenFocused boolean
---@param bChangeTextColorWhenFocused boolean
---@param CheckBox UCheckBox
---@param CheckboxTitle UWidget
---@param CheckboxValue UWidget
UUI_Checkbox_C['Set Focused or Unfocused Color'] = function(self, bChangeCheckboxColorWhenFocused, bChangeTextColorWhenFocused, CheckBox, CheckboxTitle, CheckboxValue) end
---@return FText
function UUI_Checkbox_C:setTxtValue() end
---@param IsDesignTime boolean
function UUI_Checkbox_C:PreConstruct(IsDesignTime) end
---@param bDefaultValue boolean
function UUI_Checkbox_C:Initialize(bDefaultValue) end
---@param bShouldFocus boolean
function UUI_Checkbox_C:ResetCheckbox(bShouldFocus) end
---@param bValue boolean
---@param bShouldFocus boolean
function UUI_Checkbox_C:ChangeValue(bValue, bShouldFocus) end
---@param bIsChecked boolean
function UUI_Checkbox_C:BndEvt__ToggleDoF_1_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bIsChecked) end
function UUI_Checkbox_C:SetToggleFocus() end
function UUI_Checkbox_C:ResetToggleFocus() end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
function UUI_Checkbox_C:OnMouseEnter(MyGeometry, MouseEvent) end
function UUI_Checkbox_C:Construct() end
---@param EntryPoint int32
function UUI_Checkbox_C:ExecuteUbergraph_UI_Checkbox(EntryPoint) end
---@param Value boolean
function UUI_Checkbox_C:OnCheckboxValueChanged__DelegateSignature(Value) end


