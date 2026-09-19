---@meta

---@class UDisplaySettingsWidgetBP_C : UInteractableMenuWidgetBP_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ApplyButton UNavigationKeyButton_C
---@field BackButton UNavigationKeyButton_C
---@field BrightnessOptionsSlider UOptionsSlider_C
---@field DecisionDialogWidgetBP UDecisionDialogWidgetBP_C
---@field DisplayResolutionOptionsPicker UOptionsPicker_C
---@field HideHUDOptionsPicker UOptionsPicker_C
---@field Image_96 UImage
---@field LeftBorder UBorder
---@field LeftSeparatorBorder UBorder
---@field LeftTitleBorder UBorder
---@field LockFPSOptionsPicker UOptionsPicker_C
---@field MenuCanvasPanel UCanvasPanel
---@field MenuTitleText UTextBlock
---@field ResetButton UNavigationKeyButton_C
---@field ResolutionScaleOptionsSlider UOptionsSlider_C
---@field RightBorder UBorder
---@field RightTitleBorder UBorder
---@field ScreenSelector UOptionsPicker_C
---@field SelectedOptionDescription UTextBlock
---@field SelectedOptionName UTextBlock
---@field VSyncOptionsPicker UOptionsPicker_C
---@field WindowModeOptionsPicker UOptionsPicker_C
---@field OnClickedBack FDisplaySettingsWidgetBP_COnClickedBack
---@field OptionsOverviewWidget UOptionsOverviewWidgetBP_C
---@field bIsDirty boolean
---@field LoadedWindowMode int32
---@field LoadedScreenResolution int32
---@field LoadedFrameRateLimit float
---@field LoadedVSyncEnabled boolean
---@field LoadedResolutionScale float
---@field LoadedBrightness float
---@field LoadedMonitorIndex int32
local UDisplaySettingsWidgetBP_C = {}

