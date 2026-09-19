#ifndef UE4SS_SDK_ANS_PositionWarp_HPP
#define UE4SS_SDK_ANS_PositionWarp_HPP

class UANS_PositionWarp_C : public UAnimNotifyState
{
    bool WarpingDisabled;                                                             // 0x0030 (size: 0x1)

    bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
    bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
    bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime);
}; // Size: 0x31

#endif
