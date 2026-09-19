#ifndef UE4SS_SDK_PlayerHeadWaterDetector_HPP
#define UE4SS_SDK_PlayerHeadWaterDetector_HPP

class APlayerHeadWaterDetector_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UAudioComponent* SFX_AMB_Underwater_Cue;                                    // 0x0228 (size: 0x8)
    class USphereComponent* PlayerHeadCollision;                                      // 0x0230 (size: 0x8)
    class UOceanPhysics_C* OceanPhysics;                                              // 0x0238 (size: 0x8)
    class UAudioComponent* UnderwaterAmbient;                                         // 0x0240 (size: 0x8)

    void ReceiveBeginPlay();
    void OnWaterEnter();
    void OnWaterExit();
    void ReceiveDestroyed();
    void ExecuteUbergraph_PlayerHeadWaterDetector(int32 EntryPoint);
}; // Size: 0x248

#endif
