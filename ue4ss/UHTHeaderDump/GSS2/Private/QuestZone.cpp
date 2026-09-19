#include "QuestZone.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent

AQuestZone::AQuestZone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("QuestZoneBox"));
    this->bIsLevelQuestZone = true;
    this->QuestZoneShape = EQuestZoneShape::BOX;
    this->BoxComponent = (UBoxComponent*)RootComponent;
    this->CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("QuestZoneCapsule"));
    this->CapsuleComponent->SetupAttachment(RootComponent);
}

void AQuestZone::SetQuestZoneToSpawnedType(FName ID, float ZoneSize) {
}

void AQuestZone::OnQuestTriggerComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


