#pragma once
#include "CoreMinimal.h"
#include "GameAction.h"
#include "SetJerryCanFuelGameAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API USetJerryCanFuelGameAction : public UGameAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JerryCanFuel;
    
    USetJerryCanFuelGameAction();

};

