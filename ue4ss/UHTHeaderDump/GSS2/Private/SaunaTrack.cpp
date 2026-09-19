#include "SaunaTrack.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent

ASaunaTrack::ASaunaTrack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Root Component"));
    this->MinigameInWorldSauna = NULL;
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("Spline Component"));
    this->ArcCenter = CreateDefaultSubobject<USceneComponent>(TEXT("Arc Center"));
    this->ArcAngle = 60.00f;
    this->ArcRadius = 20.00f;
    this->ArcCenter->SetupAttachment(RootComponent);
    this->SplineComponent->SetupAttachment(ArcCenter);
}

float ASaunaTrack::NormalizeSplineTime(float Time) const {
    return 0.0f;
}

FTransform ASaunaTrack::GetTransformForTime(float Time) const {
    return FTransform{};
}

USplineComponent* ASaunaTrack::GetSplineComponent() const {
    return NULL;
}


