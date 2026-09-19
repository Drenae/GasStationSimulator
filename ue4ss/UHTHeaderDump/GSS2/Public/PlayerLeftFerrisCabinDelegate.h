#pragma once
#include "CoreMinimal.h"
#include "PlayerLeftFerrisCabinDelegate.generated.h"

class AFerrisCabin;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerLeftFerrisCabin, AFerrisCabin*, FerricCabin);

