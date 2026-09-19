#include "SeanInteractionItem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=NopeAISystem -ObjectName=NPSmartObjectComponent -FallbackName=NPSmartObjectComponent

ASeanInteractionItem::ASeanInteractionItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultRoot"));
    this->DefaultRoot = (USceneComponent*)RootComponent;
    this->NPSmartObjectComponent = CreateDefaultSubobject<UNPSmartObjectComponent>(TEXT("NPSmartObjectComponent"));
    this->NPSmartObjectComponent->SetupAttachment(RootComponent);
}


