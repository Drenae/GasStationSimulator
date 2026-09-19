#pragma once
#include "CoreMinimal.h"
#include "AIBaseController.h"
#include "AnimalController.generated.h"

UCLASS(Blueprintable)
class GSS2_API AAnimalController : public AAIBaseController {
    GENERATED_BODY()
public:
    AAnimalController(const FObjectInitializer& ObjectInitializer);

};

