#ifndef UE4SS_SDK_MinigolfBounds_BP_HPP
#define UE4SS_SDK_MinigolfBounds_BP_HPP

class AMinigolfBounds_BP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)

    void BndEvt__MinigolfBounds_BP_Box_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_MinigolfBounds_BP(int32 EntryPoint);
}; // Size: 0x238

#endif
