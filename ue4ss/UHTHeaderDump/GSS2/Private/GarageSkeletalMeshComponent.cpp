#include "GarageSkeletalMeshComponent.h"

UGarageSkeletalMeshComponent::UGarageSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GarageMontage = NULL;
    this->GarageMontageInverse = NULL;
}


