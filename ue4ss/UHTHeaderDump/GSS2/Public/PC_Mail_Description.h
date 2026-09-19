#pragma once
#include "CoreMinimal.h"
#include "GSSInnerWidget.h"
#include "Templates/SubclassOf.h"
#include "PC_Mail_Description.generated.h"

class UGSSMail;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UPC_Mail_Description : public UGSSInnerWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Title_TXT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* MAIL_DESCRIPTION;
    
    UPC_Mail_Description();

    UFUNCTION(BlueprintCallable)
    void SetDescription(TSubclassOf<UGSSMail> MailClass);
    
    UFUNCTION(BlueprintCallable)
    void NativeConstruct();
    
};

