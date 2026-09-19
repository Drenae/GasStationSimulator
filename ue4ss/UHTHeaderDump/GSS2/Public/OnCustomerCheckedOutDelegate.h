#pragma once
#include "CoreMinimal.h"
#include "OnCustomerCheckedOutDelegate.generated.h"

class ARVCampSpot;
class URVCustomerData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCustomerCheckedOut, URVCustomerData*, CustomerData, ARVCampSpot*, CampSpot);

