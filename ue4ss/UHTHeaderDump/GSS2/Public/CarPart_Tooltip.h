#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CarPart_Tooltip.generated.h"

class UJunkyardCarPartCustomizable;

UCLASS(Blueprintable)
class GSS2_API ACarPart_Tooltip : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRightVector;
    
    ACarPart_Tooltip(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupWidget(UJunkyardCarPartCustomizable* OwnerPart);
    
};

