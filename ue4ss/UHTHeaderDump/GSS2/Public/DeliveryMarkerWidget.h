#pragma once
#include "CoreMinimal.h"
#include "GSSBaseWidget.h"
#include "DeliveryMarkerWidget.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UDeliveryMarkerWidget : public UGSSBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Owner;
    
    UDeliveryMarkerWidget();

};

