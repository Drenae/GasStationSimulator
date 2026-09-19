#include "RenderTargetComponent.h"

URenderTargetComponent::URenderTargetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LowResCaptureComponent = NULL;
    this->TimeSinceLastCheck = 0.00f;
    this->DirtPerc = 0.00f;
    this->Dirt = 0.00f;
    this->StartingDirt = 0.00f;
    this->bFirstTimeCount = true;
    this->bPrepared = false;
    this->LowResPlane = NULL;
    this->DebugPlane = NULL;
    this->DebugTextRender = NULL;
    this->DynamicBrushMaterialInstance = NULL;
    this->DynamicDisplayMaterial = NULL;
    this->DynamicCalculationMaterial = NULL;
    this->DynamicDebugMaterial = NULL;
    this->MainMaterial = NULL;
    this->RenderTargetData = NULL;
    this->bUseDynamicRenderTarget = true;
    this->DynamicMaterialPropertyNameForHighResRenderTarget = TEXT("RT");
    this->HighResRenderTarget = NULL;
    this->HighResRenderTargetWidth = 1024;
    this->HighResRenderTargetHight = 1024;
    this->HighResFormat = RTF_RGBA16f;
    this->bHighResAutoGenerateMipMaps = false;
    this->LowResRenderTarget = NULL;
    this->LowResRenderTargetWidth = 128;
    this->LowResRenderTargetHight = 128;
    this->LowResFormat = RTF_RGBA16f;
    this->bLowResAutoGenerateMipMaps = true;
    this->bUseAdditionalFadingTrailRenderTarget = true;
    this->FadingTrailRenderTarget = NULL;
    this->FadingTrailRenderTargetWidth = 512;
    this->FadingTrailRenderTargetHight = 512;
    this->FadingTrailFormat = RTF_R16f;
    this->bFadingTrailAutoGenerateMipMaps = false;
    this->FadingTrailBrushMaterial = NULL;
    this->DynamicFadingTrailBrushMaterialInstance = NULL;
    this->LowResPlaneMesh = NULL;
    this->BrushMaterial = NULL;
    this->BrushSize = 0.00f;
    this->ProgressCheckInterval = 3.00f;
    this->ProgressCheckResolution = 20;
    this->DirtPercToReach = 0.60f;
    this->bAllowCalculation = false;
    this->MainMaterialIndex = 0;
    this->bCalculationDebug = false;
    this->bOutputLogCalculationDebug = false;
    this->bTextRenderDebug = false;
    this->DebugMaterial = NULL;
}

void URenderTargetComponent::SetMainMeshForInteraction(UStaticMeshComponent* MainMeshComp) {
}

void URenderTargetComponent::PrepareRenderTarget() {
}

void URenderTargetComponent::InitializeMaxProgress() {
}

UMaterialInstanceDynamic* URenderTargetComponent::GetDynamicDisplayMaterial() {
    return NULL;
}

UMaterialInstanceDynamic* URenderTargetComponent::GetDynamicCalculationMaterial() {
    return NULL;
}

UMaterialInstanceDynamic* URenderTargetComponent::GetDynamicBrushMaterial() {
    return NULL;
}

float URenderTargetComponent::GetCleaningProgressPerc() {
    return 0.0f;
}

void URenderTargetComponent::FullyPaintHighResRenderTarget(FLinearColor Color) {
}

void URenderTargetComponent::CalculateProgress() {
}

void URenderTargetComponent::ApplyBrush(FVector2D UV) {
}


