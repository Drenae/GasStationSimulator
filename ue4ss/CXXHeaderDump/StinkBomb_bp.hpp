#ifndef UE4SS_SDK_StinkBomb_bp_HPP
#define UE4SS_SDK_StinkBomb_bp_HPP

class AStinkBomb_bp_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0228 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0230 (size: 0x8)
    class UParticleSystemComponent* StinkyBombVFX;                                    // 0x0238 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0240 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0248 (size: 0x8)
    float SphereSize_SphereRadius_508AA11045F7542D13B634895B111B1D;                   // 0x0250 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> SphereSize__Direction_508AA11045F7542D13B634895B111B1D; // 0x0254 (size: 0x1)
    class UTimelineComponent* SphereSize;                                             // 0x0258 (size: 0x8)

    void SphereSize__FinishedFunc();
    void SphereSize__UpdateFunc();
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ResetPlayerSpeed();
    void Destroy();
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveBeginPlay();
    void ActivateParticles();
    void Destroy2nd();
    void ExecuteUbergraph_StinkBomb_bp(int32 EntryPoint);
}; // Size: 0x260

#endif
