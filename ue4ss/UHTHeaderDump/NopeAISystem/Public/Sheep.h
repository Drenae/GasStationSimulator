#pragma once
#include "CoreMinimal.h"
#include "NPAnimalBase.h"
#include "Sheep.generated.h"

UCLASS(Abstract, Blueprintable)
class NOPEAISYSTEM_API ASheep : public ANPAnimalBase {
    GENERATED_BODY()
public:
    ASheep(const FObjectInitializer& ObjectInitializer);

};

