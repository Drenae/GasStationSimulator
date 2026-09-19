#ifndef UE4SS_SDK_PopcornTarget_BP_HPP
#define UE4SS_SDK_PopcornTarget_BP_HPP

class APopcornTarget_BP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0228 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    class AAICharacterBase* AttachedNpc;                                              // 0x0240 (size: 0x8)

    void TryHideTarget();
    bool CanAttachedNpcEatPopcorn(class AAICharacterBase*& OutNpc);
    void TryShowTarget();
    void BndEvt__PopcornTarget_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnTargetHitByAi(class AAICharacterBase* AI);
    void OnCooldownEnd(const class AAICharacterBase* AICharacterBase);
    void OnStart();
    void OnEnd();
    void ReceiveDestroyed();
    void BeginPlayWithNpc(class AAICharacterBase* NPC);
    void ExecuteUbergraph_PopcornTarget_BP(int32 EntryPoint);
}; // Size: 0x248

#endif