function UDisplaySettingsWidgetBP_C:SetupMonitorWidget() end
---@param InFrameRate float
---@param OutIndex int32
function UDisplaySettingsWidgetBP_C:GetFrameRateIndex(InFrameRate, OutIndex) end
function UDisplaySettingsWidgetBP_C:GetSavedDisplaySettings() end
---@param bIsReallyDirty boolean
function UDisplaySettingsWidgetBP_C:DirtyCheck(bIsReallyDirty) end
---@param InFrameRate float
function UDisplaySettingsWidgetBP_C:SetFrameRatePicker(InFrameRate) end
function UDisplaySettingsWidgetBP_C:SetGlobalSettings() end
---@param InWidget UInteractableUserWidget_C
function UDisplaySettingsWidgetBP_C:UpdateDescription(InWidget) end
function UDisplaySettingsWidgetBP_C:ShowDecisionDialog() end
---@param InGammaValue float
function UDisplaySettingsWidgetBP_C:SetGammaCorrection(InGammaValue) end
function UDisplaySettingsWidgetBP_C:ResetDisplaySettings() end
function UDisplaySettingsWidgetBP_C:MarkSettingsAsDirty() end
function UDisplaySettingsWidgetBP_C:SetupDisplayResolutions() end
function UDisplaySettingsWidgetBP_C:LoadDisplaySettings() end
---@param Resolution FText
---@param X int32
---@param Y int32
function UDisplaySettingsWidgetBP_C:SplitResolution(Resolution, X, Y) end
function UDisplaySettingsWidgetBP_C:ApplyDisplaySettings() end
function UDisplaySettingsWidgetBP_C:BndEvt__ResetButton_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature() end
---@param ActiveIndex int32
function UDisplaySettingsWidgetBP_C:BndEvt__VSyncOptionsPicker_K2Node_ComponentBoundEvent_12_OnOptionChanged__DelegateSignature(ActiveIndex) end
function UDisplaySettingsWidgetBP_C:BndEvt__BrightnessOptionsSlider_K2Node_ComponentBoundEvent_15_OnOptionChanged__DelegateSignature() end
function UDisplaySettingsWidgetBP_C:BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature() end
---@param ActiveIndex int32
function UDisplaySettingsWidgetBP_C:BndEvt__LockFPSOptionsPicker_K2Node_ComponentBoundEvent_10_OnOptionChanged__DelegateSignature(ActiveIndex) end
function UDisplaySettingsWidgetBP_C:OnPressedBack() end
---@param NavigateFromMenu UInteractableMenuWidgetBP_C
---@param bIsGamepadBeingUsed boolean
function UDisplaySettingsWidgetBP_C:OnNavigationEnter(NavigateFromMenu, bIsGamepadBeingUsed) end
---@param NavigateToMenu UInteractableMenuWidgetBP_C
---@param NavigateFromMenu UInteractableMenuWidgetBP_C
function UDisplaySettingsWidgetBP_C:OnNavigationExit(NavigateToMenu, NavigateFromMenu) end
---@param ActiveIndex int32
function UDisplaySettingsWidgetBP_C:BndEvt__DisplayResolutionOptionsPicker_K2Node_ComponentBoundEvent_9_OnOptionChanged__DelegateSignature(ActiveIndex) end
function UDisplaySettingsWidgetBP_C:BndEvt__WindowModeOptionsPicker_K2Node_ComponentBoundEvent_1_OnFocussed__DelegateSignature() end
function UDisplaySettingsWidgetBP_C:BndEvt__DisplayResolutionOptionsPicker_K2Node_ComponentBoundEvent_3_OnFocussed__DelegateSignature() end
function UDisplaySettingsWidgetBP_C:BndEvt__LockFPSOptionsPicker_K2Node_ComponentBoundEvent_4_OnFocussed__DelegateSignature() end
function UDisplaySettingsWidgetBP_C:BndEvt__VSyncOptionsPicker_K2Node_ComponentBoundEvent_6_OnFocussed__DelegateSignature() end
function UDisplaySettingsWidgetBP_C:BndEvt__BrightnessOptionsSlider_K2Node_ComponentBoundEvent_16_OnFocussed__DelegateSignature() end
---@param ActiveIndex int32
function UDisplaySettingsWidgetBP_C:BndEvt__WindowModeOptionsPicker_K2Node_ComponentBoundEvent_2_OnOptionChanged__DelegateSignature(ActiveIndex) end
function UDisplaySettingsWidgetBP_C:OnGlobalSettingsApply() end
function UDisplaySettingsWidgetBP_C:BndEvt__DecisionDialogWidgetBP_K2Node_ComponentBoundEvent_5_DecisionAccept__DelegateSignature() end
function UDisplaySettingsWidgetBP_C:BndEvt__DecisionDialogWidgetBP_K2Node_ComponentBoundEvent_17_DecisionDecline__DelegateSignature() end
---@param IsDesignTime boolean
function UDisplaySettingsWidgetBP_C:PreConstruct(IsDesignTime) end
function UDisplaySettingsWidgetBP_C:Construct() end
function UDisplaySettingsWidgetBP_C:OnPressedReset() end
function UDisplaySettingsWidgetBP_C:OnPressedSelect() end
function UDisplaySettingsWidgetBP_C:BndEvt__ApplyButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature() end
---@param ActiveIndex int32
function UDisplaySettingsWidgetBP_C:BndEvt__ScreenSelector_K2Node_ComponentBoundEvent_18_OnOptionChanged__DelegateSignature(ActiveIndex) end
function UDisplaySettingsWidgetBP_C:BndEvt__ScreenSelector_K2Node_ComponentBoundEvent_19_OnFocussed__DelegateSignature() end
---@param ActiveIndex int32
function UDisplaySettingsWidgetBP_C:BndEvt__DisplaySettingsWidgetBP_HideHUD_K2Node_ComponentBoundEvent_7_OnOptionChanged__DelegateSignature(ActiveIndex) end
function UDisplaySettingsWidgetBP_C:BndEvt__DisplaySettingsWidgetBP_HideHUD_K2Node_ComponentBoundEvent_11_OnFocussed__DelegateSignature() end
function UDisplaySettingsWidgetBP_C:DisableHideHudPicker() end
---@param EntryPoint int32
function UDisplaySettingsWidgetBP_C:ExecuteUbergraph_DisplaySettingsWidgetBP(EntryPoint) end
function UDisplaySettingsWidgetBP_C:OnClickedBack__DelegateSignature() end


