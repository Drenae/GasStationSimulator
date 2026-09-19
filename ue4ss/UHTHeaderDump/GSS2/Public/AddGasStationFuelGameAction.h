#pragma once
#include "CoreMinimal.h"
#include "GameAction.h"
#include "AddGasStationFuelGameAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UAddGasStationFuelGameAction : public UGameAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FuelToAdd;
    
    UAddGasStationFuelGameAction();

};

