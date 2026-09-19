#include "Griffin.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ChildActorComponent -FallbackName=ChildActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

AGriffin::AGriffin(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Root Component"));
    this->ChildActorGriffinLeft = CreateDefaultSubobject<UChildActorComponent>(TEXT("Child Actor Griffin Left"));
    this->ChildActorGriffinRight = CreateDefaultSubobject<UChildActorComponent>(TEXT("Child Actor Griffin Right"));
    this->GriffinLeftContainer = NULL;
    this->GriffinRightContainer = NULL;
    this->DumbbellsMinigame = NULL;
    this->SceneRootComponent = (USceneComponent*)RootComponent;
    this->ChildActorGriffinLeft->SetupAttachment(RootComponent);
    this->ChildActorGriffinRight->SetupAttachment(RootComponent);
}

void AGriffin::UpdateWeight(ADumbbellsContainer* Container, float ContainerWeight) {
}

void AGriffin::Init_Implementation(ARvMinigameInWorld_Dumbbells* minigame) {
}

float AGriffin::GetWeight() const {
    return 0.0f;
}

float AGriffin::GetStartingWeight() const {
    return 0.0f;
}

ADumbbellsContainer* AGriffin::GetGriffinRightContainer() const {
    return NULL;
}

ADumbbellsContainer* AGriffin::GetGriffinLeftContainer() const {
    return NULL;
}

ARvMinigameInWorld_Dumbbells* AGriffin::GetDumbbellsMinigame() const {
    return NULL;
}


