#include "SDGangActivityManager.h"
#include "Templates/SubclassOf.h"

USDGangActivityManager::USDGangActivityManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShadyDealsLocked = false;
}

void USDGangActivityManager::StartActivity(ESDGangActivityType ActivityType, bool bForce) {
}

void USDGangActivityManager::SetShadyDealsLocked(bool bLocked) {
}

void USDGangActivityManager::SetActivityEnabled(ESDGangActivityType Activity, bool bEnabled) {
}

void USDGangActivityManager::RegisterAsActivityRelatedActor(AActor* InActor) {
}

void USDGangActivityManager::RegisterActivityRelatedVehicle(AGSSWheeledVehicle* InVehicle, ESDGangActivityType Activity) {
}

void USDGangActivityManager::OnEmailNotificationLoaded(ESDGangActivityType ActivityType) {
}

void USDGangActivityManager::OnActivityPenaltyEnd(ESDGangActivityType InActivityType) {
}

void USDGangActivityManager::OnActivityLoaded(TSoftClassPtr<USDGangActivityObjBase> LoadedActivityClass, ESDGangActivityType ActivityType) {
}

void USDGangActivityManager::OnActivityEnded(USDGangActivityObjBase* ActivityObj, ESDGangActivityResult Result) {
}

void USDGangActivityManager::IssueGangActivityPenalty(ESDGangActivityType InActivityType, float InPenaltyTime) {
}

bool USDGangActivityManager::IsActivityEnabled(ESDGangActivityType Activity) const {
    return false;
}

void USDGangActivityManager::GetSheriffPatrolWaypoints(TArray<ASDSheriffPatrolWaypoint*>& OutWaypoints) const {
}

void USDGangActivityManager::GetActivityRelatedActorsByClass(TSubclassOf<AActor> DesiredClass, TArray<AActor*>& OutFoundActors) const {
}

TArray<AActor*> USDGangActivityManager::GetActivityRelatedActors() const {
    return TArray<AActor*>();
}

float USDGangActivityManager::GetActivityPenaltyTimeLeft(ESDGangActivityType InActivityType) const {
    return 0.0f;
}

USDGangActivityObjBase* USDGangActivityManager::GetActivity(ESDGangActivityType InActivityType) const {
    return NULL;
}

void USDGangActivityManager::ForceStartActivity(ESDGangActivityType Activity) {
}

void USDGangActivityManager::FindActivityRelatedActorByClass(TSubclassOf<AActor> RelatedActorClass, AActor*& OutFoundActor) const {
}

bool USDGangActivityManager::DoesActivityExist(ESDGangActivityType InActivityType) const {
    return false;
}

bool USDGangActivityManager::AreShadyDealsLocked() const {
    return false;
}

bool USDGangActivityManager::ActivityHasPenalty(ESDGangActivityType InActivityType) const {
    return false;
}


