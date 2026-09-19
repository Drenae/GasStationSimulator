#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "ForceSpawnDenisDelegate.h"
#include "OnAITaskFinishedDelegate.h"
#include "OnAreaReservedBySeanUpdatedDelegate.h"
#include "OnBoatSpawnedDelegate.h"
#include "OnBuildingUpgradedDelegate.h"
#include "OnCannonHitEndedDelegate.h"
#include "OnCannonHitStartedDelegate.h"
#include "OnCarPartAddedToStorageDelegate.h"
#include "OnCarSentToExhibitionDelegate.h"
#include "OnCarWashOpenStateChangedDelegate.h"
#include "OnChemicalsRefreshedDelegate.h"
#include "OnChunchumanchuAngerChangeDelegate.h"
#include "OnCinemaCustomMovieUploadedDelegate.h"
#include "OnCoconutMissDelegate.h"
#include "OnContractCompletedDelegate.h"
#include "OnContractPointsUpdatedDelegate.h"
#include "OnContractTakenDelegate.h"
#include "OnCraneEnteredDelegate.h"
#include "OnCraneExitedDelegate.h"
#include "OnCustomerArrivedAtCarWashDelegate.h"
#include "OnCustomerCarFueledDelegate.h"
#include "OnCustomerDieDelegate.h"
#include "OnCustomerEatenDelegate.h"
#include "OnDebugCamerasActivatedDelegate.h"
#include "OnDebugCamerasDeactivatedDelegate.h"
#include "OnDecorationCameraBoughtDelegate.h"
#include "OnDenisDecalPaintedOverDelegate.h"
#include "OnDenisSpawnedDelegate.h"
#include "OnDialogRequestFinishActiveObjectiveDelegate.h"
#include "OnDialogRequestFireExternalEventDelegate.h"
#include "OnEmployeePaidDelegate.h"
#include "OnEmployeeTaskStartedDelegate.h"
#include "OnEmployeeWorkTimeIncreasedDelegate.h"
#include "OnEquipmentRentalSpotFreeDelegate.h"
#include "OnEventCreatedDelegate.h"
#include "OnExcavatorBucketEmptiedDelegate.h"
#include "OnFirstTimeElectrictyTurnedOnDelegate.h"
#include "OnFuelLevelReachedDelegate.h"
#include "OnFuelOrderedDelegate.h"
#include "OnGameActivityFinishedDelegate.h"
#include "OnGameLoadingStartedDelegate.h"
#include "OnGamePauseChangedDelegate.h"
#include "OnGoHomeTaskInitializedDelegate.h"
#include "OnGrinderPickedUpDelegate.h"
#include "OnInteractableDecalDestroyedDelegate.h"
#include "OnItemPutIntoChemicalBathDelegate.h"
#include "OnItemSacrifiedDelegate.h"
#include "OnItemTakeFromChemicalBathDelegate.h"
#include "OnJerryCanRefueledDelegate.h"
#include "OnJoeAirplaneAttachedToTowyDelegate.h"
#include "OnJoeAirplaneCrashedDelegate.h"
#include "OnJoeAirplaneDetachedFromTowyDelegate.h"
#include "OnJoeTradeCompletedDelegate.h"
#include "OnJunkyardPhotoTakeDelegate.h"
#include "OnJunkyardWreckAttractedToMagnetDelegate.h"
#include "OnJunkyardWreckMarkedDelegate.h"
#include "OnLevelQuestZoneTriggeredDelegate.h"
#include "OnLoanEventTimeRunsOutDelegate.h"
#include "OnMailOpenedDelegate.h"
#include "OnMailSendDelegate.h"
#include "OnMainMenuEnterDelegate.h"
#include "OnMarshalWandsMinigameFinishedGlobalDelegate.h"
#include "OnMaskOpenedDelegate.h"
#include "OnMinigameStateChangedDelegate.h"
#include "OnMovableDecorationPlacedDelegate.h"
#include "OnMovableDecorationRemovedDelegate.h"
#include "OnMultiToolPickedUpDelegate.h"
#include "OnMultiToolPutDownDelegate.h"
#include "OnPartAddedToWreckDelegate.h"
#include "OnPlaceableActorDeInitializedDelegate.h"
#include "OnPlaceableActorInitializedDelegate.h"
#include "OnPlaneDeniedDelegate.h"
#include "OnPlayerBoughtDelegate.h"
#include "OnPlayerEnterVehicleDelegate.h"
#include "OnPlayerInteractionDelegate.h"
#include "OnPrologEndSequanceFinishedDelegate.h"
#include "OnRentalEquipmentBrokenDelegate.h"
#include "OnRentalEquipmentReplacedDelegate.h"
#include "OnRentalServiceStartedDelegate.h"
#include "OnResetCarWrecksDelegate.h"
#include "OnRuinsRemovedDelegate.h"
#include "OnSeanCarLightsOnDelegate.h"
#include "OnSpawnedQuestZoneTriggeredDelegate.h"
#include "OnSpiderWebDestroyedDelegate.h"
#include "OnStorageOpenDelegate.h"
#include "OnTechnologyUnlockedDelegate.h"
#include "OnTeleportUsedDelegate.h"
#include "OnTowTruckSpawnedDelegate.h"
#include "OnTradingAirPlaneArrivedDelegate.h"
#include "OnTrashBinEmptiedDelegate.h"
#include "OnTrashContainerTrashAmountChangedDelegate.h"
#include "OnTrashTruckOrderedDelegate.h"
#include "OnTutorialFinishedDelegate.h"
#include "OnWarehouseDoorUnlockedDelegate.h"
#include "OnWaterPointFreedDelegate.h"
#include "OnWaterPointReservedDelegate.h"
#include "OnWreckCustomizationStartedDelegate.h"
#include "OnWreckMoveToPhotoPlatformDelegate.h"
#include "OnWreckPlacedOnAreaDelegate.h"
#include "OnWreckPlayerProcessingStartedDelegate.h"
#include "OnWreckRemovedFromAreaDelegate.h"
#include "SaleTabEnterDelegate.h"
#include "SaleTutorialFinishDelegate.h"
#include "SandstormEndedDelegate.h"
#include "SandstormStartedDelegate.h"
#include "ShowerDirtylevelUpdatedDelegate.h"
#include "SpawnVIPCustomerDelegate.h"
#include "VIPBonusEndedDelegate.h"
#include "VIPBonusStartedDelegate.h"
#include "VIPCustomerSpawnedSuccessfullyDelegate.h"
#include "VIPProgressEarnedDelegate.h"
#include "VIPSpawnedOnMapDelegate.h"
#include "GlobalEventSubsystem.generated.h"

