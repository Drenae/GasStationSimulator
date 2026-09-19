#ifndef UE4SS_SDK_GoPanic_HPP
#define UE4SS_SDK_GoPanic_HPP

class UGoPanic_C : public UIteractableActorTask
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0150 (size: 0x8)
    class AAICharacterBase* AIChar;                                                   // 0x0158 (size: 0x8)
    class ABP_PanicPoint_C* LastPanicPoint;                                           // 0x0160 (size: 0x8)
    int32 NumbersOfPointsToPanic;                                                     // 0x0168 (size: 0x4)

    void SelectRandomPanicPoint();
    void FindPanicPoint(const class ABP_PanicPoint_C* PointExcluded);
    void InitializeTask(class AAICharacterBase* Character, const TArray<FTaskProgress>& NewTasksProgress);
    void StartTask(class ACharacter* Character);
    void FinishBeginTask(const ETaskResult TaskState, FString FinishReason);
    void PickAnotherPanicPoint();
    void ExecuteUbergraph_GoPanic(int32 EntryPoint);
}; // Size: 0x16C

#endif
