---@meta

---@class UMainButton_C : UInteractableUserWidget_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ButtonText UTextBlock
---@field MainButton UButton
---@field Onhover_IMG UImage
---@field OuterBorder UBorder
---@field Text FText
---@field MainButtonBgColor FLinearColor
---@field MainButtonHighlightColor FLinearColor
---@field IsThatMikesWidget boolean
local UMainButton_C = {}

function UMainButton_C:SetGlobalSettings() end
function UMainButton_C:SetupButtonText() end
---@param bIsHovered boolean
function UMainButton_C:SetFocusEffect(bIsHovered) end
function UMainButton_C:OnPressedSelect() end
function UMainButton_C:OnPressedBack() end
function UMainButton_C:BndEvt__MainButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() end
function UMainButton_C:OnPressedLeft() end
function UMainButton_C:OnPressedRight() end
---@param bIsHovered boolean
---@param bPlaySound boolean
function UMainButton_C:OnSetHoverEffect(bIsHovered, bPlaySound) end
function UMainButton_C:BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
---@param IsDesignTime boolean
function UMainButton_C:PreConstruct(IsDesignTime) end
function UMainButton_C:OnGlobalSettingsApply() end
function UMainButton_C:OnWidgetEnabled() end
function UMainButton_C:BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() end
---@param EntryPoint int32
function UMainButton_C:ExecuteUbergraph_MainButton(EntryPoint) end


