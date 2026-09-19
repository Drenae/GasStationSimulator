#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Int32Range -FallbackName=Int32Range
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EObjectTypeQuery -FallbackName=EObjectTypeQuery
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESpawnActorCollisionHandlingMethod -FallbackName=ESpawnActorCollisionHandlingMethod
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "AvailableFeature.h"
#include "BaseCharacterSkeletonMontage.h"
#include "EBuildingType.h"
#include "ECustomTextVariableType.h"
#include "ECustomerType.h"
#include "EDLCName.h"
#include "EFuelMagazine.h"
#include "EInteractableTaskType.h"
#include "EItemTypeCategory.h"
#include "ERelativeDirection.h"
#include "ERelativeDirectionReturnAmount.h"
#include "ERelativeDistance.h"
#include "EStorageType.h"
#include "GSSEventTime.h"
#include "PositioningMontageConfig.h"
#include "RequiredItems.h"
#include "Templates/SubclassOf.h"
#include "TimeStruct.h"
#include "GSSFunctionLibrary.generated.h"

class AAICharacterBase;
class AAchievementManager;
class AActor;
class AAttachmentPoint;
class ACharacter;
class AGSSGameState;
class AGSSPlayerCharacter;
class AGSSPlayerController;
class AGSSPlayerState;
class AGSSWorldSettings;
class AGSS_NewHud;
class AInteractableActor;
class AItem;
class ALeaderboardManager;
class AObjectiveMarker;
class APawn;
class APlayerController;
class AQuestChallengeManager;
class AShelf;
class AUIQuickAccess;
class UAnimMontage;
class UComboBoxString;
class UDataTable;
class UEconomyTracker;
class UEmployeeTask;
class UEmployeeTasksDataAsset;
class UGSSEvent;
class UGSSGameInstance;
class UGSSQuest;
class UInventoryComponent;
class ULevelStreaming;
class UMaterialParameterCollection;
class UObject;
class UPrimitiveComponent;
class UProceduralMeshComponent;
class USplineComponent;
class UStatKeeper;
class UTaskBase;
class UUMGSequencePlayer;
class UUserWidget;
class UWorld;

