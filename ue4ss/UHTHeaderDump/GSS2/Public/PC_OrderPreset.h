#pragma once
#include "CoreMinimal.h"
#include "BasketItemStruct.h"
#include "GSSInnerWidget.h"
#include "OrderPreset.h"
#include "PC_OrderPreset.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UPC_OrderPreset : public UGSSInnerWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOrderPreset OrderPreset;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ButtonIndex;
    
    UPC_OrderPreset();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateText();
    
    UFUNCTION(BlueprintCallable)
    void SetPreset(TArray<FBasketItemStruct> BasketItems);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOrderPreset GetOrderPreset();
    
};

