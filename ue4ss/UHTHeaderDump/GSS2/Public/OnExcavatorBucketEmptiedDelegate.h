#pragma once
#include "CoreMinimal.h"
#include "OnExcavatorBucketEmptiedDelegate.generated.h"

class ADigger;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnExcavatorBucketEmptied, ADigger*, Excavator);

