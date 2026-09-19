#include "GSSFunctionLibrary.h"
#include "Templates/SubclassOf.h"

UGSSFunctionLibrary::UGSSFunctionLibrary() {
}

void UGSSFunctionLibrary::UpdateTime(FTimeStruct StructTime, int32 Minute, int32 Hours, FTimeStruct& OutTime) {
}

FHitResult UGSSFunctionLibrary::TraceObjectsFromMouseCursor(const UObject* WorldContextObject, int32 TraceLengthMultiplier, const TArray<UPrimitiveComponent*>& ComponentsToIgnore, const TArray<AActor*>& ActorsToIgnore, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes) {
    return FHitResult{};
}

FHitResult UGSSFunctionLibrary::TraceFromMouseCursor(const UObject* WorldContextObject, int32 TraceLengthMultiplier, const TArray<UPrimitiveComponent*>& ComponentsToIgnore, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<ECollisionChannel> CollisionChannel) {
    return FHitResult{};
}

void UGSSFunctionLibrary::ToggleNavigationAffect(UPrimitiveComponent* ComponentToSet, bool bEnable) {
}

bool UGSSFunctionLibrary::TaskWaitTooLong(UTaskBase* Task, TSoftClassPtr<UGSSQuest> QuestClass) {
    return false;
}

UGSSQuest* UGSSFunctionLibrary::SpawnGSSQuest(APawn* Pawn) {
    return NULL;
}

void UGSSFunctionLibrary::SpawnEventFromClass_Loaded(UWorld* World, TSoftClassPtr<UGSSEvent> EventClass, bool bEnableEvent) {
}

void UGSSFunctionLibrary::SpawnEventFromClass(UWorld* World, TSoftClassPtr<UGSSEvent> EventClass, bool bEnableEvent) {
}

UGSSEvent* UGSSFunctionLibrary::SpawnEvent(APlayerController* PlayerController, FGSSEventTime GSSEventTime) {
    return NULL;
}

AAttachmentPoint* UGSSFunctionLibrary::SpawnAttachmentPoint(ACharacter* CharacterOwner, const FVector SpawnLocation) {
    return NULL;
}

UTaskBase* UGSSFunctionLibrary::SpawnAITask(AAICharacterBase* AICharacter) {
    return NULL;
}

AActor* UGSSFunctionLibrary::SpawnActorOfSoftClass(UObject* WorldContextObject, TSoftClassPtr<AActor> ActorClass, FVector LocationSpawn, FRotator RotationSpawn, ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingOverride, ACharacter* Owner) {
    return NULL;
}

AActor* UGSSFunctionLibrary::SpawnActorFromClass_K2(TSubclassOf<AActor> ActorClass, FVector LocationSpawn, FRotator RotationSpawn, AActor* Owner) {
    return NULL;
}

TArray<TSubclassOf<AItem>> UGSSFunctionLibrary::SortItemsByQuantity(TArray<TSubclassOf<AItem>> Items, UInventoryComponent* Inventory, bool DontSort, bool Ascending) {
    return TArray<TSubclassOf<AItem>>();
}

void UGSSFunctionLibrary::SkipToQuest(AGSSGameState* GS, TSoftClassPtr<UGSSQuest> QuestClass) {
}

void UGSSFunctionLibrary::ShowUI(UObject* WorldContextObject) {
}

void UGSSFunctionLibrary::SetCarWashWaterPressure(UObject* WorldContextObject, float NewWaterPressureValue) {
}

void UGSSFunctionLibrary::ReverseUMGSequence(UUMGSequencePlayer* SequencePlayer) {
}

bool UGSSFunctionLibrary::ResetTowy(UObject* WorldContextObject) {
    return false;
}

bool UGSSFunctionLibrary::ResetDigger(UObject* WorldContextObject, bool bTriggerAchievement) {
    return false;
}

void UGSSFunctionLibrary::RemoveUpgradeItems(UObject* WorldContextObject, TArray<FRequiredItems> RequiredItems) {
}

void UGSSFunctionLibrary::RemoveRoofDecorationsBackToInvenotry(UObject* WorldContextObject) {
}

bool UGSSFunctionLibrary::RemoveFromSpecifiedPlayerInventory(UObject* WorldContextObject, TSoftClassPtr<AItem> Item, int32 Amount, EStorageType StorageType) {
    return false;
}

bool UGSSFunctionLibrary::RemoveFromPlayerInventories(UObject* WorldContextObject, TSoftClassPtr<AItem> Item, int32 Amount) {
    return false;
}

