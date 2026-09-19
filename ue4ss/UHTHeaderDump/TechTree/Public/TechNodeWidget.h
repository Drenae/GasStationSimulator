#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "TechNodeWidget.generated.h"

class UTechnologyAsset;

UCLASS(Blueprintable, EditInlineNew)
class TECHTREE_API UTechNodeWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTechnologyAsset* TechnologyAsset;
    
    UTechNodeWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTechNodeInitialized();
    
};

