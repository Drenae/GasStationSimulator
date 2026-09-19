#include "SDStandaloneSheriffTrigger.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavArea_Obstacle -FallbackName=NavArea_Obstacle

USDStandaloneSheriffTrigger::USDStandaloneSheriffTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AreaClass = UNavArea_Obstacle::StaticClass();
    this->bUseCustomCatchActions = false;
    this->bGangActivityRelated = false;
    this->RelatedGangActivity = ESDGangActivityType::MAX;
    this->bCanCatch = false;
}

void USDStandaloneSheriffTrigger::SetCanBeCaught(bool bInCanBeCaught) {
}

ESDGangActivityType USDStandaloneSheriffTrigger::GetRelatedGangActivityType() const {
    return ESDGangActivityType::FightClub;
}

TArray<USDSheriffActionBase*> USDStandaloneSheriffTrigger::GetCatchActions() const {
    return TArray<USDSheriffActionBase*>();
}

bool USDStandaloneSheriffTrigger::CanBeCatchedBySheriff_Implementation() const {
    return false;
}


