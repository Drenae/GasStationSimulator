#include "RvMinigameInWorldWoodChopping.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

ARvMinigameInWorldWoodChopping::ARvMinigameInWorldWoodChopping(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CuttingAreaPlane = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CuttingAreaPlane"));
    this->FirstPoint = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FirstPoint"));
    this->StartIndicator = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StartIndicator"));
    this->SecondPoint = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SecondPoint"));
    this->CuttingIndicator_Spline = CreateDefaultSubobject<USplineComponent>(TEXT("CuttingIndicator_Spline"));
    this->CapMaterialRef = NULL;
    this->CutedLogsCounter = 0;
    this->MinigameEnded = false;
    this->ClickerBlocker = false;
    this->ClickCounter = 0;
    this->TotalOfFirstRatios = 0.00f;
    this->TotalOfSecondRatios = 0.00f;
    this->FirstRatio = 0.00f;
    this->SecondRatio = 0.00f;
    this->SetFixedZForPosition = 0.00f;
    this->MaxLogsToCut = 0;
    this->SuccessTolerance = 0;
    this->CutDistanceFromCenter = 50.00f;
    this->WoodChoppingSettingsREF = NULL;
    this->WoodenLogClass = NULL;
    this->WoodenLogForCuttingREF = NULL;
    this->SplineMeshComponentREF = NULL;
    this->StartIndicatorDMIRef = NULL;
    this->CuttingIndicatorMesh = NULL;
    this->CuttingIndicatorMaterial = NULL;
    this->SlicedProceduralMeshREF = NULL;
    this->bSelectingEndPoint = false;
    this->CuttingAreaPlane->SetupAttachment(RootComponent);
    this->CuttingIndicator_Spline->SetupAttachment(RootComponent);
    this->FirstPoint->SetupAttachment(RootComponent);
    this->SecondPoint->SetupAttachment(RootComponent);
    this->StartIndicator->SetupAttachment(RootComponent);
}

void ARvMinigameInWorldWoodChopping::UpdateCuttingPoints_Implementation(float DeltaTime) {
}

void ARvMinigameInWorldWoodChopping::UpdateCuttingLine_Implementation(bool bVisible, FVector StartLocationWorld, FVector EndLocationWorld, bool bPointingEnd) {
}

void ARvMinigameInWorldWoodChopping::TryToStartCutting() {
}

void ARvMinigameInWorldWoodChopping::TryToEndCutting() {
}

void ARvMinigameInWorldWoodChopping::StartCutting_Implementation() {
}

void ARvMinigameInWorldWoodChopping::SpawnWoodenLog() {
}

void ARvMinigameInWorldWoodChopping::SimulatePhysicsDestroyIndicatorDelayed() {
}

void ARvMinigameInWorldWoodChopping::SetupStartingValues() {
}


void ARvMinigameInWorldWoodChopping::EndWoodenLogsCutting() {
}

void ARvMinigameInWorldWoodChopping::EndCutting_Implementation() {
}

void ARvMinigameInWorldWoodChopping::DestroyWoodenLogDelayed() {
}

bool ARvMinigameInWorldWoodChopping::CanMakeCut_Implementation() const {
    return false;
}

void ARvMinigameInWorldWoodChopping::CancelCutting() {
}

void ARvMinigameInWorldWoodChopping::CancelClickingBlocker() {
}


