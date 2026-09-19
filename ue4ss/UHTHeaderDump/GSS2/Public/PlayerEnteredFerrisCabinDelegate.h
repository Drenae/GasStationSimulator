#pragma once
#include "CoreMinimal.h"
#include "PlayerEnteredFerrisCabinDelegate.generated.h"

class AFerrisCabin;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerEnteredFerrisCabin, AFerrisCabin*, FerricCabin);

