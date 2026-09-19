#ifndef UE4SS_SDK_ANS_AttachLog_HPP
#define UE4SS_SDK_ANS_AttachLog_HPP

class UANS_AttachLog_C : public UAnimNotifyState
{
    bool bShouldAttach;                                                               // 0x0030 (size: 0x1)
    bool bShouldDettach;                                                              // 0x0031 (size: 0x1)

    bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
    bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
}; // Size: 0x32

#endif
