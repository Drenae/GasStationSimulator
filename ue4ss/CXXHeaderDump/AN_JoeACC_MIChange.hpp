#ifndef UE4SS_SDK_AN_JoeACC_MIChange_HPP
#define UE4SS_SDK_AN_JoeACC_MIChange_HPP

class UAN_JoeACC_MIChange_C : public UAnimNotify
{
    float Scalarvalue;                                                                // 0x0038 (size: 0x4)
    FName Parameter Name;                                                             // 0x003C (size: 0x8)

    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
}; // Size: 0x44

#endif
