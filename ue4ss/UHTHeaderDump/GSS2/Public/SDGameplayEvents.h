#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SDDirtyMoneyCacheUpdatedDelegate.h"
#include "SDFightClubWinnerDelegateDelegate.h"
#include "SDGeneralBooleanGameplayDelegateDelegate.h"
#include "SDGeneralCharacterGameplayDelegateDelegate.h"
#include "SDGeneralGameplayDelegateDelegate.h"
#include "SDGeneralMinigameGameplayDelegateDelegate.h"
#include "SDSheriffCaughtShadyDealDelegate.h"
#include "SDGameplayEvents.generated.h"

UCLASS(Blueprintable, Transient)
class GSS2_API USDGameplayEvents : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDGeneralBooleanGameplayDelegate CasinoOpenStateChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDGeneralCharacterGameplayDelegate CharacterStartedPlayingArcadeDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDGeneralMinigameGameplayDelegate ArcadeMachinePlayedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDGeneralGameplayDelegate CasinoAlarmTriggeredDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDSheriffCaughtShadyDeal SheriffCaughtShadyDealDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDGeneralGameplayDelegate SheriffPatrolStartedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDGeneralGameplayDelegate FightClubNewFightersAssignedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDGeneralGameplayDelegate FightClubInitialized;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDFightClubWinnerDelegate FightEndedGlobalDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDDirtyMoneyCacheUpdated DirtyMoneyCacheBagUpdatedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDDirtyMoneyCacheUpdated DirtyMoneyCacheActivityStateChangedDelegate;
    
    USDGameplayEvents();

};

