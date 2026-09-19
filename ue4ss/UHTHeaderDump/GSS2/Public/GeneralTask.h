#pragma once
#include "CoreMinimal.h"
#include "EInteractableTaskType.h"
#include "GeneralTask.generated.h"

class UIteractableActorTask;

USTRUCT(BlueprintType)
struct FGeneralTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractableTaskType InteractableTaskType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UIteractableActorTask> Task;
    
    GSS2_API FGeneralTask();
};

