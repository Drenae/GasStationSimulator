#include "RVEmployeeRestPoint.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

ARVEmployeeRestPoint::ARVEmployeeRestPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->RestPosition = CreateDefaultSubobject<UArrowComponent>(TEXT("EmployeeGoToRestPoint"));
    this->RestPosition->SetupAttachment(RootComponent);
}


