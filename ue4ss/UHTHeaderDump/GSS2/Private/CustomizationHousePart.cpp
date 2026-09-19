#include "CustomizationHousePart.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

ACustomizationHousePart::ACustomizationHousePart(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MainMesh"));
    this->MainMesh = (UStaticMeshComponent*)RootComponent;
    this->CameraActor = NULL;
    this->WallSnapPoint = NULL;
    this->OutsideDecorationSnapPoint = NULL;
    this->SnapPointLocationSphere = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SnapPointLocationSphere"));
    this->OutsideDecorationSnapPointLocationSphere = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("OutsideDecorationSnapPointLocationSphere"));
    this->SnapPointClass = NULL;
    this->StructureType = EStructureType::OTHER;
    this->AvaliableStructureTypeChange = EStructureType::DEFAULT;
    this->bIsPartPaintable = true;
    this->bIsGasStationPart = false;
    this->bSnapPointInsideBlocked = false;
    this->bSnapPointOutsideBlocked = false;
    this->bWallTypeEdited = false;
    this->KulkaClass = NULL;
    this->Kulka1 = NULL;
    this->Kulka2 = NULL;
    this->NoShelfZone = NULL;
    this->OutsideDecorationSnapPointLocationSphere->SetupAttachment(RootComponent);
    this->SnapPointLocationSphere->SetupAttachment(RootComponent);
}

bool ACustomizationHousePart::UseItem_Implementation(APawn* Pawn, bool Throw, float AimingTime) {
    return false;
}

bool ACustomizationHousePart::SimpleInteraction_Implementation(APawn* Pawn, UPrimitiveComponent* UPrimitiveComponent) {
    return false;
}

void ACustomizationHousePart::SetWallEndColor(EWallSide CheckWallSide, const FLinearColor NewColour, const EColorType ColorType) {
}

void ACustomizationHousePart::SetWallColour(EWallSide CheckWallSide, float NewCurrentDurability, float NewMaxDurability, const FLinearColor NewColour, const EColorType ColorType) {
}

void ACustomizationHousePart::SetOriginalPathName(const FString& _OriginalPathName) {
}


void ACustomizationHousePart::RefreshPaintDurability() {
}


void ACustomizationHousePart::PaintingWall(EWallSide CheckWallSide, float NewCurrentDurability, float NewMaxDurability, const FLinearColor NewColour, const EColorType ColorType) {
}


void ACustomizationHousePart::OnTimeUpdated_Hours_Implementation(const int32 Hours) {
}

void ACustomizationHousePart::LoadWallColor(EWallSide CheckWallSide, float NewCurrentDurability, float NewMaxDurability, const FLinearColor NewColour, const EColorType ColorType, UMaterialInstance* WallpaperInstance) {
}

FLinearColor ACustomizationHousePart::GetWallColor(EWallSide CheckWallSide) {
    return FLinearColor{};
}

APathPoint* ACustomizationHousePart::GetPathPoint_Implementation(AGSSWheeledVehicle* GSSWheeledVehicle) {
    return NULL;
}

float ACustomizationHousePart::GetMaxDurability(EWallSide CheckWallSide) {
    return 0.0f;
}

FTransform ACustomizationHousePart::GetInteractiveTransform_Implementation(AActor* Actor, bool& RotateToTransform) {
    return FTransform{};
}

float ACustomizationHousePart::GetDurabilityByColor(EWallSide CheckWallSide, const FLinearColor NewColour) {
    return 0.0f;
}

float ACustomizationHousePart::GetCurrentDurability(EWallSide CheckWallSide) {
    return 0.0f;
}

FWallMaterialStruct ACustomizationHousePart::GetCompatibileMaterialParams(EWallSide CheckWallSide) {
    return FWallMaterialStruct{};
}

EColorType ACustomizationHousePart::GetColorType(EWallSide CheckWallSide) {
    return EColorType::BASIC;
}

EWallSide ACustomizationHousePart::GetClosestWallSide() {
    return EWallSide::Front;
}

TArray<USceneComponent*> ACustomizationHousePart::GetAllSpawnPointsLocation(EWallSide CheckWallSide) {
    return TArray<USceneComponent*>();
}

bool ACustomizationHousePart::DisplayInteractionInfo_Implementation(APawn* Pawn, UPrimitiveComponent* UPrimitiveComponent, UStaticMeshComponent*& StaticMeshComponent) {
    return false;
}

void ACustomizationHousePart::DisableSnapPointSpawn(UStaticMeshComponent* SnapPoint, bool bDisable) {
}

void ACustomizationHousePart::DisableInteractionInfo_Implementation(APawn* Pawn) {
}

bool ACustomizationHousePart::ChangePaintType(FPaintingColor NewColor, EWallSide Side) {
    return false;
}


void ACustomizationHousePart::AddCurrentDurability(float Amount) {
}


