#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EEconomyDetailedYieldType.h"
#include "EGuestServiceDifficulty.h"
#include "OnRVTrustPointsUpdatedDelegate.h"
#include "RVTrustPointManager.generated.h"

class ARVCampManager;
class URVCustomerData;
class UTrustPointsData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSS2_API URVTrustPointManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalTrustPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentTrustPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARVCampManager* RVCampManager;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRVTrustPointsUpdated OnRVTrustPointsUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTrustPointsData* TrustPointsSettings;
    
    URVTrustPointManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    int32 GetTrustPointsToAddPerWinStreak(const FGameplayTag& MinigameTag);
    
    UFUNCTION(BlueprintCallable)
    int32 GetTotalTrustPointsToAdd(const FGameplayTag& MinigameTag, EGuestServiceDifficulty Difficulty);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalTrustPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentTrustPoints() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetBaseTrustPointsToAdd(const FGameplayTag& MinigameTag, EGuestServiceDifficulty Difficulty);
    
    UFUNCTION(BlueprintCallable)
    void AddTrustPointsOnTurnoutEnd(URVCustomerData* CustomerData);
    
    UFUNCTION(BlueprintCallable)
    int32 AddRVTrustPoints(int32 PointsToAdd, EEconomyDetailedYieldType DetailedYieldType);
    
};

