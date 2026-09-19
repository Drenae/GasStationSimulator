#pragma once
#include "CoreMinimal.h"
#include "DLCOwnershipData.h"
#include "OnQueryDLCOwnershipFinishedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnQueryDLCOwnershipFinished, bool, bSuccesfull, const TArray<FDLCOwnershipData>&, OwnershipArray);

