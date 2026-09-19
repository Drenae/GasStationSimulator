#pragma once
#include "CoreMinimal.h"
#include "EEmployeeTask.h"
#include "AssignedTasksInfo.generated.h"

class AInteractableBuilding;
class UEmployeeTask;

USTRUCT(BlueprintType)
struct FAssignedTasksInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEmployeeTask TaskType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UEmployeeTask> Task;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTaskActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AInteractableBuilding>> TargetActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> TargetActorsPathNames;
    
    GSS2_API FAssignedTasksInfo();
};

