#include "PortablePowerWashHolder.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ChildActorComponent -FallbackName=ChildActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

APortablePowerWashHolder::APortablePowerWashHolder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USceneComponent>(TEXT("Scene Root Component"))) {
    this->PistolChildActorComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("Pistol Child Actor Component"));
    this->PistolChildActorComponent->SetupAttachment(RootComponent);
}

APortableCarWashPistol* APortablePowerWashHolder::GetPortableCarWashPistol() const {
    return NULL;
}

UChildActorComponent* APortablePowerWashHolder::GetPistolChildActorComponent() const {
    return NULL;
}


