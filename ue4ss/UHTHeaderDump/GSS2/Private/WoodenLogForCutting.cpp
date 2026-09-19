#include "WoodenLogForCutting.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=ProceduralMeshComponent -ObjectName=ProceduralMeshComponent -FallbackName=ProceduralMeshComponent

AWoodenLogForCutting::AWoodenLogForCutting(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->WoodenLogMainMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WoodenLogMainMesh"));
    this->ProceduralMeshWoodenLog = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("ProceduralMeshWoodenLog"));
    this->ProceduralMeshToCutREF = NULL;
    this->OwnerREF = NULL;
    this->GameDifficulty = EGuestServiceDifficulty::EASY;
    this->WoodChoppingSettings = NULL;
    this->ProceduralMeshWoodenLog->SetupAttachment(RootComponent);
    this->WoodenLogMainMesh->SetupAttachment(RootComponent);
}


