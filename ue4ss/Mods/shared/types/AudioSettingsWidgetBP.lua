---@meta

---@class UAudioSettingsWidgetBP_C : UInteractableMenuWidgetBP_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AmbientSoundSlider UOptionsSlider_C
---@field BackButton UNavigationKeyButton_C
---@field CarHonks UOptionsPicker_C
---@field Image_96 UImage
---@field LeftBorder UBorder
---@field LeftTitleBorder UBorder
---@field MasterOptionsSlider UOptionsSlider_C
---@field MenuCanvasPanel UCanvasPanel
---@field MenuTitleText UTextBlock
---@field MusicOptionsSlider UOptionsSlider_C
---@field ResetButton UNavigationKeyButton_C
---@field RightBorder UBorder
---@field RightTitleBorder UBorder
---@field SelectedOptionDescription UTextBlock
---@field SelectedOptionName UTextBlock
---@field SFXOptionsSlider UOptionsSlider_C
---@field UISoundSlider UOptionsSlider_C
---@field VoiceOptionsSlider UOptionsSlider_C
---@field OnClickedBack FAudioSettingsWidgetBP_COnClickedBack
---@field OptionsOverviewWidget UOptionsOverviewWidgetBP_C
---@field MasterSoundClassDefault USoundClass
---@field MusicSoundClassDefault USoundClass
---@field SFXSoundClassDefault USoundClass
---@field VoiceSoundClassDefault USoundClass
---@field UISoundClassDefault USoundClass
---@field AmbientSoundClassDefault USoundClass
local UAudioSettingsWidgetBP_C = {}

---@param InVolumeSlider UOptionsSlider_C
---@param InValue float
function UAudioSettingsWidgetBP_C:SetAudioVolumeSlider(InVolumeSlider, InValue) end
function UAudioSettingsWidgetBP_C:SetGlobalSettings() end
function UAudioSettingsWidgetBP_C:ApplyAudioSettings() end
function UAudioSettingsWidgetBP_C:ResetAudioSettings() end
function UAudioSettingsWidgetBP_C:LoadAudioSettings() end
---@param InWidget UInteractableUserWidget_C
function UAudioSettingsWidgetBP_C:UpdateDescription(InWidget) end
function UAudioSettingsWidgetBP_C:BndEvt__OptionsSlider_C_0_K2Node_ComponentBoundEvent_8_OnOptionChanged__DelegateSignature() end
function UAudioSettingsWidgetBP_C:BndEvt__MusicOptionsSlider_K2Node_ComponentBoundEvent_6_OnOptionChanged__DelegateSignature() end
function UAudioSettingsWidgetBP_C:BndEvt__ResetButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature() end
function UAudioSettingsWidgetBP_C:BndEvt__SFXOptionsSlider_K2Node_ComponentBoundEvent_5_OnOptionChanged__DelegateSignature() end
function UAudioSettingsWidgetBP_C:BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature() end
function UAudioSettingsWidgetBP_C:BndEvt__MasterOptionsSlider_K2Node_ComponentBoundEvent_4_OnOptionChanged__DelegateSignature() end
function UAudioSettingsWidgetBP_C:OnPressedBack() end
---@param NavigateFromMenu UInteractableMenuWidgetBP_C
---@param bIsGamepadBeingUsed boolean
function UAudioSettingsWidgetBP_C:OnNavigationEnter(NavigateFromMenu, bIsGamepadBeingUsed) end
---@param NavigateToMenu UInteractableMenuWidgetBP_C
---@param NavigateFromMenu UInteractableMenuWidgetBP_C
function UAudioSettingsWidgetBP_C:OnNavigationExit(NavigateToMenu, NavigateFromMenu) end
function UAudioSettingsWidgetBP_C:Construct() end
function UAudioSettingsWidgetBP_C:BndEvt__MasterOptionsSlider_K2Node_ComponentBoundEvent_9_OnFocussed__DelegateSignature() end
function UAudioSettingsWidgetBP_C:BndEvt__SFXOptionsSlider_K2Node_ComponentBoundEvent_10_OnFocussed__DelegateSignature() end
function UAudioSettingsWidgetBP_C:BndEvt__MusicOptionsSlider_K2Node_ComponentBoundEvent_12_OnFocussed__DelegateSignature() end
function UAudioSettingsWidgetBP_C:BndEvt__VoiceOptionsSlider_K2Node_ComponentBoundEvent_13_OnFocussed__DelegateSignature() end
function UAudioSettingsWidgetBP_C:OnGlobalSettingsApply() end
---@param IsDesignTime boolean
function UAudioSettingsWidgetBP_C:PreConstruct(IsDesignTime) end
function UAudioSettingsWidgetBP_C:OnPressedReset() end
function UAudioSettingsWidgetBP_C:BndEvt__AmbientSoundSlider_K2Node_ComponentBoundEvent_1_OnOptionChanged__DelegateSignature() end
function UAudioSettingsWidgetBP_C:BndEvt__AmbientSoundSlider_K2Node_ComponentBoundEvent_2_OnFocussed__DelegateSignature() end
function UAudioSettingsWidgetBP_C:BndEvt__UISoundSlider_K2Node_ComponentBoundEvent_3_OnOptionChanged__DelegateSignature() end
function UAudioSettingsWidgetBP_C:BndEvt__UISoundSlider_K2Node_ComponentBoundEvent_7_OnFocussed__DelegateSignature() end
---@param ActiveIndex int32
function UAudioSettingsWidgetBP_C:BndEvt__CarHonks_K2Node_ComponentBoundEvent_14_OnOptionChanged__DelegateSignature(ActiveIndex) end
function UAudioSettingsWidgetBP_C:BndEvt__AudioSettingsWidgetBP_CarHonks_K2Node_ComponentBoundEvent_15_OnFocussed__DelegateSignature() end
---@param EntryPoint int32
function UAudioSettingsWidgetBP_C:ExecuteUbergraph_AudioSettingsWidgetBP(EntryPoint) end
function UAudioSettingsWidgetBP_C:OnClickedBack__DelegateSignature() end


