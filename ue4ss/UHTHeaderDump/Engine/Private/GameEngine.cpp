#include "GameEngine.h"

UGameEngine::UGameEngine() {
    this->ShaderComplexityColors.AddDefaulted(9);
    this->QuadComplexityColors.AddDefaulted(11);
    this->LightComplexityColors.AddDefaulted(11);
    this->StationaryLightOverlapColors.AddDefaulted(9);
    this->LODColorationColors.AddDefaulted(8);
    this->HLODColorationColors.AddDefaulted(7);
    this->StreamingAccuracyColors.AddDefaulted(5);
    this->StatColorMappings.AddDefaulted(3);
    this->ActiveGameNameRedirects.AddDefaulted(8);
    this->ActiveClassRedirects.AddDefaulted(13);
    this->NetDriverDefinitions.AddDefaulted(1);
    this->MaxDeltaTime = 0.00f;
    this->ServerFlushLogInterval = 30.00f;
    this->GameInstance = NULL;
}


