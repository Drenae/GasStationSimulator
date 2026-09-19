#pragma once
#include "CoreMinimal.h"
#include "NPAnimalBase.h"
#include "Cow.generated.h"

UCLASS(Abstract, Blueprintable)
class NOPEAISYSTEM_API ACow : public ANPAnimalBase {
    GENERATED_BODY()
public:
    ACow(const FObjectInitializer& ObjectInitializer);

};

