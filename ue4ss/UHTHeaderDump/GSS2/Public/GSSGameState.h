#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CollectibleItems -ObjectName=CollectibleItemsInteraction -FallbackName=CollectibleItemsInteraction
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameStateBase -FallbackName=GameStateBase
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "AllPlayerOrders.h"
#include "CloseOpenGasStationDelegate.h"
#include "DialogueGraphOwner.h"
#include "DirtyLevelUpdateDelegate.h"
#include "EDecalColor.h"
#include "EDecalUnlockType.h"
#include "EFuelMagazine.h"
#include "EGameVersion.h"
#include "EItemTypeCategory.h"
#include "ERenown_Reasons.h"
#include "EUIState.h"
#include "EventFinishedDelegate.h"
#include "EventSpawnedDelegate.h"
#include "GSSEventTime.h"
#include "GSSPlayerSpawnDelegate.h"
#include "GameSaveCompletedDelegate.h"
#include "GameSaveStartedDelegate.h"
#include "GameTimeHoursUpdateDelegate.h"
#include "GameTimeUpdateDelegate.h"
#include "GastStationOpenedDelegate.h"
#include "HappyAngryPopularityLevelUpDelegate.h"
#include "HappyAngryUpdateDelegate.h"
#include "KeybindingChangedDelegate.h"
#include "KeybindingsResetDelegate.h"
#include "MapUnlockedDelegate.h"
#include "OnAIManagerSpawnedDelegate.h"
#include "PartySpotBoughtDelegate.h"
#include "PawnSpawnedDelegate.h"
#include "PlayerPartySpot.h"
#include "PlayerShelvProductDelegate.h"
#include "PlayerThrowDelegate.h"
#include "ProductShopStruct.h"
#include "QuestFinishedDelegate.h"
#include "QuestHistory.h"
#include "QuestSpawnedDelegate.h"
#include "RestockProductData.h"
#include "SavedPickedDecal.h"
#include "SpawnedProductDelegate.h"
#include "TArrayPlayerDecals.h"
#include "Templates/SubclassOf.h"
#include "TimeStruct.h"
#include "UfoStartedDelegate.h"
#include "UfoUsedDelegate.h"
#include "UnlockCameraActivatedDelegate.h"
#include "UnlockCameraDeactivatedDelegate.h"
#include "GSSGameState.generated.h"

class AAICharacterBase;
class AAISpawnPoint;
class AAchievementManager;
class AActor;
class ABuildArea;
class ACarLift;
class ACarWash;
class ACaravan;
class ACashShop;
class ACentralShop;
class ACustomizationHousePart;
class ADecorationCamera;
class AGSSWheeledVehicle;
class AGarage;
class AHouse;
class AIceCreamBuilding;
class AInteractableActor;
class AInteractableBuilding;
class AInteractableDecal;
class AItem;
class ALeaderboardManager;
class AMagazine;
class APartySpot;
class APartyTime;
class APathStation;
class APawn;
class APlaceableActor;
class AQuestChallengeManager;
class ARuins;
class AShelf;
class ASnapPoint;
class ATrashItemBase;
class ATriggerBox;
class AUIQuickAccess;
class AUpgradeStationCamera;
class AVehiclePart;
class AWaterVehicle;
class UAIManager;
class UCollectibleItemsManager;
class UCurveFloat;
class UDataTable;
class UDialogueGraph;
class UEventDisplay;
class UGSSEvent;
class UGSSQuest;
class UInventoryComponent;
class UObject;
class UTaskBase;
class UTutorialManager;
class UUI_QuestManager;
class UUserWidget;