void UGSSFunctionLibrary::PrintData(const FString& File) {
}

void UGSSFunctionLibrary::PrepareMapForCinematic(UObject* WorldContextObject, bool bDestroyAllCars, bool bDestroyAllCustomers, bool bRestartDigger, bool bStopCarSpawn) {
}

UUserWidget* UGSSFunctionLibrary::OpenFilePickerPlugin(const UObject* WorldContextObject) {
    return NULL;
}

void UGSSFunctionLibrary::OpenFileDialog(const FString& DialogTitle, const FString& DefaultPath, const FString& FileTypes, TArray<FString>& OutFilenames) {
}

void UGSSFunctionLibrary::OpenComboBox(UComboBoxString* ComboBox, bool bOpen) {
}

void UGSSFunctionLibrary::OnCinematicEnd(UObject* WorldContextObject, bool bUnblockCarSpawn, bool OverrideMaxVehiclesOnMap, int32 NewMaxVehicles) {
}

TSubclassOf<UTaskBase> UGSSFunctionLibrary::LoadTaskIfNeeded(TSoftClassPtr<UTaskBase> TaskClass) {
    return NULL;
}

TSubclassOf<UGSSQuest> UGSSFunctionLibrary::LoadQuestIfNeeded(TSoftClassPtr<UGSSQuest> QuestClass) {
    return NULL;
}

UClass* UGSSFunctionLibrary::LoadAssetIfNeeded(TSoftClassPtr<UObject> AssetClass) {
    return NULL;
}

bool UGSSFunctionLibrary::IsQueueFree(AGSSGameState* GS, ECustomerType CustomerType) {
    return false;
}

bool UGSSFunctionLibrary::IsPositionReachable(UObject* Instaginator, FVector PathStart, FVector Position) {
    return false;
}

bool UGSSFunctionLibrary::IsOnQuest(AGSSGameState* GS, TSoftClassPtr<UGSSQuest> QuestClass) {
    return false;
}

bool UGSSFunctionLibrary::IsEventActive(UObject* WorldContextObject, const FString& EventName) {
    return false;
}

bool UGSSFunctionLibrary::IsDLCEnabled(UObject* WorldContextObject, EDLCName DLCName) {
    return false;
}

bool UGSSFunctionLibrary::IsCollectibleItemsPluginActivated(UObject* WorldContextObject) {
    return false;
}

bool UGSSFunctionLibrary::IsAnyFuelStationOpen(UObject* WorldContextObject, const TArray<EFuelMagazine> FuelTypes) {
    return false;
}

bool UGSSFunctionLibrary::IsActorVisibleOnScreen(UObject* WorldContextObject, FVector ActorLocation) {
    return false;
}

void UGSSFunctionLibrary::HideUI(UObject* WorldContextObject) {
}

bool UGSSFunctionLibrary::HasPassedQuest(AGSSGameState* GS, TSoftClassPtr<UGSSQuest> QuestClass) {
    return false;
}

bool UGSSFunctionLibrary::HasEnoughMoney(APlayerController* PC, float RequiredMoney) {
    return false;
}

bool UGSSFunctionLibrary::HasAllowQuest(AGSSGameState* GS, TSoftClassPtr<UGSSQuest> QuestClass) {
    return false;
}

bool UGSSFunctionLibrary::HasAllowPlayerAndCustomer(AInteractableActor* Target) {
    return false;
}

UWorld* UGSSFunctionLibrary::GetWorldPointer(UObject* WorldContextObject) {
    return NULL;
}

float UGSSFunctionLibrary::GetWorkCostPerHourClass(TSubclassOf<AAICharacterBase> AICharacterBase, TSubclassOf<UEmployeeTask> EmployeeTask, UDataTable* DTEmplyeeStatByLevel) {
    return 0.0f;
}

FString UGSSFunctionLibrary::GetUserVideosPath() {
    return TEXT("");
}

TArray<FString> UGSSFunctionLibrary::GetUserDrives() {
    return TArray<FString>();
}

FString UGSSFunctionLibrary::GetUserDownloadsPath() {
    return TEXT("");
}

FString UGSSFunctionLibrary::GetUserDesktopPath() {
    return TEXT("");
}

AUIQuickAccess* UGSSFunctionLibrary::GetUIQuickAccess(UObject* WorldContextObject) {
    return NULL;
}

FText UGSSFunctionLibrary::GetTextForCategory(EItemTypeCategory Category) {
    return FText::GetEmpty();
}

