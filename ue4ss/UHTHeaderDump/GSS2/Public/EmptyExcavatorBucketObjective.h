#pragma once
#include "CoreMinimal.h"
#include "ObjectiveBase.h"
#include "EmptyExcavatorBucketObjective.generated.h"

class ADigger;

UCLASS(Blueprintable)
class GSS2_API UEmptyExcavatorBucketObjective : public UObjectiveBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ADigger> ExcavatorInstance;
    
    UEmptyExcavatorBucketObjective();

    UFUNCTION(BlueprintCallable)
    void OnExcavatorBucketEmptied(ADigger* Excavator);
    
};

