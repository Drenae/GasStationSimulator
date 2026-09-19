#include "PlaneDropPlace.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

APlaneDropPlace::APlaneDropPlace(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MainMesh"));
    this->MainMesh = (UStaticMeshComponent*)RootComponent;
    this->PlaneFinalPosition = CreateDefaultSubobject<UArrowComponent>(TEXT("PlaneFinalPosition"));
    this->AreaTriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Area Trigger Box"));
    this->TowyTriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Towy Trigger Box"));
    this->TipWidgetInstance = NULL;
    this->JoeAirplaneInsideArea = NULL;
    this->TipWidgetClass = NULL;
    this->JoeAirplaneClass = NULL;
    this->TapingTutorialInstance = NULL;
    this->bIsPlayerInsideArea = false;
    this->bWasTutorialShown = false;
    this->AreaTriggerBox->SetupAttachment(RootComponent);
    this->PlaneFinalPosition->SetupAttachment(RootComponent);
    this->TowyTriggerBox->SetupAttachment(RootComponent);
}



void APlaneDropPlace::SetAreaCollisionBaseOnPlaneState() {
}

void APlaneDropPlace::OnJoePlaneStateChange_Implementation(EJoeAirplaneState NewPlaneState) {
}

void APlaneDropPlace::OnAreaStopOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void APlaneDropPlace::OnAreaBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


void APlaneDropPlace::HighlightAirplane(bool bShouldHighlight) {
}


