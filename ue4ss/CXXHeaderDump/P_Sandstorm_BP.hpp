#ifndef UE4SS_SDK_P_Sandstorm_BP_HPP
#define UE4SS_SDK_P_Sandstorm_BP_HPP

class AP_Sandstorm_BP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* FogSheetPlane;                                        // 0x0228 (size: 0x8)
    class UArrowComponent* Arrow4;                                                    // 0x0230 (size: 0x8)
    class UPostProcessComponent* PostProcess;                                         // 0x0238 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0240 (size: 0x8)
    class UStaticMeshComponent* DebugCube;                                            // 0x0248 (size: 0x8)
    class UArrowComponent* Arrow3;                                                    // 0x0250 (size: 0x8)
    class UArrowComponent* Arrow2;                                                    // 0x0258 (size: 0x8)
    class UArrowComponent* Arrow1;                                                    // 0x0260 (size: 0x8)
    class UArrowComponent* arrow;                                                     // 0x0268 (size: 0x8)
    class UParticleSystemComponent* SandstormVFX;                                     // 0x0270 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0278 (size: 0x8)
    float ObjMover_Alpha_A9AA2F4B49DCFFE49E1BCB865FAEE6AD;                            // 0x0280 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ObjMover__Direction_A9AA2F4B49DCFFE49E1BCB865FAEE6AD; // 0x0284 (size: 0x1)
    class UTimelineComponent* ObjMover;                                               // 0x0288 (size: 0x8)
    bool ActivateSplineMovement;                                                      // 0x0290 (size: 0x1)
    float alpha;                                                                      // 0x0294 (size: 0x4)
    float Duration;                                                                   // 0x0298 (size: 0x4)
    float ObjStartOffset;                                                             // 0x029C (size: 0x4)
    class ASandstormPath_C* SandstormPathRef;                                         // 0x02A0 (size: 0x8)
    bool ThunderEnable;                                                               // 0x02A8 (size: 0x1)
    float ThunderDelay;                                                               // 0x02AC (size: 0x4)
    float SandStormSimulationSpeed;                                                   // 0x02B0 (size: 0x4)
    float SpawnDensity;                                                               // 0x02B4 (size: 0x4)
    float PP_Scale;                                                                   // 0x02B8 (size: 0x4)
    bool PP_Debug_Scale;                                                              // 0x02BC (size: 0x1)
    class UParticleSystemComponent* ThundersRef;                                      // 0x02C0 (size: 0x8)
    bool IsPlayerInside?;                                                             // 0x02C8 (size: 0x1)
    TArray<FParticleSysParam> params;                                                 // 0x02D0 (size: 0x10)
    float RadialVelocity;                                                             // 0x02E0 (size: 0x4)
    float DustSize;                                                                   // 0x02E4 (size: 0x4)
    class UParticleSystem* ThunderVFXRef;                                             // 0x02E8 (size: 0x8)
    float Scale_XY_FogSheet;                                                          // 0x02F0 (size: 0x4)
    float Scale_Z_FogSheet;                                                           // 0x02F4 (size: 0x4)
    FRotator Fog Plane Rotation;                                                      // 0x02F8 (size: 0xC)
    float Move Z;                                                                     // 0x0304 (size: 0x4)
    float NewVar_1;                                                                   // 0x0308 (size: 0x4)
    class UAudioComponent* SandstormSoundAttachedToVFX;                               // 0x0310 (size: 0x8)
    TArray<ARuinSpawner*> Ruins Spawner;                                              // 0x0318 (size: 0x10)

    void SelectSandPiles();
    void FogSheetComponent();
    void Add PostProcess(bool& NewParam);
    void UserConstructionScript();
    void ObjMover__FinishedFunc();
    void ObjMover__UpdateFunc();
    void ReceiveBeginPlay();
    void StormEvent();
    void MoveObj();
    void ExecuteUbergraph_P_Sandstorm_BP(int32 EntryPoint);
}; // Size: 0x328

#endif
