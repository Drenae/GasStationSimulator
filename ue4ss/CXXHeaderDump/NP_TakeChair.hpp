#ifndef UE4SS_SDK_NP_TakeChair_HPP
#define UE4SS_SDK_NP_TakeChair_HPP

class UNP_TakeChair_C : public UNPAITaskBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    class UNPSmartObjectComponent* SmartObjectRef;                                    // 0x00B8 (size: 0x8)

    void OnNotifyEnd_96A5AE744F32F02AD12798A179AAE8CD(FName NotifyName);
    void OnNotifyBegin_96A5AE744F32F02AD12798A179AAE8CD(FName NotifyName);
    void OnInterrupted_96A5AE744F32F02AD12798A179AAE8CD(FName NotifyName);
    void OnBlendOut_96A5AE744F32F02AD12798A179AAE8CD(FName NotifyName);
    void OnCompleted_96A5AE744F32F02AD12798A179AAE8CD(FName NotifyName);
    void OnInitializeTask(class ANPAICharacterBase* OwnerCharacter, class AActor* InTargetActor);
    void FinishBeginTask(const FNPTaskFinishReason TaskStopReason);
    void StartTask();
    void MontageFinished(class UAnimMontage* Montage, bool bInterrupted);
    void ExecuteUbergraph_NP_TakeChair(int32 EntryPoint);
}; // Size: 0xC0

#endif
