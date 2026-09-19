#ifndef UE4SS_SDK_GoToCinema_HPP
#define UE4SS_SDK_GoToCinema_HPP

class UGoToCinema_C : public UIteractableActorTask
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0150 (size: 0x8)
    FBlackboardKeySelector VehicleState;                                              // 0x0158 (size: 0x28)
    class APathPoint* PathPoint;                                                      // 0x0180 (size: 0x8)
    bool IsInteractionActive;                                                         // 0x0188 (size: 0x1)
    class APopcornTarget_BP_C* PopcornTarget;                                         // 0x0190 (size: 0x8)
    class UNiagaraComponent* TicketEffect;                                            // 0x0198 (size: 0x8)
    FInt32Range StartingPopcornCooldown;                                              // 0x01A0 (size: 0x10)
    bool bRejected;                                                                   // 0x01B0 (size: 0x1)
    eTicketState PrevTicketState;                                                     // 0x01B1 (size: 0x1)
    FTimerHandle DriverWaitHandle;                                                    // 0x01B8 (size: 0x8)
    bool WaitingForDriver;                                                            // 0x01C0 (size: 0x1)

    void DriveFromCinema();
    void TrySpawnTrash(ETaskResult TaskResult);
    void ToggleValidateIcon(bool bOn);
    void TrySpawnOilSpill(ETaskResult TaskResult);
    void TryCancelTask();
    void DriveAway();
    void FinishTicketInteraction();
    void DrawValuesAfterReachCinema();
    void FinishBeginTask(const ETaskResult TaskState, FString FinishReason);
    void TickObject(float DeltaTime);
    void BindInteractionEvents();
    void OnConfirmActions(bool bFake);
    void OnRejectActions(bool bFake);
    void OnValidateActions(bool bFake);
    void UnbindEvents();
    void EndPlayerInteraction();
    void OnCinemaStateChanged();
    void StartTask(class ACharacter* Character);
    void DestroyPopcornNS();
    void CheckForNotification();
    void InitializeTask(class AAICharacterBase* Character, const TArray<FTaskProgress>& NewTasksProgress);
    void TryShowPopcorn();
    void OnFinishedWaitTime();
    void ExecuteUbergraph_GoToCinema(int32 EntryPoint);
}; // Size: 0x1C1

#endif
