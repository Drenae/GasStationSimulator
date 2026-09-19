#pragma once
#include "CoreMinimal.h"
#include "PilotCharacter.h"
#include "FE_PilotCharacter.generated.h"

UCLASS(Blueprintable)
class GSS2_API AFE_PilotCharacter : public APilotCharacter {
    GENERATED_BODY()
public:
    AFE_PilotCharacter(const FObjectInitializer& ObjectInitializer);

};

