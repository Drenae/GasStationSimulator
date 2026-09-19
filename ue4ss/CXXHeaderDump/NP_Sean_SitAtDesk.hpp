#ifndef UE4SS_SDK_NP_Sean_SitAtDesk_HPP
#define UE4SS_SDK_NP_Sean_SitAtDesk_HPP

class UNP_Sean_SitAtDesk_C : public UNPAITaskBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    bool IsMovingToTarget;                                                            // 0x00B8 (size: 0x1)
    class ACrane* Crane;                                                              // 0x00C0 (size: 0x8)
    class UNPSmartObjectComponent* SmartObject;                                       // 0x00C8 (size: 0x8)
    bool bPositioned;                                                                 // 0x00D0 (size: 0x1)
    FName Next Section;                                                               // 0x00D4 (size: 0x8)
    int32 ActionID;                                                                   // 0x00DC (size: 0x4)
    FName EndSection;                                                                 // 0x00E0 (size: 0x8)
    int32 LastVersion;                                                                // 0x00E8 (size: 0x4)
    FVector MoveToLocation;                                                           // 0x00EC (size: 0xC)
    bool bAction;                                                                     // 0x00F8 (size: 0x1)
    FNPTaskFinishReason Task Stop Reason;                                             // 0x00F9 (size: 0x2)
    float TimePassed;                                                                 // 0x00FC (size: 0x4)
    bool bTickTimer;                                                                  // 0x0100 (size: 0x1)
    class ASeanCharacter* Sean;                                                       // 0x0108 (size: 0x8)
    FNPTaskFinishReason TaskStopReason;                                               // 0x0110 (size: 0x2)
    bool bStartedMontage;                                                             // 0x0112 (size: 0x1)
    TSoftObjectPtr<class AActor> WayPoint;                                            // 0x0118 (size: 0x28)
    TArray<FVector> Waypoints;                                                        // 0x0140 (size: 0x10)
    TArray<UStaticMeshComponent*> AttachedCompoents;                                  // 0x0150 (size: 0x10)
    TArray<FFAttachedComponents> FAttachedComponents;                                 // 0x0160 (size: 0x10)
    bool bEndIntialized;                                                              // 0x0170 (size: 0x1)
    FTransform ChairInitialTransform;                                                 // 0x0180 (size: 0x30)

    void AddComponentToArray(class UPrimitiveComponent* ComponentToAdd, FTransform InitialTransform);
    void EnforceDetach();
    void Timer(float DeltaT, bool& bTimePassed);
    void SetPhoneAsAttachement();
    void SetLetterAsAttachement();
    void SetColaAsAttachement();
    void EndCurrentMontageVersion();
    void PickEndMontageSection(FName& EndSection);
    void PickSittingMontageAction();
    void HandlePositioning();
    void OnNotifyEnd_39EB6173488D12BC2637419C5E7A2375(FName NotifyName);
    void OnNotifyBegin_39EB6173488D12BC2637419C5E7A2375(FName NotifyName);
    void OnInterrupted_39EB6173488D12BC2637419C5E7A2375(FName NotifyName);
    void OnBlendOut_39EB6173488D12BC2637419C5E7A2375(FName NotifyName);
    void OnCompleted_39EB6173488D12BC2637419C5E7A2375(FName NotifyName);
    void OnNotifyEnd_5813F05D424A4AC96E6CAA9F4980228B(FName NotifyName);
    void OnNotifyBegin_5813F05D424A4AC96E6CAA9F4980228B(FName NotifyName);
    void OnInterrupted_5813F05D424A4AC96E6CAA9F4980228B(FName NotifyName);
    void OnBlendOut_5813F05D424A4AC96E6CAA9F4980228B(FName NotifyName);
    void OnCompleted_5813F05D424A4AC96E6CAA9F4980228B(FName NotifyName);
    void StartTask();
    void FinishBeginTask(const FNPTaskFinishReason TaskStopReason);
    void OnInitializeTask(class ANPAICharacterBase* OwnerCharacter, class AActor* InTargetActor);
    void OnMontageBlendingOut_Event_0(class UAnimMontage* Montage, bool bInterrupted);
    void EventTick(float DeltaTime, ENPAIActionState AIActionState);
    void ForceEndTask();
    void ExecuteUbergraph_NP_Sean_SitAtDesk(int32 EntryPoint);
}; // Size: 0x1B0

#endif
