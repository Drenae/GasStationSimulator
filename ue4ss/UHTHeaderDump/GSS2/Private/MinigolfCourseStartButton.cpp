#include "MinigolfCourseStartButton.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

AMinigolfCourseStartButton::AMinigolfCourseStartButton(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ButtonBase"));
    this->ButtonBase = (UStaticMeshComponent*)RootComponent;
    this->ButtonItself = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ButtonItself"));
    this->StartingPoint = NULL;
    this->EndingHole = NULL;
    this->Par = 3;
    this->CostToStart = 5.00f;
    this->RewardForPar = 10.00f;
    this->RewardForUnderPar = 15.00f;
    this->ButtonItself->SetupAttachment(RootComponent);
}

bool AMinigolfCourseStartButton::SimpleInteraction_Implementation(APawn* Pawn, UPrimitiveComponent* UPrimitiveComponent) {
    return false;
}

bool AMinigolfCourseStartButton::DisplayInteractionInfo_Implementation(APawn* Pawn, UPrimitiveComponent* UPrimitiveComponent, UStaticMeshComponent*& StaticMeshComponent) {
    return false;
}


