#include "SDGangActivityObjBase.h"

USDGangActivityObjBase::USDGangActivityObjBase() {
    this->ActivityType = ESDGangActivityType::FightClub;
}

void USDGangActivityObjBase::RegisterVehicle_Implementation(AGSSWheeledVehicle* InVehicle) {
}

void USDGangActivityObjBase::ProcessShadynessOutcome_Implementation(ESDGangActivityResult ActivityResult) {
}



void USDGangActivityObjBase::InitializeActivity_Implementation() {
}

TArray<AGSSWheeledVehicle*> USDGangActivityObjBase::GetActivityVehicles() const {
    return TArray<AGSSWheeledVehicle*>();
}

ESDGangActivityType USDGangActivityObjBase::GetActivityType() const {
    return ESDGangActivityType::FightClub;
}

void USDGangActivityObjBase::EndActivity_Implementation(ESDGangActivityResult InResult) {
}

bool USDGangActivityObjBase::CanBeCaughtBySheriff_Implementation() {
    return false;
}


