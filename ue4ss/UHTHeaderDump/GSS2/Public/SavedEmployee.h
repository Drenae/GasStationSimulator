#pragma once
#include "CoreMinimal.h"
#include "AssignedTasksInfo.h"
#include "EShiftType.h"
#include "SavedEmployee.generated.h"

class AAICharacterBase;

USTRUCT(BlueprintType)
struct FSavedEmployee {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AAICharacterBase> Employee;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAssignedTasksInfo> EmployeeTasks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> TargetActorsPathNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShiftType AssignedShift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutopay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentTaskPriority;
    
    GSS2_API FSavedEmployee();
};

