#ifndef UE4SS_SDK_DennisPuppet_BP_HPP
#define UE4SS_SDK_DennisPuppet_BP_HPP

class ADennisPuppet_BP_C : public ADennisPuppet
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    class USplineComponent* VacuumSpline;                                             // 0x0278 (size: 0x8)
    class UAudioComponent* DennisLaughter_CueLoop;                                    // 0x0280 (size: 0x8)
    class UAudioComponent* DennisMoveLoop;                                            // 0x0288 (size: 0x8)
    class UAudioComponent* AudioVacuumLoop;                                           // 0x0290 (size: 0x8)
    class USpotLightComponent* SpotLightRED;                                          // 0x0298 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* SM_SirenLight;                                        // 0x02A8 (size: 0x8)
    class UBoxComponent* DennisTraceBox;                                              // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* DennisParent;                                         // 0x02C0 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x02C8 (size: 0x8)
    class UNiagaraComponent* NS_Vacuum;                                               // 0x02D0 (size: 0x8)
    class UStaticMeshComponent* End;                                                  // 0x02D8 (size: 0x8)
    class UStaticMeshComponent* Start;                                                // 0x02E0 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x02E8 (size: 0x8)
    float RedLight_NewTrack_0_AE33B37644E5DA39AE929286641C95C7;                       // 0x02F0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> RedLight__Direction_AE33B37644E5DA39AE929286641C95C7; // 0x02F4 (size: 0x1)
    class UTimelineComponent* RedLight;                                               // 0x02F8 (size: 0x8)
    float ReverseTimeline_Value_59514CB146BB044400555EA1FB6D3797;                     // 0x0300 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ReverseTimeline__Direction_59514CB146BB044400555EA1FB6D3797; // 0x0304 (size: 0x1)
    class UTimelineComponent* ReverseTimeline;                                        // 0x0308 (size: 0x8)
    float VacuumTimeline_Value_C07CFA5D42C856DD3BF202BE5CD4D3AC;                      // 0x0310 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> VacuumTimeline__Direction_C07CFA5D42C856DD3BF202BE5CD4D3AC; // 0x0314 (size: 0x1)
    class UTimelineComponent* VacuumTimeline;                                         // 0x0318 (size: 0x8)
    float SpawnTimeline_Value_279AC71B4A57F585A41870B453778029;                       // 0x0320 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> SpawnTimeline__Direction_279AC71B4A57F585A41870B453778029; // 0x0324 (size: 0x1)
    class UTimelineComponent* SpawnTimeline;                                          // 0x0328 (size: 0x8)
    float CurrentDistanceAlongSpline;                                                 // 0x0330 (size: 0x4)
    float MovementDirectionSign;                                                      // 0x0334 (size: 0x4)
    float TargetDistanceOnSpline;                                                     // 0x0338 (size: 0x4)
    float DistanceCompareErrorTolerance;                                              // 0x033C (size: 0x4)
    float PlayerLookTraceLength;                                                      // 0x0340 (size: 0x4)
    float SectionLenghtCoef;                                                          // 0x0344 (size: 0x4)
    float Section Lenght;                                                             // 0x0348 (size: 0x4)
    class UStaticMesh* SplineMesh;                                                    // 0x0350 (size: 0x8)
    class USplineMeshComponent* Spline Mesh Comp;                                     // 0x0358 (size: 0x8)
    FVector2D MeshScale;                                                              // 0x0360 (size: 0x8)
    TEnumAsByte<ECollisionEnabled::Type> Collision;                                   // 0x0368 (size: 0x1)
    float Cull Distance;                                                              // 0x036C (size: 0x4)
    bool CastShadow?;                                                                 // 0x0370 (size: 0x1)
    int32 Curent Index;                                                               // 0x0374 (size: 0x4)
    float DennisSpawnDuration;                                                        // 0x0378 (size: 0x4)
    float VacuumDuration;                                                             // 0x037C (size: 0x4)
    float VacuumPullCooldown;                                                         // 0x0380 (size: 0x4)
    float LastSwingingLerpValue;                                                      // 0x0384 (size: 0x4)
    float SwingingLerpValue;                                                          // 0x0388 (size: 0x4)
    bool SwingingLerpRight;                                                           // 0x038C (size: 0x1)
    class UMaterialInstanceDynamic* SirenDMI;                                         // 0x0390 (size: 0x8)
    bool bSwinging;                                                                   // 0x0398 (size: 0x1)
    FVector VacuumOffset;                                                             // 0x039C (size: 0xC)

    void HandleDennisVisibility();
    void StopDennisAfterTime();
    void OnMovieStateChanges();
    float GetMaxSplineDistance();
    void StopDennis();
    void StartDennis();
    void HideDennisMesh();
    void ShowDennisMesh();
    void OnDennisSteal(class APopcornBox_BP_C* Popcorn);
    void UserConstructionScript();
    void VacuumTimeline__FinishedFunc();
    void VacuumTimeline__UpdateFunc();
    void ReverseTimeline__FinishedFunc();
    void ReverseTimeline__UpdateFunc();
    void SpawnTimeline__FinishedFunc();
    void SpawnTimeline__UpdateFunc();
    void RedLight__FinishedFunc();
    void RedLight__UpdateFunc();
    void StartVacuuming(bool bFromStart);
    void ReverseVacuum(bool bFromStart);
    void StopVacuuming();
    void DebugVacuum();
    void ReceiveTick(float DeltaSeconds);
    void RegisterInManager();
    void ReceiveBeginPlay();
    void PlaySpawnAnimation(bool bSpawn);
    void OnGameLoaded(bool bGameLoaded);
    void OnNewStuffUnlocked(FUnlockableGameplayStuffState NewUnlockableGameplayStuffState);
    void ReceiveDestroyed();
    void DennisHit();
    void ExecuteUbergraph_DennisPuppet_BP(int32 EntryPoint);
}; // Size: 0x3A8

#endif
