#pragma once
#include "CoreMinimal.h"
#include "RVEmployeeAssignment.h"
#include "OnAssignmentUpdatedDelegate.generated.h"

class ARVCampEmployee;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnAssignmentUpdated, const ARVCampEmployee*, Employee, const FRVEmployeeAssignment, NewAssignment, const FRVEmployeeAssignment, PreviousAssignment, const int32, SlotIndex);

