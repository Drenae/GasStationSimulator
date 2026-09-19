#include "IceCreamContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

AIceCreamContainer::AIceCreamContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SoundContainerIn = NULL;
    this->SoundContainerOut = NULL;
    this->IceCreamMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("IceCreamMesh"));
    this->NoIceCreamLeftMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("NoIceCreamMesh"));
    this->SpoonSkeletalComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Spoon"));
    this->ScoopComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ScoopMesh"));
    this->AmountLeft = 0;
    this->MaxMeshLoweringUnits = 4.00f;
    this->IceCreamInfoTexture = NULL;
    this->UpTargetPosition = 0.00f;
    this->AnimationStep = 0.00f;
    this->Flavour = EIceCreamFlavours::BLUEBERRY;
    this->TargetScoopingDistance = 0.00f;
    this->SpoonLerpStep = 0.00f;
    this->IceCreamMesh->SetupAttachment(RootComponent);
    this->NoIceCreamLeftMesh->SetupAttachment(RootComponent);
    this->ScoopComponent->SetupAttachment(SpoonSkeletalComponent);
    this->SpoonSkeletalComponent->SetupAttachment(RootComponent);
}



void AIceCreamContainer::SetOutline(bool bShouldBeOutlined) {
}


