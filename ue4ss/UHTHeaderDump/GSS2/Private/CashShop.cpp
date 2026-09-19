#include "CashShop.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraComponent -FallbackName=CameraComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "ConveyorBeltComponent.h"
#include "EConstructType.h"
#include "EQueueType.h"
#include "Templates/SubclassOf.h"

ACashShop::ACashShop(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->CanBeEditable = true;
    this->IgnoreQueue = false;
    this->QueueType = EQueueType::EQT_Fast;
    this->ConstructType = EConstructType::SnapToGround;
    this->ItemDataTable = NULL;
    this->ShelfMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShelfMesh"));
    this->CashBasket = NULL;
    this->ScannerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ScannerMesh"));
    this->AnimMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AnimMesh"));
    this->SpongeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SpongeMesh"));
    this->ScannerArea = CreateDefaultSubobject<UBoxComponent>(TEXT("ScannerArea"));
    this->FailBoxArea = CreateDefaultSubobject<UBoxComponent>(TEXT("FailBoxArea"));
    this->FailBoxAreaTop = CreateDefaultSubobject<UBoxComponent>(TEXT("FailBoxAreaTop"));
    this->FailBoxAreaLeft = CreateDefaultSubobject<UBoxComponent>(TEXT("FailBoxAreaLeft"));
    this->FailBoxAreaRight = CreateDefaultSubobject<UBoxComponent>(TEXT("FailBoxAreaRight"));
    this->FailBoxAreaBehind = CreateDefaultSubobject<UBoxComponent>(TEXT("FailBoxAreaBack"));
    this->FailBoxAreaFront = CreateDefaultSubobject<UBoxComponent>(TEXT("FailBoxAreaFront"));
    this->SuccessBoxArea = CreateDefaultSubobject<UBoxComponent>(TEXT("SuccessBoxArea"));
    this->NoShelfZone = CreateDefaultSubobject<UBoxComponent>(TEXT("NoShelfZone"));
    this->CashTaskState = ETaskResult::TaskSuccess;
    this->MinigameTime = 0.00f;
    this->bMinigameActive = false;
    this->CachedProductIndex = -1;
    this->TimeSinceLastSpawn = 0.00f;
    this->AttachmentPoint = NULL;
    this->CameraRotationSpeed = 0.40f;
    this->MinBeltTimeToSpawnNextItem = 1.00f;
    this->MaxBeltTimeToSpawnNextItem = 1.00f;
    this->DurabilityLossMultiplier = 25.00f;
    this->CleanSpeedMultiplier = 10.00f;
    this->MinDistanceBetweenProducts = 5.00f;
    this->GamepadSphereTraceRadius = 10.00f;
    this->GamepadCursorSpeed = 15.00f;
    this->GamepadCursorSpeedOnProduct = 15.00f;
    this->ScanningSound = NULL;
    this->ItemDropSound = NULL;
    this->BeltStartRepeatSound = NULL;
    this->BeltStopSound = NULL;
    this->CurBeltTimeToSpawnNextItem = 1.00f;
    this->ConveyorBeltComponent = CreateDefaultSubobject<UConveyorBeltComponent>(TEXT("ConveyorBeltComponent"));
    this->MinigameCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("MinigameCamera"));
    this->ScannerSoundComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("ScannerSoundComponent"));
    this->BeltAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("BeltAudioComponent"));
    this->ItemDropAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("ItemDropAudioComponent"));
    this->bCustomerWaitingToBeServed = false;
    this->bTimerStarted = false;
    this->MaxDistanceBetweenQueuePoints = 20.00f;
    this->MinDistanceBetweenQueuePoints = 0.00f;
    this->ConveyorBeltMID = NULL;
    this->ScannerMID = NULL;
    this->bDurabilityIsUnderCriticLevel = false;
    this->bHoldingItem = false;
    this->CurrentCashMeshIndex = 0;
    this->ItemBeingHeld = NULL;
    this->BlockCashWhenReachThisDurability = 400.00f;
    this->bHoldingRMB = false;
    this->bIsRotatingRight = false;
    this->bIsRotatingLeft = false;
    this->DeltatimeAnimationClean = 1.00f;
    this->MaxSponageMovment = 1.00f;
    this->CurGamepadZone = 0;
    this->bIsItemGrabbedByPad = false;
    this->maxClenTime = 10.00f;
    this->SpongeTime = 0.80f;
    this->CurSpongeTime = 0.00f;
    this->IsMoveForvard = false;
    this->StrikeCounter = 0;
    this->CurrentMinigameProducts = 0;
    this->CurrentDurability = 1000.00f;
    this->MaxDurability = 1000.00f;
    this->CurrentMinigameScannedProducts = 0;
    this->CurrentMinigameFailedProducts = 0;
    this->TotalMinigameProducts = 0;
    this->TotalMinigameScannedProducts = 0;
    this->TotalMinigameFailedProducts = 0;
    this->indexItem = 0;
    this->MinigameWidgetClass = NULL;
    this->MinigameWidgetRef = NULL;
    this->bGamepadMode = false;
    this->TemporaryProductFile = NULL;
    this->GamepadMovementArea = CreateDefaultSubobject<UBoxComponent>(TEXT("Gamepad Movement Camera"));
    this->AnimMesh->SetupAttachment(RootComponent);
    this->BeltAudioComponent->SetupAttachment(ScannerMesh);
    this->ConveyorBeltComponent->SetupAttachment(RootComponent);
    this->FailBoxArea->SetupAttachment(ScannerMesh);
    this->FailBoxAreaBehind->SetupAttachment(ScannerMesh);
    this->FailBoxAreaFront->SetupAttachment(ScannerMesh);
    this->FailBoxAreaLeft->SetupAttachment(ScannerMesh);
    this->FailBoxAreaRight->SetupAttachment(ScannerMesh);
    this->FailBoxAreaTop->SetupAttachment(ScannerMesh);
    this->GamepadMovementArea->SetupAttachment(RootComponent);
    this->ItemDropAudioComponent->SetupAttachment(ScannerMesh);
    this->MinigameCamera->SetupAttachment(RootComponent);
    this->NoShelfZone->SetupAttachment(ScannerMesh);
    this->ScannerArea->SetupAttachment(ScannerMesh);
    this->ScannerMesh->SetupAttachment(RootComponent);
    this->ScannerSoundComponent->SetupAttachment(ScannerMesh);
    this->ShelfMesh->SetupAttachment(RootComponent);
    this->SpongeMesh->SetupAttachment(RootComponent);
    this->SuccessBoxArea->SetupAttachment(ScannerMesh);
}

