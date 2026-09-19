#ifndef UE4SS_SDK_AN_SpawnObjectOnCustomer_HPP
#define UE4SS_SDK_AN_SpawnObjectOnCustomer_HPP

class UAN_SpawnObjectOnCustomer_C : public UAnimNotify
{
    TSubclassOf<class AActor> ActorClassToSpawn;                                      // 0x0038 (size: 0x8)
    bool bSpawnRHand;                                                                 // 0x0040 (size: 0x1)

    void destroyActor(class AActor* ActorToDestroy);
    void SetSpawnedActor(bool bRHand, class AActor* SpawnedActor, class UAnimInstance* AnimInstance);
    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
}; // Size: 0x41

#endif
