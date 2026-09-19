#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "ECustomerType.h"
#include "EInteractableTaskType.h"
#include "GeneralTask.h"
#include "DA_AITasksInfo.generated.h"

class UDA_SpecificAITask;
class UIteractableActorTask;
class UObject;

UCLASS(Blueprintable)
class GSS2_API UDA_AITasksInfo : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDA_SpecificAITask*> AITasksInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGeneralTask> GeneralCustomerTasks;
    
    UDA_AITasksInfo();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    UDA_SpecificAITask* GetTaskByCustomerType(const UObject* WorldContextObject, const ECustomerType CustomerType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<UIteractableActorTask> GetGeneralTaskByInteractableTaskType(const EInteractableTaskType InteractableTaskType);
    
};

