#ifndef UE4SS_SDK_Light_Base_HPP
#define UE4SS_SDK_Light_Base_HPP

class ALight_Base_C : public ASignificanceStaticMeshActorBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    bool Enabled;                                                                     // 0x0268 (size: 0x1)
    FVector Light Position;                                                           // 0x026C (size: 0xC)
    bool Use Default Position;                                                        // 0x0278 (size: 0x1)
    float Max Intensity;                                                              // 0x027C (size: 0x4)
    float Min Intensity;                                                              // 0x0280 (size: 0x4)
    FLinearColor Light Color;                                                         // 0x0284 (size: 0x10)
    float Switch On Time Offset;                                                      // 0x0294 (size: 0x4)
    float Heatup Time;                                                                // 0x0298 (size: 0x4)
    float Switch Off Time Offset;                                                     // 0x029C (size: 0x4)
    bool bIsChangingTemperature;                                                      // 0x02A0 (size: 0x1)
    TEnumAsByte<LightOn_Off::Type> IntensityChangeType;                               // 0x02A1 (size: 0x1)
    float Cooldown Time;                                                              // 0x02A4 (size: 0x4)
    float Temp_Timer Change Intensity;                                                // 0x02A8 (size: 0x4)
    class USoundCue* Light Switch On Sound;                                           // 0x02B0 (size: 0x8)
    class USoundCue* Light Switch Off Sound;                                          // 0x02B8 (size: 0x8)
    class USoundCue* Idle Sound;                                                      // 0x02C0 (size: 0x8)
    class UAudioComponent* Audio Idle Component;                                      // 0x02C8 (size: 0x8)
    class UAudioComponent* Audio TurnOn Component;                                    // 0x02D0 (size: 0x8)
    class UAudioComponent* Audio TurnOff Component;                                   // 0x02D8 (size: 0x8)
    class ULightComponent* Light;                                                     // 0x02E0 (size: 0x8)
    float Temp_Intensity;                                                             // 0x02E8 (size: 0x4)
    float Flicker Min Interval;                                                       // 0x02EC (size: 0x4)
    float Flicker Max Interval;                                                       // 0x02F0 (size: 0x4)
    float Temp_Flicker Interval;                                                      // 0x02F4 (size: 0x4)
    float Temp_Flicker Intensity;                                                     // 0x02F8 (size: 0x4)
    float Temp_Timer Flicker;                                                         // 0x02FC (size: 0x4)
    float Temp_SwitchOnDuration;                                                      // 0x0300 (size: 0x4)
    float Temp_SwitchOffDuration;                                                     // 0x0304 (size: 0x4)
    FName EmissiveScalarParamName;                                                    // 0x0308 (size: 0x8)
    FName EmissiveVectorParamName;                                                    // 0x0310 (size: 0x8)
    float Idle Volume;                                                                // 0x0318 (size: 0x4)
    float HeatUp Percentage;                                                          // 0x031C (size: 0x4)
    float ILS_Emissive;                                                               // 0x0320 (size: 0x4)
    float Temp_Timer Pulse;                                                           // 0x0324 (size: 0x4)
    float Pulse Duration;                                                             // 0x0328 (size: 0x4)
    TEnumAsByte<LightModification::Type> Light Behavior;                              // 0x032C (size: 0x1)
    float Phase Shift;                                                                // 0x0330 (size: 0x4)
    bool Modulate Sound Volume During Pulse;                                          // 0x0334 (size: 0x1)
    float Temp_HeatUpPercent;                                                         // 0x0338 (size: 0x4)
    bool Modulate Sound Volume;                                                       // 0x033C (size: 0x1)
    FTimerHandle TimerHandleOn;                                                       // 0x0340 (size: 0x8)
    FTimerHandle TimerHandleOff;                                                      // 0x0348 (size: 0x8)
    TArray<UMaterialInstanceDynamic*> MIDs;                                           // 0x0350 (size: 0x10)
    float Temp_MaxIntensity;                                                          // 0x0360 (size: 0x4)
    bool Use Day Night Cycle;                                                         // 0x0364 (size: 0x1)
    bool Electrocity;                                                                 // 0x0365 (size: 0x1)
    bool IsOilLamp;                                                                   // 0x0366 (size: 0x1)
    float LampDelay;                                                                  // 0x0368 (size: 0x4)
    bool DuringActivated;                                                             // 0x036C (size: 0x1)
    FTimerHandle CustomFlickerHandle;                                                 // 0x0370 (size: 0x8)

    bool GetElectrocity();
    void InitializeState();
    void RecalculateMaxIntensity();
    void LightsOff();
    void LightsOn();
    void Calculate HeatUp Percentage(float Time, float Duration, float Range);
    void Constructor();
    void Change Emissive Value(float EmissivePercentage);
    void Pulse(float DeltaTime);
    void Setup Sound System();
    void Recalculate Flicker Variables();
    void Flicker(float Delta Time);
    void Play Switch Off Sounds();
    void Play Swich On Sounds();
    void Heatup Lamp(TEnumAsByte<LightOn_Off::Type> ChangeType, float Delta Time);
    void UserConstructionScript();
    void Start Flickering();
    void Stop Flickering();
    void Start Pulse();
    void Stop Pulse();
    void Turn Off();
    void Turn On();
    void ReceiveTick(float DeltaSeconds);
    void EnableElectrocity(const bool On);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void TurnOn Light();
    void GameTimeUpdate();
    void ReceiveBeginPlay();
    void CustomStartFlickering();
    void FlickerStrike();
    void CustomStopFlicker();
    void ExecuteUbergraph_Light_Base(int32 EntryPoint);
}; // Size: 0x378

#endif
