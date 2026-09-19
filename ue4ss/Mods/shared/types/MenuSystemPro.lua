---@meta

---@class FDRAGOKeybindAction : FTableRowBase
---@field KeyBind TArray<FInputActionKeyMapping>
---@field KeybindCategory FName
local FDRAGOKeybindAction = {}



---@class FDRAGOKeybindAxis : FTableRowBase
---@field KeyBind TArray<FInputAxisKeyMapping>
---@field KeybindCategory FName
local FDRAGOKeybindAxis = {}



---@class UMenuSystemLibrary : UBlueprintFunctionLibrary
local UMenuSystemLibrary = {}

---@param AxisKeyMappingString FString
---@return FInputAxisKeyMapping
function UMenuSystemLibrary:StringToAxisKeyMapping(AxisKeyMappingString) end
---@param ActionKeyMappingString FString
---@return FInputActionKeyMapping
function UMenuSystemLibrary:StringToActionKeyMapping(ActionKeyMappingString) end
---@param QualityIndex int32
function UMenuSystemLibrary:SetScalabilityOverall(QualityIndex) end
---@param MotionBlur boolean
---@param LensFlares boolean
---@param SSR boolean
---@param Bloom boolean
---@param AntiAliasing int32
---@param AmbientOcclusion boolean
---@return boolean
function UMenuSystemLibrary:SetPostProcessingSettings(MotionBlur, LensFlares, SSR, Bloom, AntiAliasing, AmbientOcclusion) end
---@param bSawGraphicsChangePopup boolean
function UMenuSystemLibrary:SetPlayerSeenGraphicsPopUp(bSawGraphicsChangePopup) end
---@param SettingsSection FString
---@param CustomVariableName FString
---@param CustomVariableValue FString
---@return boolean
function UMenuSystemLibrary:SetPersistentVariable(SettingsSection, CustomVariableName, CustomVariableValue) end
---@param InLanguageCodeArray TArray<FString>
function UMenuSystemLibrary:SetLanguageCodeArray(InLanguageCodeArray) end
---@param Difficulty int32
---@param Language int32
---@param SubtitlesEnabled boolean
---@param FOVSlider float
---@param bUsing24HTimeFormat boolean
---@param bVIPCanActivate boolean
---@param bDennisCanActivate boolean
---@param bSharkCanActivate boolean
---@param bBusCanActivate boolean
---@param bElvisCanActivate boolean
---@param bSantasSleighCanActivate boolean
---@param bChristmasHatsCanActivate boolean
---@param bSandstormCanActivate boolean
---@param bWarehouseStealingCanActivate boolean
---@param bPostGameChallengesCanActivate boolean
---@param bJunkyardCustomizationEffects boolean
---@param bJunkyardCustomizationMusic boolean
---@param bCashRegisterSoundActive boolean
---@return boolean
function UMenuSystemLibrary:SetGameSettings(Difficulty, Language, SubtitlesEnabled, FOVSlider, bUsing24HTimeFormat, bVIPCanActivate, bDennisCanActivate, bSharkCanActivate, bBusCanActivate, bElvisCanActivate, bSantasSleighCanActivate, bChristmasHatsCanActivate, bSandstormCanActivate, bWarehouseStealingCanActivate, bPostGameChallengesCanActivate, bJunkyardCustomizationEffects, bJunkyardCustomizationMusic, bCashRegisterSoundActive) end
---@param Brightness float
---@param ActiveMonitor int32
---@return boolean
function UMenuSystemLibrary:SetDisplaySettings(Brightness, ActiveMonitor) end
---@param DefaultInputBindingsVersion FString
function UMenuSystemLibrary:SetDefaultInputBindingsVersion(DefaultInputBindingsVersion) end
---@param bIsDefaultGamepad boolean
---@return boolean
function UMenuSystemLibrary:SetDefaultgamepadSettings(bIsDefaultGamepad) end
---@param AxisKeyMappings TArray<FInputAxisKeyMapping>
---@return boolean
function UMenuSystemLibrary:SetDefaultAxisMappings(AxisKeyMappings) end
---@param ActionKeyMappings TArray<FInputActionKeyMapping>
---@return boolean
function UMenuSystemLibrary:SetDefaultActionMappings(ActionKeyMappings) end
---@param bInvertLookX boolean
---@param bInvertLookY boolean
---@param CameraSpeedX float
---@param CameraSpeedY float
---@param bRumble boolean
---@param bToogleSprintMode boolean
---@param bToggleInspectMode boolean
---@return boolean
function UMenuSystemLibrary:SetControlsSettings(bInvertLookX, bInvertLookY, CameraSpeedX, CameraSpeedY, bRumble, bToogleSprintMode, bToggleInspectMode) end
---@param BenchmarkAlreadyRan boolean
function UMenuSystemLibrary:SetBenchmarkAlreadyRan(BenchmarkAlreadyRan) end
---@param MasterAudioVolume float
---@param MusicAudioVolume float
---@param SFXAudioVolume float
---@param VoiceAudioVolume float
---@param UIAudioVolume float
---@param AmbientAudioVolume float
---@param MasterSoundClass USoundClass
---@param MusicSoundClass USoundClass
---@param SFXSoundClass USoundClass
---@param VoiceSoundClass USoundClass
---@param UISoundClass USoundClass
---@param AmbientSoundClass USoundClass
---@return boolean
function UMenuSystemLibrary:SetAudioSettings(MasterAudioVolume, MusicAudioVolume, SFXAudioVolume, VoiceAudioVolume, UIAudioVolume, AmbientAudioVolume, MasterSoundClass, MusicSoundClass, SFXSoundClass, VoiceSoundClass, UISoundClass, AmbientSoundClass) end
function UMenuSystemLibrary:ResetInputFile() end
---@param isGamepadDefault boolean
function UMenuSystemLibrary:ResetDefaultControl(isGamepadDefault) end
---@param InputChord FInputChord
---@param CategoryOfButtonWeCheck FName
---@param DefaultAxisBinds UDataTable
---@param DefaultActionBinds UDataTable
---@param OldInputAction FInputActionKeyMapping
---@param OldInputAxis FInputAxisKeyMapping
---@return boolean
function UMenuSystemLibrary:IsKeyAlreadyBound(InputChord, CategoryOfButtonWeCheck, DefaultAxisBinds, DefaultActionBinds, OldInputAction, OldInputAxis) end
---@param UsedVRAM float
---@param TotalVRAM float
function UMenuSystemLibrary:GetVRAM(UsedVRAM, TotalVRAM) end
---@param Resolutions TArray<FString>
---@param CurrentScreenResolutionIndex int32
---@return boolean
function UMenuSystemLibrary:GetSupportedScreenResolutions(Resolutions, CurrentScreenResolutionIndex) end
---@return FString
function UMenuSystemLibrary:GetScreenResolution() end
---@param QualityIndex int32
---@return boolean
function UMenuSystemLibrary:GetScalabilityOverall(QualityIndex) end
---@return FString
function UMenuSystemLibrary:GetProjectVersion() end
---@param MotionBlur boolean
---@param LensFlares boolean
---@param SSR boolean
---@param Bloom boolean
---@param AntiAliasing int32
---@param AmbientOcclusion boolean
---@param MotionBlurDefault boolean
---@param LensFlaresDefault boolean
---@param SSRDefault boolean
---@param BloomDefault boolean
---@param AntiAliasingDefault int32
---@param AmbientOcclusionDefault boolean
---@return boolean
function UMenuSystemLibrary:GetPostProcessingSettings(MotionBlur, LensFlares, SSR, Bloom, AntiAliasing, AmbientOcclusion, MotionBlurDefault, LensFlaresDefault, SSRDefault, BloomDefault, AntiAliasingDefault, AmbientOcclusionDefault) end
---@return boolean
function UMenuSystemLibrary:GetPlayerSeenGraphicsPopUp() end
---@param CustomVariableValue FString
---@param SettingsSection FString
---@param CustomVariableName FString
---@param CustomVariableValueDefault FString
---@return boolean
function UMenuSystemLibrary:GetPersistentVariable(CustomVariableValue, SettingsSection, CustomVariableName, CustomVariableValueDefault) end
---@return TArray<FString>
function UMenuSystemLibrary:GetLanguageCodeArray() end
---@param Difficulty int32
---@param Language int32
---@param SubtitlesEnabled boolean
---@param Languages TArray<FString>
---@param FOVSlider float
---@param bUsing24HTimeFormat boolean
---@param bVIPCanActivate boolean
---@param bDennisCanActivate boolean
---@param bSharkCanActivate boolean
---@param bBusCanActivate boolean
---@param bElvisCanActivate boolean
---@param bSantasSleighCanActivate boolean
---@param bChristmasHatsCanActivate boolean
---@param bSandstormCanActivate boolean
---@param bWarehouseStealingCanActivate boolean
---@param bPostGameChallengesCanActivate boolean
---@param bJunkyardCustomizationEffects boolean
---@param bJunkyardCustomizationMusic boolean
---@param bCashRegisterSoundActive boolean
---@param DifficultyDefault int32
---@param LanguageDefault int32
---@param SubtitlesEnabledDefault boolean
---@param FOVSliderDefault float
---@param bUsing24HTimeFormatDefault boolean
---@param bVIPCanActivateDefault boolean
---@param bDennisCanActivateDefault boolean
---@param bSharkCanActivateDefault boolean
---@param bBusCanActivateDefault boolean
---@param bElvisCanActivateDefault boolean
---@param bSantasSleighCanActivateDefault boolean
---@param bChristmasHatsCanActivateDefault boolean
---@param bSandstormCanActivateDefault boolean
---@param bWarehouseStealingCanActivateDefault boolean
---@param bPostGameChallengesCanActivateDefault boolean
---@param bJunkyardCustomizationEffectsDefault boolean
---@param bJunkyardCustomizationMusicDefault boolean
---@param bCashRegisterSoundActiveDefault boolean
---@return boolean
function UMenuSystemLibrary:GetGameSettings(Difficulty, Language, SubtitlesEnabled, Languages, FOVSlider, bUsing24HTimeFormat, bVIPCanActivate, bDennisCanActivate, bSharkCanActivate, bBusCanActivate, bElvisCanActivate, bSantasSleighCanActivate, bChristmasHatsCanActivate, bSandstormCanActivate, bWarehouseStealingCanActivate, bPostGameChallengesCanActivate, bJunkyardCustomizationEffects, bJunkyardCustomizationMusic, bCashRegisterSoundActive, DifficultyDefault, LanguageDefault, SubtitlesEnabledDefault, FOVSliderDefault, bUsing24HTimeFormatDefault, bVIPCanActivateDefault, bDennisCanActivateDefault, bSharkCanActivateDefault, bBusCanActivateDefault, bElvisCanActivateDefault, bSantasSleighCanActivateDefault, bChristmasHatsCanActivateDefault, bSandstormCanActivateDefault, bWarehouseStealingCanActivateDefault, bPostGameChallengesCanActivateDefault, bJunkyardCustomizationEffectsDefault, bJunkyardCustomizationMusicDefault, bCashRegisterSoundActiveDefault) end
---@param bIsDefaultGamepad boolean
---@param IsDefaultGamepad boolean
---@return boolean
function UMenuSystemLibrary:GetgamepadDefaultSettings(bIsDefaultGamepad, IsDefaultGamepad) end
---@param Brightness float
---@param ActiveMonitor int32
---@param BrightnessDefault float
---@param ActiveMonitorDefault int32
---@return boolean
function UMenuSystemLibrary:GetDisplaySettings(Brightness, ActiveMonitor, BrightnessDefault, ActiveMonitorDefault) end
---@return FString
function UMenuSystemLibrary:GetDefaultInputBindingsVersion() end
---@return TArray<FInputAxisKeyMapping>
function UMenuSystemLibrary:GetDefaultAxisMappings() end
---@return TArray<FInputActionKeyMapping>
function UMenuSystemLibrary:GetDefaultActionMappings() end
---@param PlayerController APlayerController
---@return int32
function UMenuSystemLibrary:GetCurrentViewMode(PlayerController) end
---@param bInvertLookX boolean
---@param bInvertLookY boolean
---@param CameraSpeedX float
---@param CameraSpeedY float
---@param bRumble boolean
---@param bToogleSprintMode boolean
---@param ToggleInspectMode boolean
---@param bInvertLookXDefault boolean
---@param bInvertLookYDefault boolean
---@param CameraSpeedXDefault float
---@param CameraSpeedYDefault float
---@param bRumbleDefault boolean
---@param bToogleSprintModeDefault boolean
---@param bToggleInspectModeDefault boolean
---@return boolean
function UMenuSystemLibrary:GetControlsSettings(bInvertLookX, bInvertLookY, CameraSpeedX, CameraSpeedY, bRumble, bToogleSprintMode, ToggleInspectMode, bInvertLookXDefault, bInvertLookYDefault, CameraSpeedXDefault, CameraSpeedYDefault, bRumbleDefault, bToogleSprintModeDefault, bToggleInspectModeDefault) end
---@param DefaultAxisMappings UDataTable
---@param DefaultActionMappings UDataTable
---@param InputName FName
---@return FName
function UMenuSystemLibrary:GetCategoryOfInput(DefaultAxisMappings, DefaultActionMappings, InputName) end
---@param MasterAudioVolume float
---@param MusicAudioVolume float
---@param SFXAudioVolume float
---@param VoiceAudioVolume float
---@param UIAudioVolume float
---@param AmbientAudioVolume float
---@param MasterAudioVolumeDefault float
---@param MusicAudioVolumeDefault float
---@param SFXAudioVolumeDefault float
---@param VoiceAudioVolumeDefault float
---@param UIAudioVolumeDefault float
---@param AmbientAudioVolumeDefault float
---@return boolean
function UMenuSystemLibrary:GetAudioSettings(MasterAudioVolume, MusicAudioVolume, SFXAudioVolume, VoiceAudioVolume, UIAudioVolume, AmbientAudioVolume, MasterAudioVolumeDefault, MusicAudioVolumeDefault, SFXAudioVolumeDefault, VoiceAudioVolumeDefault, UIAudioVolumeDefault, AmbientAudioVolumeDefault) end
---@return int32
function UMenuSystemLibrary:GetAmountOfMonitors() end
---@param DefaultKeyboardInputActions UDataTable
---@param DefaultGamepadInputActions UDataTable
---@param DefaultKeyboardInputAxis UDataTable
---@param DefaultGamepadInputAxis UDataTable
---@param bForceRebuildKeymaps boolean
function UMenuSystemLibrary:DRAGO_ResetUnboundInputs(DefaultKeyboardInputActions, DefaultGamepadInputActions, DefaultKeyboardInputAxis, DefaultGamepadInputAxis, bForceRebuildKeymaps) end
---@param InKeyMapping FInputAxisKeyMapping
---@param bForceRebuildKeymaps boolean
function UMenuSystemLibrary:DRAGO_RemoveAxisMapping(InKeyMapping, bForceRebuildKeymaps) end
---@param DefaultAxisMappings UDataTable
---@param InputAction FName
---@param AxisScale float
---@return FInputAxisKeyMapping
function UMenuSystemLibrary:DRAGO_GetDefaultAxisKeyMapping(DefaultAxisMappings, InputAction, AxisScale) end
---@param DefaultActionMappings UDataTable
---@param InputAction FName
---@return FInputActionKeyMapping
function UMenuSystemLibrary:DRAGO_GetDefaultActionKeyMapping(DefaultActionMappings, InputAction) end
---@return boolean
function UMenuSystemLibrary:CheckIfBenchmarkAlreadyRan() end
---@param InputAxisKeyMapping FInputAxisKeyMapping
---@return FString
function UMenuSystemLibrary:AxisKeyMappingToString(InputAxisKeyMapping) end
---@param MotionBlur boolean
---@param LensFlares boolean
---@param SSR boolean
---@param Bloom boolean
---@param AntiAliasing int32
---@param AmbientOcclusion boolean
function UMenuSystemLibrary:ApplyPostProcessingSettings(MotionBlur, LensFlares, SSR, Bloom, AntiAliasing, AmbientOcclusion) end
function UMenuSystemLibrary:ActiveMonitorChanged() end
---@param InputActionKeyMapping FInputActionKeyMapping
---@return FString
function UMenuSystemLibrary:ActionKeyMappingToString(InputActionKeyMapping) end


