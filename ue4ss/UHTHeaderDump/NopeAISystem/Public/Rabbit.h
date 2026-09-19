#pragma once
#include "CoreMinimal.h"
#include "NPAnimalBase.h"
#include "Rabbit.generated.h"

UCLASS(Abstract, Blueprintable)
class NOPEAISYSTEM_API ARabbit : public ANPAnimalBase {
    GENERATED_BODY()
public:
    ARabbit(const FObjectInitializer& ObjectInitializer);

};

