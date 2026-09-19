#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "ESDFightClubPhase.h"
#include "ESDFightClubZone.h"
#include "ESDGangActivityResult.h"
#include "ESDGangActivityType.h"
#include "House.h"
#include "SDFightClubGeneralDelegateDelegate.h"
#include "SDFightClubPhaseDelegateDelegate.h"
#include "SDFightClubZoneDelegateDelegate.h"
#include "SDFighterAttributes.h"
#include "SDFighterStats.h"
#include "SDFightClub.generated.h"

class AAICharacterBase;
class AActor;
class AGSSWheeledVehicle;
class AInteractableBuilding;
class USDGangActivityObjBase;

UCLASS(Blueprintable)
class GSS2_API ASDFightClub : public AHouse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDFightClubPhaseDelegate FightClubPhaseChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDFightClubZoneDelegate FighterSelectedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDFightClubZoneDelegate FighterBonusSelectedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDFightClubGeneralDelegate TrainingEndedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDFightClubGeneralDelegate WaitingStatusTickDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FSDFighterStats> Fighters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGSSWheeledVehicle* BlueVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAICharacterBase* BlueFighterRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGSSWheeledVehicle* RedVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAICharacterBase* RedFighterRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle_TrainingPause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle_AfterFightPause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle_TrainingDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AInteractableBuilding*> BlueZoneMachines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AInteractableBuilding*> RedZoneMachines;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESDFightClubPhase Phase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESDFightClubZone SelectedFighter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRedFighterBonusObtained;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlueFighterBonusObtained;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFightEnded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> FightersWaitingStatus;
    
public:
    ASDFightClub(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void StartTrainingPhase();
    
public:
    UFUNCTION(BlueprintCallable)
    void StartTrainingDurationTimer();
    
private:
    UFUNCTION(BlueprintCallable)
    void StartFightPhase();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetRedVehicle(AGSSWheeledVehicle* InVehicle);
    
    UFUNCTION(BlueprintCallable)
    void SetRedFighter(AAICharacterBase* InCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SetFighterWaitingStatus(const FSDFighterStats& InFighter, int32 Status);
    
    UFUNCTION(BlueprintCallable)
    void SetFighterBonusDirect(ESDFightClubZone RelatedZone, const FSDFighterAttributes& Bonus, bool bForce, bool bSilent);
    
    UFUNCTION(BlueprintCallable)
    void SetBonusForSelectedFighter(const FSDFighterAttributes& Bonus);
    
    UFUNCTION(BlueprintCallable)
    void SetBlueVehicle(AGSSWheeledVehicle* InVehicle);
    
    UFUNCTION(BlueprintCallable)
    void SetBlueFighter(AAICharacterBase* InCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SelectFighter(ESDFightClubZone InZone);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGangActivityStarted(USDGangActivityObjBase* ActivityObj);
    
    UFUNCTION(BlueprintCallable)
    void OnGangActivityEnd(USDGangActivityObjBase* ActivityObj, ESDGangActivityResult Result);
    
    UFUNCTION(BlueprintCallable)
    void OnActorDestroyed(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    void OnActivityPenaltyPaid(ESDGangActivityType ActivityType);
    
    UFUNCTION(BlueprintCallable)
    void OnActivityPenaltyIssued(ESDGangActivityType ActivityType);
    
    UFUNCTION(BlueprintCallable)
    void OnActivityEnableStateChanged(ESDGangActivityType ActivityType, bool bEnabled);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFighterAvailableID(const FName& ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFighterAvailable(const FSDFighterStats& InFighter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESDFightClubZone GetZoneByCharacter(AAICharacterBase* InCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSDFighterStats> GetWaitingFighters() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESDFightClubZone GetSelectedFighterZone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAICharacterBase* GetSelectedFighter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AInteractableBuilding*> GetRedZoneMachines() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGSSWheeledVehicle* GetRedVehicle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAICharacterBase* GetRedFighterRef() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSDFighterStats GetRedFighter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESDFightClubPhase GetPhase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFighterWaitingStatus(const FSDFighterStats& InFighter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSDFighterStats GetFighter(ESDFightClubZone InFightClubZone) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AInteractableBuilding*> GetBlueZoneMachines() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGSSWheeledVehicle* GetBlueVehicle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAICharacterBase* GetBlueFighterRef() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSDFighterStats GetBlueFighter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSDFighterStats> GetAvailableFighters() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSDFighterStats> GetAllFighters() const;
    
    UFUNCTION(BlueprintCallable)
    void EndTrainingPhase();
    
    UFUNCTION(BlueprintCallable)
    void EndFightPhase();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSetFighterBonus(ESDFightClubZone InZone) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanOrganizeFight() const;
    
};

