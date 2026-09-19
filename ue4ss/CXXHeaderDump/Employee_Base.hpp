#ifndef UE4SS_SDK_Employee_Base_HPP
#define UE4SS_SDK_Employee_Base_HPP

class AEmployee_Base_C : public AAIHumanBase_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0A10 (size: 0x8)
    class UCapsuleComponent* InteractionCapsule;                                      // 0x0A18 (size: 0x8)
    class UStaticMeshComponent* Employee_Headest_SM;                                  // 0x0A20 (size: 0x8)
    class UStaticMeshComponent* Employee_beret_SM;                                    // 0x0A28 (size: 0x8)
    class UWidgetComponent* NPCInfo;                                                  // 0x0A30 (size: 0x8)
    FEmployee_Base_COnEmployeeTask OnEmployeeTask;                                    // 0x0A38 (size: 0x10)
    void OnEmployeeTask(TSubclassOf<class UTaskBase> Task);
    bool bIsTalking;                                                                  // 0x0A48 (size: 0x1)
    FTimerHandle ShowWidgetsTimer;                                                    // 0x0A50 (size: 0x8)

    FName GetInteractionName();
    bool CanBeInteractable(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void AssignNewTask(TSubclassOf<class UTaskBase> NewTask);
    bool IsEmployeeClass_Helper();
    void Hide Own Money Widget Old();
    void Show Own Money Widget Old();
    void Hide at Work Widget Old();
    void Show at Work Widget OLD(EWorkerWorkType minigames);
    void AddNewTask(TSubclassOf<class UTaskBase> NewItem_TaskBase);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void StartTalking();
    void StopTalking(TSubclassOf<class UTaskBase> NewTask);
    void OnBeginFinishTaskCharacter_Event_0(class UTaskBase* FinishedTask, const ETaskResult TaskResult, const FString Reason);
    void ShowAtWorkWidget(EWorkerWorkType WorkType);
    void ShowOwnMoneyWidget();
    void HideAtWorkWidget();
    void HideOwnMoneyWidget();
    void HideShowBlockedIcon(bool bShow);
    void OnErrorMessageDisplayed(const int32 InformationID);
    void ShowNPCInfoWidget();
    void OnTaskStarted(TSoftClassPtr<UTaskBase> StartedTask);
    void ExecuteUbergraph_Employee_Base(int32 EntryPoint);
    void OnEmployeeTask__DelegateSignature(TSubclassOf<class UTaskBase> Task);
}; // Size: 0xA58

#endif
