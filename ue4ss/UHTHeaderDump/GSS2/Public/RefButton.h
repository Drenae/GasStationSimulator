#pragma once
#include "CoreMinimal.h"
#include "GSSButton.h"
#include "OnButtonClickedRefDelegateDelegate.h"
#include "RefButton.generated.h"

class UUserWidget;

UCLASS(Blueprintable)
class GSS2_API URefButton : public UGSSButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnButtonClickedRefDelegate OnClickedReferenced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* WidgetParent;
    
    URefButton();

};

