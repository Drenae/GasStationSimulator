#ifndef UE4SS_SDK_Windmill_withBody_metal_HPP
#define UE4SS_SDK_Windmill_withBody_metal_HPP

class AWindmill_withBody_metal_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class URotatingMovementComponent* RotatingMovement;                               // 0x0228 (size: 0x8)
    class UStaticMeshComponent* windmil_fix_SM_windmill_01_a;                         // 0x0230 (size: 0x8)
    class UAudioComponent* WindmillSound;                                             // 0x0238 (size: 0x8)
    class UStaticMeshComponent* windmil_fix_SM_windmill_01_c;                         // 0x0240 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0248 (size: 0x8)
    float RotateSpeed;                                                                // 0x0250 (size: 0x4)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Windmill_withBody_metal(int32 EntryPoint);
}; // Size: 0x254

#endif
