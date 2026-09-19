#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "AssignedTasksInfo.h"
#include "EEmployeeTask.h"
#include "EShiftType.h"
#include "ETaskResult.h"
#include "OnNewTaskAssignedDelegate.h"
#include "TaskStruct.h"
#include "EmployeeShift.generated.h"

class AAICharacterBase;
class AActor;
class AInteractableActor;
class AInteractableBuilding;
class UEmployeeTask;
class UTaskBase;

UCLASS(Blueprintable)
class GSS2_API UEmployeeShift : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNewTaskAssigned NewTaskAssigned;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAICharacterBase* Employee;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAssignedTasksInfo> EmployeeTasks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShiftType AssignedShift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutopay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentTaskPriority;
    
public:
    UEmployeeShift();

    UFUNCTION(BlueprintCallable)
    bool TryToPaySalary();
    
    UFUNCTION(BlueprintCallable)
    bool TryToActivateNextTask();
    
    UFUNCTION(BlueprintCallable)
    void ShiftStarted();
    
    UFUNCTION(BlueprintCallable)
    void ShiftFinished();
    
    UFUNCTION(BlueprintCallable)
    void SetTaskActivePossibility(int32 TaskPriority, bool bNewActiveValue, EShiftType CurrentShift);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetsBinding(int32 Priority);
    
    UFUNCTION(BlueprintCallable)
    void SetNewEmployeeTask(int32 Priority, EEmployeeTask TaskToAssign, TSoftClassPtr<UEmployeeTask> NewTask, bool bActive);
    
    UFUNCTION(BlueprintCallable)
    void SetIfAutopay(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetEmployeeTasks(TArray<FAssignedTasksInfo> NewEmployeeTasks);
    
    UFUNCTION(BlueprintCallable)
    void SetEmployee(AAICharacterBase* NewEmployee);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentTaskPriority(int32 NewCurrentTaskPriority);
    
    UFUNCTION(BlueprintCallable)
    void SetAssignedShift(EShiftType NewShiftType);
    
    UFUNCTION(BlueprintCallable)
    void ResetLocation(FTransform ChairTransform);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTask(int32 RemovedTaskPriority);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTargetsBindings();
    
    UFUNCTION(BlueprintCallable)
    void RemoveTargetActors_byIndex(int32 TaskIndex, bool bRemoveFromArray);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTargetActors(TSoftClassPtr<UEmployeeTask> RemovedTask, bool bRemoveFromArray);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTargetActorBindings(AInteractableBuilding* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTargetActor_byIndex(AInteractableBuilding* TargetActor, int32 TaskIndex, bool bRemoveFromArray);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTargetActor(AInteractableBuilding* TargetActor, int32 TaskIndex);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAsTargetActor(AInteractableBuilding* RemovedBuilding, EEmployeeTask TaskType);
    
    UFUNCTION(BlueprintCallable)
    void OnTaskLoaded(int32 MainTaskPriority);
    
    UFUNCTION(BlueprintCallable)
    void OnInitializeTaskCharacter(UTaskBase* TaskBase);
    
    UFUNCTION(BlueprintCallable)
    void OnFuelRestored();
    
    UFUNCTION(BlueprintCallable)
    void OnEmployeeLeftQueue(AAICharacterBase* LeftEmployee, AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    void OnCustomerServed(AAICharacterBase* Customer, AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    void OnCustomerArrived(AAICharacterBase* Customer, AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginFinishTaskCharacter(UTaskBase* TaskBase, ETaskResult TaskResult, const FString& Reason);
    
    UFUNCTION(BlueprintCallable)
    bool HasCurrentTaskConsent();
    
    UFUNCTION(BlueprintCallable)
    int32 HasAnyTaskActivationPossibility();
    
    UFUNCTION(BlueprintCallable)
    void HandleTargetActorRemoving(AInteractableBuilding* TargetActor, int32 TaskIndex, bool bRemoveFromArray);
    
    UFUNCTION(BlueprintCallable)
    void GoHome();
    
    UFUNCTION(BlueprintCallable)
    TSoftClassPtr<AInteractableActor> GetTaskTargetActorClass(TSoftClassPtr<UEmployeeTask> Task);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIfAutopay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FAssignedTasksInfo> GetEmployeeTasks();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAICharacterBase* GetEmployee();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentTaskPriority();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EShiftType GetAssignedShift();
    
    UFUNCTION(BlueprintCallable)
    bool ForceNextTask();
    
    UFUNCTION(BlueprintCallable)
    int32 FindTaskToMoveTo(int32 OngoingTaskPriority, bool bForceActivation);
    
    UFUNCTION(BlueprintCallable)
    int32 FindTask(TSoftClassPtr<UEmployeeTask> TaskToFind);
    
    UFUNCTION(BlueprintCallable)
    void FindAndAddAsTargetActor(int32 TaskPriority, TSoftClassPtr<AInteractableActor> ActorToFind);
    
    UFUNCTION(BlueprintCallable)
    void FillTaskStruct(EEmployeeTask WantedTask, FTaskStruct& OutTask);
    
    UFUNCTION(BlueprintCallable)
    void DelegateFunctionCalled(AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    bool CheckIfNextTaskAvailable(int32 TaskPriority, bool bForceActivation);
    
    UFUNCTION(BlueprintCallable)
    bool CheckIfCanActivateTask(int32 TaskPriority, bool& bCurrentTakConsent);
    
    UFUNCTION(BlueprintCallable)
    bool CanActivateNextTask(int32& TaskToActivate, bool& bCurrentTakConsent);
    
    UFUNCTION(BlueprintCallable)
    void AssignShift(EShiftType NewAssignedShift, EShiftType CurrentActiveShift);
    
    UFUNCTION(BlueprintCallable)
    void AddTargetBinding(AInteractableBuilding* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    void AddTargetActor(int32 Priority, TSoftObjectPtr<AInteractableBuilding> TargetActorToAdd);
    
    UFUNCTION(BlueprintCallable)
    void AddAsTargetActor(AInteractableBuilding* NewBuilding, EEmployeeTask TaskType);
    
    UFUNCTION(BlueprintCallable)
    void ActivateNewTask(int32 Priority);
    
};

