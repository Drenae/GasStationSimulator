#pragma once
#include "CoreMinimal.h"
#include "GameAction.h"
#include "Templates/SubclassOf.h"
#include "SendEmailGameAction.generated.h"

class UGSSMail;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API USendEmailGameAction : public UGameAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGSSMail> MailClass;
    
    USendEmailGameAction();

};

