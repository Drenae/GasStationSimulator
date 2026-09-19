#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "CollectibleCardStruct.h"
#include "CollectiblesSlotStruct.h"
#include "CollectiblesInventoryComponent.generated.h"

class ACollectibleCard;
class UCollectibleItemsManager;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class COLLECTIBLEITEMS_API UCollectiblesInventoryComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InventoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCollectiblesSlotStruct> CollectibleSlots;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCollectibleItemsManager* CollectibleItemsManager;
    
public:
    UCollectiblesInventoryComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SortCardsByStrength();
    
    UFUNCTION(BlueprintCallable)
    void SortCardsByLastAdded();
    
    UFUNCTION(BlueprintCallable)
    int32 RemoveCollectibleCard(FCollectibleCardStruct CollectibleCardStruct, int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    bool IsCardOwned(TSoftClassPtr<ACollectibleCard> CardToCheck);
    
    UFUNCTION(BlueprintCallable)
    void GetAllCardStructs(TArray<FCollectibleCardStruct>& CardsClasses);
    
    UFUNCTION(BlueprintCallable)
    void AddFoundCards(TArray<FCollectibleCardStruct> FoundCards);
    
    UFUNCTION(BlueprintCallable)
    int32 AddCollectibleCard(FCollectibleCardStruct CollectibleCardStruct, int32 Amount);
    
};

