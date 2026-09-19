#include "CrashSiteManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ChildActorComponent -FallbackName=ChildActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

ACrashSiteManager::ACrashSiteManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->Marker = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Marker"));
    this->Marker1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Marker1"));
    this->Marker2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Marker2"));
    this->Marker3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Marker3"));
    this->SmokeActor = CreateDefaultSubobject<UChildActorComponent>(TEXT("SmokeActor"));
    this->bSmokeParticleEnabled = false;
    this->Marker->SetupAttachment(RootComponent);
    this->Marker1->SetupAttachment(RootComponent);
    this->Marker2->SetupAttachment(RootComponent);
    this->Marker3->SetupAttachment(RootComponent);
    this->SmokeActor->SetupAttachment(RootComponent);
}







