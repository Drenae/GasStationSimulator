#ifndef UE4SS_SDK_ANS_CarEnterWarp_HPP
#define UE4SS_SDK_ANS_CarEnterWarp_HPP

class UANS_CarEnterWarp_C : public UAnimNotifyState
{

    bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
    bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
    bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime);
}; // Size: 0x30

#endif
