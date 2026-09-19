#ifndef UE4SS_SDK_SandstormSpawner_BP_HPP
#define UE4SS_SDK_SandstormSpawner_BP_HPP

class ASandstormSpawner_BP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0228 (size: 0x8)
    float Duration;                                                                   // 0x0230 (size: 0x4)
    float ObjStartOffset;                                                             // 0x0234 (size: 0x4)
    class ASandstormPath_C* SandstormPath;                                            // 0x0238 (size: 0x8)
    bool ThunderEnable;                                                               // 0x0240 (size: 0x1)
    float ThunderDelay;                                                               // 0x0244 (size: 0x4)
    float SandStormSimulationSpeed;                                                   // 0x0248 (size: 0x4)
    float SpawnDensity;                                                               // 0x024C (size: 0x4)
    float RadialVelocity;                                                             // 0x0250 (size: 0x4)
    float DustSize;                                                                   // 0x0254 (size: 0x4)
    class AP_Sandstorm_BP_C* P_Sandstorm;                                             // 0x0258 (size: 0x8)
    bool ActiveSplineMovement;                                                        // 0x0260 (size: 0x1)
    float PP Scale;                                                                   // 0x0264 (size: 0x4)
    class USoundMix* FadeSoundtrack;                                                  // 0x0268 (size: 0x8)

    void ReceiveBeginPlay();
    void EnableSandstorm(bool Enable);
    void ReceiveDestroyed();
    void ExecuteUbergraph_SandstormSpawner_BP(int32 EntryPoint);
}; // Size: 0x270

#endif
