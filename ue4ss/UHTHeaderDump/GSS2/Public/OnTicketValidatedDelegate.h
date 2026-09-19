#pragma once
#include "CoreMinimal.h"
#include "OnTicketValidatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTicketValidated, bool, bFake);

