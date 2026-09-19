#ifndef UE4SS_SDK_Biker_ActorBp_HPP
#define UE4SS_SDK_Biker_ActorBp_HPP

class ABiker_ActorBp_C : public APawn
{
    class UStaticMeshComponent* StaticMesh;                                           // 0x0280 (size: 0x8)
    class USkeletalMeshComponent* Head;                                               // 0x0288 (size: 0x8)
    class UArrowComponent* arrow;                                                     // 0x0290 (size: 0x8)
    class USkeletalMeshComponent* Body;                                               // 0x0298 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x2A0

#endif
