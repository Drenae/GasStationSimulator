#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "AssignedTasksInfo.h"
#include "EEmployeeSkill.h"
#include "EEmployeeTask.h"
#include "EShiftType.h"
#include "OnEmployeFiredDelegate.h"
#include "OnEmployeHiredDelegate.h"
#include "SavedEmployee.h"
#include "ShiftsManager.generated.h"

class AAICharacterBase;
class AInteractableActor;
class AInteractableBuilding;
class UEmployeeShift;
class UEmployeeTask;
class UEmployeeTasksDataAsset;

UCLASS(Blueprintable)
class GSS2_API UShiftsManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEmployeFired OnEmployeFired;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEmployeHired OnEmployeHired;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEmployeeShift*> OwnedEmployees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShiftType CurrentShift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEmployeeTasksDataAsset* EmployeeSchedulingInfo;
    
public:
    UShiftsManager();

    UFUNCTION(BlueprintCallable)
    void Test_AddOwnedEmployees();
    
    UFUNCTION(BlueprintCallable)
    void SetOwnedEmployees(TArray<UEmployeeShift*> NewOwnedEmployees);
    
    UFUNCTION(BlueprintCallable)
    void SetNewEmployeeTask(UEmployeeShift* EmployeeShift, int32 Priority, EEmployeeTask TaskToAssign, TSoftClassPtr<UEmployeeTask> NewTask, TSoftClassPtr<AInteractableActor> TargetActorClass, bool bActive);
    
    UFUNCTION(BlueprintCallable)
    void SetEmployeeTask(AAICharacterBase* Employee, EEmployeeTask Task, int32 Priority);
    
    UFUNCTION(BlueprintCallable)
    void SetEmployeeBinding(UEmployeeShift* Employee);
    
    UFUNCTION(BlueprintCallable)
    void SetEmployeeAutopay(UEmployeeShift* Employee, bool bNewAutopayValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetEmployeeAssignedShift(UEmployeeShift* EmployeeShift, EShiftType NewShift, FText& AlertToShow, float& Duration);
    
    UFUNCTION(BlueprintCallable)
    void SetAssignedTaskActivationPossibility(UEmployeeShift* EmployeeShift, int32 TaskPriority, bool bNewActiveValue);
    
    UFUNCTION(BlueprintCallable)
    void SaveEmployee(TArray<FSavedEmployee>& SavedEmployees);
    
    UFUNCTION(BlueprintCallable)
    void ResetSpecificShiftEmployeesStamina(EShiftType Shift);
    
    UFUNCTION(BlueprintCallable)
    void ResetEmployeeLocation(UEmployeeShift* Employee, FTransform ChairTransform);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTask(UEmployeeShift* EmployeeShift, int32 Priority);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFiredEmployeeByRef(UEmployeeShift* FiredEmployee);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFiredEmployeeByIndex(int32 FiredEmployeeIndex);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAsTargetActor(AInteractableBuilding* RemovedBuilding, EEmployeeTask TaskType);
    
    UFUNCTION(BlueprintCallable)
    void OnWorldBeginPlay();
    
    UFUNCTION(BlueprintCallable)
    void OnTaskLoaded(TSoftObjectPtr<UEmployeeShift> EmployeeShift, int32 MainTaskPriority);
    
    UFUNCTION(BlueprintCallable)
    void OnGameLoaded(bool bGameLoaded);
    
    UFUNCTION(BlueprintCallable)
    void NextShiftStartsCheck(int32 Hour);
    
    UFUNCTION(BlueprintCallable)
    void NewShiftStarted(EShiftType NewShiftType);
    
    UFUNCTION(BlueprintCallable)
    void LoadEmployeeTask(UEmployeeShift* EmployeeShift, int32 MainTaskPriority);
    
    UFUNCTION(BlueprintCallable)
    void LoadEmployees(TArray<FSavedEmployee>& SavedEmployees, TArray<AAICharacterBase*> Employees);
    
    UFUNCTION(BlueprintCallable)
    void LoadEmployee(TArray<FSavedEmployee>& SavedEmployees, AAICharacterBase* Employee);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTaskName(UEmployeeShift* Employee, int32 Priority);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UEmployeeShift*> GetOwnedEmployees();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEmployeeShift* GetOwnedEmployee(AAICharacterBase* Employee);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EShiftType GetCurrentShift();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAssignedTasksInfo GetAssignedTaskInfo(UEmployeeShift* Employee, int32 Priority);
    
    UFUNCTION(BlueprintCallable)
    bool ForceNextTask(UEmployeeShift* Employee);
    
    UFUNCTION(BlueprintCallable)
    void EmployeeHired(AAICharacterBase* Employee);
    
    UFUNCTION(BlueprintCallable)
    void EmployeeFired(AAICharacterBase* FiredEmployee);
    
    UFUNCTION(BlueprintCallable)
    void CreateSetEmployeeShift(AAICharacterBase* Employee);
    
    UFUNCTION(BlueprintCallable)
    void CheckSetCurrentShift(int32 Hour);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckIfHasShiftConsent(UEmployeeShift* Employee);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckIfCanMoveToNextTask(AAICharacterBase* Employee, int32& NewTaskIndex, bool& bCurrentTaskConsent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAssignEmployeeShift(UEmployeeShift* EmployeeShift, FText& AlertToShow, float& Duration);
    
    UFUNCTION(BlueprintCallable)
    void AssignNewEmployeeTask_byTaskEnum(UEmployeeShift* EmployeeShift, int32 Priority, EEmployeeTask TaskToAssign, bool bActive);
    
    UFUNCTION(BlueprintCallable)
    void AssignNewEmployeeTask_bySPtr(UEmployeeShift* EmployeeShift, int32 Priority, TSoftClassPtr<UEmployeeTask> TaskToAssign, bool bActive);
    
    UFUNCTION(BlueprintCallable)
    void AssignNewEmployeeTask_bySkill(UEmployeeShift* EmployeeShift, int32 Priority, EEmployeeSkill TaskSkillToAssign, bool bActive);
    
    UFUNCTION(BlueprintCallable)
    void AddOwnedEmployee(UEmployeeShift* NewEmployee);
    
    UFUNCTION(BlueprintCallable)
    void AddAsTargetActor(AInteractableBuilding* NewBuilding, EEmployeeTask TaskType);
    
};

