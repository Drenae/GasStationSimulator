#ifndef UE4SS_SDK_ANS_GuestServiceSpawnActorInHand_Manager_HPP
#define UE4SS_SDK_ANS_GuestServiceSpawnActorInHand_Manager_HPP

class UANS_GuestServiceSpawnActorInHand_Manager_C : public UAnimNotifyState
{
    TSubclassOf<class AActor> Actor to Spawn;                                         // 0x0030 (size: 0x8)
    FName Socket Name;                                                                // 0x0038 (size: 0x8)

    bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
}; // Size: 0x40

#endif
