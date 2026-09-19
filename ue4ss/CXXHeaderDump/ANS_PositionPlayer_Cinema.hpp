#ifndef UE4SS_SDK_ANS_PositionPlayer_Cinema_HPP
#define UE4SS_SDK_ANS_PositionPlayer_Cinema_HPP

class UANS_PositionPlayer_Cinema_C : public UAnimNotifyState
{

    bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
    bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime);
}; // Size: 0x30

#endif
