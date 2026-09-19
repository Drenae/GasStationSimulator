#pragma once
#include "CoreMinimal.h"
#include "InteractableBuilding.h"
#include "OnCinemaProjectorMovieTimeUpdateDelegate.h"
#include "OnCinemaProjectorStateChangedDelegate.h"
#include "OnLoopStateChangedDelegate.h"
#include "OnMovieCanceledDelegate.h"
#include "OnMovieQueUpdatedDelegate.h"
#include "OnMovieStartedDelegate.h"
#include "QueuedMovieToplay.h"
#include "TimeStruct.h"
#include "eCinemaProjectorState.h"
#include "CinemaProjector.generated.h"

class UMediaPlayer;
class UMediaSource;

UCLASS(Blueprintable)
class GSS2_API ACinemaProjector : public AInteractableBuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    eCinemaProjectorState ProjectorState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProjectorPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActualMovieTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaPlayer* MediaPlayer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCinemaProjectorStateChanged OnStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCinemaProjectorMovieTimeUpdate OnMovieTimeUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMovieCanceled OnMovieCanceled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMovieStarted OnMovieStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoopStateChanged OnLoopStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMovieQueUpdated OnMovieQueUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQueuedMovieToplay> MoviesToPlay;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMovieLoopActive;
    
public:
    ACinemaProjector(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void UpdateMovieTime();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartPlayMovie();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartCountdown(float StartTime);
    
    UFUNCTION(BlueprintCallable)
    void SetProjectorState(eCinemaProjectorState NewProjectorState);
    
    UFUNCTION(BlueprintCallable)
    void SetMoviesToPlay(TArray<FQueuedMovieToplay> InMovies);
    
    UFUNCTION(BlueprintCallable)
    void SetMovieLoopActive(bool InMovieLoopActive);
    
    UFUNCTION(BlueprintCallable)
    void RemoveMovieFromQue();
    
    UFUNCTION(BlueprintCallable)
    void OnTimeUpdated(FTimeStruct Time);
    
    UFUNCTION(BlueprintCallable)
    void OnStartMovieActions(UMediaSource* MediaSource, float Length);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGameplaySettingsApplied(bool Success);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndMovie();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReadyToRecieveCustomers();
    
    UFUNCTION(BlueprintCallable)
    void HandleStreamerMode();
    
    UFUNCTION(BlueprintCallable)
    float GetTimeTillNextMovie();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FQueuedMovieToplay> GetMoviesToPlayInOrder();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FQueuedMovieToplay> GetMoviesToPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMovieLoopActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsHourOccupied(int32 Hour);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsAnyMovieToPlay();
    
    UFUNCTION(BlueprintCallable)
    void EndMovie();
    
    UFUNCTION(BlueprintCallable)
    void CancelMovie(FQueuedMovieToplay MovieToCancel);
    
    UFUNCTION(BlueprintCallable)
    bool AddMovieTOPlay(FQueuedMovieToplay MovieToPlay);
    
};

