#pragma once
#include "CoreMinimal.h"
#include "OnCustomerEatenDelegate.generated.h"

class AShark;
class AWaterVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCustomerEaten, AShark*, Shark, AWaterVehicle*, EatenCustomer);

