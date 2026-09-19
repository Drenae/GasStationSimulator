#ifndef UE4SS_SDK_AN_HideBoneByName_HPP
#define UE4SS_SDK_AN_HideBoneByName_HPP

class UAN_HideBoneByName_C : public UAnimNotify
{
    FName Bone Name;                                                                  // 0x0038 (size: 0x8)

    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
}; // Size: 0x40

#endif
