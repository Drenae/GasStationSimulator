#include "QueuePointPreview.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TextRenderComponent -FallbackName=TextRenderComponent

AQueuePointPreview::AQueuePointPreview(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
    this->InnerRadiusMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("InnerRadiusMesh"));
    this->OuterRadiusMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("OuterRadiusMesh"));
    this->PositionText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("PositionText"));
    this->MID_Arrow = NULL;
    this->MID_InnerRing = NULL;
    this->MID_OuterRing = NULL;
    this->DefaultRoot = (USceneComponent*)RootComponent;
    this->ArrowMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ArrowMesh"));
    this->PositionInQueue = 0;
    this->ArrowMesh->SetupAttachment(RootComponent);
    this->InnerRadiusMesh->SetupAttachment(RootComponent);
    this->OuterRadiusMesh->SetupAttachment(InnerRadiusMesh);
    this->PositionText->SetupAttachment(ArrowMesh);
}

void AQueuePointPreview::SetPositionInQueue(int32 Position) {
}


