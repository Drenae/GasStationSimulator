#pragma once
#include "CoreMinimal.h"
#include "PcBaseTab.h"
#include "PC_Mail.generated.h"

class UPC_Mail_Description;
class UPC_Mail_Position;
class URefButton;
class UUserWidget;
class UWrapBox;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UPC_Mail : public UPcBaseTab {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPC_Mail_Position> ClassToCreate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWrapBox* MailsWrapBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPC_Mail_Description* MailDescription;
    
    UPC_Mail();

private:
    UFUNCTION(BlueprintCallable)
    void OpenMail(URefButton* Button, UUserWidget* Mail);
    
};

