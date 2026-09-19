#ifndef UE4SS_SDK_ANS_AttachedLogVisibility_HPP
#define UE4SS_SDK_ANS_AttachedLogVisibility_HPP

class UANS_AttachedLogVisibility_C : public UAnimNotifyState
{
    bool bShouldBeVisibleOnBegin;                                                     // 0x0030 (size: 0x1)
    bool bShouldBeVisibleOnEnd;                                                       // 0x0031 (size: 0x1)

    bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
    bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
}; // Size: 0x32

#endif
