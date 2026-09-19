#ifndef UE4SS_SDK_ANS_JoePlaneMounting_HPP
#define UE4SS_SDK_ANS_JoePlaneMounting_HPP

class UANS_JoePlaneMounting_C : public UAnimNotifyState
{

    bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
    bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
    bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime);
}; // Size: 0x30

#endif
