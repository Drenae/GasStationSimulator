#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OnMailSendDelegate.generated.h"

class UGSSMail;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMailSend, TSubclassOf<UGSSMail>, MailClass);

