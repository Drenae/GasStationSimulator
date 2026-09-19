#include "WaterVehicle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "InventoryComponent.h"

AWaterVehicle::AWaterVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->bIsComingIn = false;
    this->OriginSpawner = NULL;
    this->ItemInventory = CreateDefaultSubobject<UInventoryComponent>(TEXT("ItemInventory"));
    this->DeliveryCategory = ECategoryFilter::None;
    this->WaterMovmentComponentClass = NULL;
    this->bCanStartFueling = false;
    this->bCreatedFuelNotification = false;
    this->bCreatedNotificationInBlueprint = false;
    this->bIsWaterCustomer = false;
    this->bIsJetSki = false;
    this->VolcanoAngerOnDeath = 10;
    this->bIsManualCharSetUp = false;
    this->bAutoConstruct = true;
    this->bAllPassengersLeft = false;
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->StaticMesh = (UStaticMeshComponent*)RootComponent;
    this->ObstacleDetectionCollision = CreateDefaultSubobject<USphereComponent>(TEXT("ObstacleDetectionCollision"));
    this->NPCPosition = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
    this->WaterMovementComponent = NULL;
    this->NPCInvis = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("NPCInvis"));
    this->NPCHead = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("NPCHead"));
    this->NPCUpperBody = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("NPCUpperBody"));
    this->NPCLowerBody = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("NPCLowerBody"));
    this->NPCLowerLegs = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("NPCLowerLegs"));
    this->NPCLowerArms = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("NPCLowerArms"));
    this->NPCHair = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("NPCHair"));
    this->NPCBeard = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("NPCBeard"));
    this->DriverNPC = NULL;
    this->HasFuelEnterComponent = false;
    this->SharkAttackArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("SharkAttack"));
    this->bCanTakeDamage = false;
    this->Health = 100.00f;
    this->DeathDespawnTime = 5.00f;
    this->bIsIndicator = false;
    this->GoalFuelStationActor = NULL;
    this->bSharkVictim = false;
    this->bIsDead = false;
    this->HitSound = NULL;
    this->DeathSound = NULL;
    this->bWaitingForSharkAppearing = false;
    this->FuelEnterComp = NULL;
    this->NPCBeard->SetupAttachment(NPCInvis);
    this->NPCHair->SetupAttachment(NPCInvis);
    this->NPCHead->SetupAttachment(NPCInvis);
    this->NPCInvis->SetupAttachment(SkeletalMesh);
    this->NPCLowerArms->SetupAttachment(NPCInvis);
    this->NPCLowerBody->SetupAttachment(NPCInvis);
    this->NPCLowerLegs->SetupAttachment(NPCInvis);
    this->NPCPosition->SetupAttachment(SkeletalMesh);
    this->NPCUpperBody->SetupAttachment(NPCInvis);
    this->ObstacleDetectionCollision->SetupAttachment(RootComponent);
    this->SharkAttackArrow->SetupAttachment(RootComponent);
    this->SkeletalMesh->SetupAttachment(RootComponent);
}




void AWaterVehicle::SetIsWaitingForSharkAppearing(bool NewValue) {
}

void AWaterVehicle::SetIsSharkVictim(bool NewValue) {
}

void AWaterVehicle::SetHealth(float NewValue) {
}

void AWaterVehicle::SetDriverNPC(ACharacter* NewDriverNPC) {
}

int32 AWaterVehicle::RandomWetSuitColorsSet() {
    return 0;
}

void AWaterVehicle::OnVolcanoEruption_Implementation() {
}

void AWaterVehicle::OnUfoReset_Implementation() {
}


void AWaterVehicle::OnStationClosed_Implementation() {
}

void AWaterVehicle::OnObstacleDetectionCollisionOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AWaterVehicle::OnObstacleDetectionCollisionOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AWaterVehicle::OnFinishMoving(const AActor* GoalTargetActor) {
}


void AWaterVehicle::OnDamageDealt(float Damage) {
}

void AWaterVehicle::OnBeginGoingHome() {
}

UWaterMovementComponent* AWaterVehicle::GetWaterMovementComponent() {
    return NULL;
}

UStaticMeshComponent* AWaterVehicle::GetStaticMesh() {
    return NULL;
}

USkeletalMeshComponent* AWaterVehicle::GetSkeletalMesh() {
    return NULL;
}

bool AWaterVehicle::GetIsWaitingForSharkAppearing() {
    return false;
}

bool AWaterVehicle::GetIsSharkVictim() {
    return false;
}

float AWaterVehicle::GetHealth() {
    return 0.0f;
}


ACharacter* AWaterVehicle::GetDriverNPC() {
    return NULL;
}



