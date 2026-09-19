#pragma once
#include "CoreMinimal.h"
#include "NPAnimalBase.h"
#include "Chicken.generated.h"

UCLASS(Abstract, Blueprintable)
class NOPEAISYSTEM_API AChicken : public ANPAnimalBase {
    GENERATED_BODY()
public:
    AChicken(const FObjectInitializer& ObjectInitializer);

};

