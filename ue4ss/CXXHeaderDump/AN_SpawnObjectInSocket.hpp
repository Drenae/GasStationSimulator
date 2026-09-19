#ifndef UE4SS_SDK_AN_SpawnObjectInSocket_HPP
#define UE4SS_SDK_AN_SpawnObjectInSocket_HPP

class UAN_SpawnObjectInSocket_C : public UAnimNotify
{
    TSubclassOf<class AActor> Class;                                                  // 0x0038 (size: 0x8)
    class UAnimMontage* Montage to Play;                                              // 0x0040 (size: 0x8)
    FName Socket Name;                                                                // 0x0048 (size: 0x8)

    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
}; // Size: 0x50

#endif
