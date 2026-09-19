---@meta

---@class UInteractableUserWidget_C : UGlobalInteractableUserWidget_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field OnHovered FInteractableUserWidget_COnHovered
---@field OnClicked FInteractableUserWidget_COnClicked
---@field OptionName FText
---@field OptionDescription FText
---@field SelfIndex int32
---@field PreviousInteractableWidget UInteractableUserWidget_C
---@field NextInteractableWidget UInteractableUserWidget_C
---@field FirstInteractableWidget UInteractableUserWidget_C
---@field LastInteractableWidget UInteractableUserWidget_C
---@field bAllowFocusLost boolean
---@field bVerticalNavigation boolean
---@field OnFocussed FInteractableUserWidget_COnFocussed
---@field ParentMenuWidget UInteractableMenuWidgetBP_C
---@field OptionImage UTexture2D
---@field bIsWidgetEnabled boolean
local UInteractableUserWidget_C = {}

---@param bIsWidgetEnabled boolean
function UInteractableUserWidget_C:EnableWidget(bIsWidgetEnabled) end
function UInteractableUserWidget_C:SetSelfAsLastSelectedWidget() end
function UInteractableUserWidget_C:CreateChangeInputDeviceUIEvent() end
---@param bPlaySound boolean
function UInteractableUserWidget_C:PlaySliderSound(bPlaySound) end
function UInteractableUserWidget_C:PlayChangeSound() end
function UInteractableUserWidget_C:PlaySelectSound() end
---@param bIsHovered boolean
---@param PlaySound boolean
function UInteractableUserWidget_C:PlayHoverSound(bIsHovered, PlaySound) end
function UInteractableUserWidget_C:FindFirstAndLastWidget() end
---@param InWidget UInteractableUserWidget_C
function UInteractableUserWidget_C:FocusWidget(InWidget) end
---@param bAllowNavigation boolean
---@param bIgnoreParentMenu boolean
function UInteractableUserWidget_C:SetAllNavigation(bAllowNavigation, bIgnoreParentMenu) end
---@param bPlaySound boolean
function UInteractableUserWidget_C:UnhoverAllAndHoverSelf(bPlaySound) end
function UInteractableUserWidget_C:SetupNavigation() end
---@param bIsHovered boolean
---@param bPlaySound boolean
function UInteractableUserWidget_C:OnSetHoverEffect(bIsHovered, bPlaySound) end
function UInteractableUserWidget_C:OnPressedUp() end
function UInteractableUserWidget_C:OnPressedDown() end
function UInteractableUserWidget_C:OnPressedSelect() end
function UInteractableUserWidget_C:OnPressedBack() end
---@param IsDesignTime boolean
function UInteractableUserWidget_C:PreConstruct(IsDesignTime) end
---@param InFocusEvent FFocusEvent
function UInteractableUserWidget_C:OnRemovedFromFocusPath(InFocusEvent) end
function UInteractableUserWidget_C:OnPressedRight() end
function UInteractableUserWidget_C:OnPressedLeft() end
---@param bIsGamepadBeingUsed boolean
function UInteractableUserWidget_C:OnChangeInputDevice(bIsGamepadBeingUsed) end
function UInteractableUserWidget_C:Construct() end
function UInteractableUserWidget_C:OnSetupNavigation() end
function UInteractableUserWidget_C:OnWidgetEnabled() end
---@param EntryPoint int32
function UInteractableUserWidget_C:ExecuteUbergraph_InteractableUserWidget(EntryPoint) end
function UInteractableUserWidget_C:OnFocussed__DelegateSignature() end
function UInteractableUserWidget_C:OnClicked__DelegateSignature() end
function UInteractableUserWidget_C:OnHovered__DelegateSignature() end


