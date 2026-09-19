#ifndef UE4SS_SDK_GoToCarRepair_HPP
#define UE4SS_SDK_GoToCarRepair_HPP

class UGoToCarRepair_C : public UCustomerRepairCar
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0150 (size: 0x8)
    float TotalMoney;                                                                 // 0x0158 (size: 0x4)

    void ShowTaskNotification(FString FnishReason);
    void InitializeTask(class AAICharacterBase* Character, const TArray<FTaskProgress>& NewTasksProgress);
    void StartTask(class ACharacter* Character);
    void FinishTask();
    void FinishBeginTask(const ETaskResult TaskState, FString FinishReason);
    void TickObject(float DeltaTime);
    void ExecuteUbergraph_GoToCarRepair(int32 EntryPoint);
}; // Size: 0x15C

#endif
