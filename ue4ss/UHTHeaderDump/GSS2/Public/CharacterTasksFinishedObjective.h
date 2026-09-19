#pragma once
#include "CoreMinimal.h"
#include "CountableObjectiveBase.h"
#include "ETaskResult.h"
#include "Templates/SubclassOf.h"
#include "CharacterTasksFinishedObjective.generated.h"

class AAICharacterBase;
class UTaskBase;

UCLASS(Blueprintable)
class GSS2_API UCharacterTasksFinishedObjective : public UCountableObjectiveBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTaskBase> ObjectiveTaskClass;
    
    UCharacterTasksFinishedObjective();

protected:
    UFUNCTION(BlueprintCallable)
    void OnAITaskFinished(AAICharacterBase* AICharacter, TSubclassOf<UTaskBase> TaskClass, ETaskResult TaskResult);
    
};