UCLASS(Blueprintable)
class GSS2_API UGlobalEventSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerEnterVehicle OnPlayerEnterVehicle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMailSend OnMailSend;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCoconutMiss CoconutMiss;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemSacrified ItemSacrified;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCustomerDie CustomerDie;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLevelQuestZoneTriggered OnLevelQuestZoneTriggered;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpawnedQuestZoneTriggered OnSpawnedQuestZoneTriggered;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShowerDirtylevelUpdated OnShowerDirtyLevelUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnContractPointsUpdated ContractPointsUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerInteraction OnPlayerInteraction;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFuelLevelReached OnFuelLevelReached;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJunkyardPhotoTake OnJunkyardPhotoTake;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMainMenuEnter OnMainMenuEnter;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJerryCanRefueled OnJerryCanRefueled;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChemicalsRefreshed OnChemicalsRefreshed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnResetCarWrecks OnResetCarWrecks;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCustomerCarFueled OnCustomerCarFueled;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnExcavatorBucketEmptied OnExcavatorBucketEmptied;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRuinsRemoved OnRuinsRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameActivityFinished OnGameActivityFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameLoadingStarted OnGameLoadingStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWreckMoveToPhotoPlatform OnWreckMoveToPhotoPlatform;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFuelOrdered OnFuelOrdered;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTrashBinEmptied OnTrashBinEmptied;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTrashContainerTrashAmountChanged OnTrashContainerTrashAmountChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTrashTruckOrdered OnTrashTruckOrdered;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDenisSpawned OnDenisSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDenisDecalPaintedOver OnDenisDecalPaintedOver;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerBought OnPlayerBought;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTutorialFinished OnTutorialFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGamePauseChanged OnGamePauseChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlaceableActorInitialized OnPlaceableActorInitialized;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlaceableActorDeInitialized OnPlaceableActorDeInitialized;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAITaskFinished OnAITaskFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPrologEndSequanceFinished OnPrologEndSequanceFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWarehouseDoorUnlocked OnWarehouseDoorUnlocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEmployeeTaskStarted OnEmployeeTaskStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEmployeeWorkTimeIncreased OnEmployeeWorkTimeIncreased;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEmployeePaid OnEmployeePaid;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCustomerArrivedAtCarWash OnCustomerArrivedAtCarWash;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCarWashOpenStateChanged OnCarWashOpenStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFirstTimeElectrictyTurnedOn OnFirstTimeElectrictyTurnedOn;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FForceSpawnDenis ForceSpawnDenis;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJoeAirplaneCrashed OnJoeAirplaneCrashed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJoeAirplaneDetachedFromTowy OnJoeAirplaneDetachedFromTowy;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJoeAirplaneAttachedToTowy OnJoeAirplaneAttachedToTowy;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDialogRequestFinishActiveObjective OnDialogRequestFinishActiveObjective;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDialogRequestFireExternalEvent OnDialogRequestFireExternalEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpiderWebDestroyed OnSpiderWebDestroyed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlaneDenied OnPlaneDenied;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTradingAirPlaneArrived OnTradingAirPlaneArrived;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJoeTradeCompleted OnJoeTradeCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMailOpened OnMailOpened;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBuildingUpgraded OnBuildingUpgraded;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMarshalWandsMinigameFinishedGlobal OnMarshalWandsMinigameFinishedGlobal;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMaskOpened OnMaskOpened;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMinigameStateChanged OnMinigameStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoanEventTimeRunsOut OnLoanEventTimeRunsOut;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractableDecalDestroyed OnInteractableDecalDestroyed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnVIPCustomer OnSpawnVIPCustomer;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVIPCustomerSpawnedSuccessfully OnVIPCustomerSpawnedSuccessfully;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVIPBonusStarted OnVIPBonusStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVIPBonusEnded ONVIPBonusEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVIPSpawnedOnMap OnVIPSpawnedOnMap;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVIPProgressEarned OnVIPProgressEarned;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVIPProgressEarned OnVIPServiceMessedUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEventCreated OnEventCreated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDecorationCameraBought OnDecoractionCameraBought;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMovableDecorationPlaced OnMovableDecorationPlaced;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMovableDecorationRemoved OnMovableDecorationRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDebugCamerasActivated OnDebugCamerasActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDebugCamerasDeactivated OnDebugCamerasDeactivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTeleportUsed OnTeleportUsed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSandstormStarted OnSandstormStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSandstormEnded OnSandstormEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWaterPointReserved OnWaterPointReserved;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWaterPointFreed OnWaterPointFreed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBoatSpawned OnBoatSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChunchumanchuAngerChange OnChunchumanchuAngerChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRentalServiceStarted OnRentalServiceStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEquipmentRentalSpotFree OnEquipmentRentalSpotFree;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRentalEquipmentReplaced OnRentalEquipmentReplaced;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRentalEquipmentBroken OnRentalEquipmentBroken;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCustomerEaten OnCustomerEaten;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCraneEntered OnCraneEntered;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCraneExited OnCraneExited;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaleTabEnter OnSaleTabEnter;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaleTutorialFinish OnSaleTutorialFinish;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJunkyardWreckMarked OnJunkyardWreckMarked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJunkyardWreckAttractedToMagnet OnJunkyardWreckAttractedToMagnet;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWreckPlayerProcessingStarted OnWreckPlayerProcessingStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWreckPlacedOnArea OnWreckPlacedOnArea;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWreckRemovedFromArea OnWreckRemovedFromArea;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAreaReservedBySeanUpdated OnAreaReservedBySeanUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnContractTaken OnContractTaken;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnContractCompleted OnContractCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCarSentToExhibition OnCarSentToExhibition;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStorageOpen OnJunkyardStorageOpen;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemTakeFromChemicalBath OnItemTakeFromChemicalbath;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemPutIntoChemicalBath OnItemPutIntoChemicalBath;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPartAddedToWreck OnPartAddedToWreck;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPartAddedToWreck OnWreckBodyPainted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGrinderPickedUp OnGrinderPickedUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMultiToolPickedUp OnMultiToolPickedUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMultiToolPutDown OnMultiToolPutDown;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTowTruckSpawned OnTowTruckSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCarPartAddedToStorage OnCarPartAddedToStorage;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSeanCarLightsOn OnSeanCarLightsOn;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWreckCustomizationStarted OnWreckCustomizationStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGoHomeTaskInitialized OnGoHomeTaskInitialized;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCannonHitStarted OnCannonHitStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCannonHitEnded OnCannonHitEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTrashTruckOrdered LiftBoxPlacedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCinemaCustomMovieUploaded OnCinemaCustomMovieUploaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTechnologyUnlocked OnTechnologyUnlocked;
    
    UGlobalEventSubsystem();

};

