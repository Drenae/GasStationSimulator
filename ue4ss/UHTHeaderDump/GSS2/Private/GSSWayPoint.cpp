#include "GSSWayPoint.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent

AGSSWayPoint::AGSSWayPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
    this->ArrowComponent = (UArrowComponent*)RootComponent;
    this->RotateToPoint = true;
    this->OwnerAICharacter = NULL;
}

void AGSSWayPoint::SetWayPoint(FTransform GoalTransform, bool InRotateToPoint) {
}

void AGSSWayPoint::EndPlayAITargetPoint(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}


