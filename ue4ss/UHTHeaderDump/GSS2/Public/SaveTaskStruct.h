#pragma once
#include "CoreMinimal.h"
#include "SavedDefaultActor.h"
#include "TaskProgress.h"
#include "Templates/SubclassOf.h"
#include "SaveTaskStruct.generated.h"

class UTaskBase;

USTRUCT(BlueprintType)
struct GSS2_API FSaveTaskStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTaskBase> TaskBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTaskProgress> TaskProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedDefaultActor SavedDefaultActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldFinishOnGameLoad;
    
    FSaveTaskStruct();
};

