#ifndef UE4SS_SDK_00_Vehicle_HPP
#define UE4SS_SDK_00_Vehicle_HPP

class A00_Vehicle_C : public AGSSWheeledVehicle
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0558 (size: 0x8)
    class UGSBoxComponent* VehicleOverlapComponent;                                   // 0x0560 (size: 0x8)
    class UGSBoxComponent* GSBox;                                                     // 0x0568 (size: 0x8)
    class USpotLightComponent* SpotLight1;                                            // 0x0570 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x0578 (size: 0x8)
    class UAudioComponent* EngineSound;                                               // 0x0580 (size: 0x8)
    bool DebugInfo;                                                                   // 0x0588 (size: 0x1)
    class UMaterialInstanceDynamic* DynamicMaterial;                                  // 0x0590 (size: 0x8)
    FTimerHandle AlarmTime;                                                           // 0x0598 (size: 0x8)
    bool KlaksonTime;                                                                 // 0x05A0 (size: 0x1)
    bool LightEnabled;                                                                // 0x05A1 (size: 0x1)
    EVehicleOptymalizeType CurSetup;                                                  // 0x05A2 (size: 0x1)
    FTimerHandle TimerCheckingFlying;                                                 // 0x05A8 (size: 0x8)
    bool Looping;                                                                     // 0x05B0 (size: 0x1)
    FTimerHandle Timer;                                                               // 0x05B8 (size: 0x8)
    class UAudioComponent* CarAlarmSound;                                             // 0x05C0 (size: 0x8)
    class USoundBase* EngineStopSoundCue;                                             // 0x05C8 (size: 0x8)
    class USoundBase* EngineStartSoundCue;                                            // 0x05D0 (size: 0x8)

    bool IsPartyBusStop();
    bool IsRepaintTruck();
    bool IsTouristBus();
    bool IsProductsDeliveryTruck();
    bool IsPartsDeliveryTruck();
    bool IsGarbageTruck();
    bool IsFuelDeliveryTruck();
    void SetupCarColors(FLinearColor OverrideLinearColor, bool bOverrideColor, float BareMetal_BrightnessOverride);
    bool IsRepairQuest();
    void OnNotifyEnd_4D901602407506654D0A6AA7099E3A8C(FName NotifyName);
    void OnNotifyBegin_4D901602407506654D0A6AA7099E3A8C(FName NotifyName);
    void OnInterrupted_4D901602407506654D0A6AA7099E3A8C(FName NotifyName);
    void OnBlendOut_4D901602407506654D0A6AA7099E3A8C(FName NotifyName);
    void OnCompleted_4D901602407506654D0A6AA7099E3A8C(FName NotifyName);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ALARM();
    void FindAndGeneratePath();
    void StopDriving(class AAICharacterBase* CurrentDriver);
    void StartDriving(class AAICharacterBase* CurrentDriver, class APathPoint* NewStartPathPoint);
    void VehicleStartSetup(const EVehicleOptymalizeType NewSetup);
    void VehicleAlarm(bool bEnabled);
    void CarHorn();
    void EnableLamps(const bool Enable);
    void VehicleInteractMode(bool bEnable);
    void OnTimePassed();
    void SpawnMarkerPoint();
    void EnableOverlaps(const bool Enable);
    void StopDrivingNoExit(class AAICharacterBase* CurrentDriver);
    void StopVehicle();
    void ExitVehicle(class AAICharacterBase* CurrentDriver);
    void ToggleNavComponent(bool bEnable);
    void ExecuteUbergraph_00_Vehicle(int32 EntryPoint);
}; // Size: 0x5D8

#endif
