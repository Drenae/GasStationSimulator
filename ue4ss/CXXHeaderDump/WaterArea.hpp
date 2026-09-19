#ifndef UE4SS_SDK_WaterArea_HPP
#define UE4SS_SDK_WaterArea_HPP

class AWaterArea_C : public APlayerArea
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0228 (size: 0x8)
    bool ReadyToPlaySound;                                                            // 0x0230 (size: 0x1)
    FTimerHandle ReadyToPlaySoundTimer;                                               // 0x0238 (size: 0x8)

    void BndEvt__WaterArea_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnReadyToPlaySound();
    void ExecuteUbergraph_WaterArea(int32 EntryPoint);
}; // Size: 0x240

#endif
