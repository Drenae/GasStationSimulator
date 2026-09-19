#ifndef UE4SS_SDK_CollectibleItems_HPP
#define UE4SS_SDK_CollectibleItems_HPP

struct FCollectibleCardAccessibility
{
    TSoftClassPtr<ACollectibleCard> CollectibleCard;                                  // 0x0000 (size: 0x28)
    bool bIsUnlocked;                                                                 // 0x0028 (size: 0x1)

}; // Size: 0x30

struct FCollectibleCardStruct
{
    FCollectibleStruct CollectibleStruct;                                             // 0x0000 (size: 0x90)
    FCollectibleCardsValueStruct CollectibleCardsValuesStruct;                        // 0x0090 (size: 0x4)

}; // Size: 0x98

struct FCollectibleCardsValueStruct
{
    int32 Strength;                                                                   // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FCollectibleStruct
{
    TSoftObjectPtr<class UTexture2D> Texture;                                         // 0x0000 (size: 0x28)
    float Price;                                                                      // 0x0028 (size: 0x4)
    FText Name;                                                                       // 0x0030 (size: 0x18)
    FText Description;                                                                // 0x0048 (size: 0x18)
    TSoftClassPtr<ACollectibleCard> CollectibleCard;                                  // 0x0060 (size: 0x28)
    bool isOwned;                                                                     // 0x0088 (size: 0x1)
    int32 WhenCollected;                                                              // 0x008C (size: 0x4)

}; // Size: 0x90

struct FCollectiblesSlotStruct
{
    FCollectibleCardStruct CollectibleCardStruct;                                     // 0x0000 (size: 0x98)
    int32 QuantityItem;                                                               // 0x0098 (size: 0x4)
    int32 LastAdded;                                                                  // 0x009C (size: 0x4)

}; // Size: 0xA0

class ACollectible : public AActor
{
    class UStaticMeshComponent* StaticMeshComp;                                       // 0x0220 (size: 0x8)

}; // Size: 0x228

class ACollectibleCard : public ACollectible
{
    FCollectibleCardStruct CollectibleCardStruct;                                     // 0x0228 (size: 0x98)

    void CollectCard();
    void CardFound();
}; // Size: 0x2C0

class ICollectibleItemsInteraction : public IInterface
{

    class UCollectibleItemsManager* GetCollectibleItemsManager();
}; // Size: 0x28

class UCollectibleItemsManager : public UActorComponent
{
    FCollectibleItemsManagerOnCollectibleCardAdded OnCollectibleCardAdded;            // 0x00B0 (size: 0x10)
    void ColllectibleCardAdd(FCollectibleCardStruct CollectedCard);
    FCollectibleItemsManagerOnColllectibleCardRemoved OnColllectibleCardRemoved;      // 0x00C0 (size: 0x10)
    void ColllectibleCardRemove(FCollectibleCardStruct RemovedCard);
    FCollectibleItemsManagerOnCollectibleCardsFound OnCollectibleCardsFound;          // 0x00D0 (size: 0x10)
    void ColllectibleCardsFound(TArray<FCollectibleCardStruct> FoundCards, class UCollectiblesInventoryComponent* InventoryComponent);
    TArray<FCollectibleCardAccessibility> AllCollectibleCards;                        // 0x00E0 (size: 0x10)
    TArray<ACollectibleCard*> SpawnedCards;                                           // 0x00F0 (size: 0x10)
    TArray<TSoftObjectPtr<class ACollectibleCard>> RemovedCards;                      // 0x0100 (size: 0x10)

    void SetRemovedCard(TArray<TSoftObjectPtr<class ACollectibleCard>> NewArray);
    void SetCardAccessibility(TSoftClassPtr<ACollectibleCard> CollectibleCard, bool NewIsUnlocked);
    void RandomCards(int32 MinRandomAmount, int32 MaxRandomAmount, int32 ChanceToGet, class UCollectiblesInventoryComponent* CollectiblesInventoryComponent, TArray<FCollectibleCardAccessibility>& DrawnCards, bool RandomOnlyUnlockedCards, const bool RandomOnlyNotOwnedCards);
    TArray<ACollectibleCard*> GetSpawnedCards();
    TArray<TSoftObjectPtr<class ACollectibleCard>> GetRemovedCards();
}; // Size: 0x110

class UCollectiblesInventoryComponent : public UActorComponent
{
    FName InventoryName;                                                              // 0x00B0 (size: 0x8)
    int32 CurrentCapacity;                                                            // 0x00B8 (size: 0x4)
    int32 MaxCapacity;                                                                // 0x00BC (size: 0x4)
    TArray<FCollectiblesSlotStruct> CollectibleSlots;                                 // 0x00C0 (size: 0x10)
    class UCollectibleItemsManager* CollectibleItemsManager;                          // 0x00D0 (size: 0x8)

    void SortCardsByStrength();
    void SortCardsByLastAdded();
    int32 RemoveCollectibleCard(FCollectibleCardStruct CollectibleCardStruct, int32 Amount);
    bool IsCardOwned(TSoftClassPtr<ACollectibleCard> CardToCheck);
    void GetAllCardStructs(TArray<FCollectibleCardStruct>& CardsClasses);
    void AddFoundCards(TArray<FCollectibleCardStruct> FoundCards);
    int32 AddCollectibleCard(FCollectibleCardStruct CollectibleCardStruct, int32 Amount);
}; // Size: 0xD8

class UCollectiblesLibrary : public UBlueprintFunctionLibrary
{

    class UCollectibleItemsManager* GetCollectibleItemsManager(class UObject* WorldContextObject);
}; // Size: 0x28

#endif
