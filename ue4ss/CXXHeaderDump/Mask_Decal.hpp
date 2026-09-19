#ifndef UE4SS_SDK_Mask_Decal_HPP
#define UE4SS_SDK_Mask_Decal_HPP

class AMask_Decal_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0228 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0230 (size: 0x8)
    class UDecalComponent* Decal1;                                                    // 0x0238 (size: 0x8)
    float CurrentLife;                                                                // 0x0240 (size: 0x4)
    class UMaterialInstanceDynamic* DynamicMaterial;                                  // 0x0248 (size: 0x8)
    float MaxLife;                                                                    // 0x0250 (size: 0x4)

    void ReceiveBeginPlay();
    void TakeDamage(float Damage);
    void ExecuteUbergraph_Mask_Decal(int32 EntryPoint);
}; // Size: 0x254

#endif
