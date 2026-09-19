#ifndef UE4SS_SDK_ANS_ToggleMegaphone_HPP
#define UE4SS_SDK_ANS_ToggleMegaphone_HPP

class UANS_ToggleMegaphone_C : public UAnimNotifyState
{
    bool Megaphone Equipped;                                                          // 0x0030 (size: 0x1)

    bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
}; // Size: 0x31

#endif
