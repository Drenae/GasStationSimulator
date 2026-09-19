#include "SDFightClubLockerMinigame.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BillboardComponent -FallbackName=BillboardComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

ASDFightClubLockerMinigame::ASDFightClubLockerMinigame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FightClubZone = ESDFightClubZone::None;
    this->DefaultGlovesMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Default Gloves Mesh"));
    this->ReducedPaddingGlovesMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Reduced Padding Gloves Mesh"));
    this->GravelPaddingGlovesMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Gravel Padding Gloves Mesh"));
    this->BuckshotFilledGlovesMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Buckshot Filled Gloves Mesh"));
    this->HorseshoeGlovesMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Horseshoe Gloves Mesh"));
    this->SelectedGlovesPosition = CreateDefaultSubobject<UBillboardComponent>(TEXT("Selected Gloves Position"));
    this->GlovesPosition_1 = CreateDefaultSubobject<UBillboardComponent>(TEXT("Gloves Position 1"));
    this->GlovesPosition_2 = CreateDefaultSubobject<UBillboardComponent>(TEXT("Gloves Position 2"));
    this->GlovesPosition_3 = CreateDefaultSubobject<UBillboardComponent>(TEXT("Gloves Position 3"));
    this->GlovesPosition_4 = CreateDefaultSubobject<UBillboardComponent>(TEXT("Gloves Position 4"));
    this->SelectedGlovesType = ESDFightClubGloves::MAX;
    this->BuckshotFilledGlovesMesh->SetupAttachment(RootComponent);
    this->DefaultGlovesMesh->SetupAttachment(RootComponent);
    this->GlovesPosition_1->SetupAttachment(RootComponent);
    this->GlovesPosition_2->SetupAttachment(RootComponent);
    this->GlovesPosition_3->SetupAttachment(RootComponent);
    this->GlovesPosition_4->SetupAttachment(RootComponent);
    this->GravelPaddingGlovesMesh->SetupAttachment(RootComponent);
    this->HorseshoeGlovesMesh->SetupAttachment(RootComponent);
    this->ReducedPaddingGlovesMesh->SetupAttachment(RootComponent);
    this->SelectedGlovesPosition->SetupAttachment(RootComponent);
}

void ASDFightClubLockerMinigame::SetGlovesTypeByStaticMeshComp(UStaticMeshComponent* InStaticMesh) {
}

void ASDFightClubLockerMinigame::SetGlovesType(ESDFightClubGloves InGlovesType) {
}

ESDFightClubGloves ASDFightClubLockerMinigame::GetSelectedGlovesType() const {
    return ESDFightClubGloves::DefaultGloves;
}

FSDFighterAttributes ASDFightClubLockerMinigame::GetSelectedGlovesBonus() const {
    return FSDFighterAttributes{};
}

ESDFightClubGloves ASDFightClubLockerMinigame::GetGlvoesType(UStaticMeshComponent* InGlovesStaticMesh) const {
    return ESDFightClubGloves::DefaultGloves;
}

UStaticMeshComponent* ASDFightClubLockerMinigame::GetGlvoesStaticMesh(ESDFightClubGloves InGlovesType) const {
    return NULL;
}

ESDFightClubZone ASDFightClubLockerMinigame::GetFightClubZone() const {
    return ESDFightClubZone::None;
}