void ACashShop::VerifyItemsInBoxArea(UBoxComponent* Area, bool bSuccessArea) {
}

void ACashShop::VerifyIfItemsInScannerArea() {
}

void ACashShop::VerifyEndOfMinigame() {
}

void ACashShop::UpdateStrike() {
}











void ACashShop::TurnCameraIfRequested(float DeltaTime) {
}

FHitResult ACashShop::TraceUniversal() {
    return FHitResult{};
}

FHitResult ACashShop::TraceUnderMouseCursor() {
    return FHitResult{};
}

void ACashShop::SpawnNewQueuePoint() {
}

bool ACashShop::SpawnItemOnBelt(TSubclassOf<AItem> ProductClass, AGSSCharacterBase* CharOwner) {
    return false;
}

void ACashShop::ShowProducts(AAICharacterBase* AICharacterBase) {
}

void ACashShop::SetStrikeCounter(int32 NewStrike) {
}


void ACashShop::SetMinigameActive(bool bNewActive) {
}

bool ACashShop::SetMeshWithMaterialsCleanup(UStaticMeshComponent* CashShopMeshComponent, UStaticMesh* InMesh) {
    return false;
}

void ACashShop::SetHoldingItem(bool bNewHoldingItem) {
}

void ACashShop::SetCustomerWaitingToBeServed(bool bNewValue) {
}

void ACashShop::SetCurrentMeshIndex(int32 InCurrentMeshIndex) {
}

void ACashShop::SetCurrentMeshColor(FLinearColor InCurrentMeshColor) {
}


void ACashShop::SelectItem() {
}

bool ACashShop::ScanProduct(AItem* Item) {
    return false;
}

void ACashShop::ResetScanner() {
}

void ACashShop::RemoveMinigameWidgetFromViewportAfterDelay() {
}

