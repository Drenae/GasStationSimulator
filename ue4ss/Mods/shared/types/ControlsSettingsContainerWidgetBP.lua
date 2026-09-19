---@meta

---@class UControlsSettingsContainerWidgetBP_C : UInteractableMenuWidgetBP_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ControlsGamepadBindingsWidgetBP UControlsGamepadBindingsWidgetBP_C
---@field ControlsKeyBindingsWidgetBP UControlsKeyBindingsWidgetBP_C
---@field ControlsOverviewWidgetBP UControlsOverviewWidgetBP_C
---@field MenuCanvasPanel UCanvasPanel
---@field OnClickedBack FControlsSettingsContainerWidgetBP_COnClickedBack
---@field InvertLookXDefault boolean
---@field InvertLookYDefault boolean
---@field CameraSpeedXDefault float
---@field CameraSpeedYDefault float
---@field RumbleDefault boolean
---@field bIsDirty boolean
---@field LoadedInvertLookX boolean
---@field LoadedInvertLookY boolean
---@field LoadedCameraSpeedX float
---@field LoadedCameraSpeedY float
---@field LoadedRumble boolean
---@field LoadDefaultGamepad boolean
---@field LoadedToggleSprintMode boolean
---@field DisableConttolerDefault boolean
---@field LoadedToggleInspectMode boolean
local UControlsSettingsContainerWidgetBP_C = {}

---@param InteractableUserWidget TArray<UInteractableUserWidget_C>
---@param IsGamepad boolean
function UControlsSettingsContainerWidgetBP_C:ResetDeviceBindingsAndRestoreUnboundDRAGO(InteractableUserWidget, IsGamepad) end
---@param InteractableUserWidget TArray<UInteractableUserWidget_C>
---@param IsGamepad boolean
---@param bRebuildAndSaveKmaps boolean
function UControlsSettingsContainerWidgetBP_C:ImprovedResetBindingsDRAGO(InteractableUserWidget, IsGamepad, bRebuildAndSaveKmaps) end
---@param IsGamepad boolean
---@param bForceRebuildKeymaps boolean
function UControlsSettingsContainerWidgetBP_C:ForceRemove_Axis(IsGamepad, bForceRebuildKeymaps) end
---@param IsGamepad boolean
---@param bForceRebuildKeymaps boolean
function UControlsSettingsContainerWidgetBP_C:ForceRemove_Actions(IsGamepad, bForceRebuildKeymaps) end
---@param IsGamepad boolean
---@param bForceRebuildKeymaps boolean
function UControlsSettingsContainerWidgetBP_C:ForceRemoveAllMappings(IsGamepad, bForceRebuildKeymaps) end
---@param InActionName FName
---@param bIsGamepadMapping boolean
---@param bForceRebuildKeymaps boolean
function UControlsSettingsContainerWidgetBP_C:RemoveActionMappingByName(InActionName, bIsGamepadMapping, bForceRebuildKeymaps) end
---@param InAxisName FName
---@param InScale float
---@param bIsGamepadMapping boolean
---@param bForceRebuildKeymaps boolean
function UControlsSettingsContainerWidgetBP_C:RemoveAxisMappingByName(InAxisName, InScale, bIsGamepadMapping, bForceRebuildKeymaps) end
function UControlsSettingsContainerWidgetBP_C:SaveDefaultBindings() end
function UControlsSettingsContainerWidgetBP_C:GetSavedControlsSettings() end
---@param bIsReallyDirty boolean
function UControlsSettingsContainerWidgetBP_C:DirtyCheck(bIsReallyDirty) end
---@param InOptionsSlider UOptionsSlider_C
---@param InValue float
function UControlsSettingsContainerWidgetBP_C:SetSensivitySliderValue(InOptionsSlider, InValue) end
function UControlsSettingsContainerWidgetBP_C:ResetControlsSettings() end
function UControlsSettingsContainerWidgetBP_C:ApplyControlsSettings() end
function UControlsSettingsContainerWidgetBP_C:LoadControlsSettings() end
function UControlsSettingsContainerWidgetBP_C:MarkSettingsAsDirty() end
---@param NavigateFromMenu UInteractableMenuWidgetBP_C
---@param bIsGamepadBeingUsed boolean
function UControlsSettingsContainerWidgetBP_C:OnNavigationEnter(NavigateFromMenu, bIsGamepadBeingUsed) end
---@param NavigateToMenu UInteractableMenuWidgetBP_C
---@param NavigateFromMenu UInteractableMenuWidgetBP_C
function UControlsSettingsContainerWidgetBP_C:OnNavigationExit(NavigateToMenu, NavigateFromMenu) end
function UControlsSettingsContainerWidgetBP_C:Construct() end
---@param EntryPoint int32
function UControlsSettingsContainerWidgetBP_C:ExecuteUbergraph_ControlsSettingsContainerWidgetBP(EntryPoint) end
function UControlsSettingsContainerWidgetBP_C:OnClickedBack__DelegateSignature() end


