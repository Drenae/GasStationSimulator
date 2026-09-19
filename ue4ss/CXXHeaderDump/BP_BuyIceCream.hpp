#ifndef UE4SS_SDK_BP_BuyIceCream_HPP
#define UE4SS_SDK_BP_BuyIceCream_HPP

class UBP_BuyIceCream_C : public UBuyIceCream
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0168 (size: 0x8)
    int32 CurrentQueuePosition;                                                       // 0x0170 (size: 0x4)

    void InitializeTask(class AAICharacterBase* Character, const TArray<FTaskProgress>& NewTasksProgress);
    void StartTask(class ACharacter* Character);
    void FinishBeginTask(const ETaskResult TaskState, FString FinishReason);
    void CustomEvent();
    void ExecuteUbergraph_BP_BuyIceCream(int32 EntryPoint);
}; // Size: 0x174

#endif
