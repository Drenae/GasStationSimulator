#pragma once
#include "CoreMinimal.h"
#include "TaskProgress.h"
#include "Templates/SubclassOf.h"
#include "TaskStruct.generated.h"

class AActor;
class UTaskBase;

USTRUCT(BlueprintType)
struct GSS2_API FTaskStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTaskBase> TaskBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTaskProgress> TasksProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldFinishOnGameLoad;
    
    FTaskStruct();
};

