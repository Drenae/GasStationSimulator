#include "PartySpotScreen.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=WidgetComponent -FallbackName=WidgetComponent

APartySpotScreen::APartySpotScreen(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ScreenMesh"));
    this->ScreenMesh = (UStaticMeshComponent*)RootComponent;
    this->ConfirmationWidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("ConfirmationWidgetComponent"));
    this->ConfirmationWidgetComponent->SetupAttachment(RootComponent);
}



