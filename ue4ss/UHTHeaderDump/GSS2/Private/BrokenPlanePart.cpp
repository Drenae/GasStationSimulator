#include "BrokenPlanePart.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

ABrokenPlanePart::ABrokenPlanePart(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsPlanePartFixed = false;
    this->HoleMaterialFixedTransitionSpeed = 1.00f;
    this->AmountOfHolesAssigned = 2;
    this->HolesFixed = 0;
    this->Hole1_Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Hole1_Mesh"));
    this->Hole2_Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Hole2_Mesh"));
    this->Hole3_Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Hole3_Mesh"));
    this->Hole4_Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Hole4_Mesh"));
    this->Hole5_Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Hole5_Mesh"));
    this->BrokenToFixParamName = TEXT("BrokenToFixed");
    this->FinalEffectParamName = TEXT("Final Effect");
    this->FixedHoleTag = TEXT("Fixed");
    this->WidgetLocationSocketName = TEXT("WidgetLocation");
    this->AirplaneHoleWorldWidgetClass = NULL;
    this->Hole1_Mesh->SetupAttachment(MainMeshComponent);
    this->Hole2_Mesh->SetupAttachment(MainMeshComponent);
    this->Hole3_Mesh->SetupAttachment(MainMeshComponent);
    this->Hole4_Mesh->SetupAttachment(MainMeshComponent);
    this->Hole5_Mesh->SetupAttachment(MainMeshComponent);
}

void ABrokenPlanePart::SetHoleVisibility_Implementation(bool bNewVisiblilty) {
}

TArray<UStaticMeshComponent*> ABrokenPlanePart::GetAllHoleEdgeMeshes() {
    return TArray<UStaticMeshComponent*>();
}

void ABrokenPlanePart::DestroyAllTapes() {
}

void ABrokenPlanePart::CheckIfHolesAreRepaired() {
}


