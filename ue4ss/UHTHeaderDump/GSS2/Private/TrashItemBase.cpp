#include "TrashItemBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent

ATrashItemBase::ATrashItemBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsPublic = false;
    this->SphereOverlap = CreateDefaultSubobject<USphereComponent>(TEXT("OverlapSphere"));
    this->bTrashFinalProduct = false;
    this->ImpactSoundTreshold = 25000.00f;
    this->bBeingCleaned = false;
    this->SphereOverlap->SetupAttachment(RootComponent);
}

void ATrashItemBase::TrashMeshLoaded() {
}

void ATrashItemBase::TimedDestroyTrash(float DestroyDelay) {
}

void ATrashItemBase::SetBeingCleaned(bool bNewCleaned) {
}

void ATrashItemBase::SendGoogleAnalyticsDataAboutTrashClear() {
}

bool ATrashItemBase::GetBeingCleaned() {
    return false;
}


