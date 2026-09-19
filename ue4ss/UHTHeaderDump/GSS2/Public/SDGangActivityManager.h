#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ESDGangActivityResult.h"
#include "ESDGangActivityType.h"
#include "SDGangActivityEndedDelegateDelegate.h"
#include "SDGangActivitySettings.h"
#include "SDGangActivityStartedDelegateDelegate.h"
#include "SDGangActivityTypeBoolDelegateDelegate.h"
#include "SDGangActivityTypeDelegateDelegate.h"
#include "SDShadyDealsBoolDelegateDelegate.h"
#include "SDTimerHandleDelegatePair.h"
#include "Templates/SubclassOf.h"
#include "SDGangActivityManager.generated.h"

class AActor;
class AGSSWheeledVehicle;
class ASDSheriffPatrolWaypoint;
class USDGangActivityObjBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSS2_API USDGangActivityManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDGangActivityStartedDelegate PreGangActivityInitializedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDGangActivityStartedDelegate GangActivityInitializedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDGangActivityStartedDelegate PreGangActivityStartedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDGangActivityStartedDelegate GangActivityStartedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDGangActivityEndedDelegate GangActivityEndedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDGangActivityTypeDelegate GangActivityPenaltyIssuedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDGangActivityTypeDelegate GangActivityPenaltyEndedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDGangActivityTypeBoolDelegate GangActivityEnableStateChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDShadyDealsBoolDelegate ShadyDealsLockStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESDGangActivityType, FSDGangActivitySettings> AvailableGangActivities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActivitiesRelatedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USDGangActivityObjBase*> CurrentActivities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSDTimerHandleDelegatePair> CooldownTimers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSDTimerHandleDelegatePair> NotifyTimers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShadyDealsLocked;
    
public:
    USDGangActivityManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartActivity(ESDGangActivityType ActivityType, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void SetShadyDealsLocked(bool bLocked);
    
    UFUNCTION(BlueprintCallable)
    void SetActivityEnabled(ESDGangActivityType Activity, bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void RegisterAsActivityRelatedActor(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    void RegisterActivityRelatedVehicle(AGSSWheeledVehicle* InVehicle, ESDGangActivityType Activity);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnEmailNotificationLoaded(ESDGangActivityType ActivityType);
    
    UFUNCTION(BlueprintCallable)
    void OnActivityPenaltyEnd(ESDGangActivityType InActivityType);
    
    UFUNCTION(BlueprintCallable)
    void OnActivityLoaded(TSoftClassPtr<USDGangActivityObjBase> LoadedActivityClass, ESDGangActivityType ActivityType);
    
    UFUNCTION(BlueprintCallable)
    void OnActivityEnded(USDGangActivityObjBase* ActivityObj, ESDGangActivityResult Result);
    
public:
    UFUNCTION(BlueprintCallable)
    void IssueGangActivityPenalty(ESDGangActivityType InActivityType, float InPenaltyTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActivityEnabled(ESDGangActivityType Activity) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetSheriffPatrolWaypoints(TArray<ASDSheriffPatrolWaypoint*>& OutWaypoints) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetActivityRelatedActorsByClass(TSubclassOf<AActor> DesiredClass, TArray<AActor*>& OutFoundActors) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetActivityRelatedActors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetActivityPenaltyTimeLeft(ESDGangActivityType InActivityType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USDGangActivityObjBase* GetActivity(ESDGangActivityType InActivityType) const;
    
    UFUNCTION(BlueprintCallable)
    void ForceStartActivity(ESDGangActivityType Activity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FindActivityRelatedActorByClass(TSubclassOf<AActor> RelatedActorClass, AActor*& OutFoundActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesActivityExist(ESDGangActivityType InActivityType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreShadyDealsLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ActivityHasPenalty(ESDGangActivityType InActivityType) const;
    
};

