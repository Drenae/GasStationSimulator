#include "RVGuestBook.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=WidgetInteractionComponent -FallbackName=WidgetInteractionComponent

ARVGuestBook::ARVGuestBook(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InteractionWidget = CreateDefaultSubobject<UWidgetInteractionComponent>(TEXT("RVGuestBookWidget"));
    this->InteractionWidget->SetupAttachment(RootComponent);
}


