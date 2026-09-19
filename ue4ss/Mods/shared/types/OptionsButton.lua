---@meta

---@class UOptionsButton_C : UInteractableUserWidget_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field InnerBorder UBorder
---@field OptionNameText UTextBlock
---@field OptionsButton UButton
---@field OuterBorder UBorder
---@field OptionsButtonBgColor FLinearColor
---@field OptionsButtonHightlightColor FLinearColor
local UOptionsButton_C = {}

function UOptionsButton_C:SetGlobalSettings() end
function UOptionsButton_C:SetupOptionNameText() end
---@param bIsHovered boolean
function UOptionsButton_C:SetHoverEffect(bIsHovered) end
function UOptionsButton_C:OnPressedSelect() end
function UOptionsButton_C:OnPressedBack() end
function UOptionsButton_C:BndEvt__OptionsButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() end
function UOptionsButton_C:OnPressedLeft() end
function UOptionsButton_C:OnPressedRight() end
---@param bIsHovered boolean
---@param bPlaySound boolean
function UOptionsButton_C:OnSetHoverEffect(bIsHovered, bPlaySound) end
function UOptionsButton_C:BndEvt__OptionsButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature() end
---@param IsDesignTime boolean
function UOptionsButton_C:PreConstruct(IsDesignTime) end
function UOptionsButton_C:OnGlobalSettingsApply() end
---@param EntryPoint int32
function UOptionsButton_C:ExecuteUbergraph_OptionsButton(EntryPoint) end


