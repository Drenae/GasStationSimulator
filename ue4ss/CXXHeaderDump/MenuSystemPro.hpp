#ifndef UE4SS_SDK_MenuSystemPro_HPP
#define UE4SS_SDK_MenuSystemPro_HPP

#include "MenuSystemPro_enums.hpp"

struct FDRAGOKeybindAction : public FTableRowBase
{
    TArray<FInputActionKeyMapping> KeyBind;                                           // 0x0008 (size: 0x10)
    FName KeybindCategory;                                                            // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FDRAGOKeybindAxis : public FTableRowBase
{
    TArray<FInputAxisKeyMapping> KeyBind;                                             // 0x0008 (size: 0x10)
    FName KeybindCategory;                                                            // 0x0018 (size: 0x8)

}; // Size: 0x20

class UMenuSystemLibrary : public UBlueprintFunctionLibrary
{

    FInputAxisKeyMapping StringToAxisKeyMapping(const FString AxisKeyMappingString);
    FInputActionKeyMapping StringToActionKeyMapping(const FString ActionKeyMappingString);
    void SetScalabilityOverall(int32 QualityIndex);
    bool SetPostProcessingSettings(bool MotionBlur, bool LensFlares, bool SSR, bool Bloom, int32 AntiAliasing, bool AmbientOcclusion);
    void SetPlayerSeenGraphicsPopUp(bool bSawGraphicsChangePopup);
    bool SetPersistentVariable(const FString SettingsSection, const FString CustomVariableName, const FString CustomVariableValue);
    void SetLanguageCodeArray(TArray<FString> InLanguageCodeArray);
    bool SetGameSettings(const int32 Difficulty, const int32 Language, const bool SubtitlesEnabled, const float FOVSlider, const bool bUsing24HTimeFormat, const bool bVIPCanActivate, const bool bDennisCanActivate, const bool bSharkCanActivate, const bool bBusCanActivate, const bool bElvisCanActivate, const bool bSantasSleighCanActivate, const bool bChristmasHatsCanActivate, const bool bSandstormCanActivate, const bool bWarehouseStealingCanActivate, const bool bPostGameChallengesCanActivate, const bool bJunkyardCustomizationEffects, const bool bJunkyardCustomizationMusic, const bool bCashRegisterSoundActive);
    bool SetDisplaySettings(float Brightness, int32 ActiveMonitor);
    void SetDefaultInputBindingsVersion(FString DefaultInputBindingsVersion);
    bool SetDefaultgamepadSettings(const bool bIsDefaultGamepad);
    bool SetDefaultAxisMappings(TArray<FInputAxisKeyMapping> AxisKeyMappings);
    bool SetDefaultActionMappings(TArray<FInputActionKeyMapping> ActionKeyMappings);
    bool SetControlsSettings(const bool bInvertLookX, const bool bInvertLookY, const float CameraSpeedX, const float CameraSpeedY, const bool bRumble, const bool bToogleSprintMode, const bool bToggleInspectMode);
    void SetBenchmarkAlreadyRan(bool BenchmarkAlreadyRan);
    bool SetAudioSettings(const float MasterAudioVolume, const float MusicAudioVolume, const float SFXAudioVolume, const float VoiceAudioVolume, const float UIAudioVolume, const float AmbientAudioVolume, class USoundClass* MasterSoundClass, class USoundClass* MusicSoundClass, class USoundClass* SFXSoundClass, class USoundClass* VoiceSoundClass, class USoundClass* UISoundClass, class USoundClass* AmbientSoundClass);
    void ResetInputFile();
    void ResetDefaultControl(bool isGamepadDefault);
    bool IsKeyAlreadyBound(FInputChord InputChord, FName CategoryOfButtonWeCheck, class UDataTable* DefaultAxisBinds, class UDataTable* DefaultActionBinds, FInputActionKeyMapping& OldInputAction, FInputAxisKeyMapping& OldInputAxis);
    void GetVRAM(float& UsedVRAM, float& TotalVRAM);
    bool GetSupportedScreenResolutions(TArray<FString>& Resolutions, int32& CurrentScreenResolutionIndex);
    FString GetScreenResolution();
    bool GetScalabilityOverall(int32& QualityIndex);
    FString GetProjectVersion();
    bool GetPostProcessingSettings(bool& MotionBlur, bool& LensFlares, bool& SSR, bool& Bloom, int32& AntiAliasing, bool& AmbientOcclusion, bool MotionBlurDefault, bool LensFlaresDefault, bool SSRDefault, bool BloomDefault, int32 AntiAliasingDefault, bool AmbientOcclusionDefault);
    bool GetPlayerSeenGraphicsPopUp();
    bool GetPersistentVariable(FString& CustomVariableValue, FString SettingsSection, FString CustomVariableName, FString CustomVariableValueDefault);
    TArray<FString> GetLanguageCodeArray();
    bool GetGameSettings(int32& Difficulty, int32& Language, bool& SubtitlesEnabled, TArray<FString>& Languages, float& FOVSlider, bool& bUsing24HTimeFormat, bool& bVIPCanActivate, bool& bDennisCanActivate, bool& bSharkCanActivate, bool& bBusCanActivate, bool& bElvisCanActivate, bool& bSantasSleighCanActivate, bool& bChristmasHatsCanActivate, bool& bSandstormCanActivate, bool& bWarehouseStealingCanActivate, bool& bPostGameChallengesCanActivate, bool& bJunkyardCustomizationEffects, bool& bJunkyardCustomizationMusic, bool& bCashRegisterSoundActive, int32 DifficultyDefault, int32 LanguageDefault, bool SubtitlesEnabledDefault, float FOVSliderDefault, bool bUsing24HTimeFormatDefault, bool bVIPCanActivateDefault, bool bDennisCanActivateDefault, bool bSharkCanActivateDefault, bool bBusCanActivateDefault, bool bElvisCanActivateDefault, bool bSantasSleighCanActivateDefault, bool bChristmasHatsCanActivateDefault, bool bSandstormCanActivateDefault, bool bWarehouseStealingCanActivateDefault, bool bPostGameChallengesCanActivateDefault, bool bJunkyardCustomizationEffectsDefault, bool bJunkyardCustomizationMusicDefault, bool bCashRegisterSoundActiveDefault);
    bool GetgamepadDefaultSettings(bool& bIsDefaultGamepad, bool IsDefaultGamepad);
    bool GetDisplaySettings(float& Brightness, int32& ActiveMonitor, const float BrightnessDefault, const int32 ActiveMonitorDefault);
    FString GetDefaultInputBindingsVersion();
    TArray<FInputAxisKeyMapping> GetDefaultAxisMappings();
    TArray<FInputActionKeyMapping> GetDefaultActionMappings();
    int32 GetCurrentViewMode(const class APlayerController* PlayerController);
    bool GetControlsSettings(bool& bInvertLookX, bool& bInvertLookY, float& CameraSpeedX, float& CameraSpeedY, bool& bRumble, bool& bToogleSprintMode, bool& ToggleInspectMode, bool bInvertLookXDefault, bool bInvertLookYDefault, float CameraSpeedXDefault, float CameraSpeedYDefault, bool bRumbleDefault, bool bToogleSprintModeDefault, bool bToggleInspectModeDefault);
    FName GetCategoryOfInput(class UDataTable* DefaultAxisMappings, class UDataTable* DefaultActionMappings, FName InputName);
    bool GetAudioSettings(float& MasterAudioVolume, float& MusicAudioVolume, float& SFXAudioVolume, float& VoiceAudioVolume, float& UIAudioVolume, float& AmbientAudioVolume, float MasterAudioVolumeDefault, float MusicAudioVolumeDefault, float SFXAudioVolumeDefault, float VoiceAudioVolumeDefault, float UIAudioVolumeDefault, float AmbientAudioVolumeDefault);
    int32 GetAmountOfMonitors();
    void DRAGO_ResetUnboundInputs(class UDataTable* DefaultKeyboardInputActions, class UDataTable* DefaultGamepadInputActions, class UDataTable* DefaultKeyboardInputAxis, class UDataTable* DefaultGamepadInputAxis, bool bForceRebuildKeymaps);
    void DRAGO_RemoveAxisMapping(const FInputAxisKeyMapping& InKeyMapping, bool bForceRebuildKeymaps);
    FInputAxisKeyMapping DRAGO_GetDefaultAxisKeyMapping(class UDataTable* DefaultAxisMappings, FName InputAction, float AxisScale);
    FInputActionKeyMapping DRAGO_GetDefaultActionKeyMapping(class UDataTable* DefaultActionMappings, FName InputAction);
    bool CheckIfBenchmarkAlreadyRan();
    FString AxisKeyMappingToString(const FInputAxisKeyMapping InputAxisKeyMapping);
    void ApplyPostProcessingSettings(bool MotionBlur, bool LensFlares, bool SSR, bool Bloom, int32 AntiAliasing, bool AmbientOcclusion);
    void ActiveMonitorChanged();
    FString ActionKeyMappingToString(FInputActionKeyMapping InputActionKeyMapping);
}; // Size: 0x28

#endif
