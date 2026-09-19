#include "GSSWheeledVehicle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CollectibleItems -ObjectName=CollectiblesInventoryComponent -FallbackName=CollectiblesInventoryComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ChildActorComponent -FallbackName=ChildActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "InventoryComponent.h"
#include "NewVehicleMovementComponent.h"

AGSSWheeledVehicle::AGSSWheeledVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDistanceOptimizationEnabled = false;
    this->SignificanceCalculationsTag = TEXT("GSSWheeledVehicle");
    this->bDisableTickWhenNotRendered = false;
    this->MaxTickDisableSignificanceLevel = 0;
    this->bOverrideDefaultSignificanceLevels = false;
    this->bOverridePriorityWhenNotRendered = false;
    this->NotRenderedOverridePriorityLevel = 0;
    this->ItemInventory = CreateDefaultSubobject<UInventoryComponent>(TEXT("ItemInventory"));
    this->CollectibleItemsInventory = CreateDefaultSubobject<UCollectiblesInventoryComponent>(TEXT("CollectibleItemsInventory"));
    this->bVehicleWasFixed = false;
    this->EnteringCarMontage = NULL;
    this->LeavingCarMontage = NULL;
    this->FuelEnter = CreateDefaultSubobject<UChildActorComponent>(TEXT("FuelEnter"));
    this->Collant = CreateDefaultSubobject<UChildActorComponent>(TEXT("Collant"));
    this->OilCheck = CreateDefaultSubobject<UChildActorComponent>(TEXT("OilCheck"));
    this->acumulator = CreateDefaultSubobject<UChildActorComponent>(TEXT("acumulator"));
    this->WasherFluid = CreateDefaultSubobject<UChildActorComponent>(TEXT("WasherFluid"));
    this->MirrorR = CreateDefaultSubobject<UChildActorComponent>(TEXT("MirrorR"));
    this->MirrorL = CreateDefaultSubobject<UChildActorComponent>(TEXT("MirrorL"));
    this->CarDoorRight = CreateDefaultSubobject<UChildActorComponent>(TEXT("CarDoorRight"));
    this->CarDoorLeft = CreateDefaultSubobject<UChildActorComponent>(TEXT("CarDoorLeft"));
    this->sparkplug = CreateDefaultSubobject<UChildActorComponent>(TEXT("sparkplug"));
    this->Wheel1 = CreateDefaultSubobject<UChildActorComponent>(TEXT("Wheel1"));
    this->Wheel2 = CreateDefaultSubobject<UChildActorComponent>(TEXT("Wheel2"));
    this->Wheel3 = CreateDefaultSubobject<UChildActorComponent>(TEXT("Wheel3"));
    this->Wheel4 = CreateDefaultSubobject<UChildActorComponent>(TEXT("Wheel4"));
    this->BrakeDisk1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BrakeDisk1"));
    this->BrakeDisk2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BrakeDisk2"));
    this->BrakeDisk3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BrakeDisk3"));
    this->BrakeDisk4 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BrakeDisk4"));
    this->MaskFront = CreateDefaultSubobject<UChildActorComponent>(TEXT("MaskFront"));
    this->MaskBack = CreateDefaultSubobject<UChildActorComponent>(TEXT("mask_stealing"));
    this->TowyMagnetSnapBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TowyMagnetSnapBox"));
    this->NewVehicleMovementCollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("NewVehicleMovementCollisionBox"));
    this->NewVehicleMovementComponent = CreateDefaultSubobject<UNewVehicleMovementComponent>(TEXT("NewVehicleMovementComponent"));
    this->WashableCarMesh = CreateDefaultSubobject<UChildActorComponent>(TEXT("StaticMeshComponent"));
    this->CurrentSpline = NULL;
    this->Driver = NULL;
    this->AIVehicleController = NULL;
    this->VehicleDirection = EVehicleDirection::Forward;
    this->StartPathPoint = NULL;
    this->EndPathPoint = NULL;
    this->VehicleMovementState = EVehicleMovementState::Move;
    this->VehicleEnteringMontage = NULL;
    this->VehicleLeavingMontage = NULL;
    this->bRVEntranceCurrentlyOcupied = false;
    this->VehicleOptymalizeType = EVehicleOptymalizeType::Fuel;
    this->MaxSpeed = 100000.00f;
    this->CurrentSplineDistance = 0.00f;
    this->MinStuckTime = 15.00f;
    this->MaxStuckVelocity = 25.00f;
    this->MaxStuckDistance = 50.00f;
    this->UnstuckForwardDistance = 100.00f;
    this->TimeToEnablePhysicsAfterUnstuck = 1.00f;
    this->CurrentUnstuckProgress = 0.00f;
    this->bIsUnstuckProgressActive = false;
    this->VehicleHoodState = EVehicleHoodState::CLOSED;
    this->HoodOpeningSound = NULL;
    this->HoodClosingSound = NULL;
    this->HoodClosedSound = NULL;
    this->HoodOpenedSound = NULL;
    this->VehicleHoodStateAlpha = 0.00f;
    this->VehicleHood_CurAnimationTime = 0.00f;
    this->HoodOpeningTime = 1.00f;
    this->HoodOpenedMaxDegrees = 90.00f;
    this->bCanGetAttractedByMagnet = true;
    this->BrakeDisk1->SetupAttachment(RootComponent);
    this->BrakeDisk2->SetupAttachment(RootComponent);
    this->BrakeDisk3->SetupAttachment(RootComponent);
    this->BrakeDisk4->SetupAttachment(RootComponent);
    this->CarDoorLeft->SetupAttachment(RootComponent);
    this->CarDoorRight->SetupAttachment(RootComponent);
    this->Collant->SetupAttachment(RootComponent);
    this->FuelEnter->SetupAttachment(RootComponent);
    this->MaskBack->SetupAttachment(RootComponent);
    this->MaskFront->SetupAttachment(RootComponent);
    this->MirrorL->SetupAttachment(RootComponent);
    this->MirrorR->SetupAttachment(RootComponent);
    this->NewVehicleMovementCollisionBox->SetupAttachment(RootComponent);
    this->OilCheck->SetupAttachment(RootComponent);
    this->TowyMagnetSnapBox->SetupAttachment(RootComponent);
    this->WashableCarMesh->SetupAttachment(RootComponent);
    this->WasherFluid->SetupAttachment(RootComponent);
    this->Wheel1->SetupAttachment(RootComponent);
    this->Wheel2->SetupAttachment(RootComponent);
    this->Wheel3->SetupAttachment(RootComponent);
    this->Wheel4->SetupAttachment(RootComponent);
    this->acumulator->SetupAttachment(RootComponent);
    this->sparkplug->SetupAttachment(RootComponent);
}


