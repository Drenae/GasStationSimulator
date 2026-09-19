#include "QuadTree.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

AQuadTree::AQuadTree(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->EditorTickIsEnabled = false;
}

void AQuadTree::SetEditorTickEnabled(bool bEnabled) {
}

void AQuadTree::Procedural(UHierarchicalInstancedStaticMeshComponent* HISMC, float GridSize, int32 GridTiles, float CellSize) {
}

void AQuadTree::EditorTick_Implementation(float DeltaSeconds) {
}


