#pragma once
#include "CoreMinimal.h"
#include "KeyItem.h"
#include "Laptop.generated.h"

UCLASS(Blueprintable)
class GSS2_API ALaptop : public AKeyItem {
    GENERATED_BODY()
public:
    ALaptop(const FObjectInitializer& ObjectInitializer);

};

