#ifndef UE4SS_SDK_WaterMovementComponent_BP_HPP
#define UE4SS_SDK_WaterMovementComponent_BP_HPP

class UWaterMovementComponent_BP_C : public UWaterMovementComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E8 (size: 0x8)
    bool Tick;                                                                        // 0x03F0 (size: 0x1)
    bool Stopped;                                                                     // 0x03F1 (size: 0x1)
    bool StartedSlowingDown;                                                          // 0x03F2 (size: 0x1)
    bool IsEngineLoopPlaying;                                                         // 0x03F3 (size: 0x1)
    float RotateDegreeToAvoidObstacle;                                                // 0x03F4 (size: 0x4)
    FRotator StartingStoppedRotation;                                                 // 0x03F8 (size: 0xC)
    FRotator DesiredStoppedRotation;                                                  // 0x0404 (size: 0xC)
    FVector StartingStoppedLocation;                                                  // 0x0410 (size: 0xC)
    FVector DesiredStoppedLocation;                                                   // 0x041C (size: 0xC)
    bool IsLerpingToDestination;                                                      // 0x0428 (size: 0x1)
    float LerpDuration;                                                               // 0x042C (size: 0x4)
    float LerpProgress;                                                               // 0x0430 (size: 0x4)
    class AActor* ClosestHomeTargetPoint;                                             // 0x0438 (size: 0x8)
    int32 ClosestHomeTargetPointIndex;                                                // 0x0440 (size: 0x4)
    float TimeSinceLastTarget;                                                        // 0x0444 (size: 0x4)
    float TotalTimeUntilTurnBoost;                                                    // 0x0448 (size: 0x4)
    float CurrentTurnSpeed;                                                           // 0x044C (size: 0x4)
    float CurrentMoveSpeedMultiplier;                                                 // 0x0450 (size: 0x4)
    float DestinationSlowCurveExp;                                                    // 0x0454 (size: 0x4)
    float CurrentTurnSpeedMultiplier;                                                 // 0x0458 (size: 0x4)
    class USoundBase* EngineLoop;                                                     // 0x0460 (size: 0x8)
    class UAudioComponent* EngineLoopAudioRef;                                        // 0x0468 (size: 0x8)
    class USoundBase* EngineStop;                                                     // 0x0470 (size: 0x8)
    class USoundBase* EngineStart;                                                    // 0x0478 (size: 0x8)
    class UAudioComponent* EngineStartAudioRef;                                       // 0x0480 (size: 0x8)

    void GetAdjustedDestinationLocation(class AActor* TargetActor, int32 PathIndex, FVector& AdjustedLocation);
    void ManualLerpToDestination(float DeltaTime);
    void ClampHeight(FVector Location, FVector& ClampedLocation);
    void ClampRotation(float RotationX, float RotationY, float RotationZ, float& ClampedRotationX, float& ClampedRotationY, float& ClampedRotationZ);
    void HandleMontageRM();
    void RootMotionExtraction();
    bool isOwnerDestroyed();
    void GetCurrentTargetPoint(class AWaterMovementPoint*& AsWater Movement Point);
    void CheckIfNextPointIsFree(bool& bisFree);
    void HandleTargetPoint(bool& IsPointReserved);
    void FreeTargetPoint();
    void Reserve Target Point(class UObject* MovementPointRef);
    void SetLerpValues(FRotator DesiredRotation, FVector DesiredLocation);
    void Handle Reverse Target Location();
    void Destroy Owning Actor();
    void HandleHomePath();
    void WaterMoveToLocation();
    void HandleTargetLocation();
    void OnNotifyEnd_453AE84144A1E700D09AE99AB0FAB0B4(FName NotifyName);
    void OnNotifyBegin_453AE84144A1E700D09AE99AB0FAB0B4(FName NotifyName);
    void OnInterrupted_453AE84144A1E700D09AE99AB0FAB0B4(FName NotifyName);
    void OnBlendOut_453AE84144A1E700D09AE99AB0FAB0B4(FName NotifyName);
    void OnCompleted_453AE84144A1E700D09AE99AB0FAB0B4(FName NotifyName);
    void OnLoaded_BE655AAD4CA3C043325A6DA19B470BA7(class UObject* Loaded);
    void OnLoaded_29D25A66401D9B18E46927B973D10449(class UObject* Loaded);
    void OnNotifyEnd_C3C4E0484E2F4390E2C597A337F0D12F(FName NotifyName);
    void OnNotifyBegin_C3C4E0484E2F4390E2C597A337F0D12F(FName NotifyName);
    void OnInterrupted_C3C4E0484E2F4390E2C597A337F0D12F(FName NotifyName);
    void OnBlendOut_C3C4E0484E2F4390E2C597A337F0D12F(FName NotifyName);
    void OnCompleted_C3C4E0484E2F4390E2C597A337F0D12F(FName NotifyName);
    void OnLoaded_792A7E7348AA1466F27C9DB50E2AA712(class UObject* Loaded);
    void OnNotifyEnd_F0D1CBD2480EEFBA8E7D6D9183591B2D(FName NotifyName);
    void OnNotifyBegin_F0D1CBD2480EEFBA8E7D6D9183591B2D(FName NotifyName);
    void OnInterrupted_F0D1CBD2480EEFBA8E7D6D9183591B2D(FName NotifyName);
    void OnBlendOut_F0D1CBD2480EEFBA8E7D6D9183591B2D(FName NotifyName);
    void OnCompleted_F0D1CBD2480EEFBA8E7D6D9183591B2D(FName NotifyName);
    void OnLoaded_65D49545483C1E9DD6372C9A77835892(class UObject* Loaded);
    void OnNotifyEnd_5D667E4B4D6ABED4C3A54A83AA54AF93(FName NotifyName);
    void OnNotifyBegin_5D667E4B4D6ABED4C3A54A83AA54AF93(FName NotifyName);
    void OnInterrupted_5D667E4B4D6ABED4C3A54A83AA54AF93(FName NotifyName);
    void OnBlendOut_5D667E4B4D6ABED4C3A54A83AA54AF93(FName NotifyName);
    void OnCompleted_5D667E4B4D6ABED4C3A54A83AA54AF93(FName NotifyName);
    void OnLoaded_ED3D33AB44CD6301F484C680CC265B60(class UObject* Loaded);
    void OnNotifyEnd_105316CF498EACDAA697B1A54EA26114(FName NotifyName);
    void OnNotifyBegin_105316CF498EACDAA697B1A54EA26114(FName NotifyName);
    void OnInterrupted_105316CF498EACDAA697B1A54EA26114(FName NotifyName);
    void OnBlendOut_105316CF498EACDAA697B1A54EA26114(FName NotifyName);
    void OnCompleted_105316CF498EACDAA697B1A54EA26114(FName NotifyName);
    void OnLoaded_B4456BD64F759B21A429ADB26A30E4A3(class UObject* Loaded);
    void OnNotifyEnd_CB284AB242F7278BFC17A68F6A1F49B9(FName NotifyName);
    void OnNotifyBegin_CB284AB242F7278BFC17A68F6A1F49B9(FName NotifyName);
    void OnInterrupted_CB284AB242F7278BFC17A68F6A1F49B9(FName NotifyName);
    void OnBlendOut_CB284AB242F7278BFC17A68F6A1F49B9(FName NotifyName);
    void OnCompleted_CB284AB242F7278BFC17A68F6A1F49B9(FName NotifyName);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void InitializeMovement(bool IsLoadedFromSave, bool IsGoingHome, int32 CurrentWaterMovementPointIndex);
    void PlayHomeMontage();
    void PlayStoppingAnimation();
    void StartGoingReverese();
    void GoHome(bool IsLoadedFromSave, int32 CurrentWaterMovementPointIndex);
    void GoHomeEvent();
    void ResumeMovement();
    void OnWaterPointFreed_Event_0(class AWaterMovementPoint* WaterMovementPoint);
    void OnWaterPointReserved_Event_0(class AWaterVehicle* WaterVehicle, class AWaterMovementPoint* WaterMovementPoint);
    void ReachedDestination();
    void StartEngine();
    void StopEngine();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ForceEngineStop();
    void ExecuteUbergraph_WaterMovementComponent_BP(int32 EntryPoint);
}; // Size: 0x488

#endif
