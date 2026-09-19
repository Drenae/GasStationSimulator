#pragma once
#include "CoreMinimal.h"
#include "EDLCName.h"
#include "ObjectiveBase.h"
#include "WaitForDialogToFinishObjective.generated.h"

UCLASS(Blueprintable)
class GSS2_API UWaitForDialogToFinishObjective : public UObjectiveBase {
    GENERATED_BODY()
public:
    UWaitForDialogToFinishObjective();

protected:
    UFUNCTION(BlueprintCallable)
    void OnDialogRequestFinishActiveObjective(EDLCName RelatedDLC);
    
};

