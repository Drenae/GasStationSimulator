#include "SeanDesk.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

ASeanDesk::ASeanDesk(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Desk = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Desk"));
    this->Chair = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Chair"));
    this->Glass = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Glass"));
    this->PhoneStand = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PhoneStand"));
    this->Phone = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Phone"));
    this->PaperSheet = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PaperSheet"));
    this->PaperStack = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PaperStack"));
    this->Chair->SetupAttachment(RootComponent);
    this->Desk->SetupAttachment(RootComponent);
    this->Glass->SetupAttachment(RootComponent);
    this->PaperSheet->SetupAttachment(RootComponent);
    this->PaperStack->SetupAttachment(RootComponent);
    this->Phone->SetupAttachment(RootComponent);
    this->PhoneStand->SetupAttachment(RootComponent);
}


