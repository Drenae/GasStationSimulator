#include "AICharacterBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=WidgetComponent -FallbackName=WidgetComponent
#include "Templates/SubclassOf.h"

AAICharacterBase::AAICharacterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UpperBody_SMC = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("UpperBody_SMC"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->LowerBody_SMC = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("LowerBody_SMC"));
    this->UpperLeg_SMC = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("UpperLeg_SMC"));
    this->LowerLeg_SMC = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("LowerLeg_SMC"));
    this->UpperArm_SMC = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("UpperArm_SMC"));
    this->LowerArm_SMC = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("LowerArm_SMC"));
    this->Hair_SMC = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Hair_SMC"));
    this->Beard_SMC = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Beard_SMC"));
    this->Accessories_SMC = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Accessories_SMC"));
    this->Head_SMC = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Head_SMC"));
    this->ChristmasHatMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ChristmasHatMesh"));
    this->Sound = CreateDefaultSubobject<UAudioComponent>(TEXT("Sound"));
    this->AnimationWalkSpeedMultiplier = 0.80f;
    this->BaseWalkAnimationMovementSpeed = 170.00f;
    this->TargetActor = NULL;
    this->CurrentHealth = 10;
    this->Vehicle = NULL;
    this->CurrentActiveTask = NULL;
    this->Home = NULL;
    this->OldCharacterClass = NULL;
    this->bIsParkingSpotCustomer = false;
    this->bDrivingModeTickDisabled = false;
    this->bForceEnterVehicle = false;
    this->MovementType = EMovementType::Walking;
    this->GSSGameState = NULL;
    this->AnimationManager = NULL;
    this->bIsWalking = false;
    this->bIsTutorialCharacter = false;
    this->FuelAmount = 0.00f;
    this->PlayerDistance = 0.00f;
    this->DTEmplyeeStatByLevel = NULL;
    this->LeftCooldown = 0;
    this->PremiumCooldown = 1440;
    this->TotalWorkTime = 0;
    this->TotalBreakTime = 0;
    this->TotalMoneyEarnedForSelf = 0.00f;
    this->TotalMoneyEarnedForPlayer = 0.00f;
    this->CurrentMoneyEarned = 0.00f;
    this->TotalHappy = 0;
    this->TotalAngry = 0;
    this->CleaningMoneyModify = 1.00f;
    this->FuelingMoneyModify = 1.00f;
    this->CashMoneyModify = 1.00f;
    this->GarageMoneyModify = 1.00f;
    this->IceCreamVendingMoneyModify = 1.00f;
    this->CarWashMoneyModify = 1.00f;
    this->CinemaMoneyModify = 1.00f;
    this->bHasNewSkeletonAsset = false;
    this->TrashTimeCheck = 2.00f;
    this->TrashTimeToSpawn = 0.00f;
    this->TrashPreventTimeToSpawn = 20.00f;
    this->BehaviorTree = NULL;
    this->OwnerController = NULL;
    this->NotEnoughFuel = false;
    this->CanPlayHitReact = true;
    this->IsPartyBusPasanger_Helper = false;
    this->Test3DWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("Test3DWidget"));
    this->DialogueGraph = NULL;
    this->CinemaTicketState = eTicketState::UNDEFINED;
    this->CinemaPopcornCooldownTime = -1.00f;
    this->CinemaPathPointIndex = -1;
    this->CinemaTrashToDropCount = -1;
    this->PopcornNS = NULL;
    this->bIsCinemaCustomer = false;
    this->bIsRVCustomer = false;
    this->bCanBeDestroyedInGame = true;
    this->Accessories_SMC->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->Beard_SMC->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->ChristmasHatMesh->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->Hair_SMC->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->Head_SMC->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->LowerArm_SMC->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->LowerBody_SMC->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->LowerLeg_SMC->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->Sound->SetupAttachment(RootComponent);
    this->Test3DWidget->SetupAttachment(RootComponent);
    this->UpperArm_SMC->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->UpperBody_SMC->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->UpperLeg_SMC->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
}

void AAICharacterBase::UpdateSkillStats(const EEmployeeSkill EmployeeSkill, const FEmployeeSkill SEmployeeSkill) {
}

void AAICharacterBase::UpdatePopcornCooldownTime() {
}

