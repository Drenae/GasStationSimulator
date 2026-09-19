#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "EconomyChartButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UEconomyChartButton : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float money;
    
    UEconomyChartButton();

};

