#ifndef UE4SS_SDK_TakeLotteryTicket_HPP
#define UE4SS_SDK_TakeLotteryTicket_HPP

class UTakeLotteryTicket_C : public UIteractableActorTask
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0150 (size: 0x8)
    class ALotteryMachine_BP_C* LotteryMachine;                                       // 0x0158 (size: 0x8)
    bool WaitingForFinish;                                                            // 0x0160 (size: 0x1)
    float LeftTimeToBuy;                                                              // 0x0164 (size: 0x4)
    TArray<FBaseCharacterSkeletonMontage> Montages Skeletons;                         // 0x0168 (size: 0x10)

    void OnNotifyEnd_C442F97848424743556C7BA2E9763772(FName NotifyName);
    void OnNotifyBegin_C442F97848424743556C7BA2E9763772(FName NotifyName);
    void OnInterrupted_C442F97848424743556C7BA2E9763772(FName NotifyName);
    void OnBlendOut_C442F97848424743556C7BA2E9763772(FName NotifyName);
    void OnCompleted_C442F97848424743556C7BA2E9763772(FName NotifyName);
    void OnNotifyEnd_CAC936B64B77630254A54EA00F19C8EC(FName NotifyName);
    void OnNotifyBegin_CAC936B64B77630254A54EA00F19C8EC(FName NotifyName);
    void OnInterrupted_CAC936B64B77630254A54EA00F19C8EC(FName NotifyName);
    void OnBlendOut_CAC936B64B77630254A54EA00F19C8EC(FName NotifyName);
    void OnCompleted_CAC936B64B77630254A54EA00F19C8EC(FName NotifyName);
    void OnNotifyEnd_4208018B4CB3177B148A73A3F635399D(FName NotifyName);
    void OnNotifyBegin_4208018B4CB3177B148A73A3F635399D(FName NotifyName);
    void OnInterrupted_4208018B4CB3177B148A73A3F635399D(FName NotifyName);
    void OnBlendOut_4208018B4CB3177B148A73A3F635399D(FName NotifyName);
    void OnCompleted_4208018B4CB3177B148A73A3F635399D(FName NotifyName);
    void OnLoaded_2B208C3F4B5EB45637AFCBAC70A94BD3(class UObject* Loaded);
    void OnLoaded_7DC368384D769582D72B5DAB53B26A45(class UObject* Loaded);
    void CustomEvent_0();
    void InitializeTask(class AAICharacterBase* Character, const TArray<FTaskProgress>& NewTasksProgress);
    void StartTask(class ACharacter* Character);
    void FinishBeginTask(const ETaskResult TaskState, FString FinishReason);
    void TickObject(float DeltaTime);
    void OnLotteryFinish();
    void IgnoreTaskOnCancelLottery();
    void ExecuteUbergraph_TakeLotteryTicket(int32 EntryPoint);
}; // Size: 0x178

#endif
