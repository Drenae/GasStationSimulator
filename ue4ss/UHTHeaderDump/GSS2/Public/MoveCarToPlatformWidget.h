#pragma once
#include "CoreMinimal.h"
#include "GSSBaseWidget.h"
#include "MoveCarToPlatformWidget.generated.h"

class AJunkyardCarWreckCustomizable;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UMoveCarToPlatformWidget : public UGSSBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AJunkyardCarWreckCustomizable* PickedCar;
    
    UMoveCarToPlatformWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupWidget();
    
};

