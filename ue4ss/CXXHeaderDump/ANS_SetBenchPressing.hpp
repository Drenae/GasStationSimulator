#ifndef UE4SS_SDK_ANS_SetBenchPressing_HPP
#define UE4SS_SDK_ANS_SetBenchPressing_HPP

class UANS_SetBenchPressing_C : public UAnimNotifyState
{
    bool Bench Pressing;                                                              // 0x0030 (size: 0x1)

    bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
}; // Size: 0x31

#endif
