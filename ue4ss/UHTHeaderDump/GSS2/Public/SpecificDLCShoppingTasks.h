#pragma once
#include "CoreMinimal.h"
#include "EInteractableTaskType.h"
#include "SpecificDLCShoppingTasks.generated.h"

class UIteractableActorTask;

USTRUCT(BlueprintType)
struct FSpecificDLCShoppingTasks {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractableTaskType InteractableTaskType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UIteractableActorTask> Task;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredBuildingLevel;
    
    GSS2_API FSpecificDLCShoppingTasks();
};

