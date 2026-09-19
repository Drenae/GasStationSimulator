#pragma once
#include "CoreMinimal.h"
#include "OnMovableDecorationPlacedDelegate.generated.h"

class ADecorationBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMovableDecorationPlaced, ADecorationBase*, Decoration);

