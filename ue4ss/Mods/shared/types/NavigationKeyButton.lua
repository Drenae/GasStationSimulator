---@meta

---@class UNavigationKeyButton_C : UInteractableUserWidget_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ButtonBackgroundImage UImage
---@field ButtonText UTextBlock
---@field GamepadButtonImage UImage
---@field KeyboardKeyImage UImage
---@field NavigationKeyButton UButton
---@field OuterBorder UBorder
---@field Text FText
---@field KeyboardKeyTexture UTexture2D
---@field GamepadButtonTexture UTexture2D
---@field bIsActive boolean
local UNavigationKeyButton_C = {}

---@param GamePadPlaystation UTexture2D
function UNavigationKeyButton_C:GetPSGamepadButtonImage(GamePadPlaystation) end
function UNavigationKeyButton_C:SetGamepadButtonImage() end
---@param bIsActive boolean
function UNavigationKeyButton_C:GetButtonActive(bIsActive) end
function UNavigationKeyButton_C:SetGlobalSettings() end
function UNavigationKeyButton_C:SetupButtonText() end
---@param bIsActive boolean
function UNavigationKeyButton_C:SetButtonActive(bIsActive) end
---@param bIsGamepadBeingUsed boolean
function UNavigationKeyButton_C:UpdateButtonIcon(bIsGamepadBeingUsed) end
---@param bIsHovered boolean
function UNavigationKeyButton_C:SetHoverEffect(bIsHovered) end
function UNavigationKeyButton_C:BndEvt__MainButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() end
---@param bIsHovered boolean
---@param bPlaySound boolean
function UNavigationKeyButton_C:OnSetHoverEffect(bIsHovered, bPlaySound) end
function UNavigationKeyButton_C:BndEvt__NavigationKeyButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature() end
function UNavigationKeyButton_C:OnPressedSelect() end
function UNavigationKeyButton_C:OnPressedBack() end
function UNavigationKeyButton_C:OnGlobalSettingsApply() end
---@param IsDesignTime boolean
function UNavigationKeyButton_C:PreConstruct(IsDesignTime) end
function UNavigationKeyButton_C:BndEvt__NavigationKeyButton_NavigationKeyButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() end
---@param EntryPoint int32
function UNavigationKeyButton_C:ExecuteUbergraph_NavigationKeyButton(EntryPoint) end


