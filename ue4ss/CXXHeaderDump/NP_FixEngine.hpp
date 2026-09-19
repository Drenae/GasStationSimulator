#ifndef UE4SS_SDK_NP_FixEngine_HPP
#define UE4SS_SDK_NP_FixEngine_HPP

class UNP_FixEngine_C : public UNPAITaskBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    class UNPSmartObjectComponent* SmartObjectRef;                                    // 0x00B8 (size: 0x8)
    bool Tick;                                                                        // 0x00C0 (size: 0x1)
    bool FinishBeginTick;                                                             // 0x00C1 (size: 0x1)

    void SetJoePositionToPropeller(class UPilotsAnimInstance* JoeAnimInstance);
    void CancelJoeMontage(class ACharacter* Joe);
    void SetTargetActor(class UObject* InputObject);
    void GetChildActorSmartObject(FTransform& Return Value World Position Transform, FTransform& Return Value World Montage Transform, class USkeletalMeshComponent*& Propeller Mesh);
    void OnNotifyEnd_F25E45404A4E753D3BFC289870868EB6(FName NotifyName);
    void OnNotifyBegin_F25E45404A4E753D3BFC289870868EB6(FName NotifyName);
    void OnInterrupted_F25E45404A4E753D3BFC289870868EB6(FName NotifyName);
    void OnBlendOut_F25E45404A4E753D3BFC289870868EB6(FName NotifyName);
    void OnCompleted_F25E45404A4E753D3BFC289870868EB6(FName NotifyName);
    void OnNotifyEnd_901535A44869E7EC7D10CC8DE3B34485(FName NotifyName);
    void OnNotifyBegin_901535A44869E7EC7D10CC8DE3B34485(FName NotifyName);
    void OnInterrupted_901535A44869E7EC7D10CC8DE3B34485(FName NotifyName);
    void OnBlendOut_901535A44869E7EC7D10CC8DE3B34485(FName NotifyName);
    void OnCompleted_901535A44869E7EC7D10CC8DE3B34485(FName NotifyName);
    void OnNotifyEnd_CE706E1E4B088ECBBB03379020898C5D(FName NotifyName);
    void OnNotifyBegin_CE706E1E4B088ECBBB03379020898C5D(FName NotifyName);
    void OnInterrupted_CE706E1E4B088ECBBB03379020898C5D(FName NotifyName);
    void OnBlendOut_CE706E1E4B088ECBBB03379020898C5D(FName NotifyName);
    void OnCompleted_CE706E1E4B088ECBBB03379020898C5D(FName NotifyName);
    void MontageFinished(class UAnimMontage* Montage, bool bInterrupted);
    void SetPropellerTargetPoint();
    void PropellerSKHide();
    void PropellerSKShow(float StartingPosition);
    void StartTask();
    void FinishBeginTask(const FNPTaskFinishReason TaskStopReason);
    void OnInitializeTask(class ANPAICharacterBase* OwnerCharacter, class AActor* InTargetActor);
    void ExecuteUbergraph_NP_FixEngine(int32 EntryPoint);
}; // Size: 0xC2

#endif
