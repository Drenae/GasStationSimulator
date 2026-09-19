#pragma once
#include "CoreMinimal.h"
#include "Product.h"
#include "BuildingBlueprint.generated.h"

UCLASS(Blueprintable)
class GSS2_API ABuildingBlueprint : public AProduct {
    GENERATED_BODY()
public:
    ABuildingBlueprint(const FObjectInitializer& ObjectInitializer);

};