UCLASS(Blueprintable)
class GSS2_API UGSSFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSSFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void UpdateTime(FTimeStruct StructTime, int32 Minute, int32 Hours, FTimeStruct& OutTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FHitResult TraceObjectsFromMouseCursor(const UObject* WorldContextObject, int32 TraceLengthMultiplier, const TArray<UPrimitiveComponent*>& ComponentsToIgnore, const TArray<AActor*>& ActorsToIgnore, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FHitResult TraceFromMouseCursor(const UObject* WorldContextObject, int32 TraceLengthMultiplier, const TArray<UPrimitiveComponent*>& ComponentsToIgnore, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<ECollisionChannel> CollisionChannel);
    
    UFUNCTION(BlueprintCallable)
    static void ToggleNavigationAffect(UPrimitiveComponent* ComponentToSet, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static bool TaskWaitTooLong(UTaskBase* Task, TSoftClassPtr<UGSSQuest> QuestClass);
    
    UFUNCTION(BlueprintCallable)
    static UGSSQuest* SpawnGSSQuest(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    static void SpawnEventFromClass_Loaded(UWorld* World, TSoftClassPtr<UGSSEvent> EventClass, bool bEnableEvent);
    
    UFUNCTION(BlueprintCallable)
    static void SpawnEventFromClass(UWorld* World, TSoftClassPtr<UGSSEvent> EventClass, bool bEnableEvent);
    
    UFUNCTION(BlueprintCallable)
    static UGSSEvent* SpawnEvent(APlayerController* PlayerController, FGSSEventTime GSSEventTime);
    
    UFUNCTION(BlueprintCallable)
    static AAttachmentPoint* SpawnAttachmentPoint(ACharacter* CharacterOwner, const FVector SpawnLocation);
    
    UFUNCTION(BlueprintCallable)
    static UTaskBase* SpawnAITask(AAICharacterBase* AICharacter);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* SpawnActorOfSoftClass(UObject* WorldContextObject, TSoftClassPtr<AActor> ActorClass, FVector LocationSpawn, FRotator RotationSpawn, ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingOverride, ACharacter* Owner);
    
    UFUNCTION(BlueprintCallable)
    static AActor* SpawnActorFromClass_K2(TSubclassOf<AActor> ActorClass, FVector LocationSpawn, FRotator RotationSpawn, AActor* Owner);
    
    UFUNCTION(BlueprintCallable)
    static TArray<TSubclassOf<AItem>> SortItemsByQuantity(TArray<TSubclassOf<AItem>> Items, UInventoryComponent* Inventory, bool DontSort, bool Ascending);
    
    UFUNCTION(BlueprintCallable)
    static void SkipToQuest(AGSSGameState* GS, TSoftClassPtr<UGSSQuest> QuestClass);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ShowUI(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetCarWashWaterPressure(UObject* WorldContextObject, float NewWaterPressureValue);
    
    UFUNCTION(BlueprintCallable)
    static void ReverseUMGSequence(UUMGSequencePlayer* SequencePlayer);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ResetTowy(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ResetDigger(UObject* WorldContextObject, bool bTriggerAchievement);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveUpgradeItems(UObject* WorldContextObject, TArray<FRequiredItems> RequiredItems);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveRoofDecorationsBackToInvenotry(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool RemoveFromSpecifiedPlayerInventory(UObject* WorldContextObject, TSoftClassPtr<AItem> Item, int32 Amount, EStorageType StorageType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool RemoveFromPlayerInventories(UObject* WorldContextObject, TSoftClassPtr<AItem> Item, int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    static void PrintData(const FString& File);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PrepareMapForCinematic(UObject* WorldContextObject, bool bDestroyAllCars, bool bDestroyAllCustomers, bool bRestartDigger, bool bStopCarSpawn);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UUserWidget* OpenFilePickerPlugin(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void OpenFileDialog(const FString& DialogTitle, const FString& DefaultPath, const FString& FileTypes, TArray<FString>& OutFilenames);
    
    UFUNCTION(BlueprintCallable)
    static void OpenComboBox(UComboBoxString* ComboBox, bool bOpen);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void OnCinematicEnd(UObject* WorldContextObject, bool bUnblockCarSpawn, bool OverrideMaxVehiclesOnMap, int32 NewMaxVehicles);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSubclassOf<UTaskBase> LoadTaskIfNeeded(TSoftClassPtr<UTaskBase> TaskClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSubclassOf<UGSSQuest> LoadQuestIfNeeded(TSoftClassPtr<UGSSQuest> QuestClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UClass* LoadAssetIfNeeded(TSoftClassPtr<UObject> AssetClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsQueueFree(AGSSGameState* GS, ECustomerType CustomerType);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPositionReachable(UObject* Instaginator, FVector PathStart, FVector Position);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOnQuest(AGSSGameState* GS, TSoftClassPtr<UGSSQuest> QuestClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsEventActive(UObject* WorldContextObject, const FString& EventName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsDLCEnabled(UObject* WorldContextObject, EDLCName DLCName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsCollectibleItemsPluginActivated(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsAnyFuelStationOpen(UObject* WorldContextObject, const TArray<EFuelMagazine> FuelTypes);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsActorVisibleOnScreen(UObject* WorldContextObject, FVector ActorLocation);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void HideUI(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasPassedQuest(AGSSGameState* GS, TSoftClassPtr<UGSSQuest> QuestClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasEnoughMoney(APlayerController* PC, float RequiredMoney);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasAllowQuest(AGSSGameState* GS, TSoftClassPtr<UGSSQuest> QuestClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasAllowPlayerAndCustomer(AInteractableActor* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UWorld* GetWorldPointer(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetWorkCostPerHourClass(TSubclassOf<AAICharacterBase> AICharacterBase, TSubclassOf<UEmployeeTask> EmployeeTask, UDataTable* DTEmplyeeStatByLevel);
    
    UFUNCTION(BlueprintCallable)
    static FString GetUserVideosPath();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetUserDrives();
    
    UFUNCTION(BlueprintCallable)
    static FString GetUserDownloadsPath();
    
    UFUNCTION(BlueprintCallable)
    static FString GetUserDesktopPath();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AUIQuickAccess* GetUIQuickAccess(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FText GetTextForCategory(EItemTypeCategory Category);
    
    UFUNCTION(BlueprintCallable)
    static EInteractableTaskType GetTakeProductTaskForShelfType(EItemTypeCategory ShelfItemCategory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetStreamingLevelNameFromActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UStatKeeper* GetStatKeeper(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetSplineLengthByInputKey(const USplineComponent* InSpline, const float InputKeyFloat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetSplineLenghtByTransform(const USplineComponent* InSpline, const FVector InWorldLocation);
    
    UFUNCTION(BlueprintCallable)
    static ERelativeDirection GetRelativeDirection(AActor* OriginActor, AActor* OtherActor, ERelativeDirectionReturnAmount ReturnAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRandomInt32InRange(FInt32Range Range);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetRandomFloatInRange(FFloatRange Range);
    
    UFUNCTION(BlueprintCallable)
    static float GetProceduralMeshVolume(UProceduralMeshComponent* MeshComponent);
    
    UFUNCTION(BlueprintCallable)
    static bool GetPositioningMontageConfigBasedOnSkeleton(AAICharacterBase* CharacterBase, const FGameplayTag TagToCheck, const TArray<FPositioningMontageConfig> Configs, FPositioningMontageConfig& OutConfig);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetNameForItem(const TSoftClassPtr<AItem> Item);
    
    UFUNCTION(BlueprintCallable)
    static UAnimMontage* GetMontageToPlayBasedOnSkeleton(ACharacter* CharacterBase, const FGameplayTag TagToCheck, const TArray<FBaseCharacterSkeletonMontage> MontagesSkeletons);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ALeaderboardManager* GetLeaderboardManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetKeyAsString(const FKey& InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetKeyAsName(const FKey& InKey);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetItemToClean(AActor* Cleaner, ERelativeDistance Distance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetIsGamePadConnected(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AGSSWorldSettings* GetGSSWorldSettings(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AGSSPlayerState* GetGSSPlayerState(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AGSSPlayerController* GetGSSPlayerController(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AGSSPlayerCharacter* GetGSSPlayerCharacter(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AGSS_NewHud* GetGSSHUD(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AGSSGameState* GetGSSGameState(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UGSSGameInstance* GetGSSGameInstance(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetGameVersion(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UGSSEvent* GetEventFromClass(UObject* WorldContextObject, TSoftClassPtr<UGSSEvent> EventClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UEmployeeTasksDataAsset* GetEmployeeTasksDataAsset(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UEconomyTracker* GetEconomyTracker(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetDebugMode(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FText GetCustomTextArg(UObject* WorldContextObject, ECustomTextVariableType Type);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetClosestTrashToLocation(FVector Instaginatorlocation, TArray<AActor*> Actors);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetClosestDirtDecalToLocation(FVector Instaginatorlocation, TArray<AActor*> Actors);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetClosestActorToLocation(FVector Instaginatorlocation, TArray<AActor*> Actors);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UClass*> GetChildsPackageClasses(UClass* ParentClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AQuestChallengeManager* GetChallengeManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AInteractableActor* GetBuilding(UObject* WorldContextObject, EBuildingType BuildingToFind);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<FAvailableFeature> GetAvailableFeautures(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void GetAngleBetweenActor(AActor* Instigator, AActor* TargetActor, FRotator& DeltaRotation);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetAmountOfItemFromPlayerInventories(UObject* WorldContextObject, TSoftClassPtr<AItem> Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetAllShelfsCompatibileToItem(UObject* WorldContextObject, TArray<AShelf*>& Shelfs, TSubclassOf<AItem> ItemClass);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetAllObjectsOfSoftClass(const UObject* WorldContextObject, TSoftClassPtr<UObject> ObjectClass, TArray<UObject*>& OutObjects);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<AAICharacterBase*> GetAllCustomers(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetAllActorsOfSoftClass(const UObject* WorldContextObject, TSoftClassPtr<AActor> ActorClass, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> GetAllActorsFromLevelMap(ULevelStreaming* LevelStreaming);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> GetActorsInRange(FVector Instaginatorlocation, const float Range, TArray<AActor*> Actors, bool SortByClosest);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> GetActorsInDistance(const TArray<AActor*>& InActors, FVector Instaginatorlocation, const float Range, bool SortByClosest);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* GetActorOfSoftClass(const UObject* WorldContextObject, TSoftClassPtr<AActor> ActorClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AAchievementManager* GetAchievementManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool FixMissingTequila(UObject* WorldContextObject, const TSoftClassPtr<AItem>& TequilaClass);
    
    UFUNCTION(BlueprintCallable)
    static bool FindCollisionUVFromHit(const FHitResult& Hit, FVector2D& UV);
    
    UFUNCTION(BlueprintCallable)
    static TArray<TSubclassOf<AActor>> FiltrClassBySubClass(TArray<TSubclassOf<AActor>> ActorClasses, TSubclassOf<AActor> SubClass);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> FiltrBySubClass(TArray<AActor*> Actors, TSubclassOf<AActor> SubClass);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> FiltrActorByDistance(TArray<AActor*> Actors, FVector TargetLocation, float Distance);
    
    UFUNCTION(BlueprintCallable)
    static void EnablePostprocess(UObject* Instaginator, FName MapName, bool ShowPostprocess, UMaterialParameterCollection* Color);
    
    UFUNCTION(BlueprintCallable)
    static void EnableActor(AActor* Actor, bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static bool EFD_SaveFileDialog(const FString& DialogTitle, const FString& DefaultPath, const FString& DefaultFile, const FString& FileTypeDescription, const FString& FileType, bool AllowMultiple, TArray<FString>& OutFilenames);
    
    UFUNCTION(BlueprintCallable)
    static bool EFD_OpenFolderDialog(const FString& DialogTitle, const FString& DefaultPath, FString& OutFolderName);
    
    UFUNCTION(BlueprintCallable)
    static bool EFD_OpenFileDialog(const FString& DialogTitle, const FString& DefaultPath, const FString& DefaultFile, const FString& FileTypes, bool AllowMultiple, TArray<FString>& OutFilenames);
    
    UFUNCTION(BlueprintCallable)
    static void DestroyObject(UObject* Object);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DestroyAllVehicleCustomers(UObject* WorldContextObject, TArray<TSubclassOf<AActor>> IgnoreActorClasses);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DestroyAllCustomers(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void DespawnEvent(UWorld* World, TSoftClassPtr<UGSSEvent> EventClass, bool TriggerFinishEvent);
    
    UFUNCTION(BlueprintCallable)
    static AObjectiveMarker* CreateObjectiveMarker(UObject* Instaginator, TSubclassOf<AObjectiveMarker> ObjectiveMarkerClass, FTransform SpawnTransform, AActor* Actor, float Outline, float Marker, float DelayActivated);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString ConvertFloatToPercentageString(UObject* WorldContextObject, float Percentage);
    
    UFUNCTION(BlueprintCallable)
    static void ClearUserFocus(APlayerController* PC);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CheckIfLevelUpgradePossible(UObject* WorldContextObject, TArray<FRequiredItems> RequiredItems);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CheckIfFeatureUpgradePossible(UObject* WorldContextObject, FName RowName, bool& LevelOfBuldingReq, bool& AmountOfMoneyReq, bool& DLCReq);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CheckGamepadConnected(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CheckDLCForQuest(UObject* WorldContextObject, const FString& PackageName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CanBePaid_Tag(UObject* WorldContextObject, EDLCName DlcRequired, EBuildingType BuildingType, int32 LevelRequired, float MoneyRequired, float ContractPointsRequired, bool UseInvertedTag, TArray<FRequiredItems> ItemRequired, FGameplayTag UnlockTagRequired, bool& bEnoughMoney, bool& bEnoughContractPoints, bool& bTagUnlocked, bool& bBuildingLevelGood, bool& bEnoughItems, bool& bDLCEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CanBePaid(UObject* WorldContextObject, EDLCName DlcRequired, EBuildingType BuildingType, int32 LevelRequired, float MoneyRequired, TArray<FRequiredItems> ItemRequired, FGameplayTag UnlockedGameplayTag, TSoftClassPtr<UGSSQuest> QuestRequired, bool& bEnoughMoney, bool& bQuestCompleted, bool& bBuildingLevelGood, bool& bEnoughItems, bool& bDLCEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanAssistant(AAICharacterBase* AICharacterBase, ACharacter* Instaginator, bool bIgnoreCustomerState);
    
    UFUNCTION(BlueprintCallable)
    static void CalculateCuttingRatio(float OriginalVolume, float CuttedPieceVolume, float& OutFirstRatio, float& OutSecondRatio);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool AddToPlayerInventories(UObject* WorldContextObject, TSoftClassPtr<AItem> Item, int32 Quantity, bool IgnoreLimit);
    
    UFUNCTION(BlueprintCallable)
    static bool AddToActorInventory(AActor* Actor, TSoftClassPtr<AItem> Item, int32 Quantity, bool IgnoreLimit);
    
};

