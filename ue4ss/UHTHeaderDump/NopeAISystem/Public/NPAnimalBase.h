#pragma once
#include "CoreMinimal.h"
#include "NPAICharacterBase.h"
#include "NPAnimalBase.generated.h"

UCLASS(Abstract, Blueprintable)
class NOPEAISYSTEM_API ANPAnimalBase : public ANPAICharacterBase {
    GENERATED_BODY()
public:
    ANPAnimalBase(const FObjectInitializer& ObjectInitializer);

};

