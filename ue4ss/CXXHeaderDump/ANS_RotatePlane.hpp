#ifndef UE4SS_SDK_ANS_RotatePlane_HPP
#define UE4SS_SDK_ANS_RotatePlane_HPP

class UANS_RotatePlane_C : public UAnimNotifyState
{
    float DesiredPitch;                                                               // 0x0030 (size: 0x4)

    bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
    bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
    bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime);
}; // Size: 0x34

#endif
