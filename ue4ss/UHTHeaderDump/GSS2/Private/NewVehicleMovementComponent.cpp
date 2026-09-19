#include "NewVehicleMovementComponent.h"

UNewVehicleMovementComponent::UNewVehicleMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsNewVehicleMovementEnabled = false;
    this->MaxDriveSpeed = 1200.00f;
    this->ExtraDriveHeight = 0.00f;
    this->TurnSlowDownRate = 2.00f;
    this->MaxRotationSpeed = 3.00f;
    this->MaxSlowRate = 1.00f;
    this->MaxZMovementSpeed = 100.00f;
    this->DestinationStopRadius = 100.00f;
    this->DecelerationDistance = 2500.00f;
    this->MinDecelerationStartSpeed = 400.00f;
    this->ObstacleStopDistance = 250.00f;
    this->VehicleStopDistance = 100.00f;
    this->ObstacleCheckTimeInterval = 0.20f;
    this->ObstacleCheckForwardDistance = 600.00f;
    this->ObstacleCheckBackDistance = 50.00f;
    this->ObstacleCheckExtraWidth = 20.00f;
    this->ObstacleCheckHeight = 250.00f;
    this->TurnCheckDistance = 800.00f;
    this->TurnSlowSpeedTreshold = 50.00f;
    this->VehicleVehiclesCheckRadius = 1500.00f;
    this->VehicleCollisionCheckCount = 6;
    this->NewModeVehicleCollisionCheckInterval = 150.00f;
    this->NewModeVehicleCollisionCheckMinSpeed = 400.00f;
    this->TireRotationCheckExtraSplineDistance = 100.00f;
    this->TireRotationCheckExtraForwardDistance = 350.00f;
    this->TireRotationCheckDistanceSpeedMultiplier = 0.30f;
    this->TireRotationMultiplier = 0.03f;
    this->TimeToHonkAtCar = 5.00f;
    this->MinSystemChangeTimeAfterBroom = 10.00f;
    this->MinSystemChangeRecoveryDistance = 100.00f;
    this->MinSystemChangeRecoveryInterval = 0.20f;
    this->DriveFasterWhenFarAwayFromPlayer = false;
    this->AccelerationCurve = NULL;
    this->DecelerationCurve = NULL;
    this->TurnSpeedCurve = NULL;
    this->ShowObstacleCollisionDebug = false;
    this->ShowVehicleCollisionDebug = false;
    this->PlayerCharacter = NULL;
    this->OwnerVehicle = NULL;
    this->DriveState = EDriveState::STOPPED;
    this->bStoppedByObstacle = false;
    this->DefaultMaxDriveSpeed = 0.00f;
    this->DefaultMaxRotationSpeed = 0.00f;
    this->DefaultMaxZMovementSpeed = 0.00f;
    this->TimeSinceDriveStateChange = 0.00f;
    this->SpeedAtLastDriveStateChange = 0.00f;
    this->SplineDistanceAtLastDriveStateChange = 0.00f;
    this->CurrentSpeed = 0.00f;
    this->TurnMaxSpeed = 0.00f;
    this->TimeSinceLastObstacleCheck = 0.00f;
    this->CurrentObstacleStopDistance = 0.00f;
    this->TimeObstructedByVehicle = 0.00f;
    this->CurrentObstacleVehicle = NULL;
    this->UpdateMaxSpeedInterval = 1.00f;
    this->TimeToTryTeleportAgain = 0.50f;
}

void UNewVehicleMovementComponent::UpdateMaxDriveSpeed() {
}

void UNewVehicleMovementComponent::UpdateDriveState(EDriveState NewState) {
}

void UNewVehicleMovementComponent::TryStopDriving() {
}

void UNewVehicleMovementComponent::TryStartDriving() {
}

void UNewVehicleMovementComponent::TryDrawDebugVehicleCollisionBox(FVehicleCollisionBox VehicleCollisionBox, FColor Color) {
}

void UNewVehicleMovementComponent::TryDestroyActorOnRoadEnd() {
}

void UNewVehicleMovementComponent::TeleportToLocationInternal(FVector TeleportLocation) {
}

void UNewVehicleMovementComponent::TeleportToLocation(FVector TeleportLocation) {
}

void UNewVehicleMovementComponent::ResetMaxDriveSpeed() {
}

void UNewVehicleMovementComponent::OBB2D_ProjectOntoAxis(const TArray<FVector2D>& Corners, FVector2D Axis, float& OutMin, float& OutMax) {
}

bool UNewVehicleMovementComponent::OBB2D_Intersect(const FVehicleCollisionBox& Box1, const FVehicleCollisionBox& Box2) {
    return false;
}

TArray<FVector2D> UNewVehicleMovementComponent::OBB2D_GetCorners(const FVehicleCollisionBox& Box) {
    return TArray<FVector2D>();
}

bool UNewVehicleMovementComponent::NewSystemIsSpecialCar() {
    return false;
}

void UNewVehicleMovementComponent::MoveAlongSpline(bool& ReachedDestination, float DeltaTime) {
}

bool UNewVehicleMovementComponent::GetStoppedByObstacle() const {
    return false;
}

float UNewVehicleMovementComponent::GetMaxDriveSpeed() const {
    return 0.0f;
}

EDriveState UNewVehicleMovementComponent::GetDriveState() const {
    return EDriveState::DRIVING;
}

float UNewVehicleMovementComponent::GetCurrentSpeed() const {
    return 0.0f;
}

AGSSWheeledVehicle* UNewVehicleMovementComponent::GetCurrentObstacleVehicle() const {
    return NULL;
}

FVehicleCollisionBox UNewVehicleMovementComponent::GetCollisionBoxAfterTime(float Time) {
    return FVehicleCollisionBox{};
}

FVehicleCollisionBox UNewVehicleMovementComponent::GetCollisionBoxAfterDistance(float Distance) {
    return FVehicleCollisionBox{};
}

bool UNewVehicleMovementComponent::CheckForTurnSlow(float SensorSplineLength) {
    return false;
}

bool UNewVehicleMovementComponent::CheckForOtherCars() {
    return false;
}

bool UNewVehicleMovementComponent::CheckForObstacles(FVector SensorLocation) {
    return false;
}

float UNewVehicleMovementComponent::CalculateCurveTimeByValueRecursive(UCurveFloat* Curve, float Value, float Accurracy, float MinTime, float MaxTime) {
    return 0.0f;
}

float UNewVehicleMovementComponent::CalculateCurveTimeByValue(UCurveFloat* Curve, float Value, float Accurracy) {
    return 0.0f;
}

FTransform UNewVehicleMovementComponent::CalculateCurrentSplineTransform() {
    return FTransform{};
}


