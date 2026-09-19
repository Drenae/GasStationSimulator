#pragma once
#include "CoreMinimal.h"
#include "ESDFightClubAttackResult.h"
#include "ESDFightClubWinReason.h"
#include "ESDFightClubZone.h"
#include "SDFighterAttributes.h"
#include "SDGangActivityObjBase.h"
#include "SDFightClubActivity.generated.h"

class ASDFightClub;
class ASDFightClubLockerMinigame;

UCLASS(Blueprintable)
class GSS2_API USDFightClubActivity : public USDGangActivityObjBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESDFightClubZone CurrentAttackerZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxClashNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASDFightClubLockerMinigame* RedZoneLockerMinigame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASDFightClubLockerMinigame* BlueZoneLockerMinigame;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentClashNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RedFighterHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BlueFighterHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RedDiceThrowRes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BlueDiceThrowRes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BlueJudgesPointsSum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RedJudgesPointsSum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASDFightClub* FightClubBuilding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDFighterAttributes RedFighterFinalAttrs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDFighterAttributes BlueFighterFinalAttrs;
    
public:
    USDFightClubActivity();

    UFUNCTION(BlueprintCallable)
    void StartClash();
    
    UFUNCTION(BlueprintCallable)
    void PredictAttackResult();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnClashStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAttackResultPredicted(ESDFightClubAttackResult Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFighterHP(ESDFightClubZone InZone) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSDFighterAttributes GetFighterFinalAttrs(ESDFightClubZone InZone) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESDFightClubZone GetDefenderZone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESDFightClubZone GetAttackerZone() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndFight(ESDFightClubZone Winner, ESDFightClubWinReason WinReason);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyAttackResult(ESDFightClubAttackResult Result);
    
};

