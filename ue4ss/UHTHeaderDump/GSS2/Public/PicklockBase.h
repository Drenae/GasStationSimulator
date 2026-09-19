#pragma once
#include "CoreMinimal.h"
#include "KeyItem.h"
#include "PicklockBase.generated.h"

UCLASS(Blueprintable)
class GSS2_API APicklockBase : public AKeyItem {
    GENERATED_BODY()
public:
    APicklockBase(const FObjectInitializer& ObjectInitializer);

};

