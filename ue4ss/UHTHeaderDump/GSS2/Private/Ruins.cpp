#include "Ruins.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

ARuins::ARuins(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RuinMesh"));
    this->RuinMesh = (UStaticMeshComponent*)RootComponent;
    this->RuinsProjectileActorClass = NULL;
    this->Stage = 1;
}




void ARuins::SetStageLevel(int32 NewStage) {
}

int32 ARuins::GetStageLevel() {
    return 0;
}

bool ARuins::AddRemoveRuinLevel(int32 Levels, AGSSPlayerCharacter* PlayerCharacter) {
    return false;
}


