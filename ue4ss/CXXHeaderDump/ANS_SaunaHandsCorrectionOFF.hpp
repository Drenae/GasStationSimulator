#ifndef UE4SS_SDK_ANS_SaunaHandsCorrectionOFF_HPP
#define UE4SS_SDK_ANS_SaunaHandsCorrectionOFF_HPP

class UANS_SaunaHandsCorrectionOFF_C : public UAnimNotifyState
{
    bool Sauna Sitting;                                                               // 0x0030 (size: 0x1)

    bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
}; // Size: 0x31

#endif
