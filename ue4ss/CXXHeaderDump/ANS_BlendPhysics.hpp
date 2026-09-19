#ifndef UE4SS_SDK_ANS_BlendPhysics_HPP
#define UE4SS_SDK_ANS_BlendPhysics_HPP

class UANS_BlendPhysics_C : public UAnimNotifyState
{
    FName In Bone Name;                                                               // 0x0030 (size: 0x8)

    bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
    bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime);
}; // Size: 0x38

#endif
