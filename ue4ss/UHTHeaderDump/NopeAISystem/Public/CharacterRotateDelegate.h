#pragma once
#include "CoreMinimal.h"
#include "CharacterRotateDelegate.generated.h"

class ANPAICharacterBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FCharacterRotate, const bool, IsRotating, ANPAICharacterBase*, InNPAICharacterBase, const float, Direction_Z);

