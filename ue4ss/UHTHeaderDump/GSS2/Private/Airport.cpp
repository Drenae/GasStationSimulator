#include "Airport.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "AirportScheduleManager.h"

AAirport::AAirport(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FlightControlManager = NULL;
    this->AirportScheduleManager = CreateDefaultSubobject<UAirportScheduleManager>(TEXT("AirportScheduleManager"));
    this->DepartureScreensTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("Departure Screens Trigger Box"));
    this->DeparturescreensTutorialClass = NULL;
    this->DeparturescreensTutorialInstance = NULL;
    this->bWasTutorialShown = false;
    this->DepartureScreensTrigger->SetupAttachment(RootComponent);
}

void AAirport::OnDepartureScreensOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AAirport::OnDepartureScreensOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

AFlightControlManager* AAirport::GetFlightControlManager() {
    return NULL;
}

UAirportScheduleManager* AAirport::GetAirportScheduleManager() {
    return NULL;
}


