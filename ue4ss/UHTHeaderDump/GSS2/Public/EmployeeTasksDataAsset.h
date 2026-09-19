#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EEmployeeSkill.h"
#include "EEmployeeTask.h"
#include "EShiftType.h"
#include "EmployeeTaskInfo.h"
#include "ShiftsAvailable.h"
#include "EmployeeTasksDataAsset.generated.h"

class UEmployeeTask;
class UTaskBase;

UCLASS(Blueprintable)
class GSS2_API UEmployeeTasksDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEmployeeTaskInfo> EmployeeTasks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShiftsAvailable> ShiftsInfo;
    
    UEmployeeTasksDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEmployeeTaskInfo GetTaskInfo_bySkill(EEmployeeSkill TaskToFind);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEmployeeTaskInfo GetTaskInfo_byRef(UTaskBase* TaskToFind);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEmployeeTaskInfo GetTaskInfo_byPtr(TSoftClassPtr<UEmployeeTask> TaskToFind);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEmployeeTaskInfo GetTaskInfo_byETask(EEmployeeTask TaskToFind);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStartShiftHour(EShiftType ShiftType);
    
};

