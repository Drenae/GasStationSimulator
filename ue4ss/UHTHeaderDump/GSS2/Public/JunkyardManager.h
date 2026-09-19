#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LatentActionInfo -FallbackName=LatentActionInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=NopeAISystem -ObjectName=NPAITaskStruct -FallbackName=NPAITaskStruct
#include "CarPartBasicInformation.h"
#include "EAttractWreckError.h"
#include "ECarPartStat.h"
#include "ECarWreckMarking.h"
#include "ECarWreckPlaceableAreaType.h"
#include "EContractDifficulty.h"
#include "ECustomizationContractType.h"
#include "ECustomizationPaintType.h"
#include "EDLCName.h"
#include "EDecalUnlockType.h"
#include "EFinishMaskType.h"
#include "EJunkyardCarPartType.h"
#include "EJunkyardCarWreckType.h"
#include "EJunkyardPartRarity.h"
#include "EJunkyardSortings.h"
#include "EState.h"
#include "SeanTaskRow.h"
#include "StorageCarPart.h"
#include "JunkyardManager.generated.h"

class ACarWreckPlaceableArea;
class ACrane;
class ACraneShredder;
class AExhibitionSpot;
class AGSSNPAICharacterBase;
class AGSSWheeledVehicle;
class AGrinderStation;
class AInteractableBuilding;
class AJunkyardCarWreck;
class AJunkyardMultitoolStation;
class AJunkyardStorage;
class ANPAICharacterBase;
class APlayerArea;
class AWrecksSpot;
class UActorComponent;
class UAuctionsManager;
class UContractsManager;
class UDataTable;
class UDialogueGraph;
class UFameManager;
class UGSSBaseWidget;
class UGSS_PlayerOverlay;
class UIteractableActorTask;
class UJunkyardWrecksDataAsset;
class UObject;
class UQuestBase;

UCLASS(Blueprintable)
class GSS2_API AJunkyardManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag JunkyardQuestlineStartedTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestBase* MainGameQuestToTriggerQuestline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogueGraph* SeanGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UContractsManager* ContractsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAuctionsManager* AuctionsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFameManager* FameManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UJunkyardWrecksDataAsset* WrecksSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CarPartInteractionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag WreckDeliveryPickupTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag WreckMarkingEnabledTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag UnlockedDeliveriesTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag UnlockedContractDriversTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ForceSuccessDeliveryTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag UnlockedContractsTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag UnlockedPlatformSpotTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag UnlockWreckSpotLevel2Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGSSBaseWidget> WreckMarkingRadialWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ANPAICharacterBase> SeanCharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SeanCar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> SeanCarClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SeanTasks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform SeanCarDefaultTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DecalsInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText WreckReservedBySeanMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ShortcutLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> InteractableChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WreckReservedBySeanMessageDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WreckAttractErrorDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsJunkyardCinematicPlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowRefreshWarning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> PlatformLights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EJunkyardCarPartType, FText> CarPartSlotsAsText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EJunkyardPartRarity, FText> RarityAsText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EState, FText> StateAsText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECustomizationContractType, FText> CustomizationContractTypeAsText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EContractDifficulty, FText> ContractDifficultyAsText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECustomizationPaintType, FText> CustomizationMaskTypeAsText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFinishMaskType, FText> FinishMaskTypeAsText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EJunkyardCarWreckType, FString> WreckTypeAsString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAttractWreckError, FText> AttractWreckErrors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECarPartStat, FText> StatsAsText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDecalUnlockType, FText> DecalCategoryAsText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AJunkyardCarWreck*> CarWrecks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGSSWheeledVehicle*> WreckTowTrucks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ACarWreckPlaceableArea*> WreckPlaceableAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWrecksSpot* WrecksSpot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACrane* Crane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACraneShredder* Shredder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentUncleTributeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<APlayerArea> JunkyardPlayerArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> PhotoModePlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AJunkyardStorage> JunkyardStorage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AInteractableBuilding> JunkyardBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AInteractableBuilding> JunkyardOffice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AInteractableBuilding> JunkyardWorkshop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AInteractableBuilding> ChemicalBath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AExhibitionSpot> ExhibitionSpot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AGrinderStation> GrinderStation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AJunkyardMultitoolStation> MultitoolStation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UIteractableActorTask> DeliveryGoToHome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UIteractableActorTask> DeliveryWreckClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MainGateClosedLevelName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WrenchCombo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WrenchRecord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJunkyardSortings StorageSorting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJunkyardSortings ChemicalSorting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGSS_PlayerOverlay* PlayerOverlay;
    
