#include "MagicLeapHandMeshingComponent.h"

UMagicLeapHandMeshingComponent::UMagicLeapHandMeshingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UMagicLeapHandMeshingComponent::SetUseWeightedNormals(const bool bInUseWeightedNormals) {
}

bool UMagicLeapHandMeshingComponent::DisconnectMRMesh(UMRMeshComponent* InMRMeshPtr) {
    return false;
}

bool UMagicLeapHandMeshingComponent::ConnectMRMesh(UMRMeshComponent* InMRMeshPtr) {
    return false;
}


