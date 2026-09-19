#ifndef UE4SS_SDK_AN_DeetachWithPhysics_HPP
#define UE4SS_SDK_AN_DeetachWithPhysics_HPP

class UAN_DeetachWithPhysics_C : public UAnimNotify
{
    float LifeTime;                                                                   // 0x0038 (size: 0x4)
    float ImpulsePower;                                                               // 0x003C (size: 0x4)
    FName StartingVectorSocket;                                                       // 0x0040 (size: 0x8)
    FName EndVectorSocket;                                                            // 0x0048 (size: 0x8)
    FName ImpluseBoneName;                                                            // 0x0050 (size: 0x8)

    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
}; // Size: 0x58

#endif
