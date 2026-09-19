#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=EOSManagers -ObjectName=DLCOwnershipData -FallbackName=DLCOwnershipData
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstance -FallbackName=GameInstance
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "CinemaManagerSpawnedDelegate.h"
#include "EDLCName.h"
#include "EGamePadType.h"
#include "FinishGameLoadDelegate.h"
#include "GameVersionChangedDelegate.h"
#include "GamepadTypeChangedDelegate.h"
#include "LoadGameProgressUpdatedDelegate.h"
#include "MapsLoadedDelegate.h"
#include "OnDLCOwnershipDataUpdatedDelegate.h"
#include "OnStartGameLoadDelegate.h"
#include "QuestLoadedDelegate.h"
#include "SaveGameProgressUpdatedDelegate.h"
#include "SavedAICharacters.h"
#include "SavedActiveQuestLine.h"
#include "SavedPlayerDecals.h"
#include "SavedQuest.h"
#include "SavedSlotStruct.h"
#include "SavedWallInfo.h"
#include "Templates/SubclassOf.h"
#include "WidgetLoadDelegate.h"
#include "GSSGameInstance.generated.h"

class AAICharacterBase;
class ACustomizationHousePart;
class ADecalToPaint;
class AGSSGameState;
class AGSSWheeledVehicle;
class AInteractableBuilding;
class ALotteryMachine;
class ATrashBin;
class UGSSQuest;
class UGSSSaveGame;
class UInventoryComponent;
class ULevel;
class ULevelTeleporterDataAsset;
class UMaterialInstance;
class UObjectiveBase;
class UQuestBase;
class UQuestLineBase;
class USaveSlot;
class UStaticMesh;

UCLASS(Blueprintable, NonTransient)
class GSS2_API UGSSGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsGameLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAnyBuildingLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsGameLoadingScreenShown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChangedMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseNewNpcModels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> ConnectedSaveSlotsForOtherLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGSSSaveGame* SaveGameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveSlot* SaveSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPCWidgetOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VIPTravelingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VIPHomeRestingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VIPAwaitingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VIPBonusDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VIPBonusPointsTriggerTreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EDLCName> VIPTravelDestinations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag VIPSystemUnlockTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MapsToInstantLoad;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGSSGameState* GSSGameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALotteryMachine* LotteryMachine;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SaveGameVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LanguageFixApplied;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadGameProgressUpdated OnLoadGameProgressUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaveGameProgressUpdated OnSaveGameProgressUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartGameLoad OnStartGameLoad;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFinishGameLoad OnFinishGameLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestLoaded OnQuestLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWidgetLoad OnWidgetLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapsLoaded OnMapsLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameVersionChanged OnGameVersionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCinemaManagerSpawned OnCinemaManagerSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGSSQuest> LastQuestInMainQuestLineInOldSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestLineBase* AirStripQuestLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestLineBase* JunkyardQuestLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestLineBase* CinemaQuestline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestLineBase* RVCampQuestline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FinishedMainGameCampain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FinishedAirStripCampain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FinishedJunkyardCampain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FinishedCinemaCampain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfQuestLinesToLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDecorationsLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableInEditor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DLCCustomizationPluginName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DLCPartyTimePluginName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DLCAirstripPluginName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DLCParadiseIslandPluginName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DLCCarJunkyardPluginName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DLCDriveInCinemaPluginName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DLCRVCampPluginName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDLCCustomizationEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDLCPartyTimeEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDLCAirstripEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDLCParadiseIslandEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDLCShadyDealsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDLCCarJunkyardEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDLCDriveInCinemaEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDLCRVCampEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelTeleporterDataAsset* DA_LevelTeleporter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnDLCOwnershipDataUpdated OnDLCOwnershipDataUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDLCOwnershipData> DLCOwnershipData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGamePadType ActiveGamepadType;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGamepadTypeChanged OnGamepadChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText GameVersion;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> CachedStreamingLevelsNames;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAICharacterBase*> EmployeesTemp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAICharacterBase*> EmployeesWithoutAssignedHome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShownAdvertMenuInThisSession;
    
    UGSSGameInstance();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UnmuteAllMusic();
    