EInteractableTaskType UGSSFunctionLibrary::GetTakeProductTaskForShelfType(EItemTypeCategory ShelfItemCategory) {
    return EInteractableTaskType::BUY_ICE_CREAM_STAND;
}

FName UGSSFunctionLibrary::GetStreamingLevelNameFromActor(AActor* Actor) {
    return NAME_None;
}

UStatKeeper* UGSSFunctionLibrary::GetStatKeeper(UObject* WorldContextObject) {
    return NULL;
}

float UGSSFunctionLibrary::GetSplineLengthByInputKey(const USplineComponent* InSpline, const float InputKeyFloat) {
    return 0.0f;
}

float UGSSFunctionLibrary::GetSplineLenghtByTransform(const USplineComponent* InSpline, const FVector InWorldLocation) {
    return 0.0f;
}

ERelativeDirection UGSSFunctionLibrary::GetRelativeDirection(AActor* OriginActor, AActor* OtherActor, ERelativeDirectionReturnAmount ReturnAmount) {
    return ERelativeDirection::FRONT;
}

int32 UGSSFunctionLibrary::GetRandomInt32InRange(FInt32Range Range) {
    return 0;
}

float UGSSFunctionLibrary::GetRandomFloatInRange(FFloatRange Range) {
    return 0.0f;
}

float UGSSFunctionLibrary::GetProceduralMeshVolume(UProceduralMeshComponent* MeshComponent) {
    return 0.0f;
}

bool UGSSFunctionLibrary::GetPositioningMontageConfigBasedOnSkeleton(AAICharacterBase* CharacterBase, const FGameplayTag TagToCheck, const TArray<FPositioningMontageConfig> Configs, FPositioningMontageConfig& OutConfig) {
    return false;
}

FString UGSSFunctionLibrary::GetNameForItem(const TSoftClassPtr<AItem> Item) {
    return TEXT("");
}

UAnimMontage* UGSSFunctionLibrary::GetMontageToPlayBasedOnSkeleton(ACharacter* CharacterBase, const FGameplayTag TagToCheck, const TArray<FBaseCharacterSkeletonMontage> MontagesSkeletons) {
    return NULL;
}

ALeaderboardManager* UGSSFunctionLibrary::GetLeaderboardManager(UObject* WorldContextObject) {
    return NULL;
}

FString UGSSFunctionLibrary::GetKeyAsString(const FKey& InKey) {
    return TEXT("");
}

FName UGSSFunctionLibrary::GetKeyAsName(const FKey& InKey) {
    return NAME_None;
}

AActor* UGSSFunctionLibrary::GetItemToClean(AActor* Cleaner, ERelativeDistance Distance) {
    return NULL;
}

bool UGSSFunctionLibrary::GetIsGamePadConnected(UObject* WorldContextObject) {
    return false;
}

AGSSWorldSettings* UGSSFunctionLibrary::GetGSSWorldSettings(UObject* WorldContextObject) {
    return NULL;
}

AGSSPlayerState* UGSSFunctionLibrary::GetGSSPlayerState(UObject* WorldContextObject) {
    return NULL;
}

AGSSPlayerController* UGSSFunctionLibrary::GetGSSPlayerController(UObject* WorldContextObject) {
    return NULL;
}

AGSSPlayerCharacter* UGSSFunctionLibrary::GetGSSPlayerCharacter(UObject* WorldContextObject) {
    return NULL;
}

AGSS_NewHud* UGSSFunctionLibrary::GetGSSHUD(UObject* WorldContextObject) {
    return NULL;
}

AGSSGameState* UGSSFunctionLibrary::GetGSSGameState(UObject* WorldContextObject) {
    return NULL;
}

UGSSGameInstance* UGSSFunctionLibrary::GetGSSGameInstance(UObject* WorldContextObject) {
    return NULL;
}

FString UGSSFunctionLibrary::GetGameVersion(UObject* WorldContextObject) {
    return TEXT("");
}

UGSSEvent* UGSSFunctionLibrary::GetEventFromClass(UObject* WorldContextObject, TSoftClassPtr<UGSSEvent> EventClass) {
    return NULL;
}

UEmployeeTasksDataAsset* UGSSFunctionLibrary::GetEmployeeTasksDataAsset(UObject* WorldContextObject) {
    return NULL;
}

UEconomyTracker* UGSSFunctionLibrary::GetEconomyTracker(UObject* WorldContextObject) {
    return NULL;
}

bool UGSSFunctionLibrary::GetDebugMode(UObject* WorldContextObject) {
    return false;
}

