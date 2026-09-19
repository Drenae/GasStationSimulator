#pragma once
#include "CoreMinimal.h"
#include "NPAnimalBase.h"
#include "Pig.generated.h"

UCLASS(Abstract, Blueprintable)
class NOPEAISYSTEM_API APig : public ANPAnimalBase {
    GENERATED_BODY()
public:
    APig(const FObjectInitializer& ObjectInitializer);

};

