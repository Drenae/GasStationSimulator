#include "VehicleSystemBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "Net/UnrealNetwork.h"

AVehicleSystemBase::AVehicleSystemBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VehicleMesh"));
    this->VehicleMesh = (UStaticMeshComponent*)RootComponent;
    this->SteeringSpeed = 2.50f;
    this->ReplicateMovement = true;
    this->SyncLocation = true;
    this->SyncRotation = true;
    this->NetSendRate = 0.05f;
    this->NetTimeBehind = 0.15f;
    this->NetLerpStart = 0.35f;
    this->NetPositionTolerance = 0.10f;
    this->NetSmoothing = 10.00f;
}


void AVehicleSystemBase::SyncTrailerRotation_Implementation(float DeltaTime) {
}

void AVehicleSystemBase::SetShouldSyncWithServer(bool ShouldSync) {
}

void AVehicleSystemBase::Server_ReceiveRestState_Implementation(FNetState State) {
}
bool AVehicleSystemBase::Server_ReceiveRestState_Validate(FNetState State) {
    return true;
}

void AVehicleSystemBase::Server_ReceiveNetState_Implementation(FNetState State) {
}
bool AVehicleSystemBase::Server_ReceiveNetState_Validate(FNetState State) {
    return true;
}


void AVehicleSystemBase::OnRep_RestState() {
}

void AVehicleSystemBase::NetStateSend() {
}

void AVehicleSystemBase::Multicast_ChangedOwner_Implementation() {
}
bool AVehicleSystemBase::Multicast_ChangedOwner_Validate() {
    return true;
}

float AVehicleSystemBase::GetSteeringFromCurve(float Speed) {
    return 0.0f;
}

void AVehicleSystemBase::Client_ReceiveNetState_Implementation(FNetState State) {
}
bool AVehicleSystemBase::Client_ReceiveNetState_Validate(FNetState State) {
    return true;
}


void AVehicleSystemBase::AVS_Tick_Implementation(float DeltaTime) {
}

void AVehicleSystemBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVehicleSystemBase, RestState);
}


