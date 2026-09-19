#include "SDMinigameBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraComponent -FallbackName=CameraComponent
#include "SDStandaloneSheriffTrigger.h"
#include "Templates/SubclassOf.h"

ASDMinigameBase::ASDMinigameBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MinigameTrigger = CreateDefaultSubobject<USDStandaloneSheriffTrigger>(TEXT("Minigame Trigger"));
    this->MinigameCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Minigame Camera"));
    this->bPlayerCanLeave = false;
    this->bMinigameStarted = false;
    this->ChararcterMinigameState = ECharacterState::MINIGAME;
    this->MinigameUIWidget = NULL;
    this->CameraBlendSpeed = 1.00f;
    this->bShowMouseCursor = false;
    this->bAutoDisablePlayerInput = true;
    this->bTransferInputToMinigame = false;
    this->bGameAndUIInputMode = false;
    this->CreatedMinigameWidget = NULL;
    this->MinigameCamera->SetupAttachment(RootComponent);
    this->MinigameTrigger->SetupAttachment(RootComponent);
}

void ASDMinigameBase::StartMiniGame_Implementation() {
}

void ASDMinigameBase::SetPlayerInputEnabled(bool bEnabled, bool bInTransferInputToMinigame, bool bInSetGameAndUIInputMode) {
}

void ASDMinigameBase::RestorePlayerCamera(float BlendTime) {
}

void ASDMinigameBase::RemoveCrucialActor(AActor* CrucialActor) {
}

void ASDMinigameBase::OnWidgetAddedToViewport_Implementation() {
}

void ASDMinigameBase::OnStart_Implementation() {
}

void ASDMinigameBase::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ASDMinigameBase::OnEnd_Implementation() {
}

void ASDMinigameBase::OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool ASDMinigameBase::IsMinigameStarted() const {
    return false;
}

USDMinigameWidget* ASDMinigameBase::GetMinigameWidgetInstance() const {
    return NULL;
}

TSubclassOf<USDMinigameWidget> ASDMinigameBase::GetMinigameWidgetClass() const {
    return NULL;
}

TArray<AActor*> ASDMinigameBase::GetCrucialActors() const {
    return TArray<AActor*>();
}

void ASDMinigameBase::EndMinigame_Implementation(ESDMinigameEndReason EndReason) {
}

void ASDMinigameBase::CleanUp_Implementation() {
}

bool ASDMinigameBase::CanStartMinigame_Implementation() {
    return false;
}

void ASDMinigameBase::CancelMinigame(bool bPressed) {
}

void ASDMinigameBase::BlendViewTargetToCameraComponent(UCameraComponent* CameraToBlendTo, float BlendSpeed) {
}

void ASDMinigameBase::AddCrucialActor(AActor* InActor) {
}


