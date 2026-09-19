#include "IceCreamCone.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent

AIceCreamCone::AIceCreamCone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PositionMultiplier = 0.00f;
    this->OneScoopHeight = 0.00f;
    this->ScoopSpawnPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("ScoopSpawnPoint"));
    this->Spoon = NULL;
    this->ScoopSpawnPoint->SetupAttachment(RootComponent);
}

void AIceCreamCone::SetOutline(bool bShouldBeOutlined) {
}


