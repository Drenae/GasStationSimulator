#include "JunkyardCarWreckCustomizable.h"
#include "RenderTargetComponent.h"

AJunkyardCarWreckCustomizable::AJunkyardCarWreckCustomizable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RightDoor = NULL;
    this->LeftDoor = NULL;
    this->FrontBumper = NULL;
    this->RearBumper = NULL;
    this->hood = NULL;
    this->Logo = NULL;
    this->MainMeshRenderTarget = CreateDefaultSubobject<URenderTargetComponent>(TEXT("MainMeshRenderTarget"));
    this->bAssemblyMode = false;
    this->bProjectCreatedEffectShown = false;
    this->bProjectFinishedEffectShown = false;
    this->bShowEffectOnProjectFinished = false;
    this->WreckTooltip = NULL;
    this->bPutOnSale = false;
}


void AJunkyardCarWreckCustomizable::ShowGhostParts(bool bShow) {
}

void AJunkyardCarWreckCustomizable::SetIsPutOnSale(bool InIsPutOnSale) {
}

void AJunkyardCarWreckCustomizable::PreviewPlannedPaint(bool bPreview) {
}

void AJunkyardCarWreckCustomizable::OnRustCleared() {
}


void AJunkyardCarWreckCustomizable::OnMaskInteracted() {
}

bool AJunkyardCarWreckCustomizable::IsProjectFinished() const {
    return false;
}

bool AJunkyardCarWreckCustomizable::HasAnyPaint() const {
    return false;
}

void AJunkyardCarWreckCustomizable::HandleFInteraction() {
}

float AJunkyardCarWreckCustomizable::GetRustProgressPercentage() const {
    return 0.0f;
}

float AJunkyardCarWreckCustomizable::GetProjectProgress() const {
    return 0.0f;
}

ADecalToPaint* AJunkyardCarWreckCustomizable::GetLastPlacedDecal() {
    return NULL;
}

bool AJunkyardCarWreckCustomizable::GetIsPutOnSale() {
    return false;
}

TArray<UJunkyardCarPartCustomizable*> AJunkyardCarWreckCustomizable::GetAllPlannedParts() const {
    return TArray<UJunkyardCarPartCustomizable*>();
}

void AJunkyardCarWreckCustomizable::FinishRepaintForBody() {
}


void AJunkyardCarWreckCustomizable::DebugCleanEverything() {
}

void AJunkyardCarWreckCustomizable::ChangePlannedPaintTypeForPart(EJunkyardCarPartType Slot, FSavedCarPaint CarPaintData) {
}

void AJunkyardCarWreckCustomizable::ChangePlannedPaintTypeForBody(FSavedCarPaint CarPaintData) {
}



void AJunkyardCarWreckCustomizable::AddAndSetupPartToSlot(EJunkyardCarPartType Slot, FStorageCarPart PartStruct, bool bGhost, bool bSetup, bool bPaint, FSavedCarPaintData CarPaint, TArray<ADecalToPaint*> Decals) {
}


