#ifndef UE4SS_SDK_SlowArea_HPP
#define UE4SS_SDK_SlowArea_HPP

class ASlowArea_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0228 (size: 0x8)
    float MaxSpeed;                                                                   // 0x0230 (size: 0x4)

    void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_SlowArea(int32 EntryPoint);
}; // Size: 0x234

#endif
