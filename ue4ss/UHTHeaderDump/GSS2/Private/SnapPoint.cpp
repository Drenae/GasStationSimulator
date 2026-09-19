#include "SnapPoint.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

ASnapPoint::ASnapPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    this->DistanceFromInsideStation = 10.00f;
    this->InsideStationTag = TEXT("InsideGasStationArea");
    this->StaticMeshComponent = (UStaticMeshComponent*)RootComponent;
    this->SnapPointArrowComp = CreateDefaultSubobject<UArrowComponent>(TEXT("SnapPointArrowComp"));
    this->ActorAttached = NULL;
    this->SnapType = ESnapType::Wall;
    this->InteractableBuilding = NULL;
    this->bIsOutdated = false;
    this->ParentWall = NULL;
    this->SnapPointArrowComp->SetupAttachment(RootComponent);
}

void ASnapPoint::OnBuildingUpgraded(EBuildingType _BuildingType, int32 NewBuildingLevel, bool bLoadedFromSave) {
}

bool ASnapPoint::IsInsideGasStationArea() {
    return false;
}

void ASnapPoint::DestroySnapPoint() {
}

void ASnapPoint::AddSnapPointToInsideGasStationArea() {
}