FText UGSSFunctionLibrary::GetCustomTextArg(UObject* WorldContextObject, ECustomTextVariableType Type) {
    return FText::GetEmpty();
}

AActor* UGSSFunctionLibrary::GetClosestTrashToLocation(FVector Instaginatorlocation, TArray<AActor*> Actors) {
    return NULL;
}

AActor* UGSSFunctionLibrary::GetClosestDirtDecalToLocation(FVector Instaginatorlocation, TArray<AActor*> Actors) {
    return NULL;
}

AActor* UGSSFunctionLibrary::GetClosestActorToLocation(FVector Instaginatorlocation, TArray<AActor*> Actors) {
    return NULL;
}

TArray<UClass*> UGSSFunctionLibrary::GetChildsPackageClasses(UClass* ParentClass) {
    return TArray<UClass*>();
}

AQuestChallengeManager* UGSSFunctionLibrary::GetChallengeManager(UObject* WorldContextObject) {
    return NULL;
}

AInteractableActor* UGSSFunctionLibrary::GetBuilding(UObject* WorldContextObject, EBuildingType BuildingToFind) {
    return NULL;
}

TArray<FAvailableFeature> UGSSFunctionLibrary::GetAvailableFeautures(UObject* WorldContextObject) {
    return TArray<FAvailableFeature>();
}

void UGSSFunctionLibrary::GetAngleBetweenActor(AActor* Instigator, AActor* TargetActor, FRotator& DeltaRotation) {
}

int32 UGSSFunctionLibrary::GetAmountOfItemFromPlayerInventories(UObject* WorldContextObject, TSoftClassPtr<AItem> Item) {
    return 0;
}

void UGSSFunctionLibrary::GetAllShelfsCompatibileToItem(UObject* WorldContextObject, TArray<AShelf*>& Shelfs, TSubclassOf<AItem> ItemClass) {
}

void UGSSFunctionLibrary::GetAllObjectsOfSoftClass(const UObject* WorldContextObject, TSoftClassPtr<UObject> ObjectClass, TArray<UObject*>& OutObjects) {
}

TArray<AAICharacterBase*> UGSSFunctionLibrary::GetAllCustomers(UObject* WorldContextObject) {
    return TArray<AAICharacterBase*>();
}

void UGSSFunctionLibrary::GetAllActorsOfSoftClass(const UObject* WorldContextObject, TSoftClassPtr<AActor> ActorClass, TArray<AActor*>& OutActors) {
}

TArray<AActor*> UGSSFunctionLibrary::GetAllActorsFromLevelMap(ULevelStreaming* LevelStreaming) {
    return TArray<AActor*>();
}

TArray<AActor*> UGSSFunctionLibrary::GetActorsInRange(FVector Instaginatorlocation, const float Range, TArray<AActor*> Actors, bool SortByClosest) {
    return TArray<AActor*>();
}

TArray<AActor*> UGSSFunctionLibrary::GetActorsInDistance(const TArray<AActor*>& InActors, FVector Instaginatorlocation, const float Range, bool SortByClosest) {
    return TArray<AActor*>();
}

AActor* UGSSFunctionLibrary::GetActorOfSoftClass(const UObject* WorldContextObject, TSoftClassPtr<AActor> ActorClass) {
    return NULL;
}

AAchievementManager* UGSSFunctionLibrary::GetAchievementManager(UObject* WorldContextObject) {
    return NULL;
}

bool UGSSFunctionLibrary::FixMissingTequila(UObject* WorldContextObject, const TSoftClassPtr<AItem>& TequilaClass) {
    return false;
}

bool UGSSFunctionLibrary::FindCollisionUVFromHit(const FHitResult& Hit, FVector2D& UV) {
    return false;
}

TArray<TSubclassOf<AActor>> UGSSFunctionLibrary::FiltrClassBySubClass(TArray<TSubclassOf<AActor>> ActorClasses, TSubclassOf<AActor> SubClass) {
    return TArray<TSubclassOf<AActor>>();
}

TArray<AActor*> UGSSFunctionLibrary::FiltrBySubClass(TArray<AActor*> Actors, TSubclassOf<AActor> SubClass) {
    return TArray<AActor*>();
}

TArray<AActor*> UGSSFunctionLibrary::FiltrActorByDistance(TArray<AActor*> Actors, FVector TargetLocation, float Distance) {
    return TArray<AActor*>();
}

void UGSSFunctionLibrary::EnablePostprocess(UObject* Instaginator, FName MapName, bool ShowPostprocess, UMaterialParameterCollection* Color) {
}

