#ifndef UE4SS_SDK_NP_MountPlane_HPP
#define UE4SS_SDK_NP_MountPlane_HPP

class UNP_MountPlane_C : public UNPAITaskBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    class UNPSmartObjectComponent* SmartObjectRef;                                    // 0x00B8 (size: 0x8)

    void OnNotifyEnd_092F229C44907FCF9CAE7C8CF85268EB(FName NotifyName);
    void OnNotifyBegin_092F229C44907FCF9CAE7C8CF85268EB(FName NotifyName);
    void OnInterrupted_092F229C44907FCF9CAE7C8CF85268EB(FName NotifyName);
    void OnBlendOut_092F229C44907FCF9CAE7C8CF85268EB(FName NotifyName);
    void OnCompleted_092F229C44907FCF9CAE7C8CF85268EB(FName NotifyName);
    void OnInitializeTask(class ANPAICharacterBase* OwnerCharacter, class AActor* InTargetActor);
    void FinishBeginTask(const FNPTaskFinishReason TaskStopReason);
    void TickObject(float DeltaTime, ENPAIActionState AIActionState);
    void StartTask();
    void MontageFinished(class UAnimMontage* Montage, bool bInterrupted);
    void ForceAttach();
    void ExecuteUbergraph_NP_MountPlane(int32 EntryPoint);
}; // Size: 0xC0

#endif
