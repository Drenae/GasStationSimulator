#pragma once
#include "CoreMinimal.h"
#include "SavedFinishedObjectives.generated.h"

class UObjectiveBase;

USTRUCT(BlueprintType)
struct FSavedFinishedObjectives {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UObjectiveBase>> SavedFinishedObjectivesObjectives;
    
    GSS2_API FSavedFinishedObjectives();
};

