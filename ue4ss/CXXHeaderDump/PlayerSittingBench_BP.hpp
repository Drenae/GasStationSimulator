#ifndef UE4SS_SDK_PlayerSittingBench_BP_HPP
#define UE4SS_SDK_PlayerSittingBench_BP_HPP

class APlayerSittingBench_BP_C : public ABP_AirstripInteraction_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UArrowComponent* arrow;                                                     // 0x0238 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0240 (size: 0x8)
    bool bOverlap;                                                                    // 0x0248 (size: 0x1)
    TSoftObjectPtr<class ALevelSequenceActor> IntroSequence;                          // 0x0250 (size: 0x28)
    FVector PlayerInitLocation;                                                       // 0x0278 (size: 0xC)
    class UPostapoSkeletalMeshComponent* Base Body Mesh;                              // 0x0288 (size: 0x8)

    FName GetInteractionName();
    void SetPlayerMeshes(bool Visible);
    void ReceiveBeginPlay();
    void InvokeInteraction();
    void ExecuteUbergraph_PlayerSittingBench_BP(int32 EntryPoint);
}; // Size: 0x290

#endif
