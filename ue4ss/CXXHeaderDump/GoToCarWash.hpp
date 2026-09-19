#ifndef UE4SS_SDK_GoToCarWash_HPP
#define UE4SS_SDK_GoToCarWash_HPP

class UGoToCarWash_C : public UCustomerRepairCar
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0150 (size: 0x8)
    float TotalMoney;                                                                 // 0x0158 (size: 0x4)

    void InitializeTask(class AAICharacterBase* Character, const TArray<FTaskProgress>& NewTasksProgress);
    void StartTask(class ACharacter* Character);
    void OnAnimEnd();
    void FinishBeginTask(const ETaskResult TaskState, FString FinishReason);
    void ExecuteUbergraph_GoToCarWash(int32 EntryPoint);
}; // Size: 0x15C

#endif
