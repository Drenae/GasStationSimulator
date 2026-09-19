#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OnMailOpenedDelegate.generated.h"

class UGSSMail;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMailOpened, TSubclassOf<UGSSMail>, MailClass);

