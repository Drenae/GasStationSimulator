#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EGuestServiceDifficulty.h"
#include "ERVCamperLeftReason.h"
#include "ERVCamperState.h"
#include "OnCamperStateChangedDelegate.h"
#include "OnConcertCompletedDelegate.h"
#include "OnCurrentStayTimeUpdatedDelegate.h"
#include "OnGuestServiceCompletedDelegate.h"
#include "RVCompletedService.h"
#include "TimeStruct.h"
#include "RVCamperComponent.generated.h"

class AAICharacterBase;
class AGSSGameState;
class AGSSWheeledVehicle;
class ARVCampManager;
class ARVCampSpot;
class ARVServiceUpgrader;
class URVCustomerData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSS2_API URVCamperComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCamperStateChanged OnCamperStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGuestServiceCompleted OnGuestServiceCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnConcertCompleted OnConcertCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCurrentStayTimeUpdated OnCurrentStayTimeUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URVCustomerData* CustomerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARVCampSpot* CampSpot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGSSWheeledVehicle* CamperVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAICharacterBase* CamperDriver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bJustLeftCampSpot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCampSpotReached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanLeaveCampSpot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ServiceStreakBonuses;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRVCompletedService> CompletedServices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsConcertCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ConcertCompletedMusicType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeStruct CurrentStayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERVCamperState CamperState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARVCampManager* RVCampManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGSSGameState* GameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARVServiceUpgrader* ServiceUpgrader;
    
public:
    URVCamperComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateCurrentStayTime(FTimeStruct NewStayTime);
    
    UFUNCTION(BlueprintCallable)
    void TryStopReserveCampSpot();
    
    UFUNCTION(BlueprintCallable)
    void SpawnCustomersForServices();
    
    UFUNCTION(BlueprintCallable)
    void SetUpAfterSpawn(URVCustomerData* CamperCustomerData, AAICharacterBase* Driver);
    
    UFUNCTION(BlueprintCallable)
    void SetUpAfterLoad(URVCustomerData* CamperCustomerData, AAICharacterBase* Driver);
    
    UFUNCTION(BlueprintCallable)
    void SetIsConcertCompleted(bool IsConcertCompleted, FGameplayTag MusicType);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTimeUpdated(const FTimeStruct UpdatedTime);
    
    UFUNCTION(BlueprintCallable)
    void OnConcertStopped(ERVCamperLeftReason CamperLeftReason);
    
    UFUNCTION(BlueprintCallable)
    void OnConcertStarted();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnCampSpotReached();
    
    UFUNCTION(BlueprintCallable)
    void LeaveCampSpot(ERVCamperLeftReason Reason);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsServiceCompleted(FGameplayTag Service);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRemainingStayTimeInHours(int32& Hours, int32& Minutes);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimeStruct GetRemainingStayTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsConcertCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentStayTimeInHours(int32& Hours, int32& Minutes);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimeStruct GetCurrentStayTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetConcertCompletedMusicType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FRVCompletedService> GetCompletedServices();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERVCamperState GetCamperState();
    
    UFUNCTION(BlueprintCallable)
    void CompleteService(FGameplayTag Service, EGuestServiceDifficulty Difficulty, bool bStreakBonus, bool bAutocomplete);
    
    UFUNCTION(BlueprintCallable)
    void ChangeCamperState(ERVCamperState NewState);
    
};

