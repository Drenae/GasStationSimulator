#ifndef UE4SS_SDK_AN_SeanSpawnZippo_HPP
#define UE4SS_SDK_AN_SeanSpawnZippo_HPP

class UAN_SeanSpawnZippo_C : public UAnimNotify
{
    FName SocketName;                                                                 // 0x0038 (size: 0x8)
    TSubclassOf<class AActor> ActorToSpawn;                                           // 0x0040 (size: 0x8)

    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
}; // Size: 0x48

#endif
