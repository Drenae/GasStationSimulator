#pragma once
#include "CoreMinimal.h"
#include "CountableObjectiveBase.h"
#include "EmptyTrashContainerObjective.generated.h"

class ATrashBin;

UCLASS(Blueprintable)
class GSS2_API UEmptyTrashContainerObjective : public UCountableObjectiveBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ATrashBin> TrashContainerClass;
    
    UEmptyTrashContainerObjective();

protected:
    UFUNCTION(BlueprintCallable)
    void OnTrashBinEmptied(ATrashBin* TrashBin);
    
};

