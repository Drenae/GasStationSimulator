#pragma once
#include "CoreMinimal.h"
#include "CountableObjectiveBase.h"
#include "FuelCarsObjective.generated.h"

class AAICharacterBase;

UCLASS(Blueprintable)
class GSS2_API UFuelCarsObjective : public UCountableObjectiveBase {
    GENERATED_BODY()
public:
    UFuelCarsObjective();

protected:
    UFUNCTION(BlueprintCallable)
    void OnCustomerCarFueled(AAICharacterBase* Customer);
    
};

