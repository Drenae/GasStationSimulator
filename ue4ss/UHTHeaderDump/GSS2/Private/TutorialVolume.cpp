#include "TutorialVolume.h"

ATutorialVolume::ATutorialVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TutorialToShow = EGameActivityType::DIGGER;
    this->ShowOnce = false;
    this->ShowOnEnter = true;
    this->WidgetClassToCreateOnOverlap = NULL;
    this->TutorialWidgetRef = NULL;
}

void ATutorialVolume::OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor) {
}

void ATutorialVolume::OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor) {
}


