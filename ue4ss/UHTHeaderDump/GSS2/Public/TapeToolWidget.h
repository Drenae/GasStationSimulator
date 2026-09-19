#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "TapeToolWidget.generated.h"

class ATapeTool;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GSS2_API UTapeToolWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATapeTool* OwningTapeTool;
    
public:
    UTapeToolWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOwnerTapeLenghtChanged(float CurrentTapeLenght);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeWidget(ATapeTool* _OwningTapeTool);
    
};

