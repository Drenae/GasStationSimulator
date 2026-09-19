#pragma once
#include "CoreMinimal.h"
#include "ObjectiveBase.h"
#include "Templates/SubclassOf.h"
#include "OpenMailObjective.generated.h"

class UGSSMail;

UCLASS(Blueprintable)
class GSS2_API UOpenMailObjective : public UObjectiveBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGSSMail> MailClassToOpen;
    
    UOpenMailObjective();

protected:
    UFUNCTION(BlueprintCallable)
    void OnMailOpened(TSubclassOf<UGSSMail> MailClass);
    
};

