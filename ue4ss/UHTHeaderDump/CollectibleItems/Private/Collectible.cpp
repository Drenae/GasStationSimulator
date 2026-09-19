#include "Collectible.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

ACollectible::ACollectible(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StatichMeshComponent"));
    this->StaticMeshComp = (UStaticMeshComponent*)RootComponent;
}


