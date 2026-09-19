#include "Hammer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

AHammer::AHammer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EditingType = EHammerEditType::DEFAULT;
    this->PlayerInputComponent = NULL;
    this->MeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComp"));
    this->CurrentlyEditedQueuePoint = NULL;
    this->CashShopBaseQueuePoint = NULL;
    this->EditedCashShop = NULL;
    this->EditedActor = NULL;
    this->EditedWall = NULL;
    this->PreviewWall = NULL;
    this->EditedFloor = NULL;
    this->PlayerCharacter = NULL;
    this->PickUpCashShop = NULL;
    this->PickUpTrashCan = NULL;
    this->PutDownObject = NULL;
    this->PlaceNewWall = NULL;
    this->StartEditingWall = NULL;
    this->OnHoverUIButton = NULL;
    this->UseHammerAnimation = NULL;
    this->InBlendOutTime = 0.10f;
    this->HammerInteractionCooldown = 0.50f;
    this->bCanBePlaced = false;
    this->bIsLoading = false;
    this->OriginalFloorMaterial = NULL;
    this->HammerWidgetInstance = NULL;
    this->HammerBuildingWidgetInstance = NULL;
    this->MeshComp->SetupAttachment(RootComponent);
}




void AHammer::StopInteractingWithPlaceableActor() {
}

void AHammer::StopEditCashRegisterQueue() {
}

void AHammer::StopAnimation_UseHammer() {
}

void AHammer::SpawnEmptyPreviewWall_LoadComplete() {
}

void AHammer::SetQueueToDefault() {
}

void AHammer::SetQueuePointPosition() {
}

void AHammer::SecondaryInteract(bool bIsPressed) {
}

bool AHammer::RemoveQueuePoint() {
    return false;
}

void AHammer::R_Action(bool bIsPressed) {
}

void AHammer::QuickSwapWall(ACustomizationHousePart* TargetWall) {
}

void AHammer::Q_Action(bool bIsPressed) {
}

void AHammer::PreviewNewWallRef_LoadComplete(FCustomizationPart CustomizationPart, bool bIsTwoSided) {
}

void AHammer::PreviewNewWall_LoadComplete(TSoftObjectPtr<UStaticMesh> StaticMeshSPtr, TSoftObjectPtr<UMaterialInstance> MaterialSPtr, EStructureType StructureType, bool bIsTwoSided) {
}

void AHammer::PreviewNewFloor_LoadComplete(TSoftObjectPtr<UMaterialInstance> MaterialSPtr) {
}

void AHammer::PlayAnimation_UseHammer() {
}

void AHammer::PlaceQueuePoint(bool bIsSettingQueueToDefault) {
}

void AHammer::On_Unhover_PreviewNewWall(const FCustomizationPart& CustomizationPart) {
}

void AHammer::On_Unhover_PreviewNewFloor() {
}

void AHammer::On_Hover_PreviewNewWall(const FCustomizationPart& CustomizationPart, bool bIsTwoSided) {
}

void AHammer::On_Hover_PreviewNewFloor(TSoftObjectPtr<UMaterialInstance> NewMaterialSPtr) {
}

void AHammer::LookForActorSecondaryInteract() {
}

void AHammer::LookForActorRInteract() {
}

void AHammer::LookForActorPrimaryInteract() {
}

void AHammer::LookForActorFInteract() {
}

void AHammer::LoadNextRoof() {
}

void AHammer::InteractWithWall(ACustomizationHousePart* TargetWall) {
}

void AHammer::InteractWithPlaceableActor(APlaceableActor* PlaceableActor) {
}

void AHammer::InteractWithFloor(AActor* FloorActor) {
}

void AHammer::Interact(bool bIsPressed) {
}

EStructureType AHammer::GetAvaliableStructureType() {
    return EStructureType::WALL;
}

TArray<FCustomizationPart> AHammer::GetAllElementsToDisplay(UCustomizationCategory* Category, EStructureType Type) {
    return TArray<FCustomizationPart>();
}

TArray<FCustomizationPart> AHammer::GetAllElementsFromCategory(UCustomizationCategory* Category) {
    return TArray<FCustomizationPart>();
}

TArray<FBiomCustomizationCategory> AHammer::GetAllCustomizationCategories() {
    return TArray<FBiomCustomizationCategory>();
}

AActor* AHammer::GetActorToInteract(bool bIsCheckingForFloor) {
    return NULL;
}

void AHammer::F_Action(bool bIsPressed) {
}

void AHammer::EscapeAction(bool bIsPressed) {
}

void AHammer::EditCashRegisterQueue(ACashShop* CashShop) {
}


void AHammer::E_EditCashDesk() {
}

void AHammer::E_Action(bool bIsPressed) {
}









void AHammer::DeleteAllQueuePoints() {
}

void AHammer::ConfirmSwapWalls_LoadComplete(FCustomizationPart CustomizationPart, TSoftClassPtr<ACustomizationHousePart> StructureClass, bool bIsTwoSided) {
}

void AHammer::ConfirmSwapWalls(const FCustomizationPart& CustomizationPart, bool bIsTwoSided) {
}

void AHammer::ConfirmFloorSwap(TSoftObjectPtr<UMaterialInstance> MaterialSPtr, int32 Price) {
}

void AHammer::CloseUI_WallInteraction() {
}

void AHammer::ChangeToPlayerViewTarget() {
}


