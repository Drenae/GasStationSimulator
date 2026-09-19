#pragma once
#include "CoreMinimal.h"
#include "NPAnimalBase.h"
#include "Goat.generated.h"

UCLASS(Abstract, Blueprintable)
class NOPEAISYSTEM_API AGoat : public ANPAnimalBase {
    GENERATED_BODY()
public:
    AGoat(const FObjectInitializer& ObjectInitializer);

};

