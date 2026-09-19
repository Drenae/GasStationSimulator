#pragma once
#include "CoreMinimal.h"
#include "ENPAIMovementSpeed.h"
#include "NPAITaskProgress.h"
#include "NPTaskFinishReason.h"
#include "NPAITaskStruct.generated.h"

class AActor;
class UNPAITaskBase;

USTRUCT(BlueprintType)
struct NOPEAISYSTEM_API FNPAITaskStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UNPAITaskBase> AITaskBaseClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENPAIMovementSpeed AIMovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNPAITaskProgress> TasksProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNPTaskFinishReason> TaskFinishReasons;
    
    FNPAITaskStruct();
};

