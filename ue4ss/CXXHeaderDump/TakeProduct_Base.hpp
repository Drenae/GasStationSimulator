#ifndef UE4SS_SDK_TakeProduct_Base_HPP
#define UE4SS_SDK_TakeProduct_Base_HPP

class UTakeProduct_Base_C : public UIteractableActorTask
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0150 (size: 0x8)
    TArray<TSubclassOf<class AProduct>> ProductGroup;                                 // 0x0158 (size: 0x10)
    TSubclassOf<class AItem> ClassToFound;                                            // 0x0168 (size: 0x8)
    int32 MinItems;                                                                   // 0x0170 (size: 0x4)
    int32 MaxItems;                                                                   // 0x0174 (size: 0x4)
    class AShelf* ActiveShelf;                                                        // 0x0178 (size: 0x8)
    bool Found;                                                                       // 0x0180 (size: 0x1)
    TArray<TSubclassOf<class AShelf>> ShelfGroup;                                     // 0x0188 (size: 0x10)
    TArray<AShelf*> ValidShelves;                                                     // 0x0198 (size: 0x10)
    TArray<FFShoppingList> ShoppingList;                                              // 0x01A8 (size: 0x10)
    TArray<AShelf*> ShelvesAlreadyVisited;                                            // 0x01B8 (size: 0x10)
    TArray<TSubclassOf<class AProduct>> ProductsNotFound;                             // 0x01C8 (size: 0x10)
    bool bCheckedAtLeastOneShelf;                                                     // 0x01D8 (size: 0x1)
    int32 Items;                                                                      // 0x01DC (size: 0x4)
    TArray<FBaseCharacterSkeletonMontage> MontagesToPlay;                             // 0x01E0 (size: 0x10)

    void HandleVIPGoesToCash();
    void Chance Roll(float PercentChance, bool& bSuccess);
    void IsShoppingCompleted(bool& bComplete);
    void GetShoppingListItemIndex(TSubclassOf<class AProduct> ShoppingItem, int32& IndexFound);
    void GenerateShoppingList();
    void TryGetProductsFromShelf();
    void PickSpecificShelf(bool& bFoundShelf);
    void PickValidShelves();
    void TakeProduct(TSubclassOf<class AProduct> ProductToTake, int32 Amount, int32& AmountGot);
    void OnNotifyEnd_E941211842167B491F192AA970683B98(FName NotifyName);
    void OnNotifyBegin_E941211842167B491F192AA970683B98(FName NotifyName);
    void OnInterrupted_E941211842167B491F192AA970683B98(FName NotifyName);
    void OnBlendOut_E941211842167B491F192AA970683B98(FName NotifyName);
    void OnCompleted_E941211842167B491F192AA970683B98(FName NotifyName);
    void OnNotifyEnd_816CE2BD460283E4289D9FAE8A1462CC(FName NotifyName);
    void OnNotifyBegin_816CE2BD460283E4289D9FAE8A1462CC(FName NotifyName);
    void OnInterrupted_816CE2BD460283E4289D9FAE8A1462CC(FName NotifyName);
    void OnBlendOut_816CE2BD460283E4289D9FAE8A1462CC(FName NotifyName);
    void OnCompleted_816CE2BD460283E4289D9FAE8A1462CC(FName NotifyName);
    void StartTask(class ACharacter* Character);
    void InitializeTask(class AAICharacterBase* Character, const TArray<FTaskProgress>& NewTasksProgress);
    void FinishBeginTask(const ETaskResult TaskState, FString FinishReason);
    void TickObject(float DeltaTime);
    void RecheckShelves();
    void PlayMontage_CustomerReachingShelf();
    void PlayMontage_FrustratedDidntFindProduct(const TArray<TSubclassOf<class AProduct>>& ProductClass);
    void ExecuteUbergraph_TakeProduct_Base(int32 EntryPoint);
}; // Size: 0x1F0

#endif
