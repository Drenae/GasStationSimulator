#include "IceCreamHolder.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

AIceCreamHolder::AIceCreamHolder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MainMesh"));
    this->MainMesh = (UStaticMeshComponent*)RootComponent;
    this->ConeSnapPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("ConeSnapPoint"));
    this->ConeSnapPoint->SetupAttachment(RootComponent);
}

void AIceCreamHolder::SetOutline(bool bShouldBeOutlined) {
}


