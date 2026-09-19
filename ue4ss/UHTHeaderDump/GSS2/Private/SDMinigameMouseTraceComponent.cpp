#include "SDMinigameMouseTraceComponent.h"

USDMinigameMouseTraceComponent::USDMinigameMouseTraceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bTraceOnlyOwnerComponents = true;
    this->TraceCollisionChannel = ECC_Visibility;
    this->TraceDistance = 1000;
    this->HoveredComponentCustomDepthStencil = 1;
    this->LastTracedComponent = NULL;
}

void USDMinigameMouseTraceComponent::SetHoverDepthStencil(int32 InStencilValue) {
}

void USDMinigameMouseTraceComponent::RemoveIgnoreComponent(UPrimitiveComponent* Component) {
}

void USDMinigameMouseTraceComponent::RemoveIgnoreActor(AActor* Actor) {
}

void USDMinigameMouseTraceComponent::OnComponentUnhovered_Implementation(UPrimitiveComponent* UnhoveredComp) {
}

void USDMinigameMouseTraceComponent::OnComponentHovered_Implementation(UPrimitiveComponent* HoveredComp) {
}

UPrimitiveComponent* USDMinigameMouseTraceComponent::GetLastTracedComponent() const {
    return NULL;
}

void USDMinigameMouseTraceComponent::AddIgnoreComponent(UPrimitiveComponent* Component) {
}

void USDMinigameMouseTraceComponent::AddIgnoreActor(AActor* Actor) {
}