UCLASS(Blueprintable)
class GSS2_API AGSSGameState : public AGameStateBase, public ICollectibleItemsInteraction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle CheckGamepadHandle;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTutorialManager* TutorialManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsGameStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameVersion GameVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUI_QuestManager* UI_QuestManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryComponent* ProductsInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirportFuel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryComponent* CarPartsInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryComponent* IceCreamStandInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIManager* AIManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BindingsDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACashShop* CashShopRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCollectibleItemsManager* CollectibleItemsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGasStationEnabled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGastStationOpened OnGastStationOpened;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCloseOpenGasStation OnCloseOpenGasStation;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUfoUsed OnUfoUsed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUfoStarted OnUfoStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnlockCameraActivated OnUnlockCameraActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnlockCameraDeactivated OnUnlockCameraDeactivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameSaveStarted OnGameSaveStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameSaveCompleted OnGameSaveCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAIManagerSpawned OnAIManagerSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMagazineEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DTHappyAngryThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DTMovementGroundSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DTAllItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreQuestProgressForUpgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<AAICharacterBase*> BrowsingCustomers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAISpawnPoint*> AISpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeStruct TimeStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDisableControllers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProductShopStruct> FoodsShop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProductShopStruct> AlcoholsShop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProductShopStruct> CiggaretShop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProductShopStruct> GlassesShop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProductShopStruct> IceCreamShop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProductShopStruct> HatsShop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProductShopStruct> SoftDrinksShop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProductShopStruct> NewsPaperShop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProductShopStruct> SoftToy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProductShopStruct> CarCare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProductShopStruct> Toy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProductShopStruct> pasteries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProductShopStruct> KeyItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProductShopStruct> Decorations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProductShopStruct> Tires;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProductShopStruct> CarMirrors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProductShopStruct> ScratchRemover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProductShopStruct> Accumulator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProductShopStruct> EngineOil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProductShopStruct> Battery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProductShopStruct> sparkplug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProductShopStruct> Coolant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProductShopStruct> DuctTape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProductShopStruct> IceCreamBuildingProducts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AItem*> Products;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVehiclePart*> VehicleParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APlaceableActor*> PlaceableActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ACaravan*> Caravans;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARuins*> Ruins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTArrayPlayerDecals PlayerDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedPickedDecal SavedPickedDecal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAllPlayerOrders MainPlayerOrderM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProductShopStruct> BuildingsShop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AHouse*> Houses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASnapPoint*> SnapPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GasStationDoorCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> TotalDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AInteractableDecal*> HouseDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AInteractableDecal*> ToiletDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AInteractableDecal*> ShowerDecals;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirtyLevelUpdate OnDirtyLevelUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATrashItemBase*> TotalTrashItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATrashItemBase*> HouseTrashItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATrashItemBase*> ToiletTrashItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> TrashDirtToClean;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ACustomizationHousePart*> CustomizationHouseParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> GameplayStuffs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AInteractableBuilding*> GasStationSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABuildArea*> GroundDecorationAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATriggerBox* RoofDecorationBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APathStation*> PathStationsWithInteractableActorTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AShelf> CopiedShelfClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemTypeCategory CopiedCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CopiedRestockThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CopiedProductRestockFilling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CopiedbAutoRestock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRestockProductData> CopiedRestockingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> UnlockedMaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MapsToUnload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DecorationMapDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> UnlockedFeatures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ADecorationCamera*> DecorationCameras;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ADecorationCamera*> InteractiveDecorationCameras;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AUpgradeStationCamera*> UpgradeStationCameras;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DecorationsHidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APawn*> Vehicles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APawn*> Pawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnNewVehiclesIsBlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsing24HTimeFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVIPCanActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDennisCanActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSharkCanActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSandstormCanActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBusEventCanActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bElvisCanActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSantasSleighCanActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChristmasHatsCanActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWarehouseStealingCanActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPostGameChallengesCanActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bJunkyardCustomizationEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bJunkyardCustomizationMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCashRegisterSoundActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHeadBobEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStreamerMode;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestSpawned OnQuestSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestFinished OnQuestFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTaskBase*> ActiveTasks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NewTaskAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGSSQuest* QuestActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UGSSQuest>> GSSQuestsSoft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UGSSQuest>> FinishedGSSQuestsSoft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestHistory> QuestHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGSSEvent*> ActiveEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGSSEventTime> GSSEventsTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEventDisplay* ActiveEventDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UEventDisplay>> EventsDisplay;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventSpawned OnEventSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventFinished OnEventFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Strike;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreviousStrike;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrowDistanceRecord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FuelStrike;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FuelLast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NumberOfFuelRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinFuelRecordVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RepairGameStrike;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepairGameLastResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepairGameBestResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CashMoney;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FuelEarnedMoney;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FuelSpendMoney;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GarageMoney;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastDesertCarTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BestDesertCarTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BoughtDecorationAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrashBagCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JerryCanFuel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalGameSessionTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameTimeUpdate OnGameTimeUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapUnlocked OnMapUnlocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKeybindingChanged OnKeybindingChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKeybindingsReset OnKeybindingsReset;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameTimeHoursUpdate OnGameTimeHoursUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnedProduct OnSpawnedProduct;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPawnSpawned OnPawnSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerThrow OnPlayerThrowed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGSSPlayerSpawn OnPlayerSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerShelvProduct OnPlayerShelvProduct;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHappyAngryUpdate OnHappyAngryUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHappyAngryPopularityLevelUp OnHappyAngryPopularityLevelUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HappyAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PopularityLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACentralShop* CentralShop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGarage* Garage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMagazine* Magazine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACarWash* CarWash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIceCreamBuilding* IceCreamBuilding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APartySpot* PartySpot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APartyTime* PartyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AInteractableActor*> Buildings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ACarLift*> CarLifts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> ActiveWidgets;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInteractableBuilding* ActiveBuilding;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrashDropChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ATrashItemBase>> ValidCustomerTrashClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ATrashItemBase>> ValidCustomerToiletTrashClass;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FuelingTuTDone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DiggerTUTDone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CashTuTDone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RCTuTDone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool JerCanTuTDone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CarPartsTut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ProductsTut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool GarageGameIsStillOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ProductDatabase;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AQuestChallengeManager* ChallengeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAchievementManager* AchievementManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUIQuickAccess* UIQuickAccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALeaderboardManager* LeaderboardManager;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* ActiveWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CollectibleItemsPluginActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartySpotBought OnPartySpotBought;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerPartySpot PlayerPartySpot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAICharacterBase*> PartySpotBusGuys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DTAdditionalUpgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideCarAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CarOverrideAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TutorialInfoDT;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDialogueGraphOwner> DialogueOwners;
    
