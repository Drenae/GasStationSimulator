#include "MinigolfCamera.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SpringArmComponent -FallbackName=SpringArmComponent
#include "ECharacterState.h"
#include "MinigolfBallComponent.h"

AMinigolfCamera::AMinigolfCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UMinigolfBallComponent>(TEXT("MinigolfBall"));
    this->MinigameState = ECharacterState::MINIGAME_MINIGOLF;
    this->ChargePower = 0.00f;
    this->MaxPower = 10000.00f;
    this->HitsSoFar = 0;
    this->bIsHolding = false;
    this->bCancelled = false;
    this->MinigolfBall = (UMinigolfBallComponent*)RootComponent;
    this->BallSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("BallSpringArm"));
    this->BallResetPoint = NULL;
    this->TargetHole = NULL;
    this->CourseWePlay = NULL;
    this->BehindVFXSpawner = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BehindVFXSpawner"));
    this->ImpactVFXSpawner = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ImpactVFXSpawner"));
    this->BehindVFX = NULL;
    this->ImpactVFX = NULL;
    this->BallHitSound = NULL;
    this->BallImpactSound = NULL;
    this->BallSpringArm->SetupAttachment(RootComponent);
}

void AMinigolfCamera::TurnCamera(float Val) {
}

void AMinigolfCamera::ShootBall() {
}

void AMinigolfCamera::ResetBall(bool bPressed) {
}

void AMinigolfCamera::OnBallHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) {
}

void AMinigolfCamera::HoleOverlapped(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


