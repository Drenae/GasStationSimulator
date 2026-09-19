#pragma once
#include "CoreMinimal.h"
#include "ItemBox.h"
#include "SupBox.generated.h"

class UInventoryComponent;

UCLASS(Blueprintable)
class GSS2_API ASupBox : public AItemBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBePickedUp;
    
    ASupBox(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateItemBox();
    
    UFUNCTION(BlueprintCallable)
    void OnInventoryUpdated_CheatCheck(const UInventoryComponent* Inventory);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeInventory(UInventoryComponent* Inventory);
    
};

