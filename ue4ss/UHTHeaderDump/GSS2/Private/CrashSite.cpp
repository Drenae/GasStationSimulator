#include "CrashSite.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

ACrashSite::ACrashSite(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LandscapePiece"));
    this->LandscapePiece = (UStaticMeshComponent*)RootComponent;
}


