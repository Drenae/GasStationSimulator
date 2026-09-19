#include "ExhibitionSpot.h"

AExhibitionSpot::AExhibitionSpot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BlendTime = 1.00f;
    this->BlendFunction = VTBlend_Cubic;
    this->BlendExp = 1.00f;
    this->LockOutgoing = true;
    this->OutlinedCar = NULL;
    this->CurrentExhibitionSpot = NULL;
    this->ExhibitionSpotWidget = NULL;
    this->BoardWidget = NULL;
}

void AExhibitionSpot::SetupBindings(bool bActive) {
}

void AExhibitionSpot::SecondaryAction() {
}

void AExhibitionSpot::PutOnSale(AJunkyardCarWreckCustomizable* PickedCar, AExhibitionSpotSlot* PickedCarExhibitionSpot, float CarSellPrice) {
}

void AExhibitionSpot::PrimaryAction() {
}

void AExhibitionSpot::OnFinishGameLoaded(bool bGameLoaded) {
}

void AExhibitionSpot::OnBackButtonClicked() {
}

void AExhibitionSpot::MoveToExhibition(UGSSBaseWidget* InBoardWidget, AJunkyardCarWreckCustomizable* PickedCar, AExhibitionSpotSlot* PickedCarExhibitionSpot) {
}

void AExhibitionSpot::MoveToCarWreckExhibitionSpot(AJunkyardCarWreckCustomizable* PickedCar, AExhibitionSpotSlot* PickedCarExhibitionSpot) {
}

void AExhibitionSpot::LeaveExhibition() {
}


