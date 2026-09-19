#pragma once
#include "CoreMinimal.h"
#include "GSSBaseWidget.h"
#include "GSSInnerWidget.generated.h"

class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UGSSInnerWidget : public UGSSBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* ParentWidgetREF;
    
    UGSSInnerWidget();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetParentOfWidget();
    
};

