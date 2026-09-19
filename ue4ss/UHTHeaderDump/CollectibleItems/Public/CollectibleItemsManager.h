#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "CollectibleCardAccessibility.h"
#include "ColllectibleCardAddDelegate.h"
#include "ColllectibleCardRemoveDelegate.h"
#include "ColllectibleCardsFoundDelegate.h"
#include "CollectibleItemsManager.generated.h"

class ACollectibleCard;
class UCollectiblesInventoryComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class COLLECTIBLEITEMS_API UCollectibleItemsManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColllectibleCardAdd OnCollectibleCardAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColllectibleCardRemove OnColllectibleCardRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColllectibleCardsFound OnCollectibleCardsFound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCollectibleCardAccessibility> AllCollectibleCards;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ACollectibleCard*> SpawnedCards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<ACollectibleCard>> RemovedCards;
    
public:
    UCollectibleItemsManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRemovedCard(TArray<TSoftObjectPtr<ACollectibleCard>> NewArray);
    
    UFUNCTION(BlueprintCallable)
    void SetCardAccessibility(TSoftClassPtr<ACollectibleCard> CollectibleCard, bool NewIsUnlocked);
    
    UFUNCTION(BlueprintCallable)
    void RandomCards(int32 MinRandomAmount, int32 MaxRandomAmount, int32 ChanceToGet, UCollectiblesInventoryComponent* CollectiblesInventoryComponent, TArray<FCollectibleCardAccessibility>& DrawnCards, bool RandomOnlyUnlockedCards, const bool RandomOnlyNotOwnedCards);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ACollectibleCard*> GetSpawnedCards();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSoftObjectPtr<ACollectibleCard>> GetRemovedCards();
    
};

