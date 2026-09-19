#ifndef UE4SS_SDK_ANS_NPCSpawnActorInHands_HPP
#define UE4SS_SDK_ANS_NPCSpawnActorInHands_HPP

class UANS_NPCSpawnActorInHands_C : public UAnimNotifyState
{
    FName In Socket Name;                                                             // 0x0030 (size: 0x8)
    TSubclassOf<class AActor> ClassToSpawn;                                           // 0x0038 (size: 0x8)
    bool bDespawn;                                                                    // 0x0040 (size: 0x1)
    bool bSpawn;                                                                      // 0x0041 (size: 0x1)

    bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
    bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
}; // Size: 0x42

#endif
