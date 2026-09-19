#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "DepartureScreensTutorial.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GSS2_API UDepartureScreensTutorial : public UUserWidget {
    GENERATED_BODY()
public:
    UDepartureScreensTutorial();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ForceShowTutorial();
    
};

