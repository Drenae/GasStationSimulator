#ifndef UE4SS_SDK_BP_PressureWasher_HPP
#define UE4SS_SDK_BP_PressureWasher_HPP

class ABP_PressureWasher_C : public APressureWasher
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class UAudioComponent* Object_PutBack_Cue;                                        // 0x0318 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0320 (size: 0x8)
    class UAudioComponent* SFX_DLC_JY_Grinder_Stop_Cue;                               // 0x0328 (size: 0x8)
    class UAudioComponent* SFX_DLC_JY_Grinder_Start_Cue;                              // 0x0330 (size: 0x8)
    class UAudioComponent* SFX_DLC_JY_Grinder_Loop_Metal_Cue;                         // 0x0338 (size: 0x8)
    class UAudioComponent* SFX_DLC_JY_Grinder_Loop_Default_Cue;                       // 0x0340 (size: 0x8)
    float Spread;                                                                     // 0x0348 (size: 0x4)
    TArray<FParticleSysParam> params;                                                 // 0x0350 (size: 0x10)
    float BeamSpreadMax;                                                              // 0x0360 (size: 0x4)
    float BeamSpreadMin;                                                              // 0x0364 (size: 0x4)
    float DropSpreadMax;                                                              // 0x0368 (size: 0x4)
    float DropSpreadMin;                                                              // 0x036C (size: 0x4)
    float SteamSpreadMax;                                                             // 0x0370 (size: 0x4)
    float SteamSpreadMin;                                                             // 0x0374 (size: 0x4)
    float LogicSpreadMax;                                                             // 0x0378 (size: 0x4)
    float LogicSpreadMin;                                                             // 0x037C (size: 0x4)
    float LogicDensity;                                                               // 0x0380 (size: 0x4)
    float BeamSize;                                                                   // 0x0384 (size: 0x4)
    float DropsSize;                                                                  // 0x0388 (size: 0x4)
    float CloudSize;                                                                  // 0x038C (size: 0x4)
    class UParticleSystemComponent* CarwashVFXflex;                                   // 0x0390 (size: 0x8)
    class UWBP_Grinder_C* OverlayREF;                                                 // 0x0398 (size: 0x8)
    class UMaterialInstanceDynamic* GrinderDynamicMat;                                // 0x03A0 (size: 0x8)

    void SpreadSetup(float NewSpread);
    void fakepickup(class APawn* Interactor);
    void fakedestroy();
    void ReceiveBeginPlay();
    void OnPickedUp();
    void OnDropped();
    void ReceiveDestroyed();
    void StartWashing();
    void StartGrindingCar();
    void StopWashing();
    void StopGrindingCar();
    void OnPutDown();
    void ExecuteUbergraph_BP_PressureWasher(int32 EntryPoint);
}; // Size: 0x3A8

#endif
