#include "JunkyardPlatform.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ChildActorComponent -FallbackName=ChildActorComponent

AJunkyardPlatform::AJunkyardPlatform(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->JunkyardMonitor = CreateDefaultSubobject<UChildActorComponent>(TEXT("JunkyardMonitor"));
    this->QuestMarkerLocation = CreateDefaultSubobject<UArrowComponent>(TEXT("NpcEnteringPosition"));
    this->JunkyardMonitor->SetupAttachment(RootComponent);
    this->QuestMarkerLocation->SetupAttachment(RootComponent);
}





