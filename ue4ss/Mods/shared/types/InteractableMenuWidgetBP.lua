---@meta

---@class UInteractableMenuWidgetBP_C : UGlobalInteractableUserWidget_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field PreviousMenu UInteractableMenuWidgetBP_C
---@field InteractableUserWidgets TArray<UInteractableUserWidget_C>
---@field MenuCanvasPanelWidget UPanelWidget
---@field FadeBorderWidget UFadeBorderWidgetBP_C
---@field LastSelectedUserWidget UInteractableUserWidget_C
---@field DefaultSelectedUserWidget UInteractableUserWidget_C
local UInteractableMenuWidgetBP_C = {}

---@param FirstInteractableUserWidget UInteractableUserWidget_C
function UInteractableMenuWidgetBP_C:GetFirstEnabledInteractableUserWidget(FirstInteractableUserWidget) end
function UInteractableMenuWidgetBP_C:SetupNavigation() end
---@param InUserWidget UInteractableUserWidget_C
function UInteractableMenuWidgetBP_C:HoverSpecificWidget(InUserWidget) end
function UInteractableMenuWidgetBP_C:UpdateOptionsActionBinders() end
---@param bIsGamepadBeingUsed boolean
function UInteractableMenuWidgetBP_C:GetPreviousMenuInputDevice(bIsGamepadBeingUsed) end
function UInteractableMenuWidgetBP_C:PlaySelectSound() end
function UInteractableMenuWidgetBP_C:HoverDefaultOrLastSelectedWidget() end
---@param MenuCanvasPanelWidget UPanelWidget
function UInteractableMenuWidgetBP_C:SetMenuAndChildReferences(MenuCanvasPanelWidget) end
function UInteractableMenuWidgetBP_C:SetupFadeAnimation() end
---@param bIsGamepadBeingUsed boolean
function UInteractableMenuWidgetBP_C:UpdateNavigationBarIcons(bIsGamepadBeingUsed) end
---@param InPanel UPanelWidget
function UInteractableMenuWidgetBP_C:SetInteractableUserWidgetReferences(InPanel) end
function UInteractableMenuWidgetBP_C:CreateChangeInputDeviceUIEvent() end
function UInteractableMenuWidgetBP_C:PlayBackSound() end
function UInteractableMenuWidgetBP_C:OnPressedBack() end
---@param NavigateFromMenu UInteractableMenuWidgetBP_C
---@param bIsGamepadBeingUsed boolean
function UInteractableMenuWidgetBP_C:OnNavigationEnter(NavigateFromMenu, bIsGamepadBeingUsed) end
---@param NavigateToMenu UInteractableMenuWidgetBP_C
---@param NavigateFromMenu UInteractableMenuWidgetBP_C
function UInteractableMenuWidgetBP_C:OnNavigationExit(NavigateToMenu, NavigateFromMenu) end
---@param IsDesignTime boolean
function UInteractableMenuWidgetBP_C:PreConstruct(IsDesignTime) end
---@param bIsGamepadBeingUsed boolean
function UInteractableMenuWidgetBP_C:OnChangeInputDeviceMenuUI(bIsGamepadBeingUsed) end
---@param InMenuCanvasPanel UPanelWidget
function UInteractableMenuWidgetBP_C:OnSpecialPreConstruct(InMenuCanvasPanel) end
function UInteractableMenuWidgetBP_C:OnPressedReset() end
function UInteractableMenuWidgetBP_C:OnPressedExtra() end
function UInteractableMenuWidgetBP_C:Construct() end
---@param EntryPoint int32
function UInteractableMenuWidgetBP_C:ExecuteUbergraph_InteractableMenuWidgetBP(EntryPoint) end


