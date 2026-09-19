#pragma once
#include "CoreMinimal.h"
#include "KeyItem.h"
#include "JerryCan.generated.h"

class AFuelEnter;

UCLASS(Blueprintable)
class GSS2_API AJerryCan : public AKeyItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxFuel;
    
    AJerryCan(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SnapToFuelEnterAndFueling(AFuelEnter* FuelEnter);
    
    UFUNCTION(BlueprintCallable)
    void SetFuel(float Fuel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFuel();
    
};

