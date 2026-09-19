#include "SDSheriffPatrolWaypoint.h"

ASDSheriffPatrolWaypoint::ASDSheriffPatrolWaypoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAccessible = true;
    this->bGangActivityRelated = true;
    this->RelatedGangActivity = ESDGangActivityType::FightClub;
    this->bStaticWaypoint = false;
    this->bFallbackWaypoint = false;
    this->FallbackWaypoint = NULL;
}

bool ASDSheriffPatrolWaypoint::IsStaticWaypoint() const {
    return false;
}

bool ASDSheriffPatrolWaypoint::IsFallbackWaypoint() const {
    return false;
}

ESDGangActivityType ASDSheriffPatrolWaypoint::GetRelatedGangActivity() const {
    return ESDGangActivityType::FightClub;
}

ASDSheriffPatrolWaypoint* ASDSheriffPatrolWaypoint::GetFallbackWaypoint() const {
    return NULL;
}


