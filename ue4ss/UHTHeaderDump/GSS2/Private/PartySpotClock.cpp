#include "PartySpotClock.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=WidgetComponent -FallbackName=WidgetComponent

APartySpotClock::APartySpotClock(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ScreenMesh"));
    this->ClockMesh = (UStaticMeshComponent*)RootComponent;
    this->ClockWidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("ClockWidgetComponent"));
    this->ClockWidgetComponent->SetupAttachment(RootComponent);
}