void ACashShop::RemoveItemFromGroup(TSubclassOf<AItem> ProductClass, int32 Amount, EProductCashShopState GroupToRemoveFrom) {
}

void ACashShop::ReleaseItem_Gamepad(AProduct* Item) {
}

void ACashShop::PutProductByCustomer(AAICharacterBase* AICharacterBase) {
}

void ACashShop::PointGamepadOriginToLocation(FVector LocationToPoint, TArray<AActor*> ActorsToIgnore) {
}

void ACashShop::PlayerGameTick(float DeltaTime) {
}


void ACashShop::OnProductHandled(bool bSuccess) {
}




void ACashShop::OnGamepadModeToggle(bool bNewGamepadMode) {
}



void ACashShop::OnBeginFinishTaskAICharacter(UTaskBase* FinishedTask, const ETaskResult TaskResult, const FString& Reason) {
}

void ACashShop::MoveRight_Gamepad(float Val) {
}

void ACashShop::MoveItem_Gamepad(AProduct* Item, bool isNext) {
}

void ACashShop::MoveForward_Gamepad(float Val) {
}

void ACashShop::MiniGameStart(AAICharacterBase* AICharacterBase) {
}

void ACashShop::MiniGameFinish(AAICharacterBase* AICharacterBase) {
}

void ACashShop::LoadQueuePoint(FSavedWayPoint WayPoint) {
}


void ACashShop::GrabItems() {
}

void ACashShop::GrabItem_Gamepad(AProduct* Item) {
}

int32 ACashShop::GetStrikeCounter() {
    return 0;
}

TArray<AActor*> ACashShop::GetScannedProductsInSuccessArea() const {
    return TArray<AActor*>();
}

int32 ACashShop::GetProductIndex(TSubclassOf<AItem> ProductClass, EProductCashShopState Group) {
    return 0;
}

UUserWidget* ACashShop::GetMinigameWidgetRef() {
    return NULL;
}

int32 ACashShop::GetMinigameScannedProductCount(bool bTotal) {
    return 0;
}

int32 ACashShop::GetMinigameProductCount(bool bTotal) {
    return 0;
}

int32 ACashShop::GetMinigameFailedProductCount(bool bTotal) {
    return 0;
}

int32 ACashShop::GetCurrentMeshIndex() {
    return 0;
}

FLinearColor ACashShop::GetCurrentMeshColor() {
    return FLinearColor{};
}

TArray<UPrimitiveComponent*> ACashShop::GetComponentsToIgnoreInTrace_Implementation() const {
    return TArray<UPrimitiveComponent*>();
}

TArray<AActor*> ACashShop::GetActorsToIgnoreInTrace_Implementation() const {
    return TArray<AActor*>();
}

void ACashShop::FinishCashGame() {
}

bool ACashShop::FindSpawnTransformForItem(const TArray<UConveyorBeltSpawnLocComp*>& PossibleSpawnPoints, const TSubclassOf<AItem> ProductClass, FTransform& OutTransform) {
    return false;
}

void ACashShop::EnableSponge(float DeltaTime) {
}


void ACashShop::DetachHandleItemFromPoint() {
}

void ACashShop::CountQueuePoints() {
}

int32 ACashShop::CountProductsRemaining() {
    return 0;
}

void ACashShop::ConveyorActivated(bool bActivated) {
}


void ACashShop::CancelMinigame(bool bIsPressed) {
}

void ACashShop::CameraTurnRight_Keyboard(bool bIsRotating) {
}

void ACashShop::CameraTurnLeftRight_Gamepad(float Val) {
}

void ACashShop::CameraTurnLeft_Keyboard(bool bIsRotating) {
}

void ACashShop::CameraControl(bool bIsControlling) {
}

float ACashShop::CalculateAverageTimeTotal() {
    return 0.0f;
}

float ACashShop::CalculateAverageTimeThisRound() {
    return 0.0f;
}






void ACashShop::AttachHandleItemToPoint(FHitResult& HitTrace) {
}


void ACashShop::AddItemToGroup(TSubclassOf<AItem> ProductClass, int32 Amount, EProductCashShopState GroupToAddTo, bool bSuccessfulScan) {
}


