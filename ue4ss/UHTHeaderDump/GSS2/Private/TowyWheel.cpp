#include "TowyWheel.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

UTowyWheel::UTowyWheel() {
    this->MainMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MainMesh"));
}


