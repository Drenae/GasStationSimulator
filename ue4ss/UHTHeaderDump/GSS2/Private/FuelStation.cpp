#include "FuelStation.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ChildActorComponent -FallbackName=ChildActorComponent
#include "EQueueType.h"

AFuelStation::AFuelStation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->QueueType = EQueueType::EQT_Slow;
    this->FuelType = EFuelMagazine::GAS_STATION;
    this->EmployeeTask = EEmployeeTask::CLEANING;
    this->bIsHoldingSpace = false;
    this->SuccessTolerance = 0.01f;
    this->CurrentMoney = 0.00f;
    this->CurrentFuelSpeed = 1.00f;
    this->Pistolet = CreateDefaultSubobject<UChildActorComponent>(TEXT("Pistolet"));
    this->Airplane = NULL;
    this->WaterCustomer = NULL;
    this->IncommingWaterCustomer = NULL;
    this->Pistolet->SetupAttachment(RootComponent);
}

void AFuelStation::SetIncommingWaterFuelUser(AActor* InWaterCustomer) {
}

void AFuelStation::SetCurrentWaterFuelUser(AActor* InWaterCustomer) {
}

void AFuelStation::SetCurrentAirportFuelUser(AActor* InAirPlane) {
}

void AFuelStation::ResetWaterFuelUser() {
}

void AFuelStation::ResetCurrentAirportUser() {
}


float AFuelStation::GetMoneyFromJoe() {
    return 0.0f;
}

AActor* AFuelStation::GetIncommingWaterFuelUser() {
    return NULL;
}

AActor* AFuelStation::GetCurrentWaterFuelUser() {
    return NULL;
}

AActor* AFuelStation::GetCurrentAirpotFuelUser() {
    return NULL;
}

float AFuelStation::GetAndRemoveFuelFromInventoryInDeltaTime(const float DeltaTime, UInventoryComponent* Inventory, float AdditionalMultiplier) {
    return 0.0f;
}

void AFuelStation::FinishFuelMiniGame(float SpentFuel, float TargetFuel) {
}

void AFuelStation::CalcFuelSpeed(const float DeltaTime) {
}


