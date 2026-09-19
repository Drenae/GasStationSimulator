#pragma once
#include "CoreMinimal.h"
#include "GSSInnerWidget.h"
#include "KeyItemAction.h"
#include "Templates/SubclassOf.h"
#include "KeyItemBindWidget.generated.h"

class UHorizontalBox;
class UKeyBindedAction;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UKeyItemBindWidget : public UGSSInnerWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* PREFIX_TXT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKeyBindedAction* KeyBindedAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* SOFIX_TXT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* AdditionalHorizontal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKeyBindedAction* KeyBindedAction_Additional;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UKeyBindedAction> BindedActionClass;
    
    UKeyItemBindWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateInfo(FKeyItemAction KeyItemAction);
    
    UFUNCTION(BlueprintCallable)
    void CheckKeyInfos();
    
};