private:
    UFUNCTION(BlueprintCallable)
    bool TryRegenerateSaveSlots();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TSoftClassPtr<UObjectiveBase> TranslateOldQuestToNew_Blueprint(FSavedQuest SavedGSSQuest, UQuestBase* NewQuest, int32& OutMaxProgress, int32& OutCurrentProgress);
    
    UFUNCTION(BlueprintCallable)
    void TranslateOldQuestToNew(FSavedQuest SavedGSSQuest, bool bIgnoreStartingNewQuestLine);
    
    UFUNCTION(BlueprintCallable)
    void StartLoadingGame();
    
    UFUNCTION(BlueprintCallable)
    void SpawnEditedWall(TSubclassOf<ACustomizationHousePart> WallClass, FTransform Transform, FSavedWallInfo SavedWallInfo, ULevel* MoveToLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowLoadScreen(bool bCondition, FName MapToOpen);
    
    UFUNCTION(BlueprintCallable)
    void SetGamepadType(EGamePadType NewGamepadType);
    
    UFUNCTION(BlueprintCallable)
    void SaveWorldObjects();
    
    UFUNCTION(BlueprintCallable)
    void SaveWidgetPlayerDecals();
    
    UFUNCTION(BlueprintCallable)
    void SaveWalls();
    
    UFUNCTION(BlueprintCallable)
    void SaveVIPData();
    
    UFUNCTION(BlueprintCallable)
    void SaveTutorialManager();
    
    UFUNCTION(BlueprintCallable)
    void SaveTrashBins();
    
    UFUNCTION(BlueprintCallable)
    void SaveTrafficManager();
    
    UFUNCTION(BlueprintCallable)
    void SaveSpawnedWebs();
    
    UFUNCTION(BlueprintCallable)
    void SaveShelves();
    
    UFUNCTION(BlueprintCallable)
    void SaveSettings();
    
    UFUNCTION(BlueprintCallable)
    void SaveRVChallenges();
    
    UFUNCTION(BlueprintCallable)
    void SaveRuins();
    
    UFUNCTION(BlueprintCallable)
    void SaveRudy();
    
    UFUNCTION(BlueprintCallable)
    void SaveRenownSystem();
    
    UFUNCTION(BlueprintCallable)
    void SaveQuestProgress();
    
    UFUNCTION(BlueprintCallable)
    void SavePlayerTools();
    
    UFUNCTION(BlueprintCallable)
    void SavePlayerDecals();
    
    UFUNCTION(BlueprintCallable)
    void SavePlayer();
    
    UFUNCTION(BlueprintCallable)
    void SaveNPCs();
    
    UFUNCTION(BlueprintCallable)
    void SaveNPAIData();
    
    UFUNCTION(BlueprintCallable)
    void SaveNewTrash();
    
    UFUNCTION(BlueprintCallable)
    void SaveNewQuestProgress();
    
    UFUNCTION(BlueprintCallable)
    void SaveMoneyTransfer();
    
    UFUNCTION(BlueprintCallable)
    void SaveMiniGames();
    
    UFUNCTION(BlueprintCallable)
    void SaveMikeSection();
    
    UFUNCTION(BlueprintCallable)
    void SaveMask(FSavedAICharacters& SavedAICharacter, AGSSWheeledVehicle* GSSWheeledVehicle, bool bIsSpawned);
    
    UFUNCTION(BlueprintCallable)
    void SaveMarketProducts();
    
    UFUNCTION(BlueprintCallable)
    void SaveMaps();
    
    UFUNCTION(BlueprintCallable)
    void SaveItems();
    
    UFUNCTION(BlueprintCallable)
    void SaveGasStation();
    
    UFUNCTION(BlueprintCallable)
    void SaveGarageData();
    
    UFUNCTION(BlueprintCallable)
    void SaveGameState();
    
    UFUNCTION(BlueprintCallable)
    bool SaveGame(const FString& GameMapName, bool AutoSave);
    
    UFUNCTION(BlueprintCallable)
    void SaveEmployees();
    
    UFUNCTION(BlueprintCallable)
    void SaveEconomySubsystemData();
    
    UFUNCTION(BlueprintCallable)
    void SaveEconomyData();
    
    UFUNCTION(BlueprintCallable)
    void SaveDecorations();
    
    UFUNCTION(BlueprintCallable)
    void SaveDecals();
    
    UFUNCTION(BlueprintCallable)
    void SaveCollectibleCards();
    
    UFUNCTION(BlueprintCallable)
    void SaveChallenges();
    
    UFUNCTION(BlueprintCallable)
    void SaveCashShop();
    
private:
    UFUNCTION(BlueprintCallable)
    void SaveCashMeshAndColor();
    
public:
    UFUNCTION(BlueprintCallable)
    void SaveCarWashData();
    
    UFUNCTION(BlueprintCallable)
    void SaveAverageIncome();
    
    UFUNCTION(BlueprintCallable)
    void SaveAdditionalUprades();
    
    UFUNCTION(BlueprintCallable)
    void SaveActionManagerSubsystem();
    
    UFUNCTION(BlueprintCallable)
    void SaveAchievementData();
    
    UFUNCTION(BlueprintCallable)
    void RemoveDuplicatesOfUniqueCharacters();
    
    UFUNCTION(BlueprintCallable)
    void RemoveDuplicatedCinemaQuestLines(TArray<FSavedActiveQuestLine>& SavedQuestLines);
    
    UFUNCTION(BlueprintCallable)
    void RegisterLotteryMachine(ALotteryMachine* LotteryMachineToSet);
    
    UFUNCTION(BlueprintCallable)
    void RebuildNavmesh();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RebindPartyBusHome();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLoginCompleted(bool bWasSuccessful, const FString& UserNickname);
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadWorldObjects();
    
    UFUNCTION(BlueprintCallable)
    void LoadWidgetPlayerDecals();
    
    UFUNCTION(BlueprintCallable)
    void LoadWallStaticMesh(ACustomizationHousePart* CustomizationHousePart, UStaticMesh* StaticMeshRef, UMaterialInstance* Material0Ref, UMaterialInstance* Material1Ref, UMaterialInstance* WallPaperMaterial);
    
    UFUNCTION(BlueprintCallable)
    void LoadWalls();
    
    UFUNCTION(BlueprintCallable)
    void LoadVIPData(bool bMapChanged);
    
    UFUNCTION(BlueprintCallable)
    void LoadTutorialManager();
    
    UFUNCTION(BlueprintCallable)
    void LoadTrashBin(ATrashBin* TrashBin);
    
    UFUNCTION(BlueprintCallable)
    void LoadTrafficManager();
    
    UFUNCTION(BlueprintCallable)
    void LoadSpawnedWebs();
    
    UFUNCTION(BlueprintCallable)
    void LoadShelves();
    
    UFUNCTION(BlueprintCallable)
    void LoadSettings();
    
    UFUNCTION(BlueprintCallable)
    void LoadRVChallenges();
    
    UFUNCTION(BlueprintCallable)
    void LoadRuins();
    
    UFUNCTION(BlueprintCallable)
    void LoadRudy();
    
    UFUNCTION(BlueprintCallable)
    void LoadRenownSystem();
    
    UFUNCTION(BlueprintCallable)
    void LoadQuestProgress();
    
    UFUNCTION(BlueprintCallable)
    void LoadQuest();
    
    UFUNCTION(BlueprintCallable)
    void LoadPlayerTools();
    
    UFUNCTION(BlueprintCallable)
    TArray<ADecalToPaint*> LoadPlayerDecals(const TArray<FSavedPlayerDecals>& DecalsToLoad, bool bDeleteOldDecals);
    
    UFUNCTION(BlueprintCallable)
    void LoadPlayer();
    
    UFUNCTION(BlueprintCallable)
    void LoadNPCs();
    
    UFUNCTION(BlueprintCallable)
    void LoadNPAIData();
    
    UFUNCTION(BlueprintCallable)
    void LoadNewTrash();
    
    UFUNCTION(BlueprintCallable)
    void LoadNewQuestProgress();
    
    UFUNCTION(BlueprintCallable)
    void LoadMoneyTransfer();
    
    UFUNCTION(BlueprintCallable)
    void LoadMiniGames();
    
    UFUNCTION(BlueprintCallable)
    void LoadMikeSection();
    
    UFUNCTION(BlueprintCallable)
    void LoadMask(FSavedAICharacters& SavedAICharacter, AGSSWheeledVehicle* GSSWheeledVehicle, bool bIsSpawned);
    
    UFUNCTION(BlueprintCallable)
    void LoadMarketProducts();
    
    UFUNCTION(BlueprintCallable)
    void LoadMaps();
    
    UFUNCTION(BlueprintCallable)
    void LoadLastIndexMap();
    
    UFUNCTION(BlueprintCallable)
    void LoadItems();
    
    UFUNCTION(BlueprintCallable)
    void LoadGasStationSections(AInteractableBuilding* InteractableBuilding);
    
    UFUNCTION(BlueprintCallable)
    void LoadGasStation();
    
    UFUNCTION(BlueprintCallable)
    void LoadGarageData();
    
    UFUNCTION(BlueprintCallable)
    void LoadGameState();
    
    UFUNCTION(BlueprintCallable)
    void LoadFloorMaterial(TSoftObjectPtr<UMaterialInstance> FloorMaterial, TSoftObjectPtr<UMaterialInstance> ToiletFloorMaterial);
    
    UFUNCTION(BlueprintCallable)
    void LoadEmployees(TArray<AAICharacterBase*> Employees);
    
    UFUNCTION(BlueprintCallable)
    void LoadEconomySubsystemData();
    
    UFUNCTION(BlueprintCallable)
    void LoadEconomyData();
    
    UFUNCTION(BlueprintCallable)
    void LoadDecorations();
    
    UFUNCTION(BlueprintCallable)
    void LoadDecals();
    
    UFUNCTION(BlueprintCallable)
    void LoadCollectibleCards();
    
    UFUNCTION(BlueprintCallable)
    void LoadChallenges();
    
    UFUNCTION(BlueprintCallable)
    void LoadCashShop();
    
private:
    UFUNCTION(BlueprintCallable)
    void LoadCashMeshAndColor();
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadCarWashData();
    
    UFUNCTION(BlueprintCallable)
    void LoadAverageIncome();
    
    UFUNCTION(BlueprintCallable)
    void LoadAdditionalUpgrades();
    
    UFUNCTION(BlueprintCallable)
    void LoadActionManagerSubsystem();
    
    UFUNCTION(BlueprintCallable)
    void LoadAchievementData();
    
    UFUNCTION(BlueprintCallable)
    bool IsMainCampainFinishedInOldQuestSystem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlreadyLoading() const;
    
    UFUNCTION(BlueprintCallable)
    void InitLoadGame(const FString& USaveGame);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSaveConnectedToDLC(EDLCName DLCName);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSaveSlotIndex(const FString& GameMapName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSaveGameVersion();
    
    UFUNCTION(BlueprintCallable)
    FString GetPathToLatestSave(bool bRelative);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSavedSlotStruct GetLastSaveGame();
    
    UFUNCTION(BlueprintCallable)
    void FinishLoadingGame();
    
private:
    UFUNCTION(BlueprintCallable)
    bool DoesLevelFileExist(FName LevelName);
    
public:
    UFUNCTION(BlueprintCallable)
    void DLCQueryFinished(bool bSuccesfull, const TArray<FDLCOwnershipData>& OwnershipData);
    
    UFUNCTION(BlueprintCallable)
    void DeleteSaveGameInstance();
    
    UFUNCTION(BlueprintCallable)
    int32 DeleteSaveGame(FSavedSlotStruct SavedSlot);
    
    UFUNCTION(BlueprintCallable)
    FSavedPlayerDecals CreateSavedDecalData(ADecalToPaint* DecalActor);
    
    UFUNCTION(BlueprintCallable)
    void ConvertInventoryToNewSystem(UInventoryComponent* InventoryComponent);
    
    UFUNCTION(BlueprintCallable)
    void ConnectOtherLevelsToSaveSlot(const FString& LoadedGameMapName, const FString& LevelNameToAdd, const FString& GameMapNameToAdd);
    
    UFUNCTION(BlueprintCallable)
    void CheckLevelsVisibility();
    
    UFUNCTION(BlueprintCallable)
    void CheckForMissingPathStation();
    
private:
    UFUNCTION(BlueprintCallable)
    void CacheStreamingLevelsNames();
    
};

