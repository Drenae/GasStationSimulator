#include "BuyObjective.h"
#include "Templates/SubclassOf.h"

UBuyObjective::UBuyObjective() {
    this->ActorClass = NULL;
}

void UBuyObjective::OnPlayerBought(TSubclassOf<AActor> BoughtActorClass, const int32 Amount) {
}


