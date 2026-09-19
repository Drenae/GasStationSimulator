#pragma once
#include "CoreMinimal.h"
#include "EBuildingType.h"
#include "EDLCName.h"
#include "EInteractableTaskType.h"
#include "SpecificDLCShoppingTasks.h"
#include "SpecificShoppingTypeTask.generated.h"

class UIteractableActorTask;

USTRUCT(BlueprintType)
struct FSpecificShoppingTypeTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDLCRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDLCName DLCRequiredName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpecificDLCShoppingTasks> ShoppingTasks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractableTaskType InteractableTaskType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UIteractableActorTask> Task;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBuildingType RequiredBuilding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PercentChance;
    
    GSS2_API FSpecificShoppingTypeTask();
};

