#pragma once
#include "CoreMinimal.h"
#include "OnPlannedDecalChangedDelegate.generated.h"

class ADecalToPaint;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlannedDecalChanged, ADecalToPaint*, DecalActorRef, bool, bAddDecal);

