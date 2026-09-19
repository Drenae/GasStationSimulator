#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "EDLCName.h"
#include "EVIPState.h"
#include "VIPDestinationPoints.h"
#include "VIPSubsystem.generated.h"

class AAICharacterBase;

UCLASS(Blueprintable)
class GSS2_API UVIPSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAICharacterBase* CurrentVIP;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTimeHeldDuringLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVIPState CurrentVIPState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDLCName CurrentDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EDLCName> AvaliableVIPTravelingDestinations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVIPDestinationPoints> MapPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowedToTick;
    
public:
    UVIPSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetVIPMapPoints(const TArray<FVIPDestinationPoints> MapPointsToSet);
    
    UFUNCTION(BlueprintCallable)
    void SetVIPCurrentTime(const float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetVIPCurrentState(const EVIPState NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetupAvaliableDestinations();
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentDestination(const EDLCName NewDestination);
    
    UFUNCTION(BlueprintCallable)
    void OnGameplaySettingsApplied(bool bSuccess);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGameLoadingStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnGameLoadingFinished(bool bGameLoaded);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVIPBonusActive(const EDLCName DestinationToCheck, float& OutRemaningTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVIPTravelingTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVIPRestingTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FVIPDestinationPoints> GetVIPMapPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVIPDestinationPoints GetVIPDestinationMapPoints(EDLCName DLCName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVIPCurrentTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVIPState GetVIPCurrentState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVIPAwaitingTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDLCName GetCurrentMapDLC() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDLCName GetCurrentDestination() const;
    
    UFUNCTION(BlueprintCallable)
    void AddVIPProgress(EDLCName VIPDestination);
    
};

