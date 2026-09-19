#ifndef UE4SS_SDK_TakeFuel_HPP
#define UE4SS_SDK_TakeFuel_HPP

class UTakeFuel_C : public UIteractableActorTask
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0150 (size: 0x8)
    bool InLine;                                                                      // 0x0158 (size: 0x1)
    class APathPoint* ClosestPathPoint;                                               // 0x0160 (size: 0x8)
    bool TriggeredNotification;                                                       // 0x0168 (size: 0x1)
    FTimerHandle CheckLineHandle;                                                     // 0x0170 (size: 0x8)

    void ClearQueueTimer();
    void CheckIfCanMoveLine();
    void StartWaitingInLine();
    void RemoveNotification();
    void FindClosestPathPoint(class APathPoint*& PathPoint);
    void InQueueOrCanBeAdded(class AInteractableBuilding* Station, bool& CAnBeAdded);
    void UpdateCarPath();
    int32 GetPositionInQueue();
    void StartTask(class ACharacter* Character);
    void FinishBeginTask(const ETaskResult TaskState, FString FinishReason);
    void TickObject(float DeltaTime);
    void InitializeTask(class AAICharacterBase* Character, const TArray<FTaskProgress>& NewTasksProgress);
    void LeaveFuelStation();
    void AddTakeFuelNotification();
    void QuitQueue();
    void MoveInQueue();
    void ExecuteUbergraph_TakeFuel(int32 EntryPoint);
}; // Size: 0x178

#endif
