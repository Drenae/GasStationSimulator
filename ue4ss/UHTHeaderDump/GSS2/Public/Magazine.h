#pragma once
#include "CoreMinimal.h"
#include "House.h"
#include "Magazine.generated.h"

UCLASS(Blueprintable)
class GSS2_API AMagazine : public AHouse {
    GENERATED_BODY()
public:
    AMagazine(const FObjectInitializer& ObjectInitializer);

};

