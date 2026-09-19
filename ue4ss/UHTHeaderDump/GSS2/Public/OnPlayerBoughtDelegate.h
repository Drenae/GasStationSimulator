#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OnPlayerBoughtDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerBought, TSubclassOf<AActor>, BoughtActorClass, const int32, Amount);

