#include "GSSLadder.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

AGSSLadder::AGSSLadder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LadderOverlap = CreateDefaultSubobject<UBoxComponent>(TEXT("LadderOverlap"));
    this->LadderOverlap->SetupAttachment(RootComponent);
}

void AGSSLadder::OnLadderOverlapped(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AGSSLadder::OnLadderOverlapEnded(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}