public:
    AGSSGameState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void WaterDeliveryStatus(TSubclassOf<AWaterVehicle> WatervehicleClass, bool& bDelivery, bool& bIsComingIn);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePlayerDecal(FName DecalName, bool bIsFavourite);
    
    UFUNCTION(BlueprintCallable)
    int32 UpdateHappyAngry(int32 Count, UObject* Instaginator, ERenown_Reasons SourceOfRenown, const FString& HappyReason);
    
    UFUNCTION(BlueprintCallable)
    void UnblockItem(TSoftClassPtr<AItem> ItemClass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartGame();
    
    UFUNCTION(BlueprintCallable)
    void ShowGroundDecorationAreas(bool bShow);
    
    UFUNCTION(BlueprintCallable)
    void SetPickedCategory(EDecalUnlockType UnlockType);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetMaxVehiclesOnMap(int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    void SetIsInShop(bool NewIsInShop);
    
    UFUNCTION(BlueprintCallable)
    void SetGenericOrArtistic(EDecalColor NewGenericOrArtistic);
    
    UFUNCTION(BlueprintCallable)
    void SetDecalUnlockType(EDecalUnlockType NewDecalUnlockType);
    
    UFUNCTION(BlueprintCallable)
    void SetDecalColor(FLinearColor NewColor);
    
    UFUNCTION(BlueprintCallable)
    void SetChallengeManager(AQuestChallengeManager* NewChallengeManager);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAdditionalScalability(int32 QualityIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetActiveWidget(UUserWidget* NewActiveWidget, EUIState UIState);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveBuilding(AInteractableBuilding* NewActiveBuilding);
    
    UFUNCTION(BlueprintCallable)
    void SendAllNpcsHome(FName Reason, bool bResetCarLifts, bool bDennis, bool bEmployees, bool bDelivery);
    
    UFUNCTION(BlueprintCallable)
    void OnGameLoaded(bool IsLoaded);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisplayEvent(UEventDisplay* CurrentActiveEventDisplay, float LeftDisplayTime);
    
    UFUNCTION(BlueprintCallable)
    bool IsUnlockTypeUnlocked(EDecalUnlockType UnlockType);
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayerDecalUnblocked(FName DecalName, bool& bIsFavourite);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AUIQuickAccess* GetUIQuickAccess();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetTutorialInfoDT() const;
    
    UFUNCTION(BlueprintCallable)
    float GetTrashDropChance();
    
    UFUNCTION(BlueprintCallable)
    AInteractableBuilding* GetStationSectionByTag(FName Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<ATrashItemBase> GetRandomTrashItemClass();
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<ATrashItemBase> GetRandomToiletTrashItemClass();
    
    UFUNCTION(BlueprintCallable)
    TSoftClassPtr<UGSSQuest> GetQuestByTitle(FText InQuestTitle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetProductSellPrice(FName ProductName, bool bSingle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<float> GetProductPricesData(float SellPrice, UCurveFloat* ProductPriceCurve, int32 StartPoint, int32 EndPoint, float& LowestPoint, float& HighestPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<float> GetProductPrices(FName ProductName, UCurveFloat* ProductPriceCurve, int32 StartPoint, int32 EndPoint, float& LowestPoint, float& HighestPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetProductHighestLowestValue(UCurveFloat* ProductPriceCurve, int32 StartPoint, int32 EndPoint, float& HighestPoint, float& LowestPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetProductCurrentPriceToAverageRatio(UCurveFloat* ProductPriceCurve);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetProductBuyPrice(UCurveFloat* ProductPriceCurve, int32 DayOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetProductAverageBuyPrice(UCurveFloat* ProductPriceCurve);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDecalUnlockType GetPickedCategory();
    
    UFUNCTION(BlueprintCallable)
    void GetNumberOfLandmarks(int32& OwnedLandmarks, int32& TotalLandmarks, bool IsInteractable, bool CountHidden);
    
    UFUNCTION(BlueprintCallable)
    AUpgradeStationCamera* GetNextUpgradeCamera(AUpgradeStationCamera* UpgradeStationCamera, bool Next);
    
    UFUNCTION(BlueprintCallable)
    ADecorationCamera* GetManagementCamera();
    
    UFUNCTION(BlueprintCallable)
    ALeaderboardManager* GetLeaderboardManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLastShelfRestockPreset(EItemTypeCategory& ShelfCategory, TSoftClassPtr<AShelf>& OutShelfClass, float& OutRestockThreshold, float& OutProductRestockFilling, bool& OutbAutoRestock, TArray<FRestockProductData>& OutRestockingData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsInShop();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AInteractableActor*> GetInteractableBuildings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDecalColor GetGenericOrArtistic();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFuelSellPrice(EFuelMagazine FuelType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<float> GetFuelPrices(EFuelMagazine FuelType, int32 StartPoint, int32 EndPoint, float& LowestPoint, float& HighestPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCurveFloat* GetFuelBuyPriceCurve(EFuelMagazine FuelType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFuelBuyPrice(EFuelMagazine FuelType, int32 DayOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDirtyStatus(float& PercentHouseDirty, float& PercentToiletDirty, float& PercentShowerDirty);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDecalUnlockType GetDecalUnlockType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetDecalColor();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UCollectibleItemsManager* GetCollectibleItemsManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AQuestChallengeManager* GetChallengeManager();
    
    UFUNCTION(BlueprintCallable)
    TArray<FDialogueGraphOwner> GetAllDialogueOwners() const;
    
    UFUNCTION(BlueprintCallable)
    AInteractableBuilding* GetActiveBuilding();
    
    UFUNCTION(BlueprintCallable)
    void FinishEvent(UGSSEvent* GSSEvent);
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UDialogueGraph> FindDialogueOwnerGraph(UDialogueGraph* DialogueGraph);
    
    UFUNCTION(BlueprintCallable)
    UDialogueGraph* FindDialogueOwnerGameplayGraphBySoft(TSoftObjectPtr<UDialogueGraph> DialogueGraph);
    
    UFUNCTION(BlueprintCallable)
    UDialogueGraph* FindDialogueOwnerGameplayGraph(UDialogueGraph* DialogueGraph);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnableGastStation(const bool Enabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void DeliveryStatus(TSubclassOf<AGSSWheeledVehicle> VehicleClass, bool& bDelivery, TSubclassOf<UTaskBase>& TaskClass);
    
    UFUNCTION(BlueprintCallable)
    void CopyShelfRestockPreset(EItemTypeCategory ShelfCategory, TSoftClassPtr<AShelf> InShelfClass, const float InRestockThreshold, const float InProductRestockFilling, const bool InbAutoRestock, const TArray<FRestockProductData>& InRestockingData);
    
    UFUNCTION(BlueprintCallable)
    bool CheckIfFeatureOwned(FName FeatureName);
    
    UFUNCTION(BlueprintCallable)
    void AddInteractableBuilding(AInteractableActor* Building);
    
    UFUNCTION(BlueprintCallable)
    void AddGarageMoney(float Count);
    
    UFUNCTION(BlueprintCallable)
    void AddFuelMoney(float Count);
    
    UFUNCTION(BlueprintCallable)
    void AddEventDisplay(TSubclassOf<UEventDisplay> NewEventDisplay);
    
    UFUNCTION(BlueprintCallable)
    void AddCashMoney(float Count);
    
    UFUNCTION(BlueprintCallable)
    void AddBoughtActor(TSubclassOf<AActor> BoughtActor, const int32 Amount);
    

    // Fix for true pure virtual functions not being implemented
};

