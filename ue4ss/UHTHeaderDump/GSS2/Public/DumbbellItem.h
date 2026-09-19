#pragma once
#include "CoreMinimal.h"
#include "DumbbellItemSlotChangedDelegate.h"
#include "Item.h"
#include "DumbbellItem.generated.h"

class ADumbbellsContainer;
class UDumbbellSlotComponent;

UCLASS(Blueprintable)
class GSS2_API ADumbbellItem : public AItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDumbbellItemSlotChanged OnSlotChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UDumbbellSlotComponent> Slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UDumbbellSlotComponent> PreviousSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
public:
    ADumbbellItem(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDumbbellSlotComponent* GetSlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDumbbellSlotComponent* GetPreviousSlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ADumbbellsContainer* GetContainer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanMove() const;
    
};

