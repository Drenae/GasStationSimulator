#ifndef UE4SS_SDK_AN_DeSpawnObjectOnCustomer_HPP
#define UE4SS_SDK_AN_DeSpawnObjectOnCustomer_HPP

class UAN_DeSpawnObjectOnCustomer_C : public UAnimNotify
{
    bool bDestroyAll;                                                                 // 0x0038 (size: 0x1)
    bool bDestroyOnRHand;                                                             // 0x0039 (size: 0x1)

    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
}; // Size: 0x3A

#endif
