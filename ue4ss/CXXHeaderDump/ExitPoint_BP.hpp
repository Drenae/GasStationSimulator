#ifndef UE4SS_SDK_ExitPoint_BP_HPP
#define UE4SS_SDK_ExitPoint_BP_HPP

class AExitPoint_BP_C : public AAIExitPoint
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0230 (size: 0x8)

    void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_ExitPoint_BP(int32 EntryPoint);
}; // Size: 0x238

#endif
