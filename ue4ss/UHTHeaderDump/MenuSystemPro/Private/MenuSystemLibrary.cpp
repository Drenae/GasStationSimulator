#include "MenuSystemLibrary.h"

UMenuSystemLibrary::UMenuSystemLibrary() {
}

FInputAxisKeyMapping UMenuSystemLibrary::StringToAxisKeyMapping(const FString& AxisKeyMappingString) {
    return FInputAxisKeyMapping{};
}

FInputActionKeyMapping UMenuSystemLibrary::StringToActionKeyMapping(const FString& ActionKeyMappingString) {
    return FInputActionKeyMapping{};
}

void UMenuSystemLibrary::SetScalabilityOverall(int32 QualityIndex) {
}

bool UMenuSystemLibrary::SetPostProcessingSettings(bool MotionBlur, bool LensFlares, bool SSR, bool Bloom, int32 AntiAliasing, bool AmbientOcclusion) {
    return false;
}

void UMenuSystemLibrary::SetPlayerSeenGraphicsPopUp(bool bSawGraphicsChangePopup) {
}

bool UMenuSystemLibrary::SetPersistentVariable(const FString& SettingsSection, const FString& CustomVariableName, const FString& CustomVariableValue) {
    return false;
}

void UMenuSystemLibrary::SetLanguageCodeArray(TArray<FString> InLanguageCodeArray) {
}

bool UMenuSystemLibrary::SetGameSettings(const int32 Difficulty, const int32 Language, const bool SubtitlesEnabled, const float FOVSlider, const bool bUsing24HTimeFormat, const bool bVIPCanActivate, const bool bDennisCanActivate, const bool bSharkCanActivate, const bool bBusCanActivate, const bool bElvisCanActivate, const bool bSantasSleighCanActivate, const bool bChristmasHatsCanActivate, const bool bSandstormCanActivate, const bool bWarehouseStealingCanActivate, const bool bPostGameChallengesCanActivate, const bool bJunkyardCustomizationEffects, const bool bJunkyardCustomizationMusic, const bool bCashRegisterSoundActive) {
    return false;
}

bool UMenuSystemLibrary::SetDisplaySettings(float Brightness, int32 ActiveMonitor) {
    return false;
}

void UMenuSystemLibrary::SetDefaultInputBindingsVersion(const FString& DefaultInputBindingsVersion) {
}

bool UMenuSystemLibrary::SetDefaultgamepadSettings(const bool bIsDefaultGamepad) {
    return false;
}

bool UMenuSystemLibrary::SetDefaultAxisMappings(TArray<FInputAxisKeyMapping> AxisKeyMappings) {
    return false;
}

bool UMenuSystemLibrary::SetDefaultActionMappings(TArray<FInputActionKeyMapping> ActionKeyMappings) {
    return false;
}

bool UMenuSystemLibrary::SetControlsSettings(const bool bInvertLookX, const bool bInvertLookY, const float CameraSpeedX, const float CameraSpeedY, const bool bRumble, const bool bToogleSprintMode, const bool bToggleInspectMode) {
    return false;
}

void UMenuSystemLibrary::SetBenchmarkAlreadyRan(bool BenchmarkAlreadyRan) {
}

bool UMenuSystemLibrary::SetAudioSettings(const float MasterAudioVolume, const float MusicAudioVolume, const float SFXAudioVolume, const float VoiceAudioVolume, const float UIAudioVolume, const float AmbientAudioVolume, USoundClass* MasterSoundClass, USoundClass* MusicSoundClass, USoundClass* SFXSoundClass, USoundClass* VoiceSoundClass, USoundClass* UISoundClass, USoundClass* AmbientSoundClass) {
    return false;
}

void UMenuSystemLibrary::ResetInputFile() {
}


bool UMenuSystemLibrary::IsKeyAlreadyBound(FInputChord InputChord, FName CategoryOfButtonWeCheck, UDataTable* DefaultAxisBinds, UDataTable* DefaultActionBinds, FInputActionKeyMapping& OldInputAction, FInputAxisKeyMapping& OldInputAxis) {
    return false;
}

void UMenuSystemLibrary::GetVRAM(float& UsedVRAM, float& TotalVRAM) {
}

bool UMenuSystemLibrary::GetSupportedScreenResolutions(TArray<FString>& Resolutions, int32& CurrentScreenResolutionIndex) {
    return false;
}

FString UMenuSystemLibrary::GetScreenResolution() {
    return TEXT("");
}

bool UMenuSystemLibrary::GetScalabilityOverall(int32& QualityIndex) {
    return false;
}

FString UMenuSystemLibrary::GetProjectVersion() {
    return TEXT("");
}

bool UMenuSystemLibrary::GetPostProcessingSettings(bool& MotionBlur, bool& LensFlares, bool& SSR, bool& Bloom, int32& AntiAliasing, bool& AmbientOcclusion, bool MotionBlurDefault, bool LensFlaresDefault, bool SSRDefault, bool BloomDefault, int32 AntiAliasingDefault, bool AmbientOcclusionDefault) {
    return false;
}

bool UMenuSystemLibrary::GetPlayerSeenGraphicsPopUp() {
    return false;
}

bool UMenuSystemLibrary::GetPersistentVariable(FString& CustomVariableValue, const FString& SettingsSection, const FString& CustomVariableName, const FString& CustomVariableValueDefault) {
    return false;
}

