#pragma once
#include "CoreMinimal.h"
#include "GasStationProduct.h"
#include "RentableItem.generated.h"

UCLASS(Blueprintable)
class GSS2_API ARentableItem : public AGasStationProduct {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentDurability;
    
public:
    ARentableItem(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCurrentDurability(float NewCurrentDurability);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentDurability();
    
};

