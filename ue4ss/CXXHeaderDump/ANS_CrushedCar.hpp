#ifndef UE4SS_SDK_ANS_CrushedCar_HPP
#define UE4SS_SDK_ANS_CrushedCar_HPP

class UANS_CrushedCar_C : public UAnimNotifyState
{
    float EjectForceMin;                                                              // 0x0030 (size: 0x4)
    float EjectForceMax;                                                              // 0x0034 (size: 0x4)
    float EjectAngleMin;                                                              // 0x0038 (size: 0x4)
    float EjectAngleMax;                                                              // 0x003C (size: 0x4)

    bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
    bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
}; // Size: 0x40

#endif
