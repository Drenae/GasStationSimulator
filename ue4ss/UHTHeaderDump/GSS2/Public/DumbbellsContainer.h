#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "DumbbellContainerWeightChangedDelegate.h"
#include "DumbbellPlacedInContainerDelegate.h"
#include "EDumbbellContainerType.h"
#include "DumbbellsContainer.generated.h"

class ADumbbellItem;
class ARvMinigameInWorld_Dumbbells;
class UDumbbellSlotComponent;

UCLASS(Blueprintable)
class GSS2_API ADumbbellsContainer : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDumbbellPlacedInContainer OnDumbbellPlacedInContainer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDumbbellContainerWeightChanged OnWeightChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDumbbellContainerType ContainerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARvMinigameInWorld_Dumbbells* DumbbellsMinigame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UDumbbellSlotComponent*> Slots;
    
public:
    ADumbbellsContainer(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateWeight(UDumbbellSlotComponent* ChangedSlot, ADumbbellItem* NewItem);
    
public:
    UFUNCTION(BlueprintCallable)
    bool TryToPlaceDumbbell(ADumbbellItem* DumbbellItem);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMoveModeEnabled(bool bEnabled, ADumbbellItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Init(ARvMinigameInWorld_Dumbbells* minigame);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UDumbbellSlotComponent*> GetSlots() const;
    
    UFUNCTION(BlueprintCallable)
    EDumbbellContainerType GetContainerType();
    
    UFUNCTION(BlueprintCallable)
    bool CanPlaceItemHere(ADumbbellItem* DumbbellItem, UDumbbellSlotComponent*& OutSlot);
    
};