TArray<FString> UMenuSystemLibrary::GetLanguageCodeArray() {
    return TArray<FString>();
}

bool UMenuSystemLibrary::GetGameSettings(int32& Difficulty, int32& Language, bool& SubtitlesEnabled, TArray<FString>& Languages, float& FOVSlider, bool& bUsing24HTimeFormat, bool& bVIPCanActivate, bool& bDennisCanActivate, bool& bSharkCanActivate, bool& bBusCanActivate, bool& bElvisCanActivate, bool& bSantasSleighCanActivate, bool& bChristmasHatsCanActivate, bool& bSandstormCanActivate, bool& bWarehouseStealingCanActivate, bool& bPostGameChallengesCanActivate, bool& bJunkyardCustomizationEffects, bool& bJunkyardCustomizationMusic, bool& bCashRegisterSoundActive, int32 DifficultyDefault, int32 LanguageDefault, bool SubtitlesEnabledDefault, float FOVSliderDefault, bool bUsing24HTimeFormatDefault, bool bVIPCanActivateDefault, bool bDennisCanActivateDefault, bool bSharkCanActivateDefault, bool bBusCanActivateDefault, bool bElvisCanActivateDefault, bool bSantasSleighCanActivateDefault, bool bChristmasHatsCanActivateDefault, bool bSandstormCanActivateDefault, bool bWarehouseStealingCanActivateDefault, bool bPostGameChallengesCanActivateDefault, bool bJunkyardCustomizationEffectsDefault, bool bJunkyardCustomizationMusicDefault, bool bCashRegisterSoundActiveDefault) {
    return false;
}

bool UMenuSystemLibrary::GetgamepadDefaultSettings(bool& bIsDefaultGamepad, bool IsDefaultGamepad) {
    return false;
}

bool UMenuSystemLibrary::GetDisplaySettings(float& Brightness, int32& ActiveMonitor, const float BrightnessDefault, const int32 ActiveMonitorDefault) {
    return false;
}

FString UMenuSystemLibrary::GetDefaultInputBindingsVersion() {
    return TEXT("");
}

TArray<FInputAxisKeyMapping> UMenuSystemLibrary::GetDefaultAxisMappings() {
    return TArray<FInputAxisKeyMapping>();
}

TArray<FInputActionKeyMapping> UMenuSystemLibrary::GetDefaultActionMappings() {
    return TArray<FInputActionKeyMapping>();
}

int32 UMenuSystemLibrary::GetCurrentViewMode(const APlayerController* PlayerController) {
    return 0;
}

bool UMenuSystemLibrary::GetControlsSettings(bool& bInvertLookX, bool& bInvertLookY, float& CameraSpeedX, float& CameraSpeedY, bool& bRumble, bool& bToogleSprintMode, bool& ToggleInspectMode, bool bInvertLookXDefault, bool bInvertLookYDefault, float CameraSpeedXDefault, float CameraSpeedYDefault, bool bRumbleDefault, bool bToogleSprintModeDefault, bool bToggleInspectModeDefault) {
    return false;
}

FName UMenuSystemLibrary::GetCategoryOfInput(UDataTable* DefaultAxisMappings, UDataTable* DefaultActionMappings, FName InputName) {
    return NAME_None;
}

bool UMenuSystemLibrary::GetAudioSettings(float& MasterAudioVolume, float& MusicAudioVolume, float& SFXAudioVolume, float& VoiceAudioVolume, float& UIAudioVolume, float& AmbientAudioVolume, float MasterAudioVolumeDefault, float MusicAudioVolumeDefault, float SFXAudioVolumeDefault, float VoiceAudioVolumeDefault, float UIAudioVolumeDefault, float AmbientAudioVolumeDefault) {
    return false;
}

int32 UMenuSystemLibrary::GetAmountOfMonitors() {
    return 0;
}

void UMenuSystemLibrary::DRAGO_ResetUnboundInputs(UDataTable* DefaultKeyboardInputActions, UDataTable* DefaultGamepadInputActions, UDataTable* DefaultKeyboardInputAxis, UDataTable* DefaultGamepadInputAxis, bool bForceRebuildKeymaps) {
}

void UMenuSystemLibrary::DRAGO_RemoveAxisMapping(const FInputAxisKeyMapping& InKeyMapping, bool bForceRebuildKeymaps) {
}

FInputAxisKeyMapping UMenuSystemLibrary::DRAGO_GetDefaultAxisKeyMapping(UDataTable* DefaultAxisMappings, FName InputAction, float AxisScale) {
    return FInputAxisKeyMapping{};
}

FInputActionKeyMapping UMenuSystemLibrary::DRAGO_GetDefaultActionKeyMapping(UDataTable* DefaultActionMappings, FName InputAction) {
    return FInputActionKeyMapping{};
}

bool UMenuSystemLibrary::CheckIfBenchmarkAlreadyRan() {
    return false;
}

FString UMenuSystemLibrary::AxisKeyMappingToString(const FInputAxisKeyMapping InputAxisKeyMapping) {
    return TEXT("");
}

void UMenuSystemLibrary::ApplyPostProcessingSettings(bool MotionBlur, bool LensFlares, bool SSR, bool Bloom, int32 AntiAliasing, bool AmbientOcclusion) {
}

void UMenuSystemLibrary::ActiveMonitorChanged() {
}

FString UMenuSystemLibrary::ActionKeyMappingToString(FInputActionKeyMapping InputActionKeyMapping) {
    return TEXT("");
}


