---@meta

---@class UGamepadWidgetBP_C : UGlobalInteractableUserWidget_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field GamepadCanvasPanel UCanvasPanel
---@field GamepadImage UImage
---@field GamepadKey_DpadDown UGamepadKey_C
---@field GamepadKey_DpadLeft UGamepadKey_C
---@field GamepadKey_DpadRight UGamepadKey_C
---@field GamepadKey_DpadUp UGamepadKey_C
---@field GamepadKey_FaceBtnBottom UGamepadKey_C
---@field GamepadKey_FaceBtnLeft UGamepadKey_C
---@field GamepadKey_FaceBtnRight UGamepadKey_C
---@field GamepadKey_FaceBtnTop UGamepadKey_C
---@field GamepadKey_LeftShoulder UGamepadKey_C
---@field GamepadKey_LeftThumbstick UGamepadKey_C
---@field GamepadKey_LeftTrigger UGamepadKey_C
---@field GamepadKey_RightShoulder UGamepadKey_C
---@field GamepadKey_RightThumbstick UGamepadKey_C
---@field GamepadKey_RightTrigger UGamepadKey_C
---@field GamepadKey_SpecialLeft UGamepadKey_C
---@field GamepadKey_SpecialRight UGamepadKey_C
---@field GamepadLinesImage UImage
---@field GamepadKeys TArray<UGamepadKey_C>
local UGamepadWidgetBP_C = {}

function UGamepadWidgetBP_C:ResetGamepadVisualization() end
---@param InBindingName FText
---@param InSelectedKey FKey
---@param InLastSelectedKey FKey
function UGamepadWidgetBP_C:SetGamepadBindingText(InBindingName, InSelectedKey, InLastSelectedKey) end
function UGamepadWidgetBP_C:SetGlobalSettings() end
function UGamepadWidgetBP_C:SetupGamepadKeys() end
---@param IsDesignTime boolean
function UGamepadWidgetBP_C:PreConstruct(IsDesignTime) end
function UGamepadWidgetBP_C:OnGlobalSettingsApply() end
---@param EntryPoint int32
function UGamepadWidgetBP_C:ExecuteUbergraph_GamepadWidgetBP(EntryPoint) end


