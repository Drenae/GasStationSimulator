#include "SDSheriffPatrolGangActivity.h"

USDSheriffPatrolGangActivity::USDSheriffPatrolGangActivity() {
    this->SheriffVehicle = NULL;
    this->SheriffCharacter = NULL;
}

void USDSheriffPatrolGangActivity::SetWaypointReachedIndex(int32 InWaypointIndex) {
}

void USDSheriffPatrolGangActivity::SetWaypointReached(ASDSheriffPatrolWaypoint* InWaypoint) {
}

void USDSheriffPatrolGangActivity::SetSheriffVehicle(AGSSWheeledVehicle* InSheriffVehicle) {
}

void USDSheriffPatrolGangActivity::SetSheriffCharacter(AAICharacterBase* InSheriffChar) {
}

void USDSheriffPatrolGangActivity::OnSheriffActorDestroyed(AActor* DestroyedActor) {
}

bool USDSheriffPatrolGangActivity::MoveWaypointToIndex(ESDGangActivityType ActivityWaypoint, int32 Index) {
    return false;
}

bool USDSheriffPatrolGangActivity::IsWaypointReachedIndex(int32 InWaypointIndex) const {
    return false;
}

bool USDSheriffPatrolGangActivity::IsWaypointReached(ASDSheriffPatrolWaypoint* InWaypoint) const {
    return false;
}

bool USDSheriffPatrolGangActivity::IsPatrollEnded() const {
    return false;
}

void USDSheriffPatrolGangActivity::InsertPatrolWaypoint(int32 Index, ASDSheriffPatrolWaypoint* InWaypoint) {
}

AGSSWheeledVehicle* USDSheriffPatrolGangActivity::GetSheriffVehicle() const {
    return NULL;
}

AAICharacterBase* USDSheriffPatrolGangActivity::GetSheriffCharacter() const {
    return NULL;
}

TArray<ASDSheriffPatrolWaypoint*> USDSheriffPatrolGangActivity::GetPatrolWaypoints() const {
    return TArray<ASDSheriffPatrolWaypoint*>();
}

ASDSheriffPatrolWaypoint* USDSheriffPatrolGangActivity::GetFirstUnreachedWaypoint(int32& WaypointIndex) const {
    return NULL;
}


