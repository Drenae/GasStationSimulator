#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=DynamicEntryBoxBase -FallbackName=DynamicEntryBoxBase
#include "Templates/SubclassOf.h"
#include "CommonBoundActionBar.generated.h"

class UCommonBoundActionButton;

UCLASS(Blueprintable)
class COMMONUI_API UCommonBoundActionBar : public UDynamicEntryBoxBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonBoundActionButton> ActionButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayOwningPlayerActionsOnly;
    
public:
    UCommonBoundActionBar();

    UFUNCTION(BlueprintCallable)
    void SetDisplayOwningPlayerActionsOnly(bool bShouldOnlyDisplayOwningPlayerActions);
    
};

