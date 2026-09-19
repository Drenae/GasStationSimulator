#ifndef UE4SS_SDK_DLC_RV_GoToConcert_HPP
#define UE4SS_SDK_DLC_RV_GoToConcert_HPP

class UDLC_RV_GoToConcert_C : public UIteractableActorTask
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0150 (size: 0x8)
    class ABP_ConcertBuilding_C* ConcertBuildingREF;                                  // 0x0158 (size: 0x8)
    class UArrowComponent* SpotREF;                                                   // 0x0160 (size: 0x8)
    FTimeStruct DancingTimeLeft;                                                      // 0x0168 (size: 0x10)
    TArray<UAnimMontage*> AvailableDances;                                            // 0x0178 (size: 0x10)
    FGameplayTag ChoosenTag;                                                          // 0x0188 (size: 0x8)

    void RollForDance(FGameplayTag& ChoosenTag);
    void OnNotifyEnd_A016C45345DD01A95B118198A51E7618(FName NotifyName);
    void OnNotifyBegin_A016C45345DD01A95B118198A51E7618(FName NotifyName);
    void OnInterrupted_A016C45345DD01A95B118198A51E7618(FName NotifyName);
    void OnBlendOut_A016C45345DD01A95B118198A51E7618(FName NotifyName);
    void OnCompleted_A016C45345DD01A95B118198A51E7618(FName NotifyName);
    void InitializeTask(class AAICharacterBase* Character, const TArray<FTaskProgress>& NewTasksProgress);
    void StartTask(class ACharacter* Character);
    void FinishBeginTask(const ETaskResult TaskState, FString FinishReason);
    void TickObject(float DeltaTime);
    void ExecuteUbergraph_DLC_RV_GoToConcert(int32 EntryPoint);
}; // Size: 0x190

#endif
