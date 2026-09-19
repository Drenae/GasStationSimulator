#ifndef UE4SS_SDK_Employee_RestockShelves_HPP
#define UE4SS_SDK_Employee_RestockShelves_HPP

class UEmployee_RestockShelves_C : public UEmployeeTask
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)
    bool NextTaskCanMove;                                                             // 0x0168 (size: 0x1)
    int32 New Task Index;                                                             // 0x016C (size: 0x4)
    TArray<FBaseCharacterSkeletonMontage> MontagesRestocking;                         // 0x0170 (size: 0x10)
    float TaskCompletionTime;                                                         // 0x0180 (size: 0x4)
    class AActor* RelaxActor;                                                         // 0x0188 (size: 0x8)
    float AnimTimeToWait;                                                             // 0x0190 (size: 0x4)
    float MontageSpeedMultiplier;                                                     // 0x0194 (size: 0x4)
    class UAnimMontage* MontagesRelaxing;                                             // 0x0198 (size: 0x8)
    FTimerHandle CheckTaskTimer;                                                      // 0x01A0 (size: 0x8)
    bool IsRelaxing;                                                                  // 0x01A8 (size: 0x1)
    class UDataTable* RestockingAmountDT;                                             // 0x01B0 (size: 0x8)
    bool FullyRelaxing;                                                               // 0x01B8 (size: 0x1)
    class AShelf* LastOperatedShelf;                                                  // 0x01C0 (size: 0x8)
    FGameplayTag Tag to Check;                                                        // 0x01C8 (size: 0x8)
    float RotationOffset;                                                             // 0x01D0 (size: 0x4)

    void RetriveProperCollisionForNewBaseMeshCharacters();
    void HandleSittingMontages();
    bool CheckChairFacing();
    void FindCorrectAnimationTag(FGameplayTag& Output_Get);
    void GotProductsToRestock(bool& Succes);
    void CanShelfBeRefilled(class AShelf* Shelf, bool& CanBeRefilled);
    void GetAmountOfProducts(int32& Items Restocked at Once);
    void ClearTargetShelf(class AShelf* InputPin);
    void FinishRelax(bool EndRelaxing);
    void GoRelax();
    void AddAmountProductsToShelf(int32 AmountToRestock);
    void AddSingleProductToShelf();
    void AddProductsOfCategoryToShelf();
    void GetShelfToRefill(class AShelf*& OutShelf);
    void Set Target(class AActor* InputPin);
    void GetInventoryProducts(class AShelf* Shelf, TMap<TSoftClassPtr<AItem>, int32>& ProductsToAdd);
    void OnNotifyEnd_FF75772C43959EDA807964A34292853B(FName NotifyName);
    void OnNotifyBegin_FF75772C43959EDA807964A34292853B(FName NotifyName);
    void OnInterrupted_FF75772C43959EDA807964A34292853B(FName NotifyName);
    void OnBlendOut_FF75772C43959EDA807964A34292853B(FName NotifyName);
    void OnCompleted_FF75772C43959EDA807964A34292853B(FName NotifyName);
    void OnNotifyEnd_E90DB87143FFD0AB5428A3B453EDE5CD(FName NotifyName);
    void OnNotifyBegin_E90DB87143FFD0AB5428A3B453EDE5CD(FName NotifyName);
    void OnInterrupted_E90DB87143FFD0AB5428A3B453EDE5CD(FName NotifyName);
    void OnBlendOut_E90DB87143FFD0AB5428A3B453EDE5CD(FName NotifyName);
    void OnCompleted_E90DB87143FFD0AB5428A3B453EDE5CD(FName NotifyName);
    void OnNotifyEnd_11F3850D4E663B92C03398BEEF57887D(FName NotifyName);
    void OnNotifyBegin_11F3850D4E663B92C03398BEEF57887D(FName NotifyName);
    void OnInterrupted_11F3850D4E663B92C03398BEEF57887D(FName NotifyName);
    void OnBlendOut_11F3850D4E663B92C03398BEEF57887D(FName NotifyName);
    void OnCompleted_11F3850D4E663B92C03398BEEF57887D(FName NotifyName);
    void InitializeTask(class AAICharacterBase* Character, const TArray<FTaskProgress>& NewTasksProgress);
    void StartTask(class ACharacter* Character);
    void ContinueRefillmentTask();
    void ActivateTask(int32 Index);
    void TickObject(float DeltaTime);
    void FinishBeginTask(const ETaskResult TaskState, FString FinishReason);
    void CheckTasks();
    void PlayStandUpAnimation();
    void PerformRelaxAnimations();
    void ExecuteUbergraph_Employee_RestockShelves(int32 EntryPoint);
}; // Size: 0x1D4

#endif
