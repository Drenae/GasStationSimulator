#pragma once
#include "CoreMinimal.h"
#include "Product.h"
#include "Screw.generated.h"

UCLASS(Blueprintable)
class GSS2_API AScrew : public AProduct {
    GENERATED_BODY()
public:
    AScrew(const FObjectInitializer& ObjectInitializer);

};

