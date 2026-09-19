#pragma once
#include "CoreMinimal.h"
#include "ObjectiveBase.h"
#include "EnterQuestZoneObjective.generated.h"

class UWorld;

UCLASS(Blueprintable)
class GSS2_API UEnterQuestZoneObjective : public UObjectiveBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> Level;
    
    UEnterQuestZoneObjective();

    UFUNCTION(BlueprintCallable)
    void FOnLevelQuestZoneTriggered(FName LevelName);
    
};

