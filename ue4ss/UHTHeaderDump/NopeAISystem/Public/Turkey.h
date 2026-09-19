#pragma once
#include "CoreMinimal.h"
#include "NPAnimalBase.h"
#include "Turkey.generated.h"

UCLASS(Abstract, Blueprintable)
class NOPEAISYSTEM_API ATurkey : public ANPAnimalBase {
    GENERATED_BODY()
public:
    ATurkey(const FObjectInitializer& ObjectInitializer);

};

