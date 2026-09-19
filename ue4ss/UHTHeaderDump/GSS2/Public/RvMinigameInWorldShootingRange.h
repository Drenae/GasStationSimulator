#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "EGuestServiceDifficulty.h"
#include "ETargetTeam.h"
#include "OnGameEndDelayedDelegate.h"
#include "OnOponentScoreChangedDelegate.h"
#include "OnPlayerScoreChangedDelegate.h"
#include "OnReloadEndedDelegate.h"
#include "OnReloadStartedDelegate.h"
#include "OnRemoveBulletDelegate.h"
#include "OnTimeLeftChangedDelegate.h"
#include "OpponentAimingAtTargetDelegate.h"
#include "RvMinigameInWorld.h"
#include "TargetTypeScorePair.h"
#include "RvMinigameInWorldShootingRange.generated.h"

class ARailsForShootingRange;
class AShootingRangeTarget;
class UShootingRangeSettings;

UCLASS(Blueprintable)
class GSS2_API ARvMinigameInWorldShootingRange : public ARvMinigameInWorld {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerScoreChanged OnPlayerTotalScoreChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOponentScoreChanged OnOponentTotalScoreChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTimeLeftChanged OnTimeLeftChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRemoveBullet OnRemoveBullet;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReloadStarted OnReloadStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReloadEnded OnReloadEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReloadStarted OnTargetShooted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReloadEnded OnTargetMissed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameEndDelayed OnGameEndDelayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGuestServiceDifficulty ChosenDifficultyREF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool GameEnded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GameTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerTotalScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OponentTotalScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReloadTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsReloading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UShootingRangeSettings* ShootingRangeSettingsREF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OpenentShootingDelayMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OpenentShootingDelayMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetRespawnRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetFoldMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetFoldMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTargetTypeScorePair> TargetTypeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RandomizeRailsType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle UpdateGameTimerRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle PreGameEndTimerRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARailsForShootingRange*> DefaultRailsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARailsForShootingRange*> RailsForShootingList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AShootingRangeTarget* OponentCurrentTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle OponentAimingTimerRef;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOpponentAimingAtTarget OnOpponentAimingAtTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETargetTeam> RecentSpawnedTargetTeams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceNextTargetRed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockSpawning;
    
    ARvMinigameInWorldShootingRange(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateGameTimer();
    
    UFUNCTION(BlueprintCallable)
    void TryToShootBullet();
    
    UFUNCTION(BlueprintCallable)
    void StartTimer();
    
    UFUNCTION(BlueprintCallable)
    void StartReloading();
    
    UFUNCTION(BlueprintCallable)
    void ShootTarget();
    
    UFUNCTION(BlueprintCallable)
    void SetupShootingRangeStartValues();
    
    UFUNCTION(BlueprintCallable)
    void SetupShootingRangeRails();
    
    UFUNCTION(BlueprintCallable)
    void SetupShootingRangeDifficultyValues();
    
    UFUNCTION(BlueprintCallable)
    void OnTimeEnded();
    
    UFUNCTION(BlueprintCallable)
    void OnReloadLogicEnds();
    
    UFUNCTION(BlueprintCallable)
    void GuaranteeRedTeam();
    
    UFUNCTION(BlueprintCallable)
    void GameEndDelay();
    
    UFUNCTION(BlueprintCallable)
    void BeginShootingRangeGame();
    
    UFUNCTION(BlueprintCallable)
    void AddPlayerTotalScore(float ScoreToAdd);
    
    UFUNCTION(BlueprintCallable)
    void AddOponentTotalScore(float ScoreToAdd);
    
};

