#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Character -FallbackName=Character
#include "AnimalBase.generated.h"

UCLASS(Abstract, Blueprintable)
class AAnimalBase : public ACharacter {
    GENERATED_BODY()
public:
    AAnimalBase(const FObjectInitializer& ObjectInitializer);

};

