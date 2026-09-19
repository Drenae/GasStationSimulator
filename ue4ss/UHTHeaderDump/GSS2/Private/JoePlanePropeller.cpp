#include "JoePlanePropeller.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=NopeAISystem -ObjectName=NPSmartObjectComponent -FallbackName=NPSmartObjectComponent

AJoePlanePropeller::AJoePlanePropeller(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    this->SkeletalMesh = (USkeletalMeshComponent*)RootComponent;
    this->SmartObject = CreateDefaultSubobject<UNPSmartObjectComponent>(TEXT("AISmartObject"));
    this->SmartObject->SetupAttachment(RootComponent);
}


