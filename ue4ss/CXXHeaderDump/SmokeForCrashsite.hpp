#ifndef UE4SS_SDK_SmokeForCrashsite_HPP
#define UE4SS_SDK_SmokeForCrashsite_HPP

class ASmokeForCrashsite_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UNiagaraComponent* NS_SmokeCrashsite;                                       // 0x0228 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    float Radius;                                                                     // 0x0240 (size: 0x4)

    void CanReactToOverlap(class APawn* OverlappedPawn, bool& CanOverlap);
    void UserConstructionScript();
    void BndEvt__SmokeForCrashsite_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__SmokeForCrashsite_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_SmokeForCrashsite(int32 EntryPoint);
}; // Size: 0x244

#endif
