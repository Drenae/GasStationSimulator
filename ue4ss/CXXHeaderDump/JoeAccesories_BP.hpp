#ifndef UE4SS_SDK_JoeAccesories_BP_HPP
#define UE4SS_SDK_JoeAccesories_BP_HPP

class AJoeAccesories_BP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UParticleSystemComponent* AccessorieParticle;                               // 0x0228 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh1;                                      // 0x0230 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    float LifeTime;                                                                   // 0x0248 (size: 0x4)
    class UMaterialInstanceDynamic* DynamicMaterialInstance;                          // 0x0250 (size: 0x8)

    void Destroy();
    void DestroySelf();
    void ExecuteUbergraph_JoeAccesories_BP(int32 EntryPoint);
}; // Size: 0x258

#endif