public:
    AJunkyardManager(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void TryLoadShortcutLevel();
    
public:
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void SpawnSean(FTransform SpawnTransform, TArray<FNPAITaskStruct> InTasksList, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void SpawnCarWreckWithSpecificPartsAsync(TSoftClassPtr<AJunkyardCarWreck> WreckClass, ACarWreckPlaceableArea* WreckArea, TArray<EJunkyardCarPartType> PartTypes, FLatentActionInfo LatentInfo, float EnablePhysicsDelay);
    
    UFUNCTION(BlueprintCallable)
    AJunkyardCarWreck* SpawnCarWreck(bool bSetupCarParts, FTransform TargetTransform, TSoftClassPtr<AJunkyardCarWreck> WreckClass, TSoftObjectPtr<ACarWreckPlaceableArea> WreckArea);
    
    UFUNCTION(BlueprintCallable)
    void ShowAttractWreckError(EAttractWreckError Error);
    
    UFUNCTION(BlueprintCallable)
    void SetWrenchRecord(int32 InWrenchRecord);
    
    UFUNCTION(BlueprintCallable)
    void SetWrenchCombo(int32 InWrenchCombo);
    
    UFUNCTION(BlueprintCallable)
    void SetSortingStorage(EJunkyardSortings InSorting);
    
    UFUNCTION(BlueprintCallable)
    void SetSortingChemical(EJunkyardSortings InSorting);
    
    UFUNCTION(BlueprintCallable)
    void OnSaleFinished(float CarPrice);
    
    UFUNCTION(BlueprintCallable)
    void OnJunkyardActivationStateChanged(EDLCName DLCName, bool bActivated);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGameLoaded(bool bGameLoaded);
    
    UFUNCTION(BlueprintCallable)
    void OnCrushFinished();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerInsideJunkyardArea();
    
    UFUNCTION(BlueprintCallable)
    void HandleQuestlineActivation(bool bMainQuestlineFinished);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWrenchRecord() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWrenchMiniGameCombo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EJunkyardSortings GetStorageSorting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetStateTextFromEnum(EState StateEnum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSeanTaskRow GetSeanTaskFromWreckMarking(ECarWreckMarking WreckMarking);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AGSSNPAICharacterBase* GetSeanCharacter(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetRarityTextFromEnum(EJunkyardPartRarity RarityEnum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfWrecksOnAreaType(ECarWreckPlaceableAreaType AreaType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetFinishMaskTypeTextFromEnum(EFinishMaskType FinishMaskType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCarPartBasicInformation GetDataTableInfoFromPartClass(TSoftClassPtr<UActorComponent> PartClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCustomizationMaskTypeTextFromEnum(ECustomizationPaintType CustomizationPaintType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCustomizationContractTypeTextFromEnum(ECustomizationContractType CustomizationContractType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetContractDifficultyTextFromEnum(EContractDifficulty ContractDifficulty);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EJunkyardSortings GetChemicalSorting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCarPartSlotTextFromEnum(EJunkyardCarPartType SlotEnum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void FindAllWreckAreasOfType(ECarWreckPlaceableAreaType AreaType, TArray<ACarWreckPlaceableArea*>& OutputArray, bool OnlyAreasWithWrecks, bool OnlyAreasWithoutWrecks);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ArePartsTheSame(FStorageCarPart FirstPart, FStorageCarPart SecondPart) const;
    
};

