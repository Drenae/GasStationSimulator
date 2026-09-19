#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "AirstripTradeWidget.generated.h"

class ATradingAirplane;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UAirstripTradeWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATradingAirplane* TradingAirplane;
    
    UAirstripTradeWidget();

};

