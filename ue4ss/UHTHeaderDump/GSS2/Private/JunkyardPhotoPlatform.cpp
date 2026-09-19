#include "JunkyardPhotoPlatform.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

AJunkyardPhotoPlatform::AJunkyardPhotoPlatform(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentWreck = NULL;
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
}

void AJunkyardPhotoPlatform::RemoveWreckFromPhotoPlatform() {
}

void AJunkyardPhotoPlatform::MoveWreckToPhotoPlatform(AJunkyardCarWreck* InWreckToMove, ACarWreckPlaceableArea* AreaFrom) {
}

AJunkyardCarWreck* AJunkyardPhotoPlatform::GetCurrentWreck() {
    return NULL;
}


