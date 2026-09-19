#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EEconomyDetailedYieldType.h"
#include "EEconomyGeneralYieldType.h"
#include "EMoneyType.h"
#include "MovieParameters.h"
#include "OnCinemaMuteMusicVolumeEnteredDelegate.h"
#include "OnCinemaMuteMusicVolumeLeftDelegate.h"
#include "OnCinemaMutedUpdatedDelegate.h"
#include "OnCinemaRenownPointsAddedDelegate.h"
#include "OnCustomerArrivedDelegate.h"
#include "OnCustomerValidatedDelegate.h"
#include "OnDirtyUpdatedDelegate.h"
#include "OnPopcornComboChangedDelegate.h"
#include "OnRenownLevelUpDelegate.h"
#include "QueuedMovieToplay.h"
#include "TicketData.h"
#include "WatchedMovieResult.h"
#include "DLCDriveInCinemaManager.generated.h"

class AAICharacterBase;
class ACinemaProjector;
class ACinemaTicketBarrier;
class ADennisPuppet;
class AInteractableBuilding;
class AInteractableDecal;
class APopcornMachine;
class ATrashItemBase;
class UDA_CinemaCustomers;
class UDA_CinemaEvents;
class UDA_CinemaPopcorn;
class UDA_CinemaTickets;
class UDataTable;
class UFileMediaSource;
class UMaterialParameterCollection;
class UQuestBase;
class URushHourEvent;
class UTrendingEvent;

UCLASS(Blueprintable)
class GSS2_API ADLCDriveInCinemaManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWatchedMovieResult> WatchedMovieResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RenownPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CorrectTicketsCombo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDontShowScheduleWarning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDontShowCustomMoviePopup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDontShowCancelMoviePopup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieParameters CustomMovieParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CustomMoviePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCustomMovieSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseFilePickerPlugin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RenownMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CinemaVehiclesNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> OccupiedHours;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATrashItemBase*> TrashItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AInteractableDecal*> TrashDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentRenownLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CinemaName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* RenownDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDA_CinemaTickets* TicketSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDA_CinemaPopcorn* PopcornSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDA_CinemaCustomers* CustomerSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDA_CinemaEvents* EventSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MoviesDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFileMediaSource* CustomMovieMediaSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTimelineEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AInteractableBuilding> CinemaBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACinemaProjector* CinemaProjector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APopcornMachine* PopcornMachine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACinemaTicketBarrier* TicketBarrier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CinemaScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADennisPuppet* DennisPuppet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> CinemaLights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> PopcornBoxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> RenownThresholds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> RenownThresholdsClamped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRenownMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRenownMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnLightsOffTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CinemaQuestlineStartedTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestBase* MainGameQuestToTriggerQuestline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* CinemaTrashMaterialCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CinemaTrashMaterialParameterName;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCinemaRenownPointsAdded OnCinemaRenownPointsAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPopcornComboChanged OnPopcornComboChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRenownLevelUp OnRenownLevelUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDirtyUpdated OnDirtyUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCinemaMutedUpdated OnCinemaMutedUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCustomerArrived OnCustomerArrived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCustomerValidated OnCustomerValidated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCinemaMuteMusicVolumeEntered OnCinemaMuteMusicVolumeEntered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCinemaMuteMusicVolumeLeft OnCinemaMuteMusicVolumeLeft;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bQuestsLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGameInstanceLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCinemaMuted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentPopcornCombo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentPopcornHighScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAICharacterBase*> CustomerDriveOffOrder;
    
public:
    ADLCDriveInCinemaManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool TrySpawnTrash(FTransform SpawnTransform, bool bDecal);
    
private:
    UFUNCTION(BlueprintCallable)
    void TrySpawnCinemaCustomer();
    
public:
    UFUNCTION(BlueprintCallable)
    bool TrySetPopcornHighScore(int32 NewScore);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetNextQueuedMovie(FQueuedMovieToplay& OutQueuedMovie);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetCurrentMovieParameters(FMovieParameters& OutParameters);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetCurrentlyPlayingQueuedMovie(FQueuedMovieToplay& OutQueuedMovie);
    
    UFUNCTION(BlueprintCallable)
    bool TryDropTrashByCustomer(AAICharacterBase* Customer, bool bDecal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowRenownLevelUpPopup(int32 NewRenownLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowCinemaRewardPopup(float MoneyAmount, float RenownAmount, EEconomyDetailedYieldType DetailedYieldType);
    
    UFUNCTION(BlueprintCallable)
    void SetPopcornCombo(int32 NewCombo);
    
    UFUNCTION(BlueprintCallable)
    float SetNewRenownMultiplier(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCinemaMuted(bool IsMuted);
    
    UFUNCTION(BlueprintCallable)
    void RemoveExistingEvents(bool bTrendingEvent, bool bRushHourEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnWrongTicketValidated();
    
    UFUNCTION(BlueprintCallable)
    void OnQuestlinesLoaded_SpecialCase();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnQuestlinesLoaded();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPopcornRefilled(float RefillPrice);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGameLoaded(bool bGameLoaded);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnCustomerRejected(bool bCorrectly);
    
    UFUNCTION(BlueprintCallable)
    void OnCustomerArrivedAtCinema();
    
    UFUNCTION(BlueprintCallable)
    void OnCorrectTicketValidated();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrendingEventActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRushHourEventActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNextLevelAvaible();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyCustomerWatchingInCinema();
    
    UFUNCTION(BlueprintCallable)
    void HandleQuestlineActivation(bool bQuestlineFinished);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FWatchedMovieResult> GetWatchedResults();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTrendingEvent* GetTrendingEventRef();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTicketMoneyBonus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URushHourEvent* GetRushHourEventRef();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRequiredRenownForNextLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRenownLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRenownBonus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPopcornMoneyBonus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPopcornHighScore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPopcornCombo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FMovieParameters GetMovieParametersByIndex(int32 MovieIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsCinemaMuted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCustomerDriveOffOrder(AAICharacterBase* Customer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTicketData GenerateTicketData(bool bCustomer);
    
    UFUNCTION(BlueprintCallable)
    void CreateNotification(bool bShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 CheckForRenownPointsNeeded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 CheckForRenownLevelNeeded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool CheckForRenownLevel();
    
    UFUNCTION(BlueprintCallable)
    void ArrangeCustomerDriveOffOrder();
    
    UFUNCTION(BlueprintCallable)
    void AddToWatchedMovies(FQueuedMovieToplay Movie);
    
    UFUNCTION(BlueprintCallable)
    int32 AddRenownPoints(int32 PointsToAdd, EEconomyDetailedYieldType DetailedYieldType);
    
    UFUNCTION(BlueprintCallable)
    float AddCinemaMoney(EEconomyDetailedYieldType DetailedYieldType, float Quantity, float money, bool bTrackEconomy, EMoneyType MoneyType, EEconomyGeneralYieldType ForcedYieldType);
    
};