bool AGSSWheeledVehicle::VehicleSightAllert(float Distance, float Angle, APawn*& DetectedPawn, bool CheckLeftSide, TArray<AActor*> CheckedVehicles) {
    return false;
}

void AGSSWheeledVehicle::VehicleInteractMode_Implementation(bool bEnable) {
}


void AGSSWheeledVehicle::Unstuck() {
}

void AGSSWheeledVehicle::TryProgressUnstuck(float DeltaTime) {
}


void AGSSWheeledVehicle::StopDrivingNoExit_Implementation(AAICharacterBase* CurrentDriver) {
}

void AGSSWheeledVehicle::StopDriving_Implementation(AAICharacterBase* CurrentDriver) {
}

void AGSSWheeledVehicle::StartDriving_Implementation(AAICharacterBase* CurrentDriver, APathPoint* NewStartPathPoint) {
}

void AGSSWheeledVehicle::SnapHoodToLocation(EVehicleHoodState HoodState) {
}

void AGSSWheeledVehicle::SetVehicleHoodState(EVehicleHoodState NewState) {
}

void AGSSWheeledVehicle::SetRVEntering(bool EntranceOccupied) {
}

void AGSSWheeledVehicle::ResetUnstuckProgress() {
}

void AGSSWheeledVehicle::PreStartDriving(APathPoint* NewStartPathPoint, APathPoint* NewEndPathPoint) {
}


void AGSSWheeledVehicle::OnHoodInteraction() {
}




bool AGSSWheeledVehicle::IsStuck() {
    return false;
}













void AGSSWheeledVehicle::IdleCheck() {
}

void AGSSWheeledVehicle::GetVehiclePartsStatus(TArray<AVehiclePart*>& OutBrokedParts, TArray<AVehiclePart*>& OutFixedParts) {
}

bool AGSSWheeledVehicle::GetVehicleInteractMode() {
    return false;
}

EVehicleHoodState AGSSWheeledVehicle::GetVehicleHoodState() {
    return EVehicleHoodState::CLOSED;
}

UPrimitiveComponent* AGSSWheeledVehicle::GetPrimitiveToApplyFore_Implementation() {
    return NULL;
}

UPrimitiveComponent* AGSSWheeledVehicle::GetAttractedPrimitive_Implementation() {
    return NULL;
}


void AGSSWheeledVehicle::EnablePhysicsAfterUnstuck() {
}



bool AGSSWheeledVehicle::CheckCarIsFixed() {
    return false;
}


bool AGSSWheeledVehicle::CanActorGetAttracted_Implementation() {
    return false;
}

void AGSSWheeledVehicle::AnimateVehicleHoodIfNeeded(float DeltaTime) {
}