bool AAICharacterBase::UpdateCharacterDirtyStatus(int32 DirtyCount) {
    return false;
}


void AAICharacterBase::StartPopcornCooldown(bool bAfterGameLoading) {
}

bool AAICharacterBase::SpawnTrashByCustomer(float DeltaTime) {
    return false;
}

bool AAICharacterBase::SpawnDirtyActorByCustomer(TSubclassOf<AInteractableDecal> DirtyDecalToSpawn) {
    return false;
}




void AAICharacterBase::SetMovementType(EMovementType NewMovementType) {
}

void AAICharacterBase::SetMovementGroundType(EMovementGroundType NewMovementGroundType) {
}

void AAICharacterBase::SetChristmasHat(bool bSet) {
}






void AAICharacterBase::OnFuelUpdated(float CurrentFuel) {
}


void AAICharacterBase::OnChristmasHatLoaded(TSoftObjectPtr<UStaticMesh> Hat) {
}

bool AAICharacterBase::IsWatchingInCinema() {
    return false;
}




bool AAICharacterBase::IsCustomerClass() {
    return false;
}

void AAICharacterBase::InteractionAICharacter(AActor* Actor) {
}




void AAICharacterBase::GoToHome_Implementation(FName Reason) {
}

float AAICharacterBase::GetWorkCostPerHour(TSubclassOf<UEmployeeTask> EmployeeTask) {
    return 0.0f;
}

AGSSWayPoint* AAICharacterBase::GetWayPoint() {
    return NULL;
}

FEmployeeSkill AAICharacterBase::GetSkillStats(const EEmployeeSkill EmployeeSkill) {
    return FEmployeeSkill{};
}

FEmployeeStatByLevelStruct AAICharacterBase::GetSkillParams(const EEmployeeSkill EmployeeSkill) {
    return FEmployeeStatByLevelStruct{};
}

TSubclassOf<UTaskBase> AAICharacterBase::GetNextTask() {
    return NULL;
}

void AAICharacterBase::GetMovementType(EMovementType& OutTransportMode) {
}

void AAICharacterBase::GetMovementGroundType(EMovementGroundType& OutMovementGroundType) {
}

float AAICharacterBase::GetMoneyModifyPerTaskSkill(EEmployeeSkill EmployeeSkill) {
    return 0.0f;
}

float AAICharacterBase::GetMoneyModifyPerSkill(TSubclassOf<UEmployeeTask> EmployeeTask) {
    return 0.0f;
}

float AAICharacterBase::GetMaxEnergy() {
    return 0.0f;
}

float AAICharacterBase::GetHourlyRate(EEmployeeSkill EmployeeSkill) {
    return 0.0f;
}

float AAICharacterBase::GetExperienceToLevelUp(const EEmployeeSkill EmployeeSkill) {
    return 0.0f;
}

float AAICharacterBase::GetEnergyPercent() {
    return 0.0f;
}

int32 AAICharacterBase::GetEnergy() {
    return 0;
}

UDialogueGraph* AAICharacterBase::GetDialogueGraph() const {
    return NULL;
}

UBehaviorTree* AAICharacterBase::GetDefaultBehaviourTree() {
    return NULL;
}

TSubclassOf<UTaskBase> AAICharacterBase::GetCurrentTask() {
    return NULL;
}

EEmployeeSkill AAICharacterBase::GetBestSkill() {
    return EEmployeeSkill::Cleaning;
}

EAIState AAICharacterBase::GetAICharacterState() {
    return EAIState::Wait;
}


void AAICharacterBase::FinishCurrentTask(ETaskResult TaskResult) {
}



void AAICharacterBase::ClearPopcornCooldownTimer() {
}

bool AAICharacterBase::CheckIsDirty() {
    return false;
}


ETaskResult AAICharacterBase::CalculateHappyAngry() {
    return ETaskResult::TaskSuccess;
}

void AAICharacterBase::AddMoney(float money) {
}

void AAICharacterBase::AddGSSTag(FName Tag) {
}

void AAICharacterBase::AddExperience(const EEmployeeSkill EmployeeSkill, float ExperienceVal) {
}

bool AAICharacterBase::AddEnergy(float Energy) {
    return false;
}


