#include "FuelPriceBoard.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraComponent -FallbackName=CameraComponent

AFuelPriceBoard::AFuelPriceBoard(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentDisplayPrice = 0.00f;
    this->MinigameCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("MinigameCamera"));
    this->CameraBlendTime = 1.00f;
    this->bMinigameActive = false;
    this->TutorialVolume = NULL;
    this->bConfirmationPopupActive = false;
    this->InteractionType = EPriceBoardInteractionType::FromWorld;
    this->FuelType = EFuelMagazine::GAS_STATION;
    this->MinigameWidgetClass = NULL;
    this->PriceBoardWidgetRef = NULL;
    this->MinigameWidgetRef = NULL;
    this->ActionManager = NULL;
    this->MinigameCamera->SetupAttachment(RootComponent);
}


void AFuelPriceBoard::SetupInteractionType_Implementation(EPriceBoardInteractionType InType) {
}

void AFuelPriceBoard::SetMinigameActive(bool bNewActive) {
}

void AFuelPriceBoard::OpenCloseAllFuelStations(bool bOpen) {
}



void AFuelPriceBoard::OnPopupExit(bool bAccepted, bool bCloseMinigame) {
}

bool AFuelPriceBoard::IsInteractable() {
    return false;
}

void AFuelPriceBoard::CancelMinigame(bool bIsPressed) {
}


