#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CollectibleItems -ObjectName=CollectibleCardStruct -FallbackName=CollectibleCardStruct
#include "BasketItemStruct.h"
#include "GSSInnerWidget.h"
#include "OnAmmountChangedDelegate.h"
#include "OnCardRemovedDelegate.h"
#include "PC_OrderList_Position.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UPC_OrderList_Position : public UGSSInnerWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAmmountChanged OnAmmountChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCardRemoved OnCardRemoved;
    
    UPC_OrderList_Position();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePosition(FBasketItemStruct Item);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCardPosition(FCollectibleCardStruct Card);
    
};

