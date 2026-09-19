#include "HandheldComputer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=WidgetInteractionComponent -FallbackName=WidgetInteractionComponent

AHandheldComputer::AHandheldComputer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InteractionWidget = CreateDefaultSubobject<UWidgetInteractionComponent>(TEXT("ComputerWidget"));
    this->InteractionWidget->SetupAttachment(RootComponent);
}


