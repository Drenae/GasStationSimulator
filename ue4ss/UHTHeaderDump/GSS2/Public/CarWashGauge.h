#pragma once
#include "CoreMinimal.h"
#include "GSSWorldObject.h"
#include "CarWashGauge.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class GSS2_API ACarWashGauge : public AGSSWorldObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Needle;
    
public:
    ACarWashGauge(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateGaugePosition(float Percentage);
    
};