void UGSSFunctionLibrary::EnableActor(AActor* Actor, bool Enable) {
}

bool UGSSFunctionLibrary::EFD_SaveFileDialog(const FString& DialogTitle, const FString& DefaultPath, const FString& DefaultFile, const FString& FileTypeDescription, const FString& FileType, bool AllowMultiple, TArray<FString>& OutFilenames) {
    return false;
}

bool UGSSFunctionLibrary::EFD_OpenFolderDialog(const FString& DialogTitle, const FString& DefaultPath, FString& OutFolderName) {
    return false;
}

bool UGSSFunctionLibrary::EFD_OpenFileDialog(const FString& DialogTitle, const FString& DefaultPath, const FString& DefaultFile, const FString& FileTypes, bool AllowMultiple, TArray<FString>& OutFilenames) {
    return false;
}

void UGSSFunctionLibrary::DestroyObject(UObject* Object) {
}

void UGSSFunctionLibrary::DestroyAllVehicleCustomers(UObject* WorldContextObject, TArray<TSubclassOf<AActor>> IgnoreActorClasses) {
}

void UGSSFunctionLibrary::DestroyAllCustomers(UObject* WorldContextObject) {
}

void UGSSFunctionLibrary::DespawnEvent(UWorld* World, TSoftClassPtr<UGSSEvent> EventClass, bool TriggerFinishEvent) {
}

AObjectiveMarker* UGSSFunctionLibrary::CreateObjectiveMarker(UObject* Instaginator, TSubclassOf<AObjectiveMarker> ObjectiveMarkerClass, FTransform SpawnTransform, AActor* Actor, float Outline, float Marker, float DelayActivated) {
    return NULL;
}

FString UGSSFunctionLibrary::ConvertFloatToPercentageString(UObject* WorldContextObject, float Percentage) {
    return TEXT("");
}

void UGSSFunctionLibrary::ClearUserFocus(APlayerController* PC) {
}

bool UGSSFunctionLibrary::CheckIfLevelUpgradePossible(UObject* WorldContextObject, TArray<FRequiredItems> RequiredItems) {
    return false;
}

bool UGSSFunctionLibrary::CheckIfFeatureUpgradePossible(UObject* WorldContextObject, FName RowName, bool& LevelOfBuldingReq, bool& AmountOfMoneyReq, bool& DLCReq) {
    return false;
}

void UGSSFunctionLibrary::CheckGamepadConnected(UObject* WorldContextObject) {
}

bool UGSSFunctionLibrary::CheckDLCForQuest(UObject* WorldContextObject, const FString& PackageName) {
    return false;
}

bool UGSSFunctionLibrary::CanBePaid_Tag(UObject* WorldContextObject, EDLCName DlcRequired, EBuildingType BuildingType, int32 LevelRequired, float MoneyRequired, float ContractPointsRequired, bool UseInvertedTag, TArray<FRequiredItems> ItemRequired, FGameplayTag UnlockTagRequired, bool& bEnoughMoney, bool& bEnoughContractPoints, bool& bTagUnlocked, bool& bBuildingLevelGood, bool& bEnoughItems, bool& bDLCEnabled) {
    return false;
}

bool UGSSFunctionLibrary::CanBePaid(UObject* WorldContextObject, EDLCName DlcRequired, EBuildingType BuildingType, int32 LevelRequired, float MoneyRequired, TArray<FRequiredItems> ItemRequired, FGameplayTag UnlockedGameplayTag, TSoftClassPtr<UGSSQuest> QuestRequired, bool& bEnoughMoney, bool& bQuestCompleted, bool& bBuildingLevelGood, bool& bEnoughItems, bool& bDLCEnabled) {
    return false;
}

bool UGSSFunctionLibrary::CanAssistant(AAICharacterBase* AICharacterBase, ACharacter* Instaginator, bool bIgnoreCustomerState) {
    return false;
}

void UGSSFunctionLibrary::CalculateCuttingRatio(float OriginalVolume, float CuttedPieceVolume, float& OutFirstRatio, float& OutSecondRatio) {
}

bool UGSSFunctionLibrary::AddToPlayerInventories(UObject* WorldContextObject, TSoftClassPtr<AItem> Item, int32 Quantity, bool IgnoreLimit) {
    return false;
}

bool UGSSFunctionLibrary::AddToActorInventory(AActor* Actor, TSoftClassPtr<AItem> Item, int32 Quantity, bool IgnoreLimit) {
    return false;
}


