#pragma once
#include "CoreMinimal.h"
#include "AdditionalKeyItemWidget.h"
#include "TowyWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GSS2_API UTowyWidget : public UAdditionalKeyItemWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsMagnetMode;
    
public:
    UTowyWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowTowyTutorial();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeTowyMode(const bool bIsMagnetMode);
    
};

