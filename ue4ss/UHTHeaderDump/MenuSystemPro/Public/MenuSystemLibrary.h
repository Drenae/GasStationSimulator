#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputActionKeyMapping -FallbackName=InputActionKeyMapping
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputAxisKeyMapping -FallbackName=InputAxisKeyMapping
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=InputChord -FallbackName=InputChord
#include "MenuSystemLibrary.generated.h"

class APlayerController;
class UDataTable;
class USoundClass;

UCLASS(Blueprintable)
class UMenuSystemLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMenuSystemLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FInputAxisKeyMapping StringToAxisKeyMapping(const FString& AxisKeyMappingString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FInputActionKeyMapping StringToActionKeyMapping(const FString& ActionKeyMappingString);
    
    UFUNCTION(BlueprintCallable)
    static void SetScalabilityOverall(int32 QualityIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool SetPostProcessingSettings(bool MotionBlur, bool LensFlares, bool SSR, bool Bloom, int32 AntiAliasing, bool AmbientOcclusion);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayerSeenGraphicsPopUp(bool bSawGraphicsChangePopup);
    
    UFUNCTION(BlueprintCallable)
    static bool SetPersistentVariable(const FString& SettingsSection, const FString& CustomVariableName, const FString& CustomVariableValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetLanguageCodeArray(TArray<FString> InLanguageCodeArray);
    
    UFUNCTION(BlueprintCallable)
    static bool SetGameSettings(const int32 Difficulty, const int32 Language, const bool SubtitlesEnabled, const float FOVSlider, const bool bUsing24HTimeFormat, const bool bVIPCanActivate, const bool bDennisCanActivate, const bool bSharkCanActivate, const bool bBusCanActivate, const bool bElvisCanActivate, const bool bSantasSleighCanActivate, const bool bChristmasHatsCanActivate, const bool bSandstormCanActivate, const bool bWarehouseStealingCanActivate, const bool bPostGameChallengesCanActivate, const bool bJunkyardCustomizationEffects, const bool bJunkyardCustomizationMusic, const bool bCashRegisterSoundActive);
    
    UFUNCTION(BlueprintCallable)
    static bool SetDisplaySettings(float Brightness, int32 ActiveMonitor);
    
    UFUNCTION(BlueprintCallable)
    static void SetDefaultInputBindingsVersion(const FString& DefaultInputBindingsVersion);
    
    UFUNCTION(BlueprintCallable)
    static bool SetDefaultgamepadSettings(const bool bIsDefaultGamepad);
    
    UFUNCTION(BlueprintCallable)
    static bool SetDefaultAxisMappings(TArray<FInputAxisKeyMapping> AxisKeyMappings);
    
    UFUNCTION(BlueprintCallable)
    static bool SetDefaultActionMappings(TArray<FInputActionKeyMapping> ActionKeyMappings);
    
    UFUNCTION(BlueprintCallable)
    static bool SetControlsSettings(const bool bInvertLookX, const bool bInvertLookY, const float CameraSpeedX, const float CameraSpeedY, const bool bRumble, const bool bToogleSprintMode, const bool bToggleInspectMode);
    
    UFUNCTION(BlueprintCallable)
    static void SetBenchmarkAlreadyRan(bool BenchmarkAlreadyRan);
    
    UFUNCTION(BlueprintCallable)
    static bool SetAudioSettings(const float MasterAudioVolume, const float MusicAudioVolume, const float SFXAudioVolume, const float VoiceAudioVolume, const float UIAudioVolume, const float AmbientAudioVolume, USoundClass* MasterSoundClass, USoundClass* MusicSoundClass, USoundClass* SFXSoundClass, USoundClass* VoiceSoundClass, USoundClass* UISoundClass, USoundClass* AmbientSoundClass);
    
    UFUNCTION(BlueprintCallable)
    static void ResetInputFile();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetDefaultControl(bool isGamepadDefault);
    
    UFUNCTION(BlueprintCallable)
    static bool IsKeyAlreadyBound(FInputChord InputChord, FName CategoryOfButtonWeCheck, UDataTable* DefaultAxisBinds, UDataTable* DefaultActionBinds, FInputActionKeyMapping& OldInputAction, FInputAxisKeyMapping& OldInputAxis);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetVRAM(float& UsedVRAM, float& TotalVRAM);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetSupportedScreenResolutions(TArray<FString>& Resolutions, int32& CurrentScreenResolutionIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetScreenResolution();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetScalabilityOverall(int32& QualityIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetProjectVersion();
    
    UFUNCTION(BlueprintCallable)
    static bool GetPostProcessingSettings(bool& MotionBlur, bool& LensFlares, bool& SSR, bool& Bloom, int32& AntiAliasing, bool& AmbientOcclusion, bool MotionBlurDefault, bool LensFlaresDefault, bool SSRDefault, bool BloomDefault, int32 AntiAliasingDefault, bool AmbientOcclusionDefault);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetPlayerSeenGraphicsPopUp();
    
    UFUNCTION(BlueprintCallable)
    static bool GetPersistentVariable(FString& CustomVariableValue, const FString& SettingsSection, const FString& CustomVariableName, const FString& CustomVariableValueDefault);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> GetLanguageCodeArray();
    
    UFUNCTION(BlueprintCallable)
    static bool GetGameSettings(int32& Difficulty, int32& Language, bool& SubtitlesEnabled, TArray<FString>& Languages, float& FOVSlider, bool& bUsing24HTimeFormat, bool& bVIPCanActivate, bool& bDennisCanActivate, bool& bSharkCanActivate, bool& bBusCanActivate, bool& bElvisCanActivate, bool& bSantasSleighCanActivate, bool& bChristmasHatsCanActivate, bool& bSandstormCanActivate, bool& bWarehouseStealingCanActivate, bool& bPostGameChallengesCanActivate, bool& bJunkyardCustomizationEffects, bool& bJunkyardCustomizationMusic, bool& bCashRegisterSoundActive, int32 DifficultyDefault, int32 LanguageDefault, bool SubtitlesEnabledDefault, float FOVSliderDefault, bool bUsing24HTimeFormatDefault, bool bVIPCanActivateDefault, bool bDennisCanActivateDefault, bool bSharkCanActivateDefault, bool bBusCanActivateDefault, bool bElvisCanActivateDefault, bool bSantasSleighCanActivateDefault, bool bChristmasHatsCanActivateDefault, bool bSandstormCanActivateDefault, bool bWarehouseStealingCanActivateDefault, bool bPostGameChallengesCanActivateDefault, bool bJunkyardCustomizationEffectsDefault, bool bJunkyardCustomizationMusicDefault, bool bCashRegisterSoundActiveDefault);
    
    UFUNCTION(BlueprintCallable)
    static bool GetgamepadDefaultSettings(bool& bIsDefaultGamepad, bool IsDefaultGamepad);
    
    UFUNCTION(BlueprintCallable)
    static bool GetDisplaySettings(float& Brightness, int32& ActiveMonitor, const float BrightnessDefault, const int32 ActiveMonitorDefault);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetDefaultInputBindingsVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FInputAxisKeyMapping> GetDefaultAxisMappings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FInputActionKeyMapping> GetDefaultActionMappings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCurrentViewMode(const APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    static bool GetControlsSettings(bool& bInvertLookX, bool& bInvertLookY, float& CameraSpeedX, float& CameraSpeedY, bool& bRumble, bool& bToogleSprintMode, bool& ToggleInspectMode, bool bInvertLookXDefault, bool bInvertLookYDefault, float CameraSpeedXDefault, float CameraSpeedYDefault, bool bRumbleDefault, bool bToogleSprintModeDefault, bool bToggleInspectModeDefault);
    
    UFUNCTION(BlueprintCallable)
    static FName GetCategoryOfInput(UDataTable* DefaultAxisMappings, UDataTable* DefaultActionMappings, FName InputName);
    
    UFUNCTION(BlueprintCallable)
    static bool GetAudioSettings(float& MasterAudioVolume, float& MusicAudioVolume, float& SFXAudioVolume, float& VoiceAudioVolume, float& UIAudioVolume, float& AmbientAudioVolume, float MasterAudioVolumeDefault, float MusicAudioVolumeDefault, float SFXAudioVolumeDefault, float VoiceAudioVolumeDefault, float UIAudioVolumeDefault, float AmbientAudioVolumeDefault);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAmountOfMonitors();
    
    UFUNCTION(BlueprintCallable)
    static void DRAGO_ResetUnboundInputs(UDataTable* DefaultKeyboardInputActions, UDataTable* DefaultGamepadInputActions, UDataTable* DefaultKeyboardInputAxis, UDataTable* DefaultGamepadInputAxis, bool bForceRebuildKeymaps);
    
    UFUNCTION(BlueprintCallable)
    static void DRAGO_RemoveAxisMapping(const FInputAxisKeyMapping& InKeyMapping, bool bForceRebuildKeymaps);
    
    UFUNCTION(BlueprintCallable)
    static FInputAxisKeyMapping DRAGO_GetDefaultAxisKeyMapping(UDataTable* DefaultAxisMappings, FName InputAction, float AxisScale);
    
    UFUNCTION(BlueprintCallable)
    static FInputActionKeyMapping DRAGO_GetDefaultActionKeyMapping(UDataTable* DefaultActionMappings, FName InputAction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckIfBenchmarkAlreadyRan();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString AxisKeyMappingToString(const FInputAxisKeyMapping InputAxisKeyMapping);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyPostProcessingSettings(bool MotionBlur, bool LensFlares, bool SSR, bool Bloom, int32 AntiAliasing, bool AmbientOcclusion);
    
    UFUNCTION(BlueprintCallable)
    static void ActiveMonitorChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ActionKeyMappingToString(FInputActionKeyMapping InputActionKeyMapping);
    
};

