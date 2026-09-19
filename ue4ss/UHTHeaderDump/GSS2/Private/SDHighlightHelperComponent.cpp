#include "SDHighlightHelperComponent.h"

USDHighlightHelperComponent::USDHighlightHelperComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void USDHighlightHelperComponent::RemoveComponetToIgnore_Implementation(UMeshComponent* InIgnoredMesh) {
}

bool USDHighlightHelperComponent::IsComponentIgnored(UMeshComponent* InStaticMesh) const {
    return false;
}

TArray<UMeshComponent*> USDHighlightHelperComponent::GetIgnoredMeshComponents() const {
    return TArray<UMeshComponent*>();
}

void USDHighlightHelperComponent::AddComponetToIgnore_Implementation(UMeshComponent* InMeshToIgnore) {
}


