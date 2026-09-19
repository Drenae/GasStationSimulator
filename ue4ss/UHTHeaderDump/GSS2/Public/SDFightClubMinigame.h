#pragma once
#include "CoreMinimal.h"
#include "ESDFightClubPhase.h"
#include "ESDFightClubZone.h"
#include "ESDGangActivityResult.h"
#include "SDFightClubBetDelegateDelegate.h"
#include "SDMinigameBase.h"
#include "SDFightClubMinigame.generated.h"

class ASDFightClub;
class USDFightClubActivity;
class USDGangActivityObjBase;
class USDMinigameParticipantComponent;

UCLASS(Blueprintable)
class GSS2_API ASDFightClubMinigame : public ASDMinigameBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDFightClubBetDelegate BetChangedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USDMinigameParticipantComponent* MinigameParticipantsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Bet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESDFightClubZone BetZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESDFightClubZone FavouriteZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESDFightClubZone UnderdogZone;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASDFightClub* FightClubBuilding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BlueWinRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RedWinRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DrawWinRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USDGangActivityObjBase* FightActivityObj;
    
public:
    ASDFightClubMinigame(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartFight();
    
    UFUNCTION(BlueprintCallable)
    void SetBetZone(ESDFightClubZone InBetZone);
    
    UFUNCTION(BlueprintCallable)
    void ResetBet();
    
    UFUNCTION(BlueprintCallable)
    void PlaceBet(ESDFightClubZone InZone, float InBet, bool bForce);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWinRatesCalculated();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGangActivityStarted(USDGangActivityObjBase* ActivityObj);
    
    UFUNCTION(BlueprintCallable)
    void OnGangActivityEnded(USDGangActivityObjBase* ActivityObj, ESDGangActivityResult Result);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFightStarted(USDFightClubActivity* FightClubActivity);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFightEnded(USDFightClubActivity* FightClubActivity);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFightClubPhaseChanged(ESDFightClubPhase Phase);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWinRate(ESDFightClubZone Zone);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USDMinigameParticipantComponent* GetMinigameParticipantsComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASDFightClub* GetFightClubBuilding();
    
    UFUNCTION(BlueprintCallable)
    void ChangeBet(float Delta);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanStartFight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPlaceBet(ESDFightClubZone InZone) const;
    
};

